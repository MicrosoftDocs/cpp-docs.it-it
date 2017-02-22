---
title: "_CIlog | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CIlog"
apilocation: 
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_CIlog"
  - "CIlog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIlog intrinseco"
  - "CIlog intrinseco"
ms.assetid: 23503854-ddaa-4fe0-a4a3-7fbb3a43bdec
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# _CIlog
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola il logaritmo naturale del valore in cima allo stack.  
  
## Sintassi  
  
```  
void __cdecl _CIlog();  
```  
  
## Note  
 Questa versione della funzione `log` è una convenzione di chiamata specializzata accettata dal compilatore.  Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta con l'allocazione dei registri.  
  
 Il valore risultante viene inserito in cima allo stack.  
  
## Requisiti  
 **piattaforma:** x86  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [log, logf, log10, log10f](../c-runtime-library/reference/log-logf-log10-log10f.md)