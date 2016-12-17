---
title: "btowc | Microsoft Docs"
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
  - "btowc"
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
  - "api-ms-win-crt-convert-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "btowc"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "btowc (funzione)"
ms.assetid: 99a46e02-6f86-4569-af79-5feca012add8
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# btowc
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Determina se un integer rappresenta un carattere a singolo byte valido nello stato iniziale di spostamento.  
  
## Sintassi  
  
```  
wint_t btowc(  
   int c  
);  
```  
  
#### Parametri  
 `c`  
 Integer da testare.  
  
## Valore restituito  
 Restituisce la rappresentazione a caratteri estesi se integer rappresenta un carattere a singolo byte valido nello stato iniziale di spostamento.  Restituisce WEOF se integer è EOF o non è un carattere a singolo byte valido nello stato iniziale di spostamento.  L'output di questa funzione è interessata dalle impostazioni locali correnti di `LC_TYPE`.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`btowc`|\<stdio.h\> o \<wchar.h\>|  
  
 Per ulteriori informazioni sulla compatibilità, vedere [Compatibilità](../../c-runtime-library/compatibility.md) nell'Introduzione.  
  
## Equivalente .NET Framework  
 Non applicabile. Per chiamare la funzione standard C, utilizzare `PInvoke`. Per ulteriori informazioni, vedere [Esempi di Invocazione della Piattaforma](../Topic/Platform%20Invoke%20Examples.md).  
  
## Vedere anche  
 [mbtowc, \_mbtowc\_l](../../c-runtime-library/reference/mbtowc-mbtowc-l.md)