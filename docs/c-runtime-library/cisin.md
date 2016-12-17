---
title: "_CIsin | Microsoft Docs"
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
  - "_CIsin"
apilocation: 
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcrt.dll"
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr110_clr0400.dll"
apitype: "DLLExport"
f1_keywords: 
  - "CIsin"
  - "_CIsin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_CIsin intrinseco"
  - "CIsin intrinseco"
ms.assetid: f215f39a-2341-4f1c-ba8e-cb522451ceb2
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _CIsin
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola il seno del valore superiore dello stack.  
  
## Sintassi  
  
```  
void __cdecl _CIsin();  
```  
  
## Note  
 Questa versione della funzione `sin` è una convenzione di chiamata specializzata accettata dal compilatore.  Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta con allocazione dei registri.  
  
 Il valore risultante viene inserito in cima allo stack.  
  
## Requisiti  
 **piattaforma:** x86  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [sin, sinf, sinl, sinh, sinhf, sinhl](../c-runtime-library/reference/sin-sinf-sinl-sinh-sinhf-sinhl.md)