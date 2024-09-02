Action()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

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

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=ololokzn@gmail.com", ENDITEM, 
		"Name=password", "Value=TalrIvsp#Uc7D", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

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

	web_add_cookie("boomq_auth="
		"eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc19ub3RpZmljYXRlZCI6ZmFsc2UsInVzZXJfaWQiOjE4NzYsInVzZXJfbmFtZSI6Im9sb2xva3puQGdtYWlsLmNvbSIsInNjb3BlIjpbInRydXN0IiwicmVhZCIsIndyaXRlIl0sInRlYW1fbWVtYmVyIjoie1wiaWRcIjoxOTU1LFwidGVhbUlkXCI6MTQsXCJ1c2VySWRcIjoxODc2LFwiZW1haWxcIjpcIm9sb2xva3puQGdtYWlsLmNvbVwiLFwidXNlckRpc3BsYXlOYW1lXCI6XCJUaW11clwiLFwicGVybWlzc2lvbkxpc3RcIjpbXCJSVU5cIixcIlZJRVdcIixcIkVESVRcIixcIkFETUlOXCIsXCJNQU5BR0VfVVNFUlNfSU5fT1JHXCJdLFwiaW52aXRhdGlvblN0YXR1c1wiOlwiQUNDRVBURURcIixcImludml0Z"
		"VVybFwiOm51bGwsXCJleHBpcmVkQXRcIjpudWxsLFwiY3JlYXRlQXRcIjpcIjIwMjQtMDgtMTlUMTM6MjU6MjguODA1WlwiLFwidXBkYXRlZEF0XCI6XCIyMDI0LTA4LTE5VDEzOjI1OjM2LjIyMlpcIn0iLCJ1c2VyX2xhbmd1YWdlIjoiUlUiLCJ0ZWFtX2lkIjoxNCwiZXhwIjoxNzI0OTYwODAzLCJhdXRob3JpdGllcyI6WyJST0xFX1VTRVIiXSwianRpIjoiMmRhMjZmOTYtMTM0NS00NWY5LWFjZWYtODQ0OTcwYmFjYWEwIiwiY2xpZW50X2lkIjoiY2xpZW50In0.DJQukCcaeotH2V5oXo7LKtr0l2JNuasAaY17TetHJ86yK-k4zvETQaU5pEx1Z2xf6jqDRhFqMZk-W_qqGUs9MOdaIEq1TNz1S7O3eEpcHEVRd-IbsVNTF4-alL5XoEVqST1d5_5U-gFJlF2ybjhs3Zm"
		"kqVLCrEcWGSBgni5BZRn63-JF9DY-UugecW0MDbn8BIj-Sdmy97PI7fd0IAbU9g6PiBZxQb52jN1SEX-C_xcCp-Z_wy8327RzVnhKS12ewQyc0HGMy_jrIUuHgGxhWx4VlaWbyVM1z4GdtTy9jhscJ4BhKtuJXBMARAvFORqBT9pLg9soMFHgK4BvZxJGHA; DOMAIN=dev-boomq.pflb.ru");

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TR01_login",LR_AUTO);

	lr_think_time(5);

	lr_start_transaction("UC04_TR02_trend_page");

	web_url("slaReportProfile", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TR02_trend_page",LR_AUTO);

	lr_start_transaction("UC04_TR03_click_new_report");

	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TR03_click_new_report",LR_AUTO);

	lr_think_time(11);

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

	lr_think_time(24);

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

	lr_end_transaction("UC04_TR04_fill_data",LR_AUTO);

	lr_think_time(31);

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

	lr_think_time(4);

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

	lr_end_transaction("UC04_TR05_fill_data_graph_table",LR_AUTO);

	lr_think_time(49);

	lr_start_transaction("UC04_TR06_change_name");

	lr_end_transaction("UC04_TR06_change_name",LR_AUTO);

	lr_start_transaction("UC04_TR07_save_trend");

	web_custom_request("slaReportProfile_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/new", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"name\":\"trend_report_29-08-2024-11-50-30\",\"projectId\":15070,\"chartProfileList\":[{\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"},{\"fromDate\":0,\"restrictionType\":\"THROUGHPUT\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}],\"orderInReport\":0}],\"tableProfileList\":[{\"tableId\":null,\"slaTypeList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"targetType\":\"TEST\""
		",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"},{\"fromDate\":0,\"restrictionType\":\"THROUGHPUT\",\"targetType\":\"TEST\",\"toDate\":180,\"type\":\"GENERAL_SLA_TYPE\"}],\"valueType\":\"VALUE\",\"orderInReport\":1}],\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}]}", 
		LAST);

	lr_end_transaction("UC04_TR07_save_trend",LR_AUTO);

	lr_start_transaction("UC04_TR08_back_to_trends_page");

	web_revert_auto_header("Origin");

	lr_think_time(18);

	web_url("slaReportProfile_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("UC04_TR08_back_to_trends_page",LR_AUTO);

	lr_think_time(21);

	lr_start_transaction("UC04_TR10_pick_created_trend");

	web_url("2884", 
		"URL=https://dev-boomq.pflb.ru/test-srv/slaReportProfile/2884", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/sla-report-profiles/2884", 
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
		"Body={\"id\":2884,\"name\":\"trend_report_29-08-2024-11-50-30\",\"projectId\":15070,\"projectName\":\"29082024_jmx_craeted_test_working\",\"baselineTestId\":null,\"testFilterExpressionList\":[{\"type\":\"TEST_ID_EXPRESSION\",\"testIdList\":[18504,18503]}],\"testLimit\":null,\"chartProfileList\":[{\"chartId\":\"57cacffa-eacd-490d-a276-b7509ddfac96\",\"slaTypeList\":[{\"type\":\"GENERAL_SLA_TYPE\",\"targetType\":\"TEST\",\"restrictionType\":\"AVERAGE\",\"fromDate\":0,\"toDate\":180},{\"type\":\""
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

	lr_end_transaction("UC04_TR10_pick_created_trend",LR_AUTO);

	return 0;
}