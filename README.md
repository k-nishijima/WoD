WoD Time Counter
================

2�̎��ԃJ�E���^��Arudino�ɐڑ����ꂽ�v�b�V���X�C�b�`��on/off�ł���A�v���ł��B

2013/5/3�ɊJ�Â������mde�T�o�C���ō�����V�[���h��p���邱�Ƃ��l���č��܂������A
�u���b�h�{�[�h��2�̃X�C�b�`��t���Ďg�����Ƃ��ł��܂��B

timercounter�f�B���N�g����Arduino�̃X�P�b�`�AWoD��Java�̃R�[�h�������Ă��܂��B

�A�v����java�ŏ�����Ă���AJavaFX���C�u�������g���Ă��܂��B
jdk1.7.0_21�œ���m�F���Ă��܂��B


�g����
======

Arduino IDE���g����timecounter.ico�̃X�P�b�`���R���p�C�����AArduino�ɏ������݂܂��B

Arduino�ƃV���A���ʐM���邽�߂ɁARxTxSerial���C�u�����̐ݒ肪�K�v�ɂȂ�܂��B

�A�v���𗧂��グ��ƁA�g�p�\�ȃV���A���|�[�g���񋓂���܂��̂ŁAArduino��
�ڑ�����Ă���|�[�g��I�����AConn�{�^���������܂��B

�I�����W�̃{�^���������ƍ��̃J�E���^�������A���̃{�^���������ƉE�̃J�E���^�������܂��B
���������Ɨ����̃J�E���^����~���܂��B

Clear�{�^���������ƃJ�E���^����~���A�J�E���^�l���[���ɃN���A����܂��B


�A�v�����������オ���Ă���΂��ł��{�^���������ăJ�E���^��؂�ւ��邱�Ƃ��ł��܂��B


���p
----

�����̎��ԃJ�E���^�ł����A�d�����������ԁA�����łȂ����Ԃ��J�E���g�������
���Ɍ��ȃA�v���ɂȂ�܂��B

����Ȋ����ɂȂ�܂��B

* ���Ɍ������Ďd�����J�n������I�����W�̃{�^��������
* ��������web�̃j���[�X�����n�߂��獕�̃{�^��������
* �d�����ĊJ������I�����W�̃{�^��������
* �^�o�R���z���ɍs���Ƃ��ɃN���̃{�^��������
* �ȂǂȂ�

����ɂ��A�d�����������ԁA�����łȂ����Ԃ����m�ɂ킩��܂��B

���̃A�v������ʂ̏�ɖڂɂ��ꏊ�ɕ\�����Ă���Ƃ��������ȃv���b�V���[�������邱�Ƃ��ł��܂��B


windows7 x64�ł̃Z�b�g�A�b�v
============================

java����V���A���|�[�g���g����悤�ɂ��܂��B

...��ŒǋL���܂�...


mac�ł̃Z�b�g�A�b�v
===================

java����V���A���|�[�g���g����悤�ɂ��܂��B�菇�͐F�X����Ǝv���܂����A
arduino IDE�����łɃC���X�g�[�����Ă��邱�Ƃ�O��ɂ��Ă��܂��B

arduino.app�̒��ɓ���AContents/Resources/java/RXTXcomm.jar��/Library/Java/Extensions�ɃR�s�[���܂��B
librxtxSerial.jnilib���K�v�ł����Aarduino IDE�ɂ�����̂�64bit�Ή��ł͂Ȃ����߁A�����ł͎g�p���܂���B

64bit�Ή���librxtxSerial.jnilib�͈ȉ���URL����_�E�����[�h���܂��B
http://code.google.com/p/arduino/issues/detail?id=172

�����/Library/Java/Extensions�ɃR�s�[���܂��B

RxTxSerial���g�p����r������p�̃f�B���N�g������邽�߁A�^�[�~�i���ňȉ��̃R�}���h�����s���܂��B

 sudo mkdir /var/lock
 sudo chmod 777 /var/lock


license
=======
GPLv2
