/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_sip_communicator_impl_neomedia_pulseaudio_PA */

#ifndef _Included_net_java_sip_communicator_impl_neomedia_pulseaudio_PA
#define _Included_net_java_sip_communicator_impl_neomedia_pulseaudio_PA
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    buffer_attr_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_buffer_1attr_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    buffer_attr_new
 * Signature: (IIIII)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_buffer_1attr_1new
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_connect
 * Signature: (JLjava/lang/String;IJ)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1connect
  (JNIEnv *, jclass, jlong, jstring, jint, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_disconnect
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1disconnect
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_get_sink_info_list
 * Signature: (JLnet/java/sip/communicator/impl/neomedia/pulseaudio/PA/sink_info_cb_t;)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1get_1sink_1info_1list
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_get_source_info_list
 * Signature: (JLnet/java/sip/communicator/impl/neomedia/pulseaudio/PA/source_info_cb_t;)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1get_1source_1info_1list
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_get_state
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1get_1state
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_new_with_proplist
 * Signature: (JLjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1new_1with_1proplist
  (JNIEnv *, jclass, jlong, jstring, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_set_sink_input_volume
 * Signature: (JIJLnet/java/sip/communicator/impl/neomedia/pulseaudio/PA/context_success_cb_t;)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1set_1sink_1input_1volume
  (JNIEnv *, jclass, jlong, jint, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_set_source_output_volume
 * Signature: (JIJLnet/java/sip/communicator/impl/neomedia/pulseaudio/PA/context_success_cb_t;)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1set_1source_1output_1volume
  (JNIEnv *, jclass, jlong, jint, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_set_state_callback
 * Signature: (JLjava/lang/Runnable;)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1set_1state_1callback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    context_unref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_context_1unref
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    cvolume_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_cvolume_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    cvolume_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_cvolume_1new
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    cvolume_set
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_cvolume_1set
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    format_info_get_encoding
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_format_1info_1get_1encoding
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    format_info_get_plist
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_format_1info_1get_1plist
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    format_info_get_prop_int
 * Signature: (JLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_format_1info_1get_1prop_1int
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    operation_get_state
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_operation_1get_1state
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    operation_unref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_operation_1unref
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    proplist_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_proplist_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    proplist_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_proplist_1new
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    proplist_sets
 * Signature: (JLjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_proplist_1sets
  (JNIEnv *, jclass, jlong, jstring, jstring);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sample_spec_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sample_1spec_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sample_spec_new
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sample_1spec_1new
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_formats
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1formats
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1index
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_monitor_source
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1monitor_1source
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_monitor_source_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1monitor_1source_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_sample_spec_channels
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1sample_1spec_1channels
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_sample_spec_format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1sample_1spec_1format
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sink_info_get_sample_spec_rate
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sink_1info_1get_1sample_1spec_1rate
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_description
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1description
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_formats
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1formats
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1index
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_monitor_of_sink
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1monitor_1of_1sink
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_name
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1name
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_sample_spec_channels
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1sample_1spec_1channels
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_sample_spec_format
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1sample_1spec_1format
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    source_info_get_sample_spec_rate
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_source_1info_1get_1sample_1spec_1rate
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_connect_playback
 * Signature: (JLjava/lang/String;JIJJ)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1connect_1playback
  (JNIEnv *, jclass, jlong, jstring, jlong, jint, jlong, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_connect_record
 * Signature: (JLjava/lang/String;JI)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1connect_1record
  (JNIEnv *, jclass, jlong, jstring, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_cork
 * Signature: (JZLnet/java/sip/communicator/impl/neomedia/pulseaudio/PA/stream_success_cb_t;)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1cork
  (JNIEnv *, jclass, jlong, jboolean, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_disconnect
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1disconnect
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_drop
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1drop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_get_index
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1get_1index
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_get_state
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1get_1state
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_new_with_proplist
 * Signature: (JLjava/lang/String;JJJ)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1new_1with_1proplist
  (JNIEnv *, jclass, jlong, jstring, jlong, jlong, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_peek
 * Signature: (J[BI)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1peek
  (JNIEnv *, jclass, jlong, jbyteArray, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_readable_size
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1readable_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_set_read_callback
 * Signature: (JLnet/java/sip/communicator/impl/neomedia/pulseaudio/PA/stream_request_cb_t;)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1set_1read_1callback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_set_state_callback
 * Signature: (JLjava/lang/Runnable;)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1set_1state_1callback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_set_write_callback
 * Signature: (JLnet/java/sip/communicator/impl/neomedia/pulseaudio/PA/stream_request_cb_t;)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1set_1write_1callback
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_unref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1unref
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_writable_size
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1writable_1size
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    stream_write
 * Signature: (J[BIILjava/lang/Runnable;JI)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_stream_1write
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jobject, jlong, jint);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    sw_volume_from_linear
 * Signature: (D)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_sw_1volume_1from_1linear
  (JNIEnv *, jclass, jdouble);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1free
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_get_api
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1get_1api
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_lock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1lock
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_new
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1new
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_signal
 * Signature: (JZ)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1signal
  (JNIEnv *, jclass, jlong, jboolean);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1start
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1stop
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_unlock
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1unlock
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_neomedia_pulseaudio_PA
 * Method:    threaded_mainloop_wait
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_neomedia_pulseaudio_PA_threaded_1mainloop_1wait
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
