---
title: _lrotl, _lrotr | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _lrotl
- _lrotr
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
- lrotr
- lrotl
- _lrotr
- _lrotl
dev_langs:
- C++
helpviewer_keywords:
- lrotl function
- bits
- _lrotr function
- lrotr function
- rotating bits
- _lrotl function
- bits, rotating
ms.assetid: d42f295b-35f9-49d2-9ee4-c66896ffe68e
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: e257f037a05c45f5b98e64ea55bd125af443b0be
ms.openlocfilehash: 6542519d0069ed42bacf8d9566c40320fd32d946
ms.contentlocale: it-it
ms.lasthandoff: 03/29/2017

---
# <a name="lrotl-lrotr"></a>_lrotl, _lrotr
Ruota i bit a sinistra (`_lrotl`) o a destra (`_lrotr`).  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      unsigned long _lrotl(  
   unsigned long value,  
   int shift   
);  
unsigned long _lrotr(  
   unsigned long value,  
   int shift   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 *value*  
 Valore da ruotare.  
  
 `shift`  
 Numero di bit di cui spostare *value*.  
  
## <a name="return-value"></a>Valore restituito  
 Entrambe le funzioni restituiscono il valore ruotato. Non vi è restituzione di errori.  
  
## <a name="remarks"></a>Note  
 Le funzioni `_lrotl` e `_lrotr` ruotano *value* di `shift` bit. `_lrotl` ruota il valore a sinistra. `_lrotr` ruota il valore a destra. Entrambe le funzioni ruotano i bit da una estremità all'altra di *value*.  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_lrotl`|\<stdlib.h>|  
|`_lrotr`|\<stdlib.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'introduzione.  
  
## <a name="libraries"></a>Librerie  
 Tutte le versioni delle [librerie di runtime C](../../c-runtime-library/crt-library-features.md).  
  
## <a name="example"></a>Esempio  
  
```  
// crt_lrot.c  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
   unsigned long val = 0x0fac35791;  
  
   printf( "0x%8.8lx rotated left eight times is 0x%8.8lx\n",   
            val, _lrotl( val, 8 ) );  
   printf( "0x%8.8lx rotated right four times is 0x%8.8lx\n",   
            val, _lrotr( val, 4 ) );  
}  
```  
  
## <a name="output"></a>Output  
  
```  
0xfac35791 rotated left eight times is 0xc35791fa  
0xfac35791 rotated right four times is 0x1fac3579  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto delle funzioni a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [_rotl, _rotl64, _rotr, _rotr64](../../c-runtime-library/reference/rotl-rotl64-rotr-rotr64.md)
