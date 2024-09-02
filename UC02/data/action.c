Action()
{

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

	lr_start_transaction("LOG_in");

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

	web_submit_data("login", 
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=rpavel6757@gmail.com", ENDITEM, 
		"Name=password", "Value=aFRvogfUM6*OP", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
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

	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("LOG_in",LR_AUTO);

	lr_start_transaction("New_Thread_Group");

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_custom_request("project", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"2.0.0\",\"labelSet\":[],\"requestCount\":2,\"testType\":\"STABLE\",\"projectName\":\"untitled_test_15:38\",\"contentV2\":{\"boomqTestPlan\":{\"threadGroups\":[{\"boomqConfiguration\":{\"resourceConfiguration\":{\"testRunnerIds\":[1]},\"loadProfilePercent\":100},\"enabled\":true,\"id\":\"f59d10ae-1aa0-4435-8b70-f62dfd0cc73c\",\"label\":\"New group 1\",\"steps\":[],\"type\":\"BOOMQ_STABLE_SCALABILITY\",\"typeDisplayName\":\""
		"\",\"threadGroupElements\":[{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"POST\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/send\",\"port\":\"8084\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"{\\\"message\\\":\\\"Hola\\"
		"\"}\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8084/api/kafka/send\",\"id\":\"19f13139-cecb-4d9a-a7fb-581eda02764d\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\"Transaction_post\",\"id\":\"db970a46-7d44-456c-8148-e095dcf0961d\","
		"\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":1,\"typeDisplayName\":\"Transaction Controller\"},{\"children\":[{\"children\":\"\",\"individualProperties\":{\"useKeepAlive\":true,\"type\":\"HTTP\",\"retrieveAllEmbeddedResources\":true,\"followRedirects\":true,\"automaticallyRedirect\":false,\"method\":\"GET\",\"browserCompatibleHeaders\":false,\"doMultipartPost\":false,\"path\":\"/api/kafka/messages\",\"port\":\"8084\",\"protocol\":\"https\",\"search\":\"?\",\"serverName\":\""
		"192.168.14.200\",\"headers\":{},\"queryParameters\":[],\"body\":\"\",\"bodyParameters\":[]},\"timerList\":[],\"label\":\"https://192.168.14.200:8084/api/kafka/messages\",\"id\":\"64eaa35f-7b0d-48a1-a516-d2f152e60cac\",\"type\":\"SAMPLER\",\"enabled\":true,\"assertions\":[],\"extractors\":[],\"typeDisplayName\":\"HTTP Request\"}],\"individualProperties\":{\"includeDurationOfAllElementsToGeneratedSampler\":false,\"generateParentSampler\":false,\"type\":\"TRANSACTION\"},\"timerList\":[],\"label\":\""
		"Transaction_get\",\"id\":\"2a449579-4a30-434e-8fb4-5fb2c304d854\",\"type\":\"CONTROLLER\",\"enabled\":true,\"creationIndex\":2,\"typeDisplayName\":\"Transaction Controller\"}]}],\"runThreadGroupConsecutively\":false,\"loadProfileType\":\"PER_TEST\",\"functionalMode\":false,\"runTearDownAfterShutdown\":true,\"configurationElements\":[{\"clearControlledByThreadGroup\":false,\"cookiePolicy\":\"STANDARD\",\"clearEachIteration\":false,\"userDefinedCookies\":[],\"label\":\"Http cookie manager\",\"id\":"
		"\"394b6707-9ad9-4a3d-a481-ad3f575e9571\",\"type\":\"HTTP_COOKIE_MANAGER\",\"enabled\":true},{\"headers\":{\"User-Agent\":\"Mozilla/5.0\"},\"label\":\"Http header manager\",\"id\":\"b9b68f18-1f32-4fc3-a2a2-0e118b12c976\",\"type\":\"HTTP_HEADER_MANAGER\",\"enabled\":true},{\"label\":\"Http request defaults\",\"type\":\"HTTP_REQUEST_DEFAULTS\",\"enabled\":true,\"id\":\"dccfcdff-da17-4717-bc92-38965cd8dfb5\",\"connectTimeout\":60000,\"responseTimeout\":120000}],\"loadProfile\":{\"usersPerStep\":1,\""
		"rampDownMs\":0,\"durationAddedOnLastStepMs\":0,\"boomqProfileType\":\"STABLE\",\"rampUpMs\":0,\"stepLengthMs\":3600000,\"stepCount\":1},\"timers\":[{\"timerType\":\"CONSTANT\",\"label\":\"boomq_timer_ba12f744-4ea6-4fcc-9ccc-ff6389fa0b80\",\"id\":\"ba12f744-4ea6-4fcc-9ccc-ff6389fa0b80\",\"durationMs\":8000,\"enabled\":true}]},\"slaGroupList\":[{\"type\":\"GENERAL_TEST_SLA\",\"targetType\":\"TEST\",\"slaList\":[{\"fromDate\":0,\"restrictionType\":\"AVERAGE\",\"operation\":\"LESS_EQUALS\",\"status\""
		":\"NOT_COUNTED\",\"toDate\":3600,\"value\":\"3\"}]}],\"supportingFiles\":[],\"supportingFilesV2\":[]},\"totalDuration\":3600}", 
		EXTRARES, 
		"Url=../static/media/check.9725c0396328bae9471b624111fc14ca.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	lr_end_transaction("New_Thread_Group",LR_AUTO);

	lr_think_time(39);

	lr_start_transaction("New_jmx_file");

	web_custom_request("15095", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/15095?testProjectName=untitled_test_15:41", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		"Body=------WebKitFormBoundaryNOENSBF0i6MAwOyA\r\nContent-Disposition: form-data; name=\"jmx\"; filename=\"HTTP group4.jmx\"\r\nContent-Type: application/octet-stream\r\n\r\n<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<jmeterTestPlan version=\"1.2\" properties=\"5.0\" jmeter=\"5.6.3\">\n  <hashTree>\n    <TestPlan guiclass=\"TestPlanGui\" testclass=\"TestPlan\" testname=\"Test Plan\">\n      <elementProp name=\"TestPlan.user_defined_variables\" elementType=\"Arguments\" guiclass=\"ArgumentsPanel\" "
		"testclass=\"Arguments\" testname=\"User Defined Variables\">\n        <collectionProp name=\"Arguments.arguments\"/>\n      </elementProp>\n    </TestPlan>\n    <hashTree>\n      <ThreadGroup guiclass=\"ThreadGroupGui\" testclass=\"ThreadGroup\" testname=\"Thread Group\">\n        <intProp name=\"ThreadGroup.num_threads\">5</intProp>\n        <intProp name=\"ThreadGroup.ramp_time\">2</intProp>\n        <longProp name=\"ThreadGroup.duration\">20</longProp>\n        <boolProp name=\""
		"ThreadGroup.same_user_on_next_iteration\">true</boolProp>\n        <stringProp name=\"ThreadGroup.on_sample_error\">continue</stringProp>\n        <elementProp name=\"ThreadGroup.main_controller\" elementType=\"LoopController\" guiclass=\"LoopControlPanel\" testclass=\"LoopController\" testname=\"Loop Controller\">\n          <intProp name=\"LoopController.loops\">-1</intProp>\n          <boolProp name=\"LoopController.continue_forever\">false</boolProp>\n        </elementProp>\n      </"
		"ThreadGroup>\n      <hashTree>\n        <TransactionController guiclass=\"TransactionControllerGui\" testclass=\"TransactionController\" testname=\"Transaction Controller\">\n          <boolProp name=\"TransactionController.includeTimers\">false</boolProp>\n        </TransactionController>\n        <hashTree>\n          <HTTPSamplerProxy guiclass=\"HttpTestSampleGui\" testclass=\"HTTPSamplerProxy\" testname=\"HTTP Request\">\n            <stringProp name=\"HTTPSampler.domain\">192.168.14.200</"
		"stringProp>\n            <stringProp name=\"HTTPSampler.port\">8084</stringProp>\n            <stringProp name=\"HTTPSampler.protocol\">http</stringProp>\n            <stringProp name=\"HTTPSampler.path\">/api/kafka/send</stringProp>\n            <boolProp name=\"HTTPSampler.follow_redirects\">true</boolProp>\n            <stringProp name=\"HTTPSampler.method\">POST</stringProp>\n            <boolProp name=\"HTTPSampler.use_keepalive\">true</boolProp>\n            <boolProp name=\""
		"HTTPSampler.postBodyRaw\">true</boolProp>\n            <elementProp name=\"HTTPsampler.Arguments\" elementType=\"Arguments\">\n              <collectionProp name=\"Arguments.arguments\">\n                <elementProp name=\"\" elementType=\"HTTPArgument\">\n                  <boolProp name=\"HTTPArgument.always_encode\">false</boolProp>\n                  <stringProp name=\"Argument.value\">&quot;message&quot;:&quot;hola&quot;</stringProp>\n                  <stringProp name=\"Argument.metadata\">"
		"=</stringProp>\n                </elementProp>\n              </collectionProp>\n            </elementProp>\n          </HTTPSamplerProxy>\n          <hashTree/>\n        </hashTree>\n        <TransactionController guiclass=\"TransactionControllerGui\" testclass=\"TransactionController\" testname=\"Transaction Controller\">\n          <boolProp name=\"TransactionController.includeTimers\">false</boolProp>\n        </TransactionController>\n        <hashTree>\n          <ConstantTimer guiclass=\""
		"ConstantTimerGui\" testclass=\"ConstantTimer\" testname=\"Constant Timer\">\n            <stringProp name=\"ConstantTimer.delay\">8000</stringProp>\n          </ConstantTimer>\n          <hashTree/>\n          <HTTPSamplerProxy guiclass=\"HttpTestSampleGui\" testclass=\"HTTPSamplerProxy\" testname=\"HTTP Request\">\n            <stringProp name=\"HTTPSampler.domain\">192.168.14.200</stringProp>\n            <stringProp name=\"HTTPSampler.port\">8084</stringProp>\n            <stringProp name=\""
		"HTTPSampler.protocol\">http</stringProp>\n            <stringProp name=\"HTTPSampler.path\">/api/kafka/messages</stringProp>\n            <boolProp name=\"HTTPSampler.follow_redirects\">true</boolProp>\n            <stringProp name=\"HTTPSampler.method\">GET</stringProp>\n            <boolProp name=\"HTTPSampler.use_keepalive\">true</boolProp>\n            <boolProp name=\"HTTPSampler.postBodyRaw\">false</boolProp>\n            <elementProp name=\"HTTPsampler.Arguments\" elementType=\"Arguments\" "
		"guiclass=\"HTTPArgumentsPanel\" testclass=\"Arguments\" testname=\"User Defined Variables\">\n              <collectionProp name=\"Arguments.arguments\">\n                <elementProp name=\"a\" elementType=\"HTTPArgument\">\n                  <boolProp name=\"HTTPArgument.always_encode\">false</boolProp>\n                  <stringProp name=\"Argument.value\">b</stringProp>\n                  <stringProp name=\"Argument.metadata\">=</stringProp>\n                  <boolProp name=\""
		"HTTPArgument.use_equals\">true</boolProp>\n                  <stringProp name=\"HTTPArgument.content_type\">applications/json</stringProp>\n                  <stringProp name=\"Argument.name\">a</stringProp>\n                </elementProp>\n              </collectionProp>\n            </elementProp>\n          </HTTPSamplerProxy>\n          <hashTree/>\n        </hashTree>\n      </hashTree>\n    </hashTree>\n  </hashTree>\n</jmeterTestPlan>\n\r\n------WebKitFormBoundaryNOENSBF0i6MAwOyA--\r\n", 
		LAST);

	web_revert_auto_header("Origin");

	web_url("15095_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/15095", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	web_url("15271", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/15095/version/15271", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_url("downloadLink", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/15095/version/15271/downloadLink", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/minio/boomq/boomq/teams/14/projects/15095/v_15271.yaml?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIAIOSFODNN7EXAMPLE/20240827/us-east-1/s3/aws4_request&X-Amz-Date=20240827T124204Z&X-Amz-Expires=604800&X-Amz-SignedHeaders=host&X-Amz-Signature=4963aeb93a84ea2f635641cbe7379d581ae3f5c76d277c04d50a80c2513955f7", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		"Url=/static/media/arrow_down.6be88730f13ef3a159f4ef4438670da1.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		"Url=/static/media/timer.29454804f438777460b7eb9a5a0990e6.svg", "Referer=https://dev-boomq.pflb.ru/account/new-test", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://dev-boomq.pflb.ru");

	lr_think_time(11);

	web_custom_request("testInfo", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"jmx_new_test\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList: []\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/15095/imported_jmx/"
		"base_jmx_v_15271.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: Thread Group\\n    id: 1e0436e1-0757-4e53-9cb3-89149412653f\\n    type: ORDINARY\\n    name: Thread Group\\n    threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []"
		"\\n            id: b66d911a-4721-4f40-b8a0-d9d9a50a0a78\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers: {}\\n            body: '\\\"message\\\":\\\"hola\\\"'\\n            timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            "
		"groupElementType: SAMPLER\\n            children: []\\n            id: 067ea8f7-1207-4e28-bb7f-2ecb524d5803\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: HTTP Request\\n            method: GET\\n            params:\\n              a:\\n                - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n                id: e7732904-d355-44f4-bf56-7a3d6aa91880\\n                timerType: "
		"CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration: null\\n    startThreadsCount: 5\\n    startupTimeSec: 2\\n    loopCount: -1\\n    holdLoadTimeSec: 20\\n    initDelaySec: 0\\n    loopForever: true\\n    schedulerActive: false\\n    changed: false\\n    enabled: true\\n    label: Thread Group\\n\",\"settingsId\":null,\"totalDuration\":0}", 
		LAST);

	web_custom_request("testInfo_2", 
		"URL=https://dev-boomq.pflb.ru/testplan-srv/testInfo?testMode=TEST", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"jmx_new_test\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        status: "
		"NOT_COUNTED\\n        toDate: 52\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/15095/imported_jmx/base_jmx_v_15271.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: Thread Group\\n    id: 1e0436e1-0757-4e53-9cb3-89149412653f\\n    type: ORDINARY\\n    name: Thread Group\\n    "
		"threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: b66d911a-4721-4f40-b8a0-d9d9a50a0a78\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers: {}\\n            body: '\\\"message\\\":\\\"hola\\\"'\\n "
		"           timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 067ea8f7-1207-4e28-bb7f-2ecb524d5803\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: HTTP Request\\n            method: GET\\n            params:\\n              a:\\n            "
		"    - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n                id: e7732904-d355-44f4-bf56-7a3d6aa91880\\n                timerType: CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration: null\\n    startThreadsCount: 5\\n    startupTimeSec: 2\\n    loopCount: -1\\n    holdLoadTimeSec: 20\\n    "
		"initDelaySec: 0\\n    loopForever: true\\n    schedulerActive: false\\n    changed: false\\n    enabled: true\\n    label: Thread Group\\n\",\"settingsId\":null,\"totalDuration\":52}", 
		LAST);

	web_custom_request("15095_3", 
		"URL=https://dev-boomq.pflb.ru/project-srv/project/15095", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"Body={\"comment\":\"\",\"contentFormat\":\"yaml\",\"contentModelVersion\":\"1.0.0\",\"labelSet\":[],\"requestCount\":0,\"testType\":\"OWN_JMX\",\"projectName\":\"jmx_new_test\",\"content\":\"httpRequestDefaults:\\n  isSaveResponseInMd5Hash: false\\n  connectTimeout: 0\\n  responseTimeout: 0\\nparameters: []\\nslaGroupList:\\n  - type: GENERAL_TEST_SLA\\n    targetType: TEST\\n    slaList:\\n      - fromDate: 0\\n        restrictionType: AVERAGE\\n        operation: LESS_EQUALS\\n        status: "
		"NOT_COUNTED\\n        toDate: 52\\n        value: '3'\\nresourceConfiguration:\\n  cloudTestRunLocationRequirements:\\n    testRunLocationIds: []\\nbaseJmxFileLocation: boomq/teams/14/projects/15095/imported_jmx/base_jmx_v_15271.jmx\\nisRunThreadGroupsConsecutively: false\\nisTimersDisabled: false\\nmultiplicationFactor: 1\\ntestType: OWN_JMX\\nthreadGroups:\\n  - displayTypeName: Thread Group\\n    id: 1e0436e1-0757-4e53-9cb3-89149412653f\\n    type: ORDINARY\\n    name: Thread Group\\n    "
		"threadGroupElements:\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: b66d911a-4721-4f40-b8a0-d9d9a50a0a78\\n            url: 'http://192.168.14.200:8084/api/kafka/send'\\n            name: HTTP Request\\n            method: POST\\n            params: {}\\n            headers: {}\\n            body: '\\\"message\\\":\\\"hola\\\"'\\n "
		"           timerList: []\\n        name: Transaction Controller\\n      - type: TRANSACTION_CONTROLLER\\n        groupElementType: CONTROLLER\\n        children:\\n          - type: HTTP_SAMPLER\\n            groupElementType: SAMPLER\\n            children: []\\n            id: 067ea8f7-1207-4e28-bb7f-2ecb524d5803\\n            url: 'http://192.168.14.200:8084/api/kafka/messages?a=b'\\n            name: HTTP Request\\n            method: GET\\n            params:\\n              a:\\n            "
		"    - b\\n            headers: {}\\n            body: ''\\n            timerList:\\n              - type: CONSTANT_TIMER\\n                id: e7732904-d355-44f4-bf56-7a3d6aa91880\\n                timerType: CONSTANT_TIMER\\n                duration: 8\\n                enabled: true\\n                isBoomqTimer: false\\n        name: Transaction Controller\\n    resourceConfiguration: null\\n    startThreadsCount: 5\\n    startupTimeSec: 2\\n    loopCount: -1\\n    holdLoadTimeSec: 20\\n    "
		"initDelaySec: 0\\n    loopForever: true\\n    schedulerActive: false\\n    changed: false\\n    enabled: true\\n    label: Thread Group\\n\",\"settingsId\":null,\"totalDuration\":52}", 
		LAST);

	lr_end_transaction("New_jmx_file",LR_AUTO);

	return 0;
}