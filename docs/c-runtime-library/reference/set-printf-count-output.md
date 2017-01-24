---
title: "_set_printf_count_output | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_set_printf_count_output"
apilocation: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "set_printf_count_output"
  - "_set_printf_count_output"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "formato %n"
  - "_set_printf_count_output (funzione)"
  - "set_printf_count_output (funzione)"
ms.assetid: d8259ec5-764e-42d0-9169-72172e95163b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_printf_count_output
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita o disabilita il supporto del formato `%n` nella famiglia di funzioni [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md).  
  
## Sintassi  
  
```  
int _set_printf_count_output(  
   int enable  
);  
```  
  
#### Parametri  
 `enable`  
 Un valore diverso da zero per consentire il supporto di `%n`, 0 per disabilitare il supporto di `%n`.  
  
## Valore proprietà\/Valore restituito  
 Lo stato del supporto di `%n` prima di chiamare questa funzione: diverso da zero se il supporto di `%n` è attivato, 0 se è stato disabilitato.  
  
## Note  
 Per motivi di sicurezza, il supporto dell'identificatore di formato `%n` è disabilitato per impostazione predefinita in `printf` e tutte le sue varianti.  Se `%n` viene visualizzato in una specifica di formato di `printf`, il comportamento predefinito consiste nell'invocare il gestore di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Chiamare `_set_printf_count_output` con un argomento diverso da zero farà in modo che la famiglia di funzioni `printf` interpretino `%n` come descritto in [Caratteri di campo di tipo per printf](../../c-runtime-library/printf-type-field-characters.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_set_printf_count_output`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
  
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
  
## Output  
  
```  
%n support was disabled.  
%n support is now enabled.  
123456789  
i = 5  
```  
  
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [\_get\_printf\_count\_output](../../c-runtime-library/reference/get-printf-count-output.md)