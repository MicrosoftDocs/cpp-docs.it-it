---
title: _set_printf_count_output | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
apiname:
- _set_printf_count_output
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
- set_printf_count_output
- _set_printf_count_output
dev_langs:
- C++
helpviewer_keywords:
- '%n format'
- set_printf_count_output function
- _set_printf_count_output function
ms.assetid: d8259ec5-764e-42d0-9169-72172e95163b
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 16d1bf59dfd4b3ef5f037aed9c0f6febfdf1a2e8
ms.openlocfilehash: 8229146184b4d4d0cfbccd60f6c4209356db5f8f
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="setprintfcountoutput"></a>_set_printf_count_output
Abilita o disabilita il supporto del formato `%n` nelle funzioni della famiglia [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
int _set_printf_count_output(  
   int enable  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 `enable`  
 Un valore diverso da zero per abilitare il supporto `%n`, 0 per disabilitare il supporto `%n`.  
  
## <a name="property-valuereturn-value"></a>Valore proprietà/Valore restituito  
 Lo stato del supporto di `%n` prima di chiamare questa funzione: diverso da zero se il supporto `%n` è stato abilitato, 0 se è stato disabilitato.  
  
## <a name="remarks"></a>Note  
 Per motivi di sicurezza, il supporto dell'identificatore di formato `%n` è disabilitato per impostazione predefinita in `printf` e tutte le sue varianti. Se viene rilevato `%n` in una specifica di formato `printf`, il comportamento predefinito prevede di richiamare il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). La chiamata `_set_printf_count_output` con un argomento diverso da zero causerà `printf`-famiglia di funzioni per interpretare `%n` come descritto in [sintassi specifica del formato: funzioni printf e wprintf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_printf_count_output`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```C  
// crt_set_printf_count_output.c  
#include <stdio.h>  
  
int main()  
{  
   int e;  
   int i;  
   e = _set_printf_count_output( 1 );  
   printf( "%%n support was %sabled.\n",  
        e ? "en" : "dis" );  
   printf( "%%n support is now %sabled.\n",  
        _get_printf_count_output() ? "en" : "dis" );  
   printf( "12345%n6789\n", &i ); // %n format should set i to 5  
   printf( "i = %d\n", i );  
}  
```  
  
```Output  
%n support was disabled.  
%n support is now enabled.  
123456789  
i = 5  
```  
  
## <a name="see-also"></a>Vedere anche  
 [_get_printf_count_output](../../c-runtime-library/reference/get-printf-count-output.md)
