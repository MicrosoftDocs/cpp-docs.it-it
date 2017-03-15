---
title: "_CIfmod | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_CIfmod"
apilocation: 
  - "msvcrt.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_CIfmod"
  - "CIfmod"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CIfmod intrinseco"
  - "_CIfmod intrinseco"
ms.assetid: 7c050653-7ec6-4810-b3a7-7a0057ea65ed
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# _CIfmod
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Calcola il resto a virgola mobile dei due valori più in alto nello stack.  
  
## Sintassi  
  
```  
void __cdecl _CIfmod();  
```  
  
## Note  
 Questa versione della funzione `fmod` è una convenzione di chiamata specializzata accettata dal compilatore.  Ciò accelera l'esecuzione in quanto impedisce la generazione di copie e aiuta con l'allocazione dei registri.  
  
 Il valore risultante viene inserito in cima allo stack.  
  
## Requisiti  
 **piattaforma:** x86  
  
## Vedere anche  
 [Riferimento alfabetico alle funzioni](../c-runtime-library/reference/crt-alphabetical-function-reference.md)   
 [fmod, fmodf](../c-runtime-library/reference/fmod-fmodf.md)