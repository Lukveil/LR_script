Action()
{
	
	// ===========================================
	// UC05_TR01_login   -> -> ->
	// ===========================================
	lr_start_transaction("UC05_TR01_login");

	
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
		"2024-08-29T15:09:40.399Z");

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
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={user_email}", ENDITEM, 
		"Name=password", "Value={user_password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);
	
	// apply token bearer
	web_add_auto_header("Authorization", "Bearer {authorization}");
	// apply cookie token
	web_add_cookie("{cookie_token}; DOMAIN=dev-boomq.pflb.ru");
	
	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("14", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/14", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	/*
	web_add_cookie("boomq_auth="
		"eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc19ub3RpZmljYXRlZCI6ZmFsc2UsInVzZXJfaWQiOjE4NzYsInVzZXJfbmFtZSI6Im9sb2xva3puQGdtYWlsLmNvbSIsInNjb3BlIjpbInRydXN0IiwicmVhZCIsIndyaXRlIl0sInRlYW1fbWVtYmVyIjoie1wiaWRcIjoxOTU1LFwidGVhbUlkXCI6MTQsXCJ1c2VySWRcIjoxODc2LFwiZW1haWxcIjpcIm9sb2xva3puQGdtYWlsLmNvbVwiLFwidXNlckRpc3BsYXlOYW1lXCI6XCJUaW11clwiLFwicGVybWlzc2lvbkxpc3RcIjpbXCJSVU5cIixcIlZJRVdcIixcIkVESVRcIixcIkFETUlOXCIsXCJNQU5BR0VfVVNFUlNfSU5fT1JHXCJdLFwiaW52aXRhdGlvblN0YXR1c1wiOlwiQUNDRVBURURcIixcImludml0Z"
		"VVybFwiOm51bGwsXCJleHBpcmVkQXRcIjpudWxsLFwiY3JlYXRlQXRcIjpcIjIwMjQtMDgtMTlUMTM6MjU6MjguODA1WlwiLFwidXBkYXRlZEF0XCI6XCIyMDI0LTA4LTE5VDEzOjI1OjM2LjIyMlpcIn0iLCJ1c2VyX2xhbmd1YWdlIjoiUlUiLCJ0ZWFtX2lkIjoxNCwiZXhwIjoxNzI0OTg3MzQ1LCJhdXRob3JpdGllcyI6WyJST0xFX1VTRVIiXSwianRpIjoiOTU4Y2Q3MGYtMGI5Mi00ZGQyLTlkNTAtMTQ0ZTg4ZjFiMTVkIiwiY2xpZW50X2lkIjoiY2xpZW50In0.Rft4DqXV2eXGtgv_mQ2JvuULVWvqG-7wYAPO-xvpFEE-xIA26IFbOEotR7oSUSJ9RBeJbHnzXlcNCaIFwZmX6o8pJtN203wgWIT5gAXH4ETr1-PY-X3x3If1OIrEqamJCNajhNzY4vGCT2nuinavsR3"
		"NxL-8-d8ar7Ri6TeY3ipF0klXmbJ6XlLDjfFbhCNoatHQSDcmVFuBPYhNQ-IjHW_dkJGZaYW2SWQCCRDvxQOA2qU07gNOHBzEqTVCdtVlvPioaEOV1OwsAqVlEmjA06abPuok3R0BaGuuguxU-qjuJdsOh5Yg2snaLYVsMAuNZs2BO0jzEPZKkJA87Qm92A; DOMAIN=dev-boomq.pflb.ru");
	*/
	
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
	
	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);
	
	// apply token bearer
	web_add_auto_header("Authorization", "Bearer {authorization}");
	// apply cookie token
	web_add_cookie("{cookie_token}; DOMAIN=dev-boomq.pflb.ru");

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	
	lr_think_time(1);
	lr_end_transaction("UC05_TR01_login",LR_AUTO);
	// ===========================================
	// UC05_TR01_login   END
	// ===========================================
	
	
	// ===========================================
	// UC05_TR02_reports_page   -> -> ->
	// ===========================================
	lr_start_transaction("UC05_TR02_reports_page");

	
	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("search", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pagination\":{\"pageNumber\":0,\"pageSize\":9},\"sort\":[{\"field\":\"CREATED_AT\",\"direction\":\"DESC\"}]}", 
		LAST);

	lr_think_time(1);
	lr_end_transaction("UC05_TR02_reports_page",LR_AUTO);
	// ===========================================
	// UC05_TR02_reports_page   END
	// ===========================================
	
	
	// ===========================================
	// UC05_TR03_new_report   -> -> ->
	// ===========================================
	lr_start_transaction("UC05_TR03_new_report");
	

	web_url("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=FINISHED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(1);
	lr_end_transaction("UC05_TR03_new_report",LR_AUTO);
	// ===========================================
	// UC05_TR03_new_report   END
	// ===========================================
	
	
	// ===========================================
	// UC05_TR04_change_name   -> -> ->
	// ===========================================
	lr_start_transaction("UC05_TR04_change_name");

	
	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("previewChart", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/previewChart", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"id\":\"92733b29-6450-4868-b248-0333ff9ecfc5\",\"name\":\"report-chart-92733b29-6450-4868-b248-0333ff9ecfc5-serie-99185aa8-c14d-4615-a326-8366c21532b3\",\"series\":[{\"aggregationInterval\":10,\"aggregationIntervalTimeUnit\":\"SECOND\",\"id\":\"99185aa8-c14d-4615-a326-8366c21532b3\",\"datasets\":[{\"points\":[]}],\"displayProps\":{\"axisUnit\":\"VUSER\",\"color\":\"#1d1d1d\",\"unit\":\"VUSER\"},\"testId\":18526,\"type\":\"VUSERS\",\"vuserType\":\"ACTUAL\"}],\"testFilters\":[{\"testId\""
		":18526}]}", 
		LAST);

	/*
	web_custom_request("previewTable", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/previewTable", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"id\":\"e5db02bd-db53-4224-8cd5-cc28bf6743ce\",\"type\":\"REQUEST_SLA_TABLE\",\"name\":\"SLA \\xD0\\xBD\\xD0\\xB0 \\xD0\\xB7\\xD0\\xB0\\xD0\\xBF\\xD1\\x80\\xD0\\xBE\\xD1\\x81, \\xD0\\x98\\xD0\\xB4\\xD0\\xB5\\xD0\\xBD\\xD1\\x82\\xD0\\xB8\\xD1\\x84\\xD0\\xB8\\xD0\\xBA\\xD0\\xB0\\xD1\\x82\\xD0\\xBE\\xD1\\x80 \\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82\\xD0\\xB0: 18526\",\"testFilters\":[{\"testId\":18526}],\"columns\":[{\"id\":\"e8429800-332c-49fb-a3c8-61f2e441aa96\",\""
		"displaySlaRestrictionType\":true,\"type\":\"SLA_DATA\",\"name\":\"SLA type\"},{\"id\":\"e0d0d908-539d-440e-971d-979e92b1729a\",\"displayRequestName\":true,\"type\":\"REQUEST_DATA\",\"name\":\"Request\"},{\"id\":\"b97957bf-02af-4538-b96b-d66b3c266dda\",\"displayThreadGroupName\":true,\"type\":\"REQUEST_DATA\",\"name\":\"Group\"},{\"id\":\"e1976bd0-0f1d-4625-942e-65b3a7d79b64\",\"displayTimePeriod\":true,\"type\":\"SLA_DATA\",\"name\":\"Time period\"},{\"id\":\"9bb23b72-346d-422d-9215-362996d91a2f\""
		",\"displayOperation\":true,\"type\":\"SLA_DATA\",\"name\":\"Condition\"},{\"id\":\"a2eaa0c6-4a1e-425f-b952-0e6d1928c4df\",\"displayValue\":true,\"type\":\"SLA_DATA\",\"name\":\"Value\"},{\"id\":\"f3d1a6e7-493b-41bf-ae43-c8414cfb0484\",\"testId\":18526,\"type\":\"SLA_RESULT\",\"name\":\"Result\"},{\"id\":\"21cfc18f-ebae-4e0a-8928-420f6e0b3e78\",\"diffTargetType\":\"SLA_VALUE\",\"diffValueType\":\"ABSOLUTE\",\"testId\":18526,\"type\":\"SLA_DIFF\",\"name\":\"Delta\"},{\"id\":\""
		"003297e9-dbfe-49c0-adba-bc28b71f8888\",\"diffTargetType\":\"SLA_VALUE\",\"diffValueType\":\"RELATIVE\",\"testId\":18526,\"type\":\"SLA_DIFF\",\"name\":\"Delta, %\"}]}", 
		LAST);

	web_custom_request("previewTable_2", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/previewTable", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"BodyBinary={\"id\":\"e5db02bd-db53-4224-8cd5-cc28bf6743ce\",\"type\":\"TEST_SLA_TABLE\",\"name\":\"SLA \\xD0\\xBD\\xD0\\xB0 \\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82, \\xD0\\x98\\xD0\\xB4\\xD0\\xB5\\xD0\\xBD\\xD1\\x82\\xD0\\xB8\\xD1\\x84\\xD0\\xB8\\xD0\\xBA\\xD0\\xB0\\xD1\\x82\\xD0\\xBE\\xD1\\x80 \\xD1\\x82\\xD0\\xB5\\xD1\\x81\\xD1\\x82\\xD0\\xB0: 18526\",\"testFilters\":[{\"testId\":18526}],\"columns\":[{\"id\":\"d6834a37-c7a1-4eec-8272-526c3a751d81\",\"displaySlaRestrictionType\":true,\"type\":\""
		"SLA_DATA\",\"name\":\"SLA type\"},{\"id\":\"d7479f1b-1ab8-4a83-9f7a-b85f38155b5c\",\"displayTimePeriod\":true,\"type\":\"SLA_DATA\",\"name\":\"Time period\"},{\"id\":\"00f65779-12c0-4de8-8636-32f81b61d937\",\"displayOperation\":true,\"type\":\"SLA_DATA\",\"name\":\"Condition\"},{\"id\":\"b52e448a-2123-45b2-b707-e4f416fe7c01\",\"displayValue\":true,\"type\":\"SLA_DATA\",\"name\":\"Value\"},{\"id\":\"bf341b96-7b2a-4984-b166-3ed5fa969039\",\"testId\":18526,\"type\":\"SLA_RESULT\",\"name\":\"Result\"}"
		",{\"id\":\"e4a17a4b-6b70-4011-8358-6396832a6b80\",\"diffTargetType\":\"SLA_VALUE\",\"diffValueType\":\"ABSOLUTE\",\"testId\":18526,\"type\":\"SLA_DIFF\",\"name\":\"Delta\"},{\"id\":\"6cc977c9-dc8e-4feb-9383-0cdba89c15e7\",\"diffTargetType\":\"SLA_VALUE\",\"diffValueType\":\"RELATIVE\",\"testId\":18526,\"type\":\"SLA_DIFF\",\"name\":\"Delta, %\"}]}", 
		LAST);
	*/
	
	lr_think_time(1);
	lr_end_transaction("UC05_TR04_change_name",LR_AUTO);
	// ===========================================
	// UC05_TR04_change_name   END
	// ===========================================
	
	
	// ===========================================
	// UC05_TR05_click_save   -> -> ->
	// ===========================================
	lr_start_transaction("UC05_TR05_click_save");
	
	
	web_reg_save_param_json(
		"ParamName=report_id_list",
		"QueryString=$..id",
		"SelectAll=Yes",
		SEARCH_FILTERS,
		LAST);	
	
	lr_save_datetime("%c",DATE_NOW,"Date");
	
	web_custom_request("report", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/new", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		body_variable_1, 
		LAST);
	
	lr_save_string(lr_paramarr_random("report_id_list"), "report_id");

	web_revert_auto_header("Origin");

	web_url("11198", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/{report_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/{report_id}", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("content", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/{report_id}/content", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/{report_id}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=FINISHED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/{report_id}", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(1);
	lr_end_transaction("UC05_TR05_click_save",LR_AUTO);
	// ===========================================
	// UC05_TR05_click_save   END
	// ===========================================
	
	
	// ===========================================
	// UC05_TR06_get_back   -> -> ->
	// ===========================================
	lr_start_transaction("UC05_TR06_get_back");
	

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("search_2", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/search", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"pagination\":{\"pageNumber\":0,\"pageSize\":9},\"sort\":[{\"field\":\"CREATED_AT\",\"direction\":\"DESC\"}]}", 
		LAST);
	
	
	lr_think_time(1);
	lr_end_transaction("UC05_TR06_get_back",LR_AUTO);
	// ===========================================
	// UC05_TR06_get_back   END
	// ===========================================

	
	// ===========================================
	// UC05_TR07_pick_created   -> -> ->
	// ===========================================
	lr_start_transaction("UC05_TR07_pick_created");
	

	web_url("11198_2", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/{report_id}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/11198", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("content_2", 
		"URL=https://dev-boomq.pflb.ru/report-srv/report/{report_id}/content", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/11198", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_url("test_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=FINISHED", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/reports/11198", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(1);
	lr_end_transaction("UC05_TR07_pick_created",LR_AUTO);
	// ===========================================
	// UC05_TR07_pick_created   END
	// ===========================================

	return 0;
}