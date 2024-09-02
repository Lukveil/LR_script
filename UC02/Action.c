#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>





Action()
{
	char *num;
	
	char *str_login;
	
	char *regex;

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

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_url("dev-boomq.pflb.ru", 
		"URL=https://dev-boomq.pflb.ru/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", "Referer=https://dev-boomq.pflb.ru/authorize", ENDITEM, 
		"Url=/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("selection", 
		"URL=https://arc.msn.com/v4/api/selection?placement=88000360&nct=1&fmt=json&ISU=0&AREF=0&APRIMB=0&ADEFAB=0&OPSYS=WIN10&locale=ru&country=RU&edgeid=-6479097216944046264&ACHANNEL=4&ABUILD=128.0.6613.85&poptin=1&devosver=10.0.22631.4037&clr=esdk&UITHEME=dark&EPCON=0&AMAJOR=128&AMINOR=0&ABLD=6613&APATCH=85", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("UC02_TR01_login");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-27T12:38:04.794Z");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"128\", \"Not;A=Brand\";v=\"24\", \"Microsoft Edge\";v=\"128\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");
	
	web_set_max_html_param_len("2048");
	
	web_reg_save_param("tokenBear",
		"LB=Authorization: ",
		"RB=\n",
		LAST);
	
	
	web_add_auto_header("Authorization", "Bearer {tokenBear}");

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value={login}", ENDITEM, 
		"Name=password", "Value={password}", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);
	
	web_add_auto_header("Authorization", "Bearer {tokenBear}");
	
	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t39.inf", 
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
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

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
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Authorization", "Bearer {tokenBear}");
	
	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(5);
	lr_end_transaction("UC02_TR01_login",LR_AUTO);
	//lr_think_time(1);
	
	//str_login = lr_eval_string("{login}");
	
	//lr_param_sprintf("login_number", str_login, "/.+[0-9]{4}/"); 
	
	//regexp = ".+[0-9]{4}";
	
	//web_reg_save_param_regexp(
    //"order_number",
    //"RegExp=lr_eval_string(regexp)",
    //"Search=str_login", 
    //LAST);
	
	
	num = lr_eval_string("{num_login}");
	
	number = atoi(num);
	
	
	lr_start_transaction("UC02_TR02_test_create");
	if (number % 2 != 0) {
			

		web_add_auto_header("Origin", 
			"https://dev-boomq.pflb.ru");

		web_custom_request("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"{login}_thr_group4\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[1]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"f1638e02-313a-40ea-9252-4725894e0e14\",\"label\":\"New group 1\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\"typeDisplayName\":\""
		"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/send\",\"port\":\"8084\",\"protocol\":\"http\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{\"Content-type\":\"application/json\"},\"queryParameters\":[],\""
		"body\":\"{\\\"message\\\":\\\"Hola\\\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"http://192.168.14.200:8084/api/kafka/send\",\"id\":\"5eb3b437-99f0-4dcb-aaa8-046841690ce6\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 1\",\"id\":\""
		"012a3b4b-e433-40af-bf0f-d9df6f3afa7c\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"},{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/messages\",\"port\":\"8084\",\"protocol\":\"http\",\""
		"search\":\"?a=b\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[{\"useEquals\":true,\"alwaysEncode\":true,\"name\":\"a\",\"value\":\"b\"}],\"body\":\"\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"http://192.168.14.200:8084/api/kafka/messages?a=b\",\"id\":\"8f620978-7261-45c5-a6db-88f917ba39a2\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\""
		"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction 2\",\"id\":\"5e1ac7e3-81ea-4851-bd7a-83bcc62d5f58\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":2,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\"runTearDownAfterShutdown\":true,\"configurationElements\":[{\""
		"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":\"31e87d43-67d9-4687-bb80-0bde0094f4f7\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"33f25fc7-a737-48ae-a343-5d77d2c7bf92\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\"label\":\"Http request defaults\",\"type\":\""
		"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"39fc30c8-015c-4bbf-b377-9c60b572896f\",\"connectTimeout\":60000,\"responseTimeout\":120000}],\"loadProfile\":{\"usersPerStep\":1,\"rampDownMs\":0,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":0,\"stepLengthMs\":3600000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_f06b3698-b492-4337-a151-36d378e9c67a\",\"id\":\"f06b3698-b492-4337-a151-36d378e9c67a\",\"durationMs\":8000,\"enabled\""
		":true}]},\"slaGroupList\":[{\"type\":\"GENERAL_TEST_SLA\",\"targetType\":\"TEST\",\"slaList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"operation\":\"LESS_EQUALS\",\"status\":\"NOT_COUNTED\",\"toDate\":3600,\"value\":\"3\"},{\"fromDate\":0,\"restrictionType\":\"THROUGHPUT\",\"operation\":\"LESS_EQUALS\",\"status\":\"NOT_COUNTED\",\"toDate\":3600,\"value\":\"0\"}]}],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"totalDuration\":3600}", 
		EXTRARES, 
		"Url=../static/media/check.9725c0396328bae9471b624111fc14ca.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	//lr_end_transaction("UC02_TR02_test_create",LR_AUTO);
	//lr_think_time(1);
	} else {
	
	
	//lr_start_transaction("New_jmx_file");
	
	
	web_reg_save_param("id_test",
		"LB=\"id\":",
		"RB=\,\"projectName\":\"{login}_jmx_file\"",
		LAST);
	
	web_submit_data("project", 
		"Action=https://dev-boomq.pflb.ru/project-srv/project?testProjectName={login}_jmx_file", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=jmx", "Value=c:\\sample.jmx", "File=Yes", ENDITEM, 
		LAST);

	web_reg_save_param("id_version",
		"LB=\"id\":",
		"RB=\,\"projectId\":25407",
		LAST);
	
	web_url("25407", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25407", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25407", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_url("25974", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25407/version/25974", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25407", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25407/version/25974/downloadLink", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25407", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/minio/boomq/boomq/teams/14/projects/25407/v_25974.yaml?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240828/us-east-1/s3/aws4_request&X-Amz-Date=20240828T130824Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=42e4b1b1a27506b25d60a346158063438227d9c2f5b66f3046401ff685cd20bd", "Referer=https://dev-boomq.pflb.ru/account/tests/25407", ENDITEM, 
		"Url=/static/media/timer.29454804f438777460b7eb9a5a0990e6.svg", "Referer=https://dev-boomq.pflb.ru/account/tests/25407", ENDITEM, 
		"Url=/static/media/arrow_down.6be88730f13ef3a159f4ef4438670da1.svg", "Referer=https://dev-boomq.pflb.ru/account/tests/25407", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("testInfo", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25407", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"untitled_test_16:08\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList: []\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/25407/imported_jmx/"
		"base_jmx_v_25974.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 43f85ecf-999b-4ea8-a34d-f662154346e6\\n    type: ULTIMATE\\n    name: jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: "
		"SAMPLER\\n            children: []\\n            id: 2c859272-fde6-4db1-83a1-12558413e5a2\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers:\\n              Content-type: application/json\\n            body: '{\\\"message\\\":\\\"Hola\\\"}'\\n            timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: "
		"CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 5b85b2d8-3830-4e4e-9f47-983d3b6ac9cc\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: HTTP Request\\n            method: GET\\n            params:\\n              a:\\n                - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n        "
		"        id: 8749325d-9ab3-4ebd-8378-17ae031e9112\\n                timerType: CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration: null\\n    steps:\\n      - name: '122637581'\\n        initDelaySec: 0\\n        startupTimeSec: 0\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 0\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate"
		" Thread Group\\n\",\"settingsId\":null,\"totalDuration\":0}", 
		LAST);

	

	web_custom_request("testInfo_2", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25407", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"untitled_test_16:08\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        "
		"status: NOT_COUNTED\\n        toDate: 3600\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/25407/imported_jmx/base_jmx_v_25974.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: 43f85ecf-999b-4ea8-a34d-f662154346e6\\n    type: ULTIMATE\\n    name"
		": jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 2c859272-fde6-4db1-83a1-12558413e5a2\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers:\\n              "
		"Content-type: application/json\\n            body: '{\\\"message\\\":\\\"Hola\\\"}'\\n            timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 5b85b2d8-3830-4e4e-9f47-983d3b6ac9cc\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: HTTP "
		"Request\\n            method: GET\\n            params:\\n              a:\\n                - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n                id: 8749325d-9ab3-4ebd-8378-17ae031e9112\\n                timerType: CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration:\\n      testRunnerIds"
		":\\n        - 1\\n    steps:\\n      - name: '122637581'\\n        initDelaySec: 0\\n        startupTimeSec: 0\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 0\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3600}", 
		LAST);

	web_custom_request("25407_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/25407", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/tests/25407", 
		"Snapshot=t130.inf", 
		"Mode=HTML",
		"EncType=application/json",
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"untitled_test_21:29\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        "
		"status: NOT_COUNTED\\n        toDate: 3600\\n        value: '3'\\n      - fromDate: 0\\n        restrictionType: THROUGHPUT\\n        operation: LESS_EQUALS\\n        status: NOT_COUNTED\\n        toDate: 3600\\n        value: '0'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/25407/imported_jmx/base_jmx_v_25974.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: "
		"1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: jp@gc - Ultimate Thread Group\\n    id: f4561b7f-8099-4ebd-9728-4bcf2d2bbc93\\n    type: ULTIMATE\\n    name: jp@gc - Ultimate Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: bec31bc3-9a40-4673-be18-c1f3a8280937\\n            url: "
		"'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers:\\n              Content-type: application/json\\n            body: '{\\\"message\\\":\\\"Hola\\\"}'\\n            timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n          "
		"  children: []\\n            id: 8e9a11b6-c0b9-40fb-8c0b-f4323bdbb326\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: HTTP Request\\n            method: GET\\n            params:\\n              a:\\n                - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n                id: 347c4fd5-39a8-4031-bcab-3ff877172034\\n                timerType: CONSTANT_TIMER\\n                "
		"duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration:\\n      testRunnerIds:\\n        - 1\\n    steps:\\n      - name: '1561677733'\\n        initDelaySec: 0\\n        startupTimeSec: 0\\n        holdLoadTimeSec: 3600\\n        shutdownTimeSec: 0\\n        startThreadsCount: 1\\n    enabled: true\\n    label: jp@gc - Ultimate Thread Group\\n\",\"settingsId\":null,\"totalDuration\":3600}", 
		EXTRARES, 
		"Url=/static/media/check.9725c0396328bae9471b624111fc14ca.svg", "Referer=https://dev-boomq.pflb.ru/account/tests/25407", ENDITEM, 
		LAST);
	
	//lr_end_transaction("New_jmx_file",LR_AUTO);
	//lr_think_time(1);
	}
	lr_think_time(5);
	lr_end_transaction("UC02_TR02_test_create",LR_AUTO);
	return 0;
}  
