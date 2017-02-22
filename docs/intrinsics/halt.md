---
title: "__halt | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__halt"
  - "__halt_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__halt (funzione intrinseca)"
  - "HLT (istruzione)"
ms.assetid: a074f44a-101c-45a5-8a5e-cfd223c34002
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# __halt
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Interrompe il microprocessore finché un'interruzione attivata, un'interruzione \(NMI\) nonmaskable, o una tabella non si verifichi.  
  
## Sintassi  
  
```  
void __halt( void );  
```  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__halt`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 La funzione di `__halt` equivale all'istruzione macchina di `HLT` ed è disponibile solo in modalità kernel.  Per ulteriori informazioni, ricerca del documento, il “manuale di sviluppo di software di architettura Intel, volume 2: Riferimento dell'insieme di istruzioni,„ [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) del sito.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)