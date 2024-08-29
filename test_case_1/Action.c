#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Action()
{
	int i;
    char rnd1[12], email[12];

    for (i = 0; i < 11; ++i) {
        rnd1[i] = 97 + rand() % ((122 - 97) + 1);
    }

    sprintf(email, "%c%c%c%c%c%c%c%c%c%c%c", rnd1[0], rnd1[1], rnd1[2], rnd1[3], rnd1[4], rnd1[5], rnd1[6], rnd1[7], rnd1[8], rnd1[9], rnd1[10]);
    email[11] ='\0';
    lr_save_string(lr_eval_string(email), "email");
	
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
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/media/Montserrat-Regular.3db65dc4b858f0fed4fb.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/logo.f5ae2890e77693e018920d4ad41c643c.svg", ENDITEM, 
		"Url=/static/media/loading.b59fa25397e07d75b9ac55ace151e625.svg", ENDITEM, 
		"Url=/static/media/Montserrat-SemiBold.197213592de7a2a62e06.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Bold.180ba33d8de7dcfe80a0.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
		"Url=/static/media/Montserrat-Medium.d42dad28f6470e5162c2.woff", "Referer=https://dev-boomq.pflb.ru/static/css/main.64a4c65b.css", ENDITEM, 
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

	lr_think_time(16);

//	web_url("ip", 
//		"URL=https://worldtimeapi.org/api/ip", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://dev-boomq.pflb.ru/", 
//		"Snapshot=t17.inf", 
//		"Mode=HTML", 
//		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Client-Date", 
		"2024-08-28T15:06:59.141Z");

	// eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJpc19ub3RpZmljYXRlZCI6ZmFsc2UsInVzZXJfaWQiOjE4N
	// zIsInVzZXJfbmFtZSI6ImUuZGVja2RlZUBnbWFpbC5jb20iLCJzY29wZSI6WyJ0cnVzdCIsInJlYWQiLCJ3cml0ZSJd
	// LCJ1c2VyX2xhbmd1YWdlIjoiRU4iLCJleHAiOjE3MjQ5MDA4MjMsImF1dGhvcml0aWVzIjpbIlJPTEVfVVNFUiJdLCJqdGkiOiJhZjI
	// wNjllYy0yOTE2LTRmMTktYmVlYi1jY2NiYzQwZjFiN2IiLCJjbGllbnRfaWQiOiJjbGllbnQifQ.cbWTDHBewkPr86pn6IviVbJAmFhCf
	// wWqCNnHLG-_FD57L2eIuCDFvBvldTh3flheaRBqnz4aYhzjXxFN5sWKPe4ly_zdYZBlj-I5PPT7yEyebZ2L0wGx2o1BcKk71ENLcqHxS0uEL
	// XD6hNBPxamtkzgdctJjreyFbmGYd2LojlERIK5sRu-bLt0bS4kOXXUEleWVPA-w19-KRDQkoyoDD8Kq_ITmWsvk8yz4zTFJSDKwNoqMuO
	// hISC8qN1BepzbY85ri5TYKN5-uw4LN4yQ66x7QaF-Nlag9sYKs2lXIjKtCu4IWj7tNPVWwAjmJy3H0cRC8lcGUdfzSMxTFHmg7Qw
	

	web_set_max_html_param_len("4046");
	
	// 1
	web_reg_save_param("auth",
	    "LB=Authorization: " ,
		"RB=\n",
		LAST);

	
	web_submit_data("login",
		"Action=https://dev-boomq.pflb.ru/auth-srv/login", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"Referer=https://dev-boomq.pflb.ru/authorize", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=e.deckdee@gmail.com", ENDITEM, 
		"Name=password", "Value=1Ddeckdee!", ENDITEM, 
		"Name=submit", "Value=Login", ENDITEM, 
		EXTRARES, 
		"Url=../static/media/en.b1acfc6b06bfe6e29bfbfc06d09d8177.svg", "Referer=https://dev-boomq.pflb.ru/account", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");
	
	/// 
	web_add_auto_header("Authorization", "Bearer {auth}");

	

	web_url("config.json", 
		"URL=https://dev-boomq.pflb.ru/config.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("modelSchema", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("user", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_url("identityProvider", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/identityProvider", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_url("team", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	// 2
	web_reg_save_param("auth2",
	    "LB=Authorization: " ,
		"RB=\n",
		LAST);
	
	web_url("teamContext", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("sign_in",LR_AUTO);

	lr_start_transaction("create_user");

	web_add_auto_header("Priority", 
		"u=0");

	lr_think_time(10);

	web_url("team_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?page=0&size=6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	web_url("14", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team/14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");
	
	////// 
	web_add_auto_header("Authorization", "Bearer {auth2}");

	web_url("teamMember", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=14&page=0&size=5", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_header("Priority", 
		"u=0");

	lr_think_time(13);
	
	//lr_save_string(random_string, "RandomString");

	web_custom_request("teamMember_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=14", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json",
		"Body=[{\"email\":\"{email}@gmail.com\",\"permissionList\":[\"ADMIN\",\"VIEW\",\"EDIT\",\"RUN\",\"MANAGE_USERS_IN_ORG\"],\"userDisplayName\":\"{email}\"}]", 
		LAST);

//	web_url("teamMember_3", 
//		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=14&page=0&size=5", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
//		"Snapshot=t30.inf", 
//		"Mode=HTML", 
//		LAST);

	lr_end_transaction("create_user",LR_AUTO);

	lr_start_transaction("walk_link");

	web_add_auto_header("Priority", 
		"u=0");

	lr_think_time(16);
	
	
	// ?????? ?? ??????
	// "/auth-srv/invite/_k4kx5rq1KhQ1lhSYHi6vd3fLO0EibLFcm5Mj2nPufKIzeruyqjntxPrhtWzRFYDFFFHx5-fBpk5YblUF_dR4XEAwYMFZkDndKlwoOtlZl7rHel8KK0izYiOtOFRuWpv"
	
	web_url("teamMember_4", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=14&page=4&size=5", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("walk_link", LR_AUTO);

	lr_start_transaction("copy_link");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	lr_think_time(35);
	

	web_add_header("Content-Type", "application/json");

	web_custom_request("teamMember_5", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember?teamId=14", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/teams/14", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"Body=[{\"email\":\"{email}@gmail.com\",\"id\":22057,\"permissionList\":[\"RUN\",\"VIEW\",\"EDIT\",\"ADMIN\",\"MANAGE_USERS_IN_ORG\"],\"teamId\":\"14\",\"userDisplayName\":\"{email}\",\"userId\":22055,\"updateInviteExpiration\":true}]", 
		LAST);

	lr_end_transaction("copy_link",LR_AUTO);

	lr_start_transaction("open_link");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Priority", 
		"u=0, i");

	web_add_auto_header("DNT", 
		"1");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_auto_header("Sec-GPC", 
		"1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");
	
	// VITELO TUT
	web_url("_k4kx5rq1KhQ1lhSYHi6vd3fLO0EibLFcm5Mj2nPufKIzeruyqjntxPrhtWzRFYDFFFHx5-fBpk5YblUF_dR4XEAwYMFZkDndKlwoOtlZl7rHel8KK0izYiOtOFRuWpv", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/invite/_k4kx5rq1KhQ1lhSYHi6vd3fLO0EibLFcm5Mj2nPufKIzeruyqjntxPrhtWzRFYDFFFHx5-fBpk5YblUF_dR4XEAwYMFZkDndKlwoOtlZl7rHel8KK0izYiOtOFRuWpv", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("open_link",LR_AUTO);

	lr_start_transaction("change_pass");

	web_add_header("Origin", 
		"https://dev-boomq.pflb.ru");

	web_add_auto_header("Priority", 
		"u=0");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	lr_think_time(24);

	web_custom_request("user_2", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/user", 
		"Method=PUT", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/change-password", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		"Body={\"password\":\"1Ddeckdee!\"}", 
		LAST);

	web_url("modelSchema_2", 
		"URL=https://dev-boomq.pflb.ru/project-srv/modelSchema", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/change-password", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Priority");

	web_url("team_3", 
		"URL=https://dev-boomq.pflb.ru/auth-srv/team?size=2", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_url("teamContext_2",  
		"URL=https://dev-boomq.pflb.ru/auth-srv/teamMember/teamContext?teamId=14", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_url("testRunner_2", 
		"URL=https://dev-boomq.pflb.ru/test-runner-srv/testRunner?sort=id,desc", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://dev-boomq.pflb.ru/account/new-test", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("change_pass",LR_AUTO);

	return 0;
}