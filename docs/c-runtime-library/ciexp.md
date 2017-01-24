---
title: "_CIexp | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CIexp"
apilocation: 
  - "msvcr120.dll"
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CIexp"
  - "_CIexp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CIexp intrinseco"
  - "_CIexp intrinseco"
ms.assetid: f8a3e3b7-fa57-41a3-9983-6c81914cbb55
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CIexp
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola l'esponenziale del valore superiore nello stack.  
  
## Sintassi  
  
```  
void __cdecl _CIexp();  
```  
  
## Note  
 Questa versione della funzione `exp` è una convenzione di chiamata specializzata accettata dal compilatore.  Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta con l'allocazione dei registri.  
  
 Il valore risultante viene inserito in cima allo stack.  
  
## Requisiti  
 **piattaforma:** x86  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [exp, expf](../c-runtime-library/reference/exp-expf.md)