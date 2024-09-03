Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Priority", 
		"u=0, i");

	web_revert_auto_header("Priority");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("authorize", 
		"URL=https://dev-boomq.pflb.ru/authorize", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", ENDITEM, 
		"Url=/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", ENDITEM, 
		"Url=/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	lr_start_transaction("UC031_TR01_sign_in");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_header("Priority", 
		"u=0");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	//lr_think_time(9);

//	web_url("ip", 
//		"URL=https://worldtimeapi.org/api/ip", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://dev-boomq.pflb.ru/", 
//		"Snapshot=t2.inf", 
//		"Mode=HTML", 
//		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-30T13:54:19.061Z");

	web_set_max_html_param_len("4096");
	
	web_reg_save_param("auth",
		"LB=Authorization: ",

	"RB=\n",
		LAST);
	
	web_reg_save_param("cookie",
		"LB=Set-Cookie: boomq_auth=",
		"RB=;",
		LAST);

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=taoerxsowso@gmail.com", ENDITEM, 
		"Name=password", "Value=1Ddeckdee!", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	//web_add_auto_header("Authorization", " Bearer {auth}");

	
	
	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);


	web_add_header("Authorization", " Bearer {auth}");
	
	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);


	web_add_header("Authorization", " Bearer {auth}");
	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);


	web_add_header("Authorization", " Bearer {auth}");
	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	
	web_reg_save_param("auth_2",
		"LB=Authorization: ",
		"RB=\n",
		LAST);
	
	web_reg_save_param("cookie_2",
		"LB=Set-Cookie: boomq_auth=",
		"RB=;",
		LAST);


	web_add_header("Authorization", " Bearer {auth}");
	
	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Authorization", " Bearer {auth}");
	
	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(2);
	lr_end_transaction("UC031_TR01_sign_in",LR_AUTO);

	lr_start_transaction("UC031_TR02_choose_test_runs");

	web_add_header("Priority", 
		"u=0");
	/// new auth auth_2
	///  
	web_add_header("Authorization", " Bearer {auth_2}");
	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Authorization", " Bearer {auth_2}");
	web_url("label", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Authorization", " Bearer {auth_2}");
	web_url("user_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Authorization", " Bearer {auth_2}");
	web_url("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=INITIALIZATION,WAITING,RUNNING,TEST_STOPPING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Authorization", " Bearer {auth_2}");

	web_reg_save_param_json(
		"ParamName=testprojectid",
		"QueryString=$.content[0].testProjectId",
		SEARCH_FILTERS,
		LAST);
	
	web_reg_save_param_json(
		"ParamName=id",
		"QueryString=$.content[0].id",
		SEARCH_FILTERS,
		LAST);

	
	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&page=0&size=7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../static/media/message.09d91ef8f7769e72000af31b00da82e2.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", ENDITEM, 
		"Url=../static/media/load.287cb7234e668cd66173833db04886bf.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", ENDITEM, 
		"Url=../static/media/time.0a39ea6cf097a189ea08f0e8e59fe026.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", ENDITEM, 
		LAST);
	
	lr_think_time(2);
	lr_end_transaction("UC031_TR02_choose_test_runs",LR_AUTO);

	lr_start_transaction("UC031_TR03_choose_test_runs");

	web_add_auto_header("Priority", "u=0");


	web_add_header("Authorization", " Bearer {auth_2}");
	web_url("25413", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{testprojectid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);


	web_add_header("Authorization", " Bearer {auth_2}");
	web_url("{id}", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");


	web_add_header("Authorization", " Bearer {auth_2}");
	
	web_url("testMetric", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={id}&testStartDate=2024-08-30T13:50:49.608Z&testEndDate=2024-08-30T14:50:49.608Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);


	web_add_header("Authorization", " Bearer {auth_2}");

	web_reg_save_param("uuid_grafana",
		"LB=grafana\/d\/",
		"RB=\/common-dashboard",
		LAST);

	
//	web_reg_save_param_json(
//		"ParamName=testprojectid",
//		"QueryString=$.redirectUrl",
//		SEARCH_FILTERS,
//		LAST);
	web_reg_save_param("expiry",
		"LB=grafana_session_expiry\=",
	    "RB=;",
		LAST);
	
	web_reg_save_param("grafana_session",
		"LB=grafana_session\=",
	    "RB=;",
		LAST);
	web_url("auth",
		"URL=https://dev-boomq.pflb.ru/grafana-srv/auth?testId={id}&testStartTime=2024-08-30T13:50:49.608Z&testEndTime=2024-08-30T14:50:49.608Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(2);
	lr_end_transaction("UC031_TR03_choose_test_runs",LR_AUTO);

	lr_start_transaction("UC031_TR04_choose_details");

	web_add_cookie("grafana_session_expiry={expiry}; DOMAIN=dev-boomq.pflb.ru");

	web_add_cookie("grafana_session={grafana_session}; DOMAIN=dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Priority", 
		"u=0, i");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	//lr_think_time(20);

	 web_reg_save_param("datasource-uid",
		"LB=\"uid\":\"",
	    "RB=\"\,",
		LAST);
	
	web_url("common-dashboard-tdb-14", 
		"URL=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");


	web_add_header("Authorization", " Bearer {auth_2}");
	
	web_url("{id}_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/{id}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", "Referer=https://dev-boomq.pflb.ru/grafana/d{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=/grafana/public/build/runtime.592ab1f875d183fcac07.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=/grafana/public/build/1537.caf8c5d1430033307ef5.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=/grafana/public/build/147.73fef960675c84aa9a84.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		LAST);


	web_add_header("Authorization", " Bearer {auth_2}");
	web_url("testMetric_2",
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId={id}&testStartDate=2024-08-30T13:50:49.608Z&testEndDate=2024-08-30T14:50:49.608Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/{testprojectid}/{id}", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../grafana/public/build/1486.9f5c58b5413b0650af69.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/img/grafana_icon.svg", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/fonts/inter/UcC73FwrK3iLTeHuS_fvQtMwCp50KnMa1ZL7.woff2", "Referer=https://dev-boomq.pflb.ru/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", ENDITEM, 
		"Url=../grafana/public/build/app.5134ec4fafe46667d3cf.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/226.e8901bdbabf874bc7825.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/7424.afad9d5bcb701f31d890.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/img/fav32.png", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/img/apple-touch-icon.png", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/8695.c23c9961ab344f38b174.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/1189.846540cbca3eb55c18a1.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/3633.acef4a1394f4c10cf087.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/AngularApp.cd93fabea0d7a3dbc811.js", "Referer=https://dev-boomq.pflb.ru/grafana/d{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/9427.1e65164569048326187c.js", "Referer=https://dev-boomq.pflb.ru/grafana/d{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/7307.bfc948b550f554e75772.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/53.59d9e34c172df910b888.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/3258.e6e94bbe4d45fc9db086.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/1863.dad1afc1743ccbc4ec18.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/9734.6ba2e09bcb9d7c025793.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/3069.c3a514d280a9f89eecde.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/build/3312.48d5fac3b02144f52e9a.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		"Url=../grafana/public/fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=https://dev-boomq.pflb.ru/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", ENDITEM, 
		"Url=../grafana/public/build/DashboardPage.47d249f8c940b079c4b5.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", ENDITEM, 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("x-grafana-org-id", 
		"15");

	web_url("{uuid_grafana}", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/dashboards/uid/{uuid_grafana}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/grafana/public/build/postgresPlugin.5dbf50fe15160919cf74.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}&orgId=15", ENDITEM, 
		"Url=/grafana/public/build/5216.565cbd1aa042f890edf2.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/{uuid_grafana}/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId={id}&orgId=15", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("x-datasource-uid", 
		"{datasource_uid}");

	web_add_auto_header("x-plugin-id", 
		"postgres");
	
	lr_think_time(4);
	lr_end_transaction("UC031_TR04_choose_details",LR_AUTO);
	return 0;
}