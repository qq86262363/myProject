package com.itcast.uninstalllisten;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;

public class MainActivity extends Activity {
	static{
		System.loadLibrary("uninstalllisten-jni");
	}

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		
		unInstallListen();
		
	}

	public native void unInstallListen();
}
