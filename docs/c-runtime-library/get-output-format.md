---
title: "_get_output_format | Microsoft Docs"
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
  - "_get_output_format"
apilocation: 
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcrt.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
apitype: "DLLExport"
f1_keywords: 
  - "get_output_format"
  - "_get_output_format"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_get_output_format (funzione)"
  - "get_output_format (funzione)"
  - "formattazione di output"
ms.assetid: 0ce42f3b-3479-41c4-bcbf-1d21f7ee37e7
caps.latest.revision: 13
caps.handback.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_output_format
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ottiene il valore corrente del flag del formato di output.  
  
> [!IMPORTANT]
>  Questa funzione è obsoleta. A partire da Visual Studio 2015 non è disponibile in CRT.  
  
## Sintassi  
  
```  
unsigned int _get_output_format();  
```  
  
## Valore restituito  
 Valore corrente del flag del formato di output.  
  
## Note  
 Il flag del formato di output controlla le funzionalità dell'I\/O formattato. Al momento per questo flag sono disponibili due valori: 0 e `_TWO_DIGIT_EXPONENT`. Se è impostato `_TWO_DIGIT_EXPONENT`, i numeri a virgola mobile vengono stampati con due sole cifre nell'esponente a meno che le dimensioni dell'esponente non ne richiedano una terza. Se il flag è zero, l'output del numero a virgola mobile visualizza tre cifre per l'esponente, se necessario aggiungendo degli zeri per arrivare a tre cifre.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`_get_output_format`|\<stdio.h\>|  
  
 Per altre informazioni sulla compatibilità, vedere la sezione [Compatibilità](../c-runtime-library/compatibility.md) nell'introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione C standard, usare `PInvoke`. Per altre informazioni, vedere [Esempi di platform invoke](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [printf, \_printf\_l, wprintf, \_wprintf\_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [printf\_s, \_printf\_s\_l, wprintf\_s, \_wprintf\_s\_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [Caratteri di campo di tipo per printf](../c-runtime-library/printf-type-field-characters.md)   
 [\_set\_output\_format](../c-runtime-library/set-output-format.md)