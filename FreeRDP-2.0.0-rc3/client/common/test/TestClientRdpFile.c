
#include <stdio.h>
#include <winpr/crt.h>
#include <winpr/windows.h>

#include <freerdp/client/file.h>

static const BYTE testRdpFileUTF16[] =
{
	0xff, 0xfe, 0x73, 0x00, 0x63, 0x00, 0x72, 0x00, 0x65, 0x00, 0x65, 0x00,
	0x6e, 0x00, 0x20, 0x00, 0x6d, 0x00, 0x6f, 0x00, 0x64, 0x00, 0x65, 0x00,
	0x20, 0x00, 0x69, 0x00, 0x64, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x32, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x75, 0x00, 0x73, 0x00, 0x65, 0x00,
	0x20, 0x00, 0x6d, 0x00, 0x75, 0x00, 0x6c, 0x00, 0x74, 0x00, 0x69, 0x00,
	0x6d, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x64, 0x00, 0x65, 0x00, 0x73, 0x00,
	0x6b, 0x00, 0x74, 0x00, 0x6f, 0x00, 0x70, 0x00, 0x77, 0x00, 0x69, 0x00,
	0x64, 0x00, 0x74, 0x00, 0x68, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x31, 0x00, 0x39, 0x00, 0x32, 0x00, 0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00,
	0x64, 0x00, 0x65, 0x00, 0x73, 0x00, 0x6b, 0x00, 0x74, 0x00, 0x6f, 0x00,
	0x70, 0x00, 0x68, 0x00, 0x65, 0x00, 0x69, 0x00, 0x67, 0x00, 0x68, 0x00,
	0x74, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x30, 0x00,
	0x38, 0x00, 0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x73, 0x00, 0x65, 0x00,
	0x73, 0x00, 0x73, 0x00, 0x69, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x20, 0x00,
	0x62, 0x00, 0x70, 0x00, 0x70, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x33, 0x00, 0x32, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x77, 0x00, 0x69, 0x00,
	0x6e, 0x00, 0x70, 0x00, 0x6f, 0x00, 0x73, 0x00, 0x73, 0x00, 0x74, 0x00,
	0x72, 0x00, 0x3a, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x30, 0x00, 0x2c, 0x00,
	0x31, 0x00, 0x2c, 0x00, 0x35, 0x00, 0x35, 0x00, 0x33, 0x00, 0x2c, 0x00,
	0x32, 0x00, 0x31, 0x00, 0x31, 0x00, 0x2c, 0x00, 0x31, 0x00, 0x33, 0x00,
	0x35, 0x00, 0x33, 0x00, 0x2c, 0x00, 0x38, 0x00, 0x31, 0x00, 0x31, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x63, 0x00, 0x6f, 0x00, 0x6d, 0x00, 0x70, 0x00,
	0x72, 0x00, 0x65, 0x00, 0x73, 0x00, 0x73, 0x00, 0x69, 0x00, 0x6f, 0x00,
	0x6e, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00,
	0x0a, 0x00, 0x6b, 0x00, 0x65, 0x00, 0x79, 0x00, 0x62, 0x00, 0x6f, 0x00,
	0x61, 0x00, 0x72, 0x00, 0x64, 0x00, 0x68, 0x00, 0x6f, 0x00, 0x6f, 0x00,
	0x6b, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x32, 0x00, 0x0d, 0x00,
	0x0a, 0x00, 0x61, 0x00, 0x75, 0x00, 0x64, 0x00, 0x69, 0x00, 0x6f, 0x00,
	0x63, 0x00, 0x61, 0x00, 0x70, 0x00, 0x74, 0x00, 0x75, 0x00, 0x72, 0x00,
	0x65, 0x00, 0x6d, 0x00, 0x6f, 0x00, 0x64, 0x00, 0x65, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x76, 0x00,
	0x69, 0x00, 0x64, 0x00, 0x65, 0x00, 0x6f, 0x00, 0x70, 0x00, 0x6c, 0x00,
	0x61, 0x00, 0x79, 0x00, 0x62, 0x00, 0x61, 0x00, 0x63, 0x00, 0x6b, 0x00,
	0x6d, 0x00, 0x6f, 0x00, 0x64, 0x00, 0x65, 0x00, 0x3a, 0x00, 0x69, 0x00,
	0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x63, 0x00, 0x6f, 0x00,
	0x6e, 0x00, 0x6e, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x69, 0x00,
	0x6f, 0x00, 0x6e, 0x00, 0x20, 0x00, 0x74, 0x00, 0x79, 0x00, 0x70, 0x00,
	0x65, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x37, 0x00, 0x0d, 0x00,
	0x0a, 0x00, 0x6e, 0x00, 0x65, 0x00, 0x74, 0x00, 0x77, 0x00, 0x6f, 0x00,
	0x72, 0x00, 0x6b, 0x00, 0x61, 0x00, 0x75, 0x00, 0x74, 0x00, 0x6f, 0x00,
	0x64, 0x00, 0x65, 0x00, 0x74, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00,
	0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00,
	0x62, 0x00, 0x61, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x77, 0x00, 0x69, 0x00,
	0x64, 0x00, 0x74, 0x00, 0x68, 0x00, 0x61, 0x00, 0x75, 0x00, 0x74, 0x00,
	0x6f, 0x00, 0x64, 0x00, 0x65, 0x00, 0x74, 0x00, 0x65, 0x00, 0x63, 0x00,
	0x74, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00,
	0x0a, 0x00, 0x64, 0x00, 0x69, 0x00, 0x73, 0x00, 0x70, 0x00, 0x6c, 0x00,
	0x61, 0x00, 0x79, 0x00, 0x63, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x6e, 0x00,
	0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x69, 0x00, 0x6f, 0x00, 0x6e, 0x00,
	0x62, 0x00, 0x61, 0x00, 0x72, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x61, 0x00,
	0x62, 0x00, 0x6c, 0x00, 0x65, 0x00, 0x77, 0x00, 0x6f, 0x00, 0x72, 0x00,
	0x6b, 0x00, 0x73, 0x00, 0x70, 0x00, 0x61, 0x00, 0x63, 0x00, 0x65, 0x00,
	0x72, 0x00, 0x65, 0x00, 0x63, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x6e, 0x00,
	0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x64, 0x00, 0x69, 0x00, 0x73, 0x00,
	0x61, 0x00, 0x62, 0x00, 0x6c, 0x00, 0x65, 0x00, 0x20, 0x00, 0x77, 0x00,
	0x61, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x70, 0x00, 0x61, 0x00, 0x70, 0x00,
	0x65, 0x00, 0x72, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x30, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x61, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x6f, 0x00,
	0x77, 0x00, 0x20, 0x00, 0x66, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x74, 0x00,
	0x20, 0x00, 0x73, 0x00, 0x6d, 0x00, 0x6f, 0x00, 0x6f, 0x00, 0x74, 0x00,
	0x68, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x67, 0x00, 0x3a, 0x00, 0x69, 0x00,
	0x3a, 0x00, 0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x61, 0x00, 0x6c, 0x00,
	0x6c, 0x00, 0x6f, 0x00, 0x77, 0x00, 0x20, 0x00, 0x64, 0x00, 0x65, 0x00,
	0x73, 0x00, 0x6b, 0x00, 0x74, 0x00, 0x6f, 0x00, 0x70, 0x00, 0x20, 0x00,
	0x63, 0x00, 0x6f, 0x00, 0x6d, 0x00, 0x70, 0x00, 0x6f, 0x00, 0x73, 0x00,
	0x69, 0x00, 0x74, 0x00, 0x69, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x64, 0x00,
	0x69, 0x00, 0x73, 0x00, 0x61, 0x00, 0x62, 0x00, 0x6c, 0x00, 0x65, 0x00,
	0x20, 0x00, 0x66, 0x00, 0x75, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x20, 0x00,
	0x77, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x6f, 0x00, 0x77, 0x00,
	0x20, 0x00, 0x64, 0x00, 0x72, 0x00, 0x61, 0x00, 0x67, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x64, 0x00,
	0x69, 0x00, 0x73, 0x00, 0x61, 0x00, 0x62, 0x00, 0x6c, 0x00, 0x65, 0x00,
	0x20, 0x00, 0x6d, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x75, 0x00, 0x20, 0x00,
	0x61, 0x00, 0x6e, 0x00, 0x69, 0x00, 0x6d, 0x00, 0x73, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x64, 0x00,
	0x69, 0x00, 0x73, 0x00, 0x61, 0x00, 0x62, 0x00, 0x6c, 0x00, 0x65, 0x00,
	0x20, 0x00, 0x74, 0x00, 0x68, 0x00, 0x65, 0x00, 0x6d, 0x00, 0x65, 0x00,
	0x73, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x30, 0x00, 0x0d, 0x00,
	0x0a, 0x00, 0x64, 0x00, 0x69, 0x00, 0x73, 0x00, 0x61, 0x00, 0x62, 0x00,
	0x6c, 0x00, 0x65, 0x00, 0x20, 0x00, 0x63, 0x00, 0x75, 0x00, 0x72, 0x00,
	0x73, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x20, 0x00, 0x73, 0x00, 0x65, 0x00,
	0x74, 0x00, 0x74, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x67, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x62, 0x00,
	0x69, 0x00, 0x74, 0x00, 0x6d, 0x00, 0x61, 0x00, 0x70, 0x00, 0x63, 0x00,
	0x61, 0x00, 0x63, 0x00, 0x68, 0x00, 0x65, 0x00, 0x70, 0x00, 0x65, 0x00,
	0x72, 0x00, 0x73, 0x00, 0x69, 0x00, 0x73, 0x00, 0x74, 0x00, 0x65, 0x00,
	0x6e, 0x00, 0x61, 0x00, 0x62, 0x00, 0x6c, 0x00, 0x65, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x66, 0x00,
	0x75, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x20, 0x00, 0x61, 0x00, 0x64, 0x00,
	0x64, 0x00, 0x72, 0x00, 0x65, 0x00, 0x73, 0x00, 0x73, 0x00, 0x3a, 0x00,
	0x73, 0x00, 0x3a, 0x00, 0x4c, 0x00, 0x41, 0x00, 0x42, 0x00, 0x31, 0x00,
	0x2d, 0x00, 0x57, 0x00, 0x37, 0x00, 0x2d, 0x00, 0x44, 0x00, 0x4d, 0x00,
	0x2d, 0x00, 0x30, 0x00, 0x31, 0x00, 0x2e, 0x00, 0x6c, 0x00, 0x61, 0x00,
	0x62, 0x00, 0x31, 0x00, 0x2e, 0x00, 0x61, 0x00, 0x77, 0x00, 0x61, 0x00,
	0x6b, 0x00, 0x65, 0x00, 0x2e, 0x00, 0x6c, 0x00, 0x6f, 0x00, 0x63, 0x00,
	0x61, 0x00, 0x6c, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x61, 0x00, 0x75, 0x00,
	0x64, 0x00, 0x69, 0x00, 0x6f, 0x00, 0x6d, 0x00, 0x6f, 0x00, 0x64, 0x00,
	0x65, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x30, 0x00, 0x0d, 0x00,
	0x0a, 0x00, 0x72, 0x00, 0x65, 0x00, 0x64, 0x00, 0x69, 0x00, 0x72, 0x00,
	0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x70, 0x00, 0x72, 0x00, 0x69, 0x00,
	0x6e, 0x00, 0x74, 0x00, 0x65, 0x00, 0x72, 0x00, 0x73, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x72, 0x00,
	0x65, 0x00, 0x64, 0x00, 0x69, 0x00, 0x72, 0x00, 0x65, 0x00, 0x63, 0x00,
	0x74, 0x00, 0x63, 0x00, 0x6f, 0x00, 0x6d, 0x00, 0x70, 0x00, 0x6f, 0x00,
	0x72, 0x00, 0x74, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x72, 0x00, 0x65, 0x00, 0x64, 0x00,
	0x69, 0x00, 0x72, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x73, 0x00,
	0x6d, 0x00, 0x61, 0x00, 0x72, 0x00, 0x74, 0x00, 0x63, 0x00, 0x61, 0x00,
	0x72, 0x00, 0x64, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x72, 0x00, 0x65, 0x00, 0x64, 0x00,
	0x69, 0x00, 0x72, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x63, 0x00,
	0x6c, 0x00, 0x69, 0x00, 0x70, 0x00, 0x62, 0x00, 0x6f, 0x00, 0x61, 0x00,
	0x72, 0x00, 0x64, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x72, 0x00, 0x65, 0x00, 0x64, 0x00, 0x69, 0x00,
	0x72, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x70, 0x00, 0x6f, 0x00,
	0x73, 0x00, 0x64, 0x00, 0x65, 0x00, 0x76, 0x00, 0x69, 0x00, 0x63, 0x00,
	0x65, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x30, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x61, 0x00, 0x75, 0x00, 0x74, 0x00, 0x6f, 0x00,
	0x72, 0x00, 0x65, 0x00, 0x63, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x6e, 0x00,
	0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x69, 0x00, 0x6f, 0x00, 0x6e, 0x00,
	0x20, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x61, 0x00, 0x62, 0x00, 0x6c, 0x00,
	0x65, 0x00, 0x64, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x61, 0x00, 0x75, 0x00, 0x74, 0x00, 0x68, 0x00,
	0x65, 0x00, 0x6e, 0x00, 0x74, 0x00, 0x69, 0x00, 0x63, 0x00, 0x61, 0x00,
	0x74, 0x00, 0x69, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x20, 0x00, 0x6c, 0x00,
	0x65, 0x00, 0x76, 0x00, 0x65, 0x00, 0x6c, 0x00, 0x3a, 0x00, 0x69, 0x00,
	0x3a, 0x00, 0x32, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x70, 0x00, 0x72, 0x00,
	0x6f, 0x00, 0x6d, 0x00, 0x70, 0x00, 0x74, 0x00, 0x20, 0x00, 0x66, 0x00,
	0x6f, 0x00, 0x72, 0x00, 0x20, 0x00, 0x63, 0x00, 0x72, 0x00, 0x65, 0x00,
	0x64, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x74, 0x00, 0x69, 0x00, 0x61, 0x00,
	0x6c, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x30, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x6e, 0x00, 0x65, 0x00, 0x67, 0x00, 0x6f, 0x00,
	0x74, 0x00, 0x69, 0x00, 0x61, 0x00, 0x74, 0x00, 0x65, 0x00, 0x20, 0x00,
	0x73, 0x00, 0x65, 0x00, 0x63, 0x00, 0x75, 0x00, 0x72, 0x00, 0x69, 0x00,
	0x74, 0x00, 0x79, 0x00, 0x20, 0x00, 0x6c, 0x00, 0x61, 0x00, 0x79, 0x00,
	0x65, 0x00, 0x72, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x72, 0x00, 0x65, 0x00, 0x6d, 0x00, 0x6f, 0x00,
	0x74, 0x00, 0x65, 0x00, 0x61, 0x00, 0x70, 0x00, 0x70, 0x00, 0x6c, 0x00,
	0x69, 0x00, 0x63, 0x00, 0x61, 0x00, 0x74, 0x00, 0x69, 0x00, 0x6f, 0x00,
	0x6e, 0x00, 0x6d, 0x00, 0x6f, 0x00, 0x64, 0x00, 0x65, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x61, 0x00,
	0x6c, 0x00, 0x74, 0x00, 0x65, 0x00, 0x72, 0x00, 0x6e, 0x00, 0x61, 0x00,
	0x74, 0x00, 0x65, 0x00, 0x20, 0x00, 0x73, 0x00, 0x68, 0x00, 0x65, 0x00,
	0x6c, 0x00, 0x6c, 0x00, 0x3a, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x0d, 0x00,
	0x0a, 0x00, 0x73, 0x00, 0x68, 0x00, 0x65, 0x00, 0x6c, 0x00, 0x6c, 0x00,
	0x20, 0x00, 0x77, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x6b, 0x00, 0x69, 0x00,
	0x6e, 0x00, 0x67, 0x00, 0x20, 0x00, 0x64, 0x00, 0x69, 0x00, 0x72, 0x00,
	0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x79, 0x00,
	0x3a, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x67, 0x00,
	0x61, 0x00, 0x74, 0x00, 0x65, 0x00, 0x77, 0x00, 0x61, 0x00, 0x79, 0x00,
	0x68, 0x00, 0x6f, 0x00, 0x73, 0x00, 0x74, 0x00, 0x6e, 0x00, 0x61, 0x00,
	0x6d, 0x00, 0x65, 0x00, 0x3a, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x4c, 0x00,
	0x41, 0x00, 0x42, 0x00, 0x31, 0x00, 0x2d, 0x00, 0x57, 0x00, 0x32, 0x00,
	0x4b, 0x00, 0x38, 0x00, 0x52, 0x00, 0x32, 0x00, 0x2d, 0x00, 0x47, 0x00,
	0x57, 0x00, 0x2e, 0x00, 0x6c, 0x00, 0x61, 0x00, 0x62, 0x00, 0x31, 0x00,
	0x2e, 0x00, 0x61, 0x00, 0x77, 0x00, 0x61, 0x00, 0x6b, 0x00, 0x65, 0x00,
	0x2e, 0x00, 0x6c, 0x00, 0x6f, 0x00, 0x63, 0x00, 0x61, 0x00, 0x6c, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x67, 0x00, 0x61, 0x00, 0x74, 0x00, 0x65, 0x00,
	0x77, 0x00, 0x61, 0x00, 0x79, 0x00, 0x75, 0x00, 0x73, 0x00, 0x61, 0x00,
	0x67, 0x00, 0x65, 0x00, 0x6d, 0x00, 0x65, 0x00, 0x74, 0x00, 0x68, 0x00,
	0x6f, 0x00, 0x64, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x31, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x67, 0x00, 0x61, 0x00, 0x74, 0x00, 0x65, 0x00,
	0x77, 0x00, 0x61, 0x00, 0x79, 0x00, 0x63, 0x00, 0x72, 0x00, 0x65, 0x00,
	0x64, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x74, 0x00, 0x69, 0x00, 0x61, 0x00,
	0x6c, 0x00, 0x73, 0x00, 0x73, 0x00, 0x6f, 0x00, 0x75, 0x00, 0x72, 0x00,
	0x63, 0x00, 0x65, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x30, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x67, 0x00, 0x61, 0x00, 0x74, 0x00, 0x65, 0x00,
	0x77, 0x00, 0x61, 0x00, 0x79, 0x00, 0x70, 0x00, 0x72, 0x00, 0x6f, 0x00,
	0x66, 0x00, 0x69, 0x00, 0x6c, 0x00, 0x65, 0x00, 0x75, 0x00, 0x73, 0x00,
	0x61, 0x00, 0x67, 0x00, 0x65, 0x00, 0x6d, 0x00, 0x65, 0x00, 0x74, 0x00,
	0x68, 0x00, 0x6f, 0x00, 0x64, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x70, 0x00, 0x72, 0x00, 0x6f, 0x00,
	0x6d, 0x00, 0x70, 0x00, 0x74, 0x00, 0x63, 0x00, 0x72, 0x00, 0x65, 0x00,
	0x64, 0x00, 0x65, 0x00, 0x6e, 0x00, 0x74, 0x00, 0x69, 0x00, 0x61, 0x00,
	0x6c, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x63, 0x00, 0x65, 0x00, 0x3a, 0x00,
	0x69, 0x00, 0x3a, 0x00, 0x31, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x75, 0x00,
	0x73, 0x00, 0x65, 0x00, 0x20, 0x00, 0x72, 0x00, 0x65, 0x00, 0x64, 0x00,
	0x69, 0x00, 0x72, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00, 0x69, 0x00,
	0x6f, 0x00, 0x6e, 0x00, 0x20, 0x00, 0x73, 0x00, 0x65, 0x00, 0x72, 0x00,
	0x76, 0x00, 0x65, 0x00, 0x72, 0x00, 0x20, 0x00, 0x6e, 0x00, 0x61, 0x00,
	0x6d, 0x00, 0x65, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00, 0x30, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x72, 0x00, 0x64, 0x00, 0x67, 0x00, 0x69, 0x00,
	0x73, 0x00, 0x6b, 0x00, 0x64, 0x00, 0x63, 0x00, 0x70, 0x00, 0x72, 0x00,
	0x6f, 0x00, 0x78, 0x00, 0x79, 0x00, 0x3a, 0x00, 0x69, 0x00, 0x3a, 0x00,
	0x30, 0x00, 0x0d, 0x00, 0x0a, 0x00, 0x6b, 0x00, 0x64, 0x00, 0x63, 0x00,
	0x70, 0x00, 0x72, 0x00, 0x6f, 0x00, 0x78, 0x00, 0x79, 0x00, 0x6e, 0x00,
	0x61, 0x00, 0x6d, 0x00, 0x65, 0x00, 0x3a, 0x00, 0x73, 0x00, 0x3a, 0x00,
	0x0d, 0x00, 0x0a, 0x00, 0x64, 0x00, 0x72, 0x00, 0x69, 0x00, 0x76, 0x00,
	0x65, 0x00, 0x73, 0x00, 0x74, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x65, 0x00,
	0x64, 0x00, 0x69, 0x00, 0x72, 0x00, 0x65, 0x00, 0x63, 0x00, 0x74, 0x00,
	0x3a, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x2a, 0x00, 0x0d, 0x00, 0x0a, 0x00,
	0x75, 0x00, 0x73, 0x00, 0x65, 0x00, 0x72, 0x00, 0x6e, 0x00, 0x61, 0x00,
	0x6d, 0x00, 0x65, 0x00, 0x3a, 0x00, 0x73, 0x00, 0x3a, 0x00, 0x4c, 0x00,
	0x41, 0x00, 0x42, 0x00, 0x31, 0x00, 0x5c, 0x00, 0x4a, 0x00, 0x6f, 0x00,
	0x68, 0x00, 0x6e, 0x00, 0x44, 0x00, 0x6f, 0x00, 0x65, 0x00, 0x0d, 0x00,
	0x0a, 0x00
};

static char testRdpFileUTF8[] =
    "screen mode id:i:2\n"
    "use multimon:i:0\n"
    "desktopwidth:i:1920\n"
    "desktopheight:i:1080\n"
    "session bpp:i:32\n"
    "winposstr:s:0,1,553,211,1353,811\n"
    "compression:i:1\n"
    "keyboardhook:i:2\n"
    "audiocapturemode:i:0\n"
    "videoplaybackmode:i:1\n"
    "connection type:i:7\n"
    "networkautodetect:i:1\n"
    "bandwidthautodetect:i:1\n"
    "displayconnectionbar:i:1\n"
    "enableworkspacereconnect:i:0\n"
    "disable wallpaper:i:0\n"
    "allow font smoothing:i:0\n"
    "allow desktop composition:i:0\n"
    "disable full window drag:i:1\n"
    "disable menu anims:i:1\n"
    "disable themes:i:0\n"
    "disable cursor setting:i:0\n"
    "bitmapcachepersistenable:i:1\n"
    "full address:s:LAB1-W7-DM-01.lab1.awake.local\n"
    "audiomode:i:0\n"
    "redirectprinters:i:1\n"
    "redirectcomports:i:0\n"
    "redirectsmartcards:i:1\n"
    "redirectclipboard:i:1\n"
    "redirectposdevices:i:0\n"
    "autoreconnection enabled:i:1\n"
    "authentication level:i:2\n"
    "prompt for credentials:i:0\n"
    "negotiate security layer:i:1\n"
    "remoteapplicationmode:i:0\n"
    "alternate shell:s:\n"
    "shell working directory:s:\n"
    "gatewayhostname:s:LAB1-W2K8R2-GW.lab1.awake.local\n"
    "gatewayusagemethod:i:1\n"
    "gatewaycredentialssource:i:0\n"
    "gatewayprofileusagemethod:i:1\n"
    "promptcredentialonce:i:1\n"
    "use redirection server name:i:0\n"
    "rdgiskdcproxy:i:0\n"
    "kdcproxyname:s:\n"
    "drivestoredirect:s:*\n"
    "username:s:LAB1\\JohnDoe\n"
    "vendor integer:i:123\n"
    "vendor string:s:microsoft\n";

int TestClientRdpFile(int argc, char* argv[])
{
	int index;
	int iValue;
	char* sValue;
	rdpFile* file;
	rdpFileLine* line;
	/* Unicode */
	file = freerdp_client_rdp_file_new();

	if (!file)
	{
		printf("rdp_file_new failed\n");
		return -1;
	}

	freerdp_client_parse_rdp_file_buffer(file, testRdpFileUTF16, sizeof(testRdpFileUTF16));

	if (file->UseMultiMon != 0)
	{
		printf("UseMultiMon mismatch: Actual: %"PRIu32", Expected: 0\n", file->UseMultiMon);
		return -1;
	}

	if (file->ScreenModeId != 2)
	{
		printf("ScreenModeId mismatch: Actual: %"PRIu32", Expected: 2\n", file->ScreenModeId);
		return -1;
	}

	if (file->GatewayProfileUsageMethod != 1)
	{
		printf("GatewayProfileUsageMethod mismatch: Actual: %"PRIu32", Expected: 1\n",
		       file->GatewayProfileUsageMethod);
		return -1;
	}

	if (strcmp(file->GatewayHostname, "LAB1-W2K8R2-GW.lab1.awake.local") != 0)
	{
		printf("GatewayHostname mismatch: Actual: %s, Expected: %s\n",
		       file->GatewayHostname, "LAB1-W2K8R2-GW.lab1.awake.local");
		return -1;
	}

	freerdp_client_rdp_file_free(file);
	/* Ascii */
	file = freerdp_client_rdp_file_new();
	freerdp_client_parse_rdp_file_buffer(file, (BYTE*) testRdpFileUTF8, sizeof(testRdpFileUTF8));

	if (file->UseMultiMon != 0)
	{
		printf("UseMultiMon mismatch: Actual: %"PRIu32", Expected: 0\n", file->UseMultiMon);
		return -1;
	}

	if (file->ScreenModeId != 2)
	{
		printf("ScreenModeId mismatch: Actual: %"PRIu32", Expected: 2\n", file->ScreenModeId);
		return -1;
	}

	if (file->GatewayProfileUsageMethod != 1)
	{
		printf("GatewayProfileUsageMethod mismatch: Actual: %"PRIu32", Expected: 1\n",
		       file->GatewayProfileUsageMethod);
		return -1;
	}

	if (strcmp(file->GatewayHostname, "LAB1-W2K8R2-GW.lab1.awake.local") != 0)
	{
		printf("GatewayHostname mismatch: Actual: %s, Expected: %s\n",
		       file->GatewayHostname, "LAB1-W2K8R2-GW.lab1.awake.local");
		return -1;
	}

	iValue = freerdp_client_rdp_file_get_integer_option(file, "vendor integer");
	if (iValue != 123)
		return -1;

	if (freerdp_client_rdp_file_set_integer_option(file, "vendor integer", 456) == -1)
	{
		printf("failed to set integer: vendor integer");
		return -1;
	}

	iValue = freerdp_client_rdp_file_get_integer_option(file, "vendor integer");
	if (iValue != 456)
		return -1;

	sValue = (char*) freerdp_client_rdp_file_get_string_option(file, "vendor string");
	if (strncmp(sValue, "microsoft", 10) != 0)
		return -1;

	freerdp_client_rdp_file_set_string_option(file, "vendor string", "apple");
	sValue = (char*) freerdp_client_rdp_file_get_string_option(file, "vendor string");
	if (strncmp(sValue, "apple", 6) != 0)
		return -1;

	freerdp_client_rdp_file_set_string_option(file, "fruits", "banana,oranges");

	if (freerdp_client_rdp_file_set_integer_option(file, "numbers", 123456789) == -1)
	{
		printf("failed to set integer: numbers");
		return -1;
	}

	for (index = 0; index < file->lineCount; index++)
	{
		line = &(file->lines[index]);

		if (line->flags & RDP_FILE_LINE_FLAG_FORMATTED)
		{
			if (line->flags & RDP_FILE_LINE_FLAG_TYPE_STRING)
			{
				printf("line %02d: name: %s value: %s, %s\n",
				       line->index, line->name, line->sValue,
				       (line->flags & RDP_FILE_LINE_FLAG_STANDARD) ? "standard" : "non-standard");
			}
			else if (line->flags & RDP_FILE_LINE_FLAG_TYPE_INTEGER)
			{
				printf("line %02d: name: %s value: %"PRIu32", %s\n",
				       line->index, line->name, line->iValue,
				       (line->flags & RDP_FILE_LINE_FLAG_STANDARD) ? "standard" : "non-standard");
			}
		}
	}

	freerdp_client_rdp_file_free(file);
	return 0;
}
