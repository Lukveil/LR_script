#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

Action()
{
	char *num;
	
	char *str_login;
	
	int number;
	
	
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("dev-boomq.pflb.ru", 
		"URL=https://dev-boomq.pflb.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-28T10:38:49.834Z");
	
	lr_start_transaction("UC03_TR01_login");
	
	web_set_max_html_param_len("2048");
	
	web_reg_save_param("tokenBear_1",
		"LB=Authorization: ",
		"RB=\n",
		LAST);
	web_reg_save_param("cookie",
		"LB=boomq_auth",
		"RB=\n",
		LAST);

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		LAST);

	web_add_auto_header("Authorization", "Bearer {tokenBear_1}");
		
	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);
		
	web_set_user("{login}",
		lr_decrypt("{password}"),
		"");

	web_reg_save_param("num_login",
		"LB=\"email\":\"group4user",
		"RB=@pochta.ru",
		LAST);
	
	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_set_max_html_param_len("2048");
	
	web_reg_save_param("tokenBear",
		"LB=Authorization: ",
		"RB=\n",
		LAST);
	
	
	
	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Authorization", "Bearer {tokenBear}");
	
	
	
	//web_add_cookie("{cookie}; DOMAIN=dev-boomq.pflb.ru");
	
	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);
	lr_end_transaction("UC03_TR01_login",LR_AUTO);

	

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	//lr_think_time(17);
	lr_start_transaction("UC03_TR02_Run_test");
	

	web_url("label", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);
	
	num = lr_eval_string("{num_login}");
	
	number = atoi(num);
	
	if (number % 2 != 0) {
	
	web_reg_save_param("id_test",
		"LB=\"id\":",
		"RB=\,\"projectName\":\"{login}_thr_group4\"",
		LAST);
	
	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&page=0&size=10000", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	

	
	
	
	
	
	web_reg_save_param("id_version",
		"LB=\"id\":",
		"RB=\,\"projectId\":{id_test}",
		LAST);

	web_url("{id_test}", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{id_test}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);
	


	web_url("{id_version}", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{id_test}/version/{id_version}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{id_test}/version/{id_version}/downloadLink", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t39.inf", 
		"Mode=HTML",		
		EXTRARES, 
		"Url=/minio/boomq/boomq/teams/14/projects/{id_test}/v_{id_version}.yaml?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240828/us-east-1/s3/aws4_request&X-Amz-Date=20240828T104027Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=b52fcfd0b925bfdb87618036c7c28103cd291f363cd061f08c3f020744da3e80", "Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	

	web_custom_request("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"labelSet\":[],\"projectId\":\"{id_test}\",\"projectVersionId\":{id_version},\"testMode\":\"TEST\",\"testProjectId\":\"{id_test}\",\"testProjectVersionId\":{id_version}}", 
		LAST);

	web_url("project_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("label_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

		
	lr_think_time(20);
    web_reg_save_param_ex("ParamName=state",
        "LB="id":{id},"testProjectId":{id_test},",
        "RB="testProjectVersionId":{id_version_test},"testMode":"TEST","state":"RUNNING"",
        LAST);
		
		
	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=INITIALIZATION,WAITING,RUNNING,TEST_STOPPING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("test_3", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&page=0&size=7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	
	} else {
	
	
	

	web_url("label", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_save_param("id_test",
		"LB=\"id\":",
		"RB=\,\"projectName\":\"{login}_jmx_file\"",
		LAST);
	
	web_url("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&page=0&size=10000", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		LAST);

	
	
	web_reg_save_param("id_version",
		"LB=\"id\":",
		"RB=\,\"projectId\":{id_test}",
		LAST);
	
	//web_reg_save_param("id_version_test",
		//"LB=\"id\":",
		//"RB=\,\"projectId\":{id_test}",
		//LAST);
	
	web_url("{id_test}", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{id_test}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_url("{id_version}", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{id_test}/version/{id_version}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{id_test}/version/{id_version}/downloadLink", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/minio/boomq/boomq/teams/14/projects/{id_test}/v_{id_version}.yaml?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240829/us-east-1/s3/aws4_request&X-Amz-Date=20240829T072749Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=25e77a03587a9efcb3d35edf58545f2f54b8951f3187e529e91d550416b29e4b", "Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", ENDITEM, 
		"Url=/static/media/arrow_down.6be88730f13ef3a159f4ef4438670da1.svg", "Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", ENDITEM, 
		"Url=/static/media/timer.29454804f438777460b7eb9a5a0990e6.svg", "Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("testInfo", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"{login}_jmx_file\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList: []\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/{id_test}/imported_jmx"
		"/base_jmx_v_{id_version}.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 81e81ea2-8fe2-4e59-8800-e885f9235f5e\\n    type: ULTIMATE\\n    name: jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType:"
		" SAMPLER\\n            children: []\\n            id: 3a6a8ddf-b93a-415f-9340-4f067f6ef836\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers:\\n              Content-type: application/json\\n            body: '{\\\"message\\\":\\\"Hola\\\"}'\\n            timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: "
		"CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: ae1a9813-a2a5-4f20-9e76-f657c41556c7\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: HTTP Request\\n            method: GET\\n            params:\\n              a:\\n                - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n        "
		"        id: ff5d46c2-de60-41a3-b607-678a6e05f953\\n                timerType: CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration: null\\n    steps:\\n      - name: '122637581'\\n        initDelaySec: 0\\n        startupTimeSec: 0\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 0\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate"
		" Thread Group\\n\",\"settingsId\":null,\"totalDuration\":0}", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_revert_auto_header("sec-ch-ua-platform");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	//lr_think_time(8);

	web_custom_request("testInfo_2", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"{login}_jmx_file\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n "
		"       status: NOT_COUNTED\\n        toDate: 3600\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/{id_test}/imported_jmx/base_jmx_v_{id_version}.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 81e81ea2-8fe2-4e59-8800-e885f9235f5e\\n    type: ULTIMATE\\n "
		"   name: jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 3a6a8ddf-b93a-415f-9340-4f067f6ef836\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers:\\n          "
		"    Content-type: application/json\\n            body: '{\\\"message\\\":\\\"Hola\\\"}'\\n            timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: ae1a9813-a2a5-4f20-9e76-f657c41556c7\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: "
		"HTTP Request\\n            method: GET\\n            params:\\n              a:\\n                - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n                id: ff5d46c2-de60-41a3-b607-678a6e05f953\\n                timerType: CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration:\\n      "
		"testRunnerIds:\\n        - 1\\n    steps:\\n      - name: '122637581'\\n        initDelaySec: 0\\n        startupTimeSec: 0\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 0\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3600}", 
		LAST);
		
	web_reg_save_param("id_version_test",
		"LB=\"id\":",
		"RB=\,\"projectId\":{id_test}",
		LAST);
	
	web_custom_request("{id_test}_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/{id_test}", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t20.inf",
		"EncType=application/json",		
		"Mode=HTML", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"{login}_jmx_file\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: "
		"LESS_EQUALS\\n        status: NOT_COUNTED\\n        toDate: 3600\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/25316/imported_jmx/base_jmx_v_25819.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 93704eee-2a84-4eca-ba94-4520748a0aec\\n    "
		"type: ULTIMATE\\n    name: jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: abe7746d-45fc-4f9d-99fa-83effa0ddabf\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            "
		"headers:\\n              Content-type: application/json\\n            body: '{\\\"message\\\":\\\"Hola\\\"}'\\n            timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 0caa8d73-cad8-47b6-a31c-a791e567de0f\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n"
		"            name: HTTP Request\\n            method: GET\\n            params:\\n              a:\\n                - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n                id: 49ec291b-6e06-4964-b336-268965011093\\n                timerType: CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration"
		":\\n      testRunnerIds:\\n        - 1\\n    steps:\\n      - name: '122637581'\\n        initDelaySec: 0\\n        startupTimeSec: 0\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 0\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3600}", 
		EXTRARES, 
		"Url=/static/media/check.9725c0396328bae9471b624111fc14ca.svg", "Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", ENDITEM, 
		LAST);		
		

	web_reg_save_param("id",
		"LB=\"id\":",
		"RB=\,\"testProjectId\":{id_test}",
		LAST);
	
	web_custom_request("test", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/{id_test}", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"labelSet\":[],\"projectId\":\"{id_test}\",\"projectVersionId\":{id_version_test},\"testMode\":\"TEST\",\"testProjectId\":\"{id_test}\",\"testProjectVersionId\":{id_version_test}}", 
		LAST);

	web_add_auto_header("Priority","u=0");

	web_url("project_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project?sort=lastModified,desc&size=999", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t149.inf", 
		"Mode=HTML", 
		LAST);

	web_url("label_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test/label?query=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t150.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t346.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(20);
    web_reg_save_param_ex("ParamName=state",
        "LB="id":{id},"testProjectId":{id_test},",
        "RB="testProjectVersionId":{id_version_test},"testMode":"TEST","state":"RUNNING"",
        LAST);
		
		
	web_url("test_2", 
		"URL=https://dev-boomq.pflb.ru/test-srv/test?sort=createDate,desc&displayState=INITIALIZATION,WAITING,RUNNING,TEST_STOPPING", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/test-runs", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);
	
	}
	
	lr_think_time(5);
	lr_end_transaction("UC03_TR02_Run_test",LR_AUTO);
	return 0;
}