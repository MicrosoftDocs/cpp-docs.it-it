---
title: "__lidt | Microsoft Docs"
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
  - "__lidt"
  - "__lidt_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LIDT (istruzione)"
  - "__lidt (funzione intrinseca)"
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __lidt
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Carica il log della tabella di descrittore di interruzione \(IDTR\) con il valore nella posizione di memoria specificata.  
  
## Sintassi  
  
```  
void __lidt(  
     void *Source);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `Source`|Puntatore al valore da copiare in IDTR.|  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__lidt`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 La funzione di `__lidt` equivale all'istruzione macchina di `LIDT` ed è disponibile solo in modalità kernel.  Per ulteriori informazioni, ricerca del documento, il “manuale di sviluppo di software di architettura Intel, volume 2: Riferimento dell'insieme di istruzioni,„ [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) del sito.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_sidt](../intrinsics/sidt.md)