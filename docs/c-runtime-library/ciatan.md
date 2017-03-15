---
title: "_CIatan | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CIatan"
apilocation: 
  - "msvcr120.dll"
  - "msvcr110.dll"
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_CIatan"
  - "CIatan"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CIatan intrinseco"
  - "_CIatan intrinseco"
ms.assetid: 3baa0429-fe46-4bab-8b00-868e2186dc8c
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# _CIatan
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola l'arcotangente del valore in cima allo stack.  
  
## Sintassi  
  
```  
void __cdecl _CIatan();  
```  
  
## Note  
 Questa versione della funzione `atan` è una convenzione di chiamata specializzata accettata dal compilatore.  Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta con l'allocazione dei registri.  
  
 Il valore risultante viene inserito in cima allo stack.  
  
## Requisiti  
 **piattaforma:** x86  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [atan, atanf, atanl, atan2, atan2f, atan2l](../c-runtime-library/reference/atan-atanf-atanl-atan2-atan2f-atan2l.md)