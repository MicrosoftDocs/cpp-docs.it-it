---
title: "__readmsr | Microsoft Docs"
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
  - "__readmsr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Read Model Specific Register"
  - "rdmsr (istruzione)"
  - "__readmsr (funzione intrinseca)"
ms.assetid: 7ab1f8e8-72cb-4ce4-817d-3e728a3c9716
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __readmsr
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione di `rdmsr` , che legge il log modello\-specifico specificato da `register` e restituisce il valore.  
  
## Sintassi  
  
```  
__int64 __readmsr(   
   int register   
);  
```  
  
#### Parametri  
 \[in\] `register`  
 Il log specifico di modello da leggere.  
  
## Valore restituito  
 Il valore nel registro specificato.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__readmsr`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 Questa funzione è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseci.  
  
 Per ulteriori informazioni, vedere la documentazione AMD.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)