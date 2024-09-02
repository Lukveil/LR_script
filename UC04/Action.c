Action()
{

	// ===========================================
	// UC04_TR01_login   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR01_login");

	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-29T07:47:23.189Z");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Google Chrome\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");
	
	// extract authorization token
	web_set_max_html_param_len("4096");
	web_reg_save_param("authorization",
        "LB=Authorization: ",
        "RB=\n",
        LAST);
	
	// extract cookie token
	web_set_max_html_param_len("4096");
	web_reg_save_param("cookie_token",
        "LB=Set-Cookie: ",
        "RB=\n",
        LAST);

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={user_email}", ENDITEM, 
		"Name=password", "Value={user_password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);
	/*
	web_set_user("ololokzn@gmail.com",
		lr_decrypt("66cebd02224e251373c90d364358d750dc"),
		"dev-boomq.pflb.ru:443");
	*/
	web_revert_auto_header("Origin");
	
	// apply token bearer
	web_add_auto_header("Authorization", "Bearer {authorization}");
	// apply cookie token
	web_add_cookie("{cookie_token}; DOMAIN=dev-boomq.pflb.ru");
		

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	
	
	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("14", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/14", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	// extract authorization token
	web_set_max_html_param_len("4096");
	web_reg_save_param("Authorization",
        "LB=Authorization: ",
        "RB=\n",
        LAST);
	
	// extract cookie token
	web_set_max_html_param_len("4096");
	web_reg_save_param("cookie_token",
        "LB=Set-Cookie: ",
        "RB=\n",
        LAST);
		
	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	web_set_user("ololokzn@gmail.com",
		lr_decrypt("66cebd02224e251373c90d364358d750dc"),
		"dev-boomq.pflb.ru:443");
	
	web_revert_auto_header("Origin");
	
	// apply token bearer
	web_add_auto_header("Authorization", "Bearer {Authorization}");
	// apply cookie token
	web_add_cookie("{cookie_token}; DOMAIN=dev-boomq.pflb.ru");

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_think_time(1);
	lr_end_transaction("UC04_TR01_login",LR_AUTO);
	// ===========================================
	// UC04_TR01_login - END
	// ===========================================

	
	// ===========================================
	// UC04_TR02_trend_page   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR02_trend_page");
	
	
	web_url("slaReportProfile", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_think_time(1);
	lr_end_transaction("UC04_TR02_trend_page",LR_AUTO);
	// ===========================================
	// UC04_TR02_trend_page - END
	// ===========================================
	
	
	// ===========================================
	// UC04_TR03_click_new_report   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR03_click_new_report");

	
	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_think_time(1);
	lr_end_transaction("UC04_TR03_click_new_report",LR_AUTO);
	// ===========================================
	// UC04_TR03_click_new_report - END
	// ===========================================

	
	// ===========================================
	// UC04_TR04_fill_data   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR04_fill_data");
	
	
	web_url("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&size=999999&projectId=15070&state=FINISHED,FAILED,CANCELED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	//lr_think_time(24);

	web_custom_request("slaTypeList", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/slaTypeList", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15070,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);
	
	web_custom_request("previewReport", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15070,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}],\"chartProfileList\":[],\"tableProfileList\":[]}", 
		LAST);
	
	lr_think_time(1);
	lr_end_transaction("UC04_TR04_fill_data",LR_AUTO);
	// ===========================================
	// UC04_TR04_fill_data - END
	// ===========================================
	
	
	// ===========================================
	// UC04_TR05_fill_data_graph_table   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR05_fill_data_graph_table");

	
	web_custom_request("previewReport_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15070,\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}]}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);

	web_custom_request("previewReport_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15070,\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"},{\"fromDate\":0,\"restrictionType\":\"THROUGHPUT\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}]}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);

	lr_think_time(1);

	web_custom_request("previewReport_4", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15070,\"chartProfileList\":[],\"tableProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\"}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);

	web_custom_request("previewReport_5", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15070,\"chartProfileList\":[],\"tableProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"},{\"fromDate\":0,\"restrictionType\":\"THROUGHPUT\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\"}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);
	

	lr_think_time(1);
	lr_end_transaction("UC04_TR05_fill_data_graph_table",LR_AUTO);
	// ===========================================
	// UC04_TR05_fill_data_graph_table - END
	// ===========================================
	
	
	// ===========================================
	// UC04_TR06_change_name   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR06_change_name");

	
	lr_end_transaction("UC04_TR06_change_name",LR_AUTO);
	// ===========================================
	// UC04_TR06_change_name - END
	// ===========================================
	
	
	// ===========================================
	// UC04_TR07_save_trend   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR07_save_trend");
	
	
	lr_save_datetime("%c",DATE_NOW,"Date");
	
	web_reg_save_param_json(
		"ParamName=trend_id_list",
		"QueryString=$..id",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);
		
	web_custom_request("slaReportProfile_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"{Date}_trend_report\",\"projectId\":15070,\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"},{\"fromDate\":0,\"restrictionType\":\"THROUGHPUT\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":null,\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\""
		",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"},{\"fromDate\":0,\"restrictionType\":\"THROUGHPUT\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\",\"orderInReport\":1}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);
	
	lr_save_string(lr_paramarr_random("trend_id_list"), "trend_id");

	lr_think_time(1);
	lr_end_transaction("UC04_TR07_save_trend",LR_AUTO);
	// ===========================================
	// UC04_TR07_save_trend - END
	// ===========================================

	
	// ===========================================
	// UC04_TR08_back_to_trends_page   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR08_back_to_trends_page");

	
	web_revert_auto_header("Origin");

	//lr_think_time(18);

	web_url("slaReportProfile_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_think_time(1);
	lr_end_transaction("UC04_TR08_back_to_trends_page",LR_AUTO);
	// ===========================================
	// UC04_TR08_back_to_trends_page - END
	// ===========================================

	
	
	// ===========================================
	// UC04_TR09_pick_created_trend   -> -> ->
	// ===========================================
	lr_start_transaction("UC04_TR09_pick_created_trend");

	
	web_url("2884", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/{trend_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/{trend_id}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("previewReport_6", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/2884", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":{trend_id},\"name\":\"trend_report_29-08-2024-11-50-30\",\"projectId\":15070,\"projectName\":\"29082024_jmx_craeted_test_working\",\"baselineTestId\":null,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}],\"testLimit\":null,\"chartProfileList\":[{\"chartId\":\"57cacffa-eacd-490d-a276-b7509ddfac96\",\"slaTypeList\":[{\"type\":\"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"AVERAGE\",\"fromDate\":0,\"toDate\":180},{\"type\":\""
		"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"THROUGHPUT\",\"fromDate\":0,\"toDate\":180}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":\"9cd611c9-6853-4159-81c0-4de5c1f60290\",\"slaTypeList\":[{\"type\":\"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"AVERAGE\",\"fromDate\":0,\"toDate\":180},{\"type\":\"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"THROUGHPUT\",\"fromDate\":0,\"toDate\":180}],\"valueType\":\"VALUE\",\""
		"baselineDiffType\":null,\"baselineTestId\":null,\"previousTestDiffType\":null,\"orderInReport\":1}]}", 
		LAST);

	web_custom_request("slaTypeList_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/slaTypeList", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/2884", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"projectId\":15070,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("project_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/2884", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("previewReport_7", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/previewReport", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/2884", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":2884,\"name\":\"trend_report_29-08-2024-11-50-30\",\"projectId\":15070,\"projectName\":\"29082024_jmx_craeted_test_working\",\"baselineTestId\":null,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}],\"testLimit\":null,\"chartProfileList\":[{\"chartId\":\"57cacffa-eacd-490d-a276-b7509ddfac96\",\"slaTypeList\":[{\"type\":\"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"AVERAGE\",\"fromDate\":0,\"toDate\":180},{\"type\":\""
		"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"THROUGHPUT\",\"fromDate\":0,\"toDate\":180}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":\"9cd611c9-6853-4159-81c0-4de5c1f60290\",\"slaTypeList\":[{\"type\":\"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"AVERAGE\",\"fromDate\":0,\"toDate\":180},{\"type\":\"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"THROUGHPUT\",\"fromDate\":0,\"toDate\":180}],\"valueType\":\"VALUE\",\""
		"baselineDiffType\":null,\"baselineTestId\":null,\"previousTestDiffType\":null,\"orderInReport\":1}]}", 
		LAST);

	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&size=999999&projectId=15070&state=FINISHED,FAILED,CANCELED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/2884", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_think_time(1);
	lr_end_transaction("UC04_TR09_pick_created_trend",LR_AUTO);
	// ===========================================
	// UC04_TR09_pick_created_trend - END
	// ===========================================
	
	return 0;
}