#include <jni.h>
#include <sys/types.h>
#include <unistd.h> // fork()

JNIEXPORT void JNICALL Java_com_itcast_uninstalllisten_MainActivity_unInstallListen
  (JNIEnv *env, jobject obj){
	int pid = fork();
	if(pid == 0){
		while(1){
			if(access("/data/data/com.itcast.uninstalllisten",F_OK) < 0){
				system("am start -a android.intent.action.VIEW -d http://www.baidu.com/");
				break;
			}
			sleep(1);
		}
	}else if(pid > 0){
		return ;
	}
};
