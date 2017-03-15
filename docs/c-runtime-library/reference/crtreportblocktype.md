---
title: _CrtReportBlockType | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _CrtReportBlockType
apilocation:
- msvcrt.dll
- msvcr80.dll
- msvcr90.dll
- msvcr100.dll
- msvcr100_clr0400.dll
- msvcr110.dll
- msvcr110_clr0400.dll
- msvcr120.dll
- msvcr120_clr0400.dll
- ucrtbase.dll
apitype: DLLExport
f1_keywords:
- _CrtReportBlockType
- CrtReportBlockType
dev_langs:
- C++
helpviewer_keywords:
- CrtReportBlockType function
- BLOCK_SUBTYPE macro
- _CrtReportBlockType function
- _BLOCK_TYPE macro
- _BLOCK_SUBTYPE macro
- BLOCK_TYPE macro
ms.assetid: 0f4b9da7-bebb-4956-9541-b2581640ec6b
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 79724d6f719c3c482e25622ffbaa636f98517cdc
ms.lasthandoff: 02/24/2017

---
# <a name="crtreportblocktype"></a>_CrtReportBlockType
Restituisce il tipo/sottotipo di blocco associato a un puntatore di blocco dell'heap di debug specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      int _CrtReportBlockType(  
   const void * pBlock  
};  
```  
  
#### <a name="parameters"></a>Parametri  
 *pBlock*  
 Puntatore a un blocco di heap per il debug valido.  
  
## <a name="return-value"></a>Valore restituito  
 Se viene passato un puntatore di heap per il debug valido, la funzione `_CrtReportBlockType` restituisce il tipo e il sottotipo di blocco sotto forma di `int`. Se viene passato un puntatore non valido, la funzione restituisce -1.  
  
## <a name="remarks"></a>Note  
 Per estrarre il tipo e sottotipo restituito da `_CrtReportBlockType`, usare le macro **_BLOCK_TYPE** e **_BLOCK_SUBTYPE** (entrambe definite in Crtdbg.h) sul valore restituito.  
  
 Per informazioni sui tipi di blocchi di allocazione e su come vengono usati, vedere [Tipi di blocchi sull'heap di debug](/visualstudio/debugger/crt-debug-heap-details).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_CrtReportBlockType`|\<crtdbg.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Solo le versioni di debug delle [librerie di runtime di C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_crtreportblocktype.cpp  
// compile with: /MDd  
  
#include <malloc.h>  
#include <stdio.h>  
#include <crtdbg.h>  
  
void __cdecl Dumper(void *ptr, void *)  
{  
    int block = _CrtReportBlockType(ptr);  
    _RPT3(_CRT_WARN, "Dumper found block at %p: type %d, subtype %d\n", ptr,  
          _BLOCK_TYPE(block), _BLOCK_SUBTYPE(block));  
}  
  
void __cdecl LeakDumper(void *ptr, size_t sz)  
{  
    int block = _CrtReportBlockType(ptr);  
    _RPT4(_CRT_WARN, "LeakDumper found block at %p:"  
                     " type %d, subtype %d, size %d\n", ptr,  
          _BLOCK_TYPE(block), _BLOCK_SUBTYPE(block), sz);  
}  
  
int main(void)  
{  
    _CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) |   
    _CRTDBG_LEAK_CHECK_DF);  
    _CrtSetReportMode( _CRT_WARN, _CRTDBG_MODE_FILE );  
    _CrtSetReportFile( _CRT_WARN, _CRTDBG_FILE_STDOUT );  
    _malloc_dbg(10, _NORMAL_BLOCK , __FILE__, __LINE__);  
    _malloc_dbg(10, _CLIENT_BLOCK | (1 << 16), __FILE__, __LINE__);  
    _malloc_dbg(20, _CLIENT_BLOCK | (2 << 16), __FILE__, __LINE__);  
    _malloc_dbg(30, _CLIENT_BLOCK | (3 << 16), __FILE__, __LINE__);  
    _CrtDoForAllClientObjects(Dumper, NULL);  
    _CrtSetDumpClient(LeakDumper);  
}  
```  
  
## <a name="sample-output"></a>Esempio di output  
  
```  
Dumper found block at 00314F78: type 4, subtype 3  
Dumper found block at 00314F38: type 4, subtype 2  
Dumper found block at 00314F00: type 4, subtype 1  
Detected memory leaks!  
Dumping objects ->  
crt_crtreportblocktype.cpp(30) : {55} client block at 0x00314F78, subtype 3, 30 bytes long.  
 Data: <                > CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD  
crt_crtreportblocktype.cpp(29) : {54} client block at 0x00314F38, subtype 2, 20 bytes long.  
 Data: <                > CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD CD  
crt_crtreportblocktype.cpp(28) : {53} client block at 0x00314F00, subtype 1, 10 bytes long.  
 Data: <          > CD CD CD CD CD CD CD CD CD CD  
crt_crtreportblocktype.cpp(27) : {52} normal block at 0x00314EC8, 10 bytes long.  
 Data: <          > CD CD CD CD CD CD CD CD CD CD  
Object dump complete.  
```  
  
## <a name="see-also"></a>Vedere anche  
 [_CrtDoForAllClientObjects](../../c-runtime-library/reference/crtdoforallclientobjects.md)   
 [_CrtSetDumpClient](../../c-runtime-library/reference/crtsetdumpclient.md)   
 [_CrtMemDumpAllObjectsSince](../../c-runtime-library/reference/crtmemdumpallobjectssince.md)   
 [_CrtDumpMemoryLeaks](../../c-runtime-library/reference/crtdumpmemoryleaks.md)
