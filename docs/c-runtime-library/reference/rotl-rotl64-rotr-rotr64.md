---
title: _rotl, _rotl64, _rotr, _rotr64 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _rotr64
- _rotl
- _rotr
- _rotl64
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
- api-ms-win-crt-utility-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _rotr64
- rotl64
- _rotl64
- rotr64
- rotr
- _rotr
- _rotl
- rotl
dev_langs: C++
helpviewer_keywords:
- rotl64 function
- _rotl function
- rotr function
- rotr64 function
- _rotr function
- rotl function
- _rotl64 function
- rotating bits
- _rotr64 function
- bits, rotating
ms.assetid: cfce439b-366f-4584-8ab1-d527b13fcfc6
caps.latest.revision: "11"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: e00fc9738bba81ba1aabe304bc7a887bf414f982
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="rotl-rotl64-rotr-rotr64"></a>_rotl, _rotl64, _rotr, _rotr64
Ruota i bit a sinistra (`_rotl`) o a destra (`_rotr`).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      unsigned int _rotl(  
   unsigned int value,  
   int shift   
);  
unsigned __int64 _rotl64(  
   unsigned __int64 value,   
   int shift  
);  
unsigned int _rotr(  
   unsigned int value,  
   int shift   
);  
unsigned __int64 _rotr64(  
   unsigned __int64 value,  
   int shift  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *value*  
 Valore da ruotare.  
  
 `shift`  
 Numero di bit da spostare.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore ruotato. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_rotl` e `_rotr` ruotano *value* senza segno di `shift` bit. `_rotl` ruota il valore a sinistra. `_rotr` ruota il valore a destra. Entrambe le funzioni ruotano i bit da una estremità all'altra di *value*.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|**_rotl, _rotl64**|\<stdlib.h>|  
|**_rotr, _rotr64**|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_rot.c  
/* This program shifts values to rotate an integer.  
 */  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   unsigned val = 0x0fd93;  
   __int64 val2 = 0x0101010101010101;  
  
   printf( "0x%4.4x rotated left three times is 0x%4.4x\n",   
           val, _rotl( val, 3 ) );  
   printf( "0x%4.4x rotated right four times is 0x%4.4x\n",   
           val, _rotr( val, 4 ) );  
  
   printf( "%I64x rotated left three times is %I64x\n",  
           val2, _rotl64( val2, 3 ) );  
   printf( "%I64x rotated right four times is %I64x\n",   
           val2, _rotr64( val2, 4 ) );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
0xfd93 rotated left three times is 0x7ec98  
0xfd93 rotated right four times is 0x30000fd9  
101010101010101 rotated left three times is 808080808080808  
101010101010101 rotated right four times is 1010101010101010  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [_lrotl, _lrotr](../../c-runtime-library/reference/lrotl-lrotr.md)