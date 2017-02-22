---
title: "_get_printf_count_output | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_get_printf_count_output"
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
  - "get_printf_count_output"
  - "_get_printf_count_output"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "formato %n"
  - "_get_printf_count_output (funzione)"
  - "get_printf_count_output (funzione)"
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# _get_printf_count_output
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Indica se le funzioni della famiglia [printf, \_printf\_l, wprintf, \_wprintf\_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) supportano il formato `%n`.  
  
## Sintassi  
  
```  
int _get_printf_count_output();  
```  
  
## Valore restituito  
 Diverso da zero se `%n` è supportato, 0 se `%n` non è supportato.  
  
## Note  
 Se `%n` non è supportato \(impostazione predefinita\), l'incontro con `%n` nella stringa di formato di una qualsiasi delle funzioni `printf` provocherà il richiamo del gestore di parametro non valido come descritto in [Convalida dei parametri](../../c-runtime-library/parameter-validation.md).  Se il supporto a `%n` è abilitato \(vedere [\_set\_printf\_count\_output](../../c-runtime-library/reference/set-printf-count-output.md)\) allora `%n` si comporterà come descritto in [Caratteri di campo di tipo per printf](../../c-runtime-library/printf-type-field-characters.md).  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_printf_count_output`|\<stdio.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Esempio  
 Vedere l'esempio per [\_set\_printf\_count\_output](../../c-runtime-library/reference/set-printf-count-output.md).  
  
## Equivalente in NET Framework  
 Non applicabile.  Per chiamare la funzione standard C, utilizzare `PInvoke`.  Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).