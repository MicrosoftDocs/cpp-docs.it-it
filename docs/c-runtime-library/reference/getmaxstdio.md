---
title: _getmaxstdio | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _getmaxstdio
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
- api-ms-win-crt-stdio-l1-1-0.dll
apitype: DLLExport
f1_keywords:
- _getmaxstdio
- getmaxstdio
dev_langs:
- C++
helpviewer_keywords:
- files [C++], number open
- _getmaxstdio function
- getmaxstdio function
- open files, getting number
ms.assetid: 700ca8ce-4a8c-4e00-9467-dfa9d6b831a0
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: db700e385fe59d5ff6cc7448c17444cb2b0e8796
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="getmaxstdio"></a>_getmaxstdio
Restituisce il numero dei file aperti contemporaneamente consentito a livello di I/O del flusso.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _getmaxstdio( void );  
```  
  
## <a name="return-value"></a>Valore restituito  
 Restituisce un numero che rappresenta il numero dei file aperti contemporaneamente attualmente consentito a livello di `stdio`.  
  
## <a name="remarks"></a>Note  
 Usare [_setmaxstdio`stdio` per configurare il numero dei file aperti contemporaneamente consentito a livello di ](../../c-runtime-library/reference/setmaxstdio.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_getmaxstdio`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
// crt_setmaxstdio.c  
// The program retrieves the maximum number  
// of open files and prints the results  
// to the console.  
  
#include <stdio.h>  
  
int main()  
{  
   printf( "%d\n", _getmaxstdio());  
  
   _setmaxstdio(2048);  
  
   printf( "%d\n", _getmaxstdio());  
}  
```  
  
```Output  
512  
2048  
```  
  
## <a name="see-also"></a>Vedere anche  
 [I/O di flusso](../../c-runtime-library/stream-i-o.md)
