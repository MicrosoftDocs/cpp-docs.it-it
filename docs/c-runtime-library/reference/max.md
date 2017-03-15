---
title: "__max | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "__max"
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
apitype: "DLLExport"
f1_keywords: 
  - "max"
  - "__max"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__max (macro)"
  - "max (macro)"
  - "maximum (macro)"
ms.assetid: 05c936f6-0e22-45d6-a58d-4bc102e9dae2
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# __max
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce il maggiore di due valori .  
  
## Sintassi  
  
```  
type __max(  
   type a,  
   type b   
);  
```  
  
#### Parametri  
 `type`  
 Tutti i tipi di dati numerici  
  
 `a, b`  
 Valori di qualsiasi tipo numerico da confrontare.  
  
## Valore restituito  
 `__max` restituisce il maggiore dei relativi argomenti.  
  
## Note  
 La macro `__max` confronta due valori e restituisce il valore di quello più grande.  Gli argomenti possono essere di qualsiasi tipo di dati numerico, con o senza segno.  Sia gli argomenti che il valore restituito deve essere dello stesso tipo di dati.  
  
## Requisiti  
  
|Routine|Intestazione obbligatoria|  
|-------------|-------------------------------|  
|`__max`|\<stdlib.h\>|  
  
## Esempio  
 Per ulteriori informazioni, vedere l'esempio [\_\_min](../../c-runtime-library/reference/min.md).  
  
## Equivalente .NET Framework  
 [System.Math](https://msdn.microsoft.com/en-us/library/system.math.max.aspx)  
  
## Vedere anche  
 [Supporto a virgola mobile](../../c-runtime-library/floating-point-support.md)   
 [\_\_min](../../c-runtime-library/reference/min.md)