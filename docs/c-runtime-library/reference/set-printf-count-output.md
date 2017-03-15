---
title: _set_printf_count_output | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: dfb86b7d6e52168fda5ec28bd66edc29b24432e4
ms.lasthandoff: 02/24/2017

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
 Per motivi di sicurezza, il supporto dell'identificatore di formato `%n` è disabilitato per impostazione predefinita in `printf` e tutte le sue varianti. Se viene rilevato `%n` in una specifica di formato `printf`, il comportamento predefinito prevede di richiamare il gestore di parametri non validi, come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md). Quando si chiama `_set_printf_count_output` con un argomento diverso da zero, le funzioni della famiglia `printf` interpretano `%n` come descritto in [Caratteri di campo di tipo per printf](../../c-runtime-library/printf-type-field-characters.md).  
  
## <a name="requirements"></a>Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|---------------------|  
|`_set_printf_count_output`|\<stdio.h>|  
  
 Per altre informazioni sulla compatibilità, vedere [Compatibility](../../c-runtime-library/compatibility.md) (Compatibilità) nell'introduzione.  
  
## <a name="example"></a>Esempio  
  
```  
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
  
## <a name="output"></a>Output  
  
```  
%n support was disabled.  
%n support is now enabled.  
123456789  
i = 5  
```  
  
## <a name="net-framework-equivalent"></a>Equivalente in NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f) (Esempi di platform invoke).  
  
## <a name="see-also"></a>Vedere anche  
 [_get_printf_count_output](../../c-runtime-library/reference/get-printf-count-output.md)
