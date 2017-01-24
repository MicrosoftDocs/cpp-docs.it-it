---
title: "__inword | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__indword_cpp"
  - "__indword"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "in (istruzione)"
  - "__inword (funzione intrinseca)"
ms.assetid: 5c617edd-6709-40a1-aad2-40d5e39283c6
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __inword
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Legge i dati dalla porta specificata utilizzando l'istruzione di `in` .  
  
## Sintassi  
  
```  
unsigned short __inword(  
   unsigned short Port  
);  
```  
  
#### Parametri  
 \[in\] `Port`  
 La porta da leggere.  
  
## Valore restituito  
 La parola dei dati letti.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__inword`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa procedura è disponibile solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)