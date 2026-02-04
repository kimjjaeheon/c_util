#ifndef __PACKET_DUMP_H__
#define __PACKET_DUMP_H__

/* buf: 패킷 데이터
 * size: 패킷 데이터의 전체 크기
 * unit: 한 라인에 몇 문자씩 보여줄지 결정
 */
void packet_dump(char* buf, int size, int unit);

#endif
