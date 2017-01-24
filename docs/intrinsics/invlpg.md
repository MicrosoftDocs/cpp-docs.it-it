---
title: "__invlpg | Microsoft Docs"
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
  - "__invlpg"
  - "__invlpg_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "invlpg (istruzione)"
  - "__invlpg (funzione intrinseca)"
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __invlpg
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Genera l'istruzione x86 `invlpg` , che invalida il buffer lookaside di conversione \(TLB\) per la pagina associata alla memoria indicata da `Address`.  
  
## Sintassi  
  
```  
void __invlpg(  
   void* Address  
);  
```  
  
#### Parametri  
 \[in\] `Address`  
 Un indirizzo a 64 bit.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__invlpg`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 `__invlpg` intrinseco genera un'istruzione privilegiata ed è disponibile solo in modalità kernel con un livello di privilegio DI \(\) a 0.  
  
 Questa procedura è disponibile solo come intrinseci.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)