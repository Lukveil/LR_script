#include <stdio.h>
#include <stdlib.h>

Action()
{
	// create random string length = 14
	int i;
    char rnd1[12], email[12];

    for (i = 0; i < 11; ++i) {
        rnd1[i] = 97 + rand() % ((122 - 97) + 1);
    }

    sprintf(email, "%c%c%c%c%c%c%c%c%c%c%c", rnd1[0], rnd1[1], rnd1[2], rnd1[3], rnd1[4], rnd1[5], rnd1[6], rnd1[7], rnd1[8], rnd1[9], rnd1[10]);
    email[11] ='\0';
    lr_save_string(lr_eval_string(email), "email");
    

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Sec-Fetch-Dest", "document");

	web_add_auto_header("Sec-Fetch-Mode", "navigate");

	web_add_auto_header("Sec-Fetch-Site", "none");

	web_add_auto_header("Priority", "u=0, i");

	web_revert_auto_header("Priority");

	web_add_auto_header("DNT", "1");

	web_add_header("Sec-Fetch-User", "?1");

	web_add_auto_header("Sec-GPC", "1");

	web_add_header("Upgrade-Insecure-Requests", "1");

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
		"Url=/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	// START sign_in TR
	
	lr_start_transaction("sign_in");

	web_add_auto_header("Sec-Fetch-Site", "cross-site");

	web_add_auto_header("Origin", "https://dev-boomq.pflb.ru");

	web_add_header("Priority", "u=0");

	web_add_auto_header("Sec-Fetch-Dest", "empty");

	web_add_auto_header("Sec-Fetch-Mode", "cors");

	web_add_auto_header("Sec-Fetch-Site", "same-origin");

	web_add_header("X-Client-Date", "2024-08-30T09:28:37.882Z");

	web_set_max_html_param_len("4046");
	
	// 1 token
	web_reg_save_param("auth",
	    "LB=uthorization: " ,
		"RB=\n",
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
		"Name=username", "Value=e.deckdee@gmail.com", ENDITEM, 
		"Name=password", "Value=1Ddeckdee!", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");
	
	web_add_auto_header("Authorization", "Bearer {auth}");

	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
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
	
	// 2 token
	web_set_max_html_param_len("4096");
	web_reg_save_param("auth",
	    "LB=uthorization: " ,
		"RB=\n",
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

	web_add_auto_header("Authorization", "Bearer {auth}");
	
	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	// END sign_in TR
	
	lr_end_transaction("sign_in",LR_AUTO);
	
	lr_think_time(1);
	
	// START in_to_group TR

	lr_start_transaction("in_to_group");

	web_add_auto_header("Priority", "u=0");

	web_url("team_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?page=0&size=6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_url("14", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("teamMember", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=14&page=0&size=5", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
	
	// END in_to_group TR

	lr_end_transaction("in_to_group",LR_AUTO);
	
	// START in_to_group TR
	
	lr_think_time(1);

	
	// START create_user TR
	
	lr_start_transaction("create_user");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_header("Priority", "u=0");
	
	// url
	web_reg_save_param("url_param",
	    "LB=\"inviteUrl\":\"/auth-srv/invite/" ,
		"RB=\"",
		LAST);
//	web_reg_save_param_json(
//		"ParamName=url_json",
//		"QueryString=$[0].inviteUrl",
//		"NotFound=warning",
//		"SelectAll=No",
//		SEARCH_FILTERS,
//		LAST);

	web_custom_request("teamMember_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=14", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body=[{\"email\":\"{email}@gmail.com\",\"permissionList\":[\"ADMIN\",\"VIEW\",\"EDIT\",\"RUN\",\"MANAGE_USERS_IN_ORG\"],\"userDisplayName\":\"{email}\"}]", 
		LAST);

	lr_end_transaction("create_user",LR_AUTO);
	
	lr_think_time(1);
	
	// START user_view TR

	lr_start_transaction("user_view");

	web_add_auto_header("Priority",  "u=0");
	
	// END user_view TR

	lr_end_transaction("user_view",LR_AUTO);
	
	// START copy_link TR

	lr_start_transaction("copy_link");

	web_add_header("Origin", "https://dev-boomq.pflb.ru");

	lr_end_transaction("copy_link", LR_AUTO);
	
	// END copy_link TR
	
	lr_think_time(1);
	
	// START walk_link TR

	lr_start_transaction("walk_link");

	web_add_auto_header("Sec-Fetch-Dest", "document");

	web_add_auto_header("Sec-Fetch-Mode", "navigate");

	web_add_auto_header("Sec-Fetch-Site", "none");

	web_add_auto_header("Priority", "u=0, i");

	web_revert_auto_header("Priority");

	web_add_auto_header("DNT", "1");

	web_add_header("Sec-Fetch-User", "?1");

	web_add_auto_header("Sec-GPC", "1");

	web_add_header("Upgrade-Insecure-Requests", "1");
   

	web_remove_auto_header("Authorization", LAST);
	web_reg_save_param("cookie",
	    "LB=Set-Cookie: boomq_auth\=" ,
		"RB=; ",
		LAST);
	
	
	web_url("WEMM2O0a9ZiIMnzkLnh2jxdKCIFxnXeK8gWWYQSkJCCpmZpsZHxig3Z0WFkPivwOnsBMQBntvCEGkGSzzpGa7Hkg9ecMMTj5EsZntkoNj2eiYJZ8PAVtrN82g1_HC-iP", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/invite/{url_param}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", "Referer=https://dev-boomq.pflb.ru/change-password", ENDITEM, 
		"Url=/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", "Referer=https://dev-boomq.pflb.ru/change-password", ENDITEM, 
		"Url=/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		LAST);

	lr_end_transaction("walk_link",LR_AUTO);
	
	// END user_view TR
	
	lr_think_time(1);
	
	lr_start_transaction("change_pass");

	web_add_auto_header("Priority", "u=0");

	web_add_auto_header("Sec-Fetch-Dest", "empty");

	web_add_auto_header("Sec-Fetch-Mode", "cors");

	web_add_auto_header("Sec-Fetch-Site", "same-origin");

	web_add_header("Origin", "https://dev-boomq.pflb.ru");

	
	web_add_header("Content-Type", "application/json");
	
	
	web_add_auto_header("Authorization", "Bearer {cookie}");
	
	//web_remove_auto_header("Authorization", LAST);
	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/change-password", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"Body={\"password\":\"1Ddeckdee!\"}", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("team_3", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("teamContext_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner_2", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("change_pass",LR_AUTO);
	
	lr_think_time(1);

	return 0;
}