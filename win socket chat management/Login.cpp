#include "Login.h"

using namespace std;

int LoginCheck(string id, string pw)
{
	Client::GetInstance()->SendLoginSignToServer(id, pw);

	Json::Value recvValue = Client::GetInstance()->RecvPacketToServer();
	if (recvValue == NULL)
		return Cancel;

	return recvValue["result"].asInt();
}

bool ConnectServer(string ip, string port)
{
	Client::GetInstance()->CloseSocket();	// 기존 연결 끊고 다시 연결 진행
	
	try
	{
		if (!(Client::GetInstance()->ConnectInit(ip, stoi(port))))	// 연결 실패 시
			return false;
	}
	catch (const std::exception&)
	{
		return false;
	}
	
	return true;
}