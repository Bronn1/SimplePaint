#############################################################################
# Makefile for building: SimplePaint
# Generated by qmake (3.1) (Qt 5.9.2)
# Project:  src\SimplePaint.pro
# Template: app
# Command: D:\qtT\5.9.2\mingw53_32\bin\qmake.exe -o Makefile src\SimplePaint.pro -spec win32-g++
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = D:\qtT\5.9.2\mingw53_32\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = D:\qtT\5.9.2\mingw53_32\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = D:\qtT\5.9.2\mingw53_32\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: src/SimplePaint.pro ../../qtT/5.9.2/mingw53_32/mkspecs/features/spec_pre.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/qdevice.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/device_config.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/common/g++-base.conf \
		../../qtT/5.9.2/mingw53_32/mkspecs/common/angle.conf \
		../../qtT/5.9.2/mingw53_32/mkspecs/common/sanitize.conf \
		../../qtT/5.9.2/mingw53_32/mkspecs/common/gcc-base.conf \
		../../qtT/5.9.2/mingw53_32/mkspecs/qconfig.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3drender.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axbase.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axserver.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_charts.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_charts_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_core.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_core_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_datavisualization.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_datavisualization_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_dbus.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_designer.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gui.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_help.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_help_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_location.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_location_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_network.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_network_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_networkauth.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_networkauth_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_nfc.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_opengl.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_positioning.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_purchasing.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_purchasing_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qml.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quick.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_remoteobjects.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_remoteobjects_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_repparser.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_repparser_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_script.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_script_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scripttools.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scxml.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sensors.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialport.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sql.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_svg.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_testlib.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_uitools.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_websockets.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_widgets.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_winextras.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xml.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/qt_functions.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/qt_config.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/win32-g++/qmake.conf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/spec_post.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/exclusive_builds.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/toolchain.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/default_pre.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/win32/default_pre.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/resolve_config.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/exclusive_builds_post.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/default_post.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/precompile_header.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/warn_on.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/qt.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/resources.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/moc.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/win32/opengl.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/uic.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/qmake_use.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/file_copies.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/win32/windows.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/testcase_targets.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/exceptions.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/yacc.prf \
		../../qtT/5.9.2/mingw53_32/mkspecs/features/lex.prf \
		src/SimplePaint.pro \
		../../qtT/5.9.2/mingw53_32/lib/qtmain.prl \
		../../qtT/5.9.2/mingw53_32/lib/Qt5Widgets.prl \
		../../qtT/5.9.2/mingw53_32/lib/Qt5Gui.prl \
		../../qtT/5.9.2/mingw53_32/lib/Qt5Core.prl
	$(QMAKE) -o Makefile src\SimplePaint.pro -spec win32-g++
../../qtT/5.9.2/mingw53_32/mkspecs/features/spec_pre.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/qdevice.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/features/device_config.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/common/g++-base.conf:
../../qtT/5.9.2/mingw53_32/mkspecs/common/angle.conf:
../../qtT/5.9.2/mingw53_32/mkspecs/common/sanitize.conf:
../../qtT/5.9.2/mingw53_32/mkspecs/common/gcc-base.conf:
../../qtT/5.9.2/mingw53_32/mkspecs/qconfig.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3danimation.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3danimation_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dcore.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dcore_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dextras.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dextras_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dinput.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dinput_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dlogic_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquick.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquick_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickanimation_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickextras_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickinput_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickrender_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3dquickscene2d_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3drender.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_3drender_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_accessibility_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axbase.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axserver.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_charts.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_charts_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_concurrent.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_core.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_core_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_datavisualization.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_datavisualization_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_dbus.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_dbus_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_designer.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_designer_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_egl_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_eventdispatcher_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_fb_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_fontdatabase_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gamepad.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gamepad_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gui.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_gui_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_help.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_help_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_location.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_location_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimedia.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_network.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_network_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_networkauth.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_networkauth_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_nfc.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_opengl.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_packetprotocol_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_platformcompositor_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_positioning.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_printsupport.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_purchasing.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_purchasing_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qml.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qml_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmldebug_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmltest.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quick.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quick_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_remoteobjects.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_remoteobjects_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_repparser.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_repparser_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_script.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_script_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scripttools.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scripttools_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scxml.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_scxml_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sensors.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialbus.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialbus_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialport.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sql.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_sql_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_svg.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_svg_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_testlib.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_texttospeech_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_theme_support_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_uiplugin.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_uitools.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_webchannel.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_websockets.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_widgets.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_winextras.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xml.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xml_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../qtT/5.9.2/mingw53_32/mkspecs/features/qt_functions.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/qt_config.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/win32-g++/qmake.conf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/spec_post.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/exclusive_builds.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/toolchain.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/default_pre.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/win32/default_pre.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/resolve_config.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/exclusive_builds_post.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/default_post.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/precompile_header.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/warn_on.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/qt.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/resources.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/moc.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/win32/opengl.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/uic.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/qmake_use.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/file_copies.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/win32/windows.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/testcase_targets.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/exceptions.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/yacc.prf:
../../qtT/5.9.2/mingw53_32/mkspecs/features/lex.prf:
src/SimplePaint.pro:
../../qtT/5.9.2/mingw53_32/lib/qtmain.prl:
../../qtT/5.9.2/mingw53_32/lib/Qt5Widgets.prl:
../../qtT/5.9.2/mingw53_32/lib/Qt5Gui.prl:
../../qtT/5.9.2/mingw53_32/lib/Qt5Core.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile src\SimplePaint.pro -spec win32-g++

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile