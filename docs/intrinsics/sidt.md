---
title: "__sidt | Microsoft Docs"
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
  - "__sidt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "sidt (istruzione)"
  - "__sidt (funzione intrinseca)"
ms.assetid: 01e83d14-6e63-4dea-8f64-5a0339d69641
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __sidt
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Archiviare il valore del registro della tabella di descrittore di interruzione \(IDTR\) nella posizione di memoria specificata.  
  
## Sintassi  
  
```  
void __sidt(  
     void *Destination);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `Destination`|Un puntatore alla posizione di memoria in cui il IDTR viene archiviato.|  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__sidt`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Note  
 La funzione di `__sidt` equivale all'istruzione macchina di `SIDT` .  Per ulteriori informazioni, ricerca del documento, il “manuale di sviluppo di software di architettura Intel, volume 2: Riferimento dell'insieme di istruzioni,„ [Intel Corporation](http://go.microsoft.com/fwlink/?LinkId=127) del sito.  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_lidt](../intrinsics/lidt.md)