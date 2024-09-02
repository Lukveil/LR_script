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

	lr_start_transaction("sign_in");

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

	lr_think_time(9);

	web_url("ip", 
		"URL=https://worldtimeapi.org/api/ip", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-30T13:54:19.061Z");

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

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_in",LR_AUTO);

	lr_start_transaction("choose_test_runs");

	web_add_header("Priority", 
		"u=0");

	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("label", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_url("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=INITIALIZATION,WAITING,RUNNING,TEST_STOPPING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
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
		"Url=../static/media/message.09d91ef8f7769e72000af31b00da82e2.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", ENDITEM, 
		"Url=../static/media/load.287cb7234e668cd66173833db04886bf.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", ENDITEM, 
		"Url=../static/media/time.0a39ea6cf097a189ea08f0e8e59fe026.svg", "Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", ENDITEM, 
		LAST);

	lr_end_transaction("choose_test_runs",LR_AUTO);

	lr_start_transaction("choose_test");

	web_add_auto_header("Priority", 
		"u=0");

	web_url("25413", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25413", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("18860", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/18860", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("testMetric", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId=18860&testStartDate=2024-08-30T13:50:49.608Z&testEndDate=2024-08-30T14:50:49.608Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("auth", 
		"URL=https://dev-boomq.pflb.ru/grafana-srv/auth?testId=18860&testStartTime=2024-08-30T13:50:49.608Z&testEndTime=2024-08-30T14:50:49.608Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("choose_test",LR_AUTO);

	lr_start_transaction("choose_details");

	web_add_cookie("grafana_session_expiry=1725026692; DOMAIN=dev-boomq.pflb.ru");

	web_add_cookie("grafana_session=cbd2f52fda81154795ae30c0ceeffe5c; DOMAIN=dev-boomq.pflb.ru");

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

	lr_think_time(20);

	web_url("common-dashboard-tdb-14", 
		"URL=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", 
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

	web_url("18860_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/18860", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=/grafana/public/build/runtime.592ab1f875d183fcac07.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=/grafana/public/build/1537.caf8c5d1430033307ef5.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=/grafana/public/build/147.73fef960675c84aa9a84.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		LAST);

	web_url("testMetric_2", 
		"URL=https://dev-boomq.pflb.ru/timescale-srv/testMetric?testId=18860&testStartDate=2024-08-30T13:50:49.608Z&testEndDate=2024-08-30T14:50:49.608Z", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs/25413/18860", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../grafana/public/build/1486.9f5c58b5413b0650af69.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/img/grafana_icon.svg", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/fonts/inter/UcC73FwrK3iLTeHuS_fvQtMwCp50KnMa1ZL7.woff2", "Referer=https://dev-boomq.pflb.ru/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", ENDITEM, 
		"Url=../grafana/public/build/app.5134ec4fafe46667d3cf.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/226.e8901bdbabf874bc7825.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/7424.afad9d5bcb701f31d890.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/img/fav32.png", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/img/apple-touch-icon.png", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/8695.c23c9961ab344f38b174.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/1189.846540cbca3eb55c18a1.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/3633.acef4a1394f4c10cf087.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/AngularApp.cd93fabea0d7a3dbc811.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/9427.1e65164569048326187c.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/7307.bfc948b550f554e75772.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/53.59d9e34c172df910b888.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/3258.e6e94bbe4d45fc9db086.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/1863.dad1afc1743ccbc4ec18.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/9734.6ba2e09bcb9d7c025793.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/3069.c3a514d280a9f89eecde.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/build/3312.48d5fac3b02144f52e9a.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		"Url=../grafana/public/fonts/fontawesome-webfont.woff2?v=4.7.0", "Referer=https://dev-boomq.pflb.ru/grafana/public/build/grafana.dark.886efb710af4d17a895d.css", ENDITEM, 
		"Url=../grafana/public/build/DashboardPage.47d249f8c940b079c4b5.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", ENDITEM, 
		LAST);

	web_add_auto_header("Priority", 
		"u=4");

	web_add_auto_header("x-grafana-org-id", 
		"15");

	web_url("bcaa301e-43a6-4e16-b830-690fbeb62b4c", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/dashboards/uid/bcaa301e-43a6-4e16-b830-690fbeb62b4c", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/grafana/public/build/postgresPlugin.5dbf50fe15160919cf74.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", ENDITEM, 
		"Url=/grafana/public/build/5216.565cbd1aa042f890edf2.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("x-datasource-uid", 
		"b26b6fad-4bcc-4957-82fd-128fab26b3f0");

	web_add_auto_header("x-plugin-id", 
		"postgres");

	web_custom_request("query", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"testId\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(test_id) from jmeter_metrics.sample_metric where $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_2", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_3", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('18860') OR test_id in ('18860')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_4", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_5", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		EXTRARES, 
		"Url=/grafana/public/build/grafanaPlugin.aee8494db4c836362107.js", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", ENDITEM, 
		LAST);

	web_custom_request("query_6", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ100", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  start_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"start_date\\\")\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":1908}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_custom_request("query_7", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ101", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  end_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"end_date\\\")\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":1908}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		EXTRARES, 
		"Url=/grafana/avatar/faf8e04d4c13804b4bec2cab6a19c669", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("x-datasource-uid");

	web_revert_auto_header("x-plugin-id");

	web_url("annotations", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/annotations?from=1725025849608&to=1725029449608&limit=100&matchAny=false&dashboardUID=bcaa301e-43a6-4e16-b830-690fbeb62b4c", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_url("orgs", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/user/orgs", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/grafana/avatar/faf8e04d4c13804b4bec2cab6a19c669", "Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", ENDITEM, 
		LAST);

	web_url("search", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/search?limit=5&type=dash-db&dashboardUID=bcaa301e-43a6-4e16-b830-690fbeb62b4c", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("x-panel-id", 
		"6");

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("x-dashboard-uid", 
		"bcaa301e-43a6-4e16-b830-690fbeb62b4c");

	web_add_auto_header("x-datasource-uid", 
		"b26b6fad-4bcc-4957-82fd-128fab26b3f0");

	web_add_auto_header("x-plugin-id", 
		"postgres");

	web_custom_request("query_8", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q100", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\""
		"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"12");

	web_custom_request("query_9", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q101", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_error_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\""
		"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"5");

	web_custom_request("query_10", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q102", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(received_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\"1725025849608\",\""
		"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"7");

	web_custom_request("query_11", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q103", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(sent_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\"1725025849608\",\"to\":"
		"\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"9");

	web_custom_request("query_12", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q104", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"QUERY\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\\"error\\\".sum::decimal / \\\"all\\\".sum\\r\\nFROM\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('18860') OR test_id in ('18860')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not "
		"is_transaction) as \\\"all\\\",\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_error_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('18860') OR test_id in ('18860')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not is_transaction) as \\\"error\\\";\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":620}],\"from\":\"1725025849608\",\"to\":\""
		"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"11");

	web_custom_request("query_13", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') "
		"OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints\":620},{\"refId\":\"RPS\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"rps\\\",\\n  \\\"metric\\\"\\nFROM (\\n  SELECT\\n    "
		"time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"rps\\\",\\n    concat('RPS ', test_id) AS \\\"metric\\\"\\n  FROM jmeter_metrics.sample_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('18860') OR test_id in ('18860')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction \\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints"
		"\":620}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"13");

	web_custom_request("query_14", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q106", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') "
		"OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, at.test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints\":620},{\"refId\":\"Errors per second\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"err_ps\\\",\\n  \\\"metric\\\"\\nFROM "
		"(\\n  SELECT\\n    time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"err_ps\\\",\\n    concat('Errors / s ', test_id) as \\\"metric\\\"\\n  FROM jmeter_metrics.sample_error_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('18860') OR test_id in ('18860')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction\\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":14,\""
		"intervalMs\":5000,\"maxDataPoints\":620}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"14");

	web_custom_request("query_15", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q107", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') "
		"OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints\":620}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"15");

	web_custom_request("query_16", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q108", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as \\\"time\\\", \\n  sum(at.threads) as \\\"threads\\\",\\n  concat('Threads ', test_id) as \\\"metric\\\"\\nFROM (\\n  SELECT \\n  time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp"
		") AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, test_id, container_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":2000,\"maxDataPoints\":1876},{\"refId\":\"PCT95\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\r\\n  time + interval '10s' as time,\\r\\n  sub.pct as \\\"pct\\\""
		",\\r\\n  sub.transaction as \\\"metric\\\"\\r\\nFROM (SELECT  time_bucket('10s', \\\"timestamp\\\") as time,\\n  max(pct95) as \\\"pct\\\",\\n  concat('PCT 95 ', thread_group_name, ' ', name, ' ', test_id) as \\\"transaction\\\"\\n  FROM jmeter_metrics.sample_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  is_transaction in (true, false) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, thread_group_name, name, "
		"test_id\\n  ORDER BY 1\\r\\n) sub\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":2000,\"maxDataPoints\":1876}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	lr_end_transaction("choose_details",LR_AUTO);

	web_revert_auto_header("x-dashboard-uid");

	web_custom_request("query_17", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"testId\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(test_id) from jmeter_metrics.sample_metric where $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_18", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_19", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('18860') OR test_id in ('18860')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_20", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_21", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_22", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"location\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct (location) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_23", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"request\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric WHERE (-9999 in ('18860') OR test_id in ('18860')) and not is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_24", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"transaction\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(name) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and is_transaction and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_custom_request("query_25", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"from\":\"1725025849608\",\"to\":\"1725029449608\",\"queries\":[{\"refId\":\"threadgroup\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"select distinct(thread_group_name) from jmeter_metrics.sample_metric where (-9999 in ('18860') OR test_id in ('18860')) and thread_group_name is not null and $__timeFilter(\\\"timestamp\\\")\",\"format\":\"table\"}]}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("x-datasource-uid");

	web_revert_auto_header("x-plugin-id");

	web_url("annotations_2", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/annotations?from=1725025849608&to=1725029449608&limit=100&matchAny=false&dashboardUID=bcaa301e-43a6-4e16-b830-690fbeb62b4c", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("x-datasource-uid", 
		"b26b6fad-4bcc-4957-82fd-128fab26b3f0");

	web_add_auto_header("x-plugin-id", 
		"postgres");

	web_custom_request("query_26", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ105", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  end_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"end_date\\\")\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":1908}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_custom_request("query_27", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=AQ104", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Anno\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  start_date as time,\\n  container_id,\\n  test_id\\nFROM\\n  jmeter_metrics.container\\nWHERE\\n  $__timeFilter(\\\"start_date\\\")\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":1908}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"6");

	web_add_auto_header("x-dashboard-uid", 
		"bcaa301e-43a6-4e16-b830-690fbeb62b4c");

	web_custom_request("query_28", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q109", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\""
		"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"12");

	web_custom_request("query_29", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q110", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(count) AS \\\"count\\\"\\nFROM jmeter_metrics.sample_error_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\""
		"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"5");

	web_custom_request("query_30", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q111", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(received_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\"1725025849608\",\""
		"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"7");

	web_custom_request("query_31", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q112", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"A\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT\\n  sum(sent_bytes)\\nFROM jmeter_metrics.sample_metric\\nWHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n  not is_transaction\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":306}],\"from\":\"1725025849608\",\"to\":"
		"\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"9");

	web_custom_request("query_32", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q113", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"QUERY\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\\"error\\\".sum::decimal / \\\"all\\\".sum\\r\\nFROM\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('18860') OR test_id in ('18860')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not "
		"is_transaction) as \\\"all\\\",\\r\\n    (SELECT sum(count) as sum from jmeter_metrics.sample_error_metric\\r\\n     WHERE\\r\\n         $__timeFilter(timestamp) AND\\r\\n             (-9999 in ('18860') OR test_id in ('18860')) AND\\r\\n             ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\r\\n             not is_transaction) as \\\"error\\\";\",\"format\":\"table\",\"datasourceId\":14,\"intervalMs\":60000,\"maxDataPoints\":620}],\"from\":\"1725025849608\",\"to\":\""
		"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"11");

	web_custom_request("query_33", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q114", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') "
		"OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints\":620},{\"refId\":\"RPS\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"rps\\\",\\n  \\\"metric\\\"\\nFROM (\\n  SELECT\\n    "
		"time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"rps\\\",\\n    concat('RPS ', test_id) AS \\\"metric\\\"\\n  FROM jmeter_metrics.sample_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('18860') OR test_id in ('18860')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction \\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints"
		"\":620}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"13");

	web_custom_request("query_34", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q115", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') "
		"OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, at.test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints\":620},{\"refId\":\"Errors per second\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  time + interval '10s' as time,\\n  \\\"err_ps\\\",\\n  \\\"metric\\\"\\nFROM "
		"(\\n  SELECT\\n    time_bucket('10s', \\\"timestamp\\\") as time,\\n    sum(count)::decimal / 10 AS \\\"err_ps\\\",\\n    concat('Errors / s ', test_id) as \\\"metric\\\"\\n  FROM jmeter_metrics.sample_error_metric\\n  WHERE\\n    $__timeFilter(timestamp) AND\\n    (-9999 in ('18860') OR test_id in ('18860')) AND\\n    ('%%all%%' in ('%%all%%') OR location IN ('%%all%%')) AND\\n    not is_transaction\\n  GROUP BY 1, test_id\\n  ORDER BY 1\\n) sub\",\"format\":\"time_series\",\"datasourceId\":14,\""
		"intervalMs\":5000,\"maxDataPoints\":620}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"14");

	web_custom_request("query_35", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q116", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as time, \\n  sum(at.threads) as \\\"Threads\\\",\\n  concat('Threads ', test_id)\\nFROM (\\n  SELECT time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') "
		"OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, container_id, test_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":5000,\"maxDataPoints\":620}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	web_add_header("x-panel-id", 
		"15");

	web_custom_request("query_36", 
		"URL=https://dev-boomq.pflb.ru/grafana/api/ds/query?ds_type=postgres&requestId=Q117", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/grafana/d/bcaa301e-43a6-4e16-b830-690fbeb62b4c/common-dashboard-tdb-14?from=1725025849608&to=1725029449608&refresh=5s&var-testId=18860&orgId=15", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"queries\":[{\"refId\":\"Threads\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\n  at.time + interval '10s' as \\\"time\\\", \\n  sum(at.threads) as \\\"threads\\\",\\n  concat('Threads ', test_id) as \\\"metric\\\"\\nFROM (\\n  SELECT \\n  time_bucket('10s', \\\"timestamp\\\") as time,\\n  locf(last(threads, timestamp)) as \\\"threads\\\",\\n  test_id\\n  FROM jmeter_metrics.thread_metric\\n  WHERE\\n  $__timeFilter(timestamp"
		") AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, test_id, container_id\\n  ORDER BY 1\\n) at\\nGROUP BY 1, test_id\\nORDER BY 1\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":2000,\"maxDataPoints\":1876},{\"refId\":\"PCT95\",\"datasource\":{\"type\":\"postgres\",\"uid\":\"b26b6fad-4bcc-4957-82fd-128fab26b3f0\"},\"rawSql\":\"SELECT \\r\\n  time + interval '10s' as time,\\r\\n  sub.pct as \\\"pct\\\""
		",\\r\\n  sub.transaction as \\\"metric\\\"\\r\\nFROM (SELECT  time_bucket('10s', \\\"timestamp\\\") as time,\\n  max(pct95) as \\\"pct\\\",\\n  concat('PCT 95 ', thread_group_name, ' ', name, ' ', test_id) as \\\"transaction\\\"\\n  FROM jmeter_metrics.sample_metric\\n  WHERE\\n  $__timeFilter(timestamp) AND\\n  (-9999 in ('18860') OR test_id in ('18860')) AND\\n  is_transaction in (true, false) AND\\n  ('%%all%%' in ('%%all%%') OR location IN ('%%all%%'))\\n  GROUP BY 1, thread_group_name, name, "
		"test_id\\n  ORDER BY 1\\r\\n) sub\",\"format\":\"time_series\",\"datasourceId\":14,\"intervalMs\":2000,\"maxDataPoints\":1876}],\"from\":\"1725025849608\",\"to\":\"1725029449608\"}", 
		LAST);

	return 0;
}