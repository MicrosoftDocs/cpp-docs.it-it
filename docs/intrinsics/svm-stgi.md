---
title: "__svm_stgi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__svm_stgi"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__svm_stgi (funzione intrinseca)"
  - "STGI (istruzione)"
ms.assetid: 96488da4-5587-4e99-8674-627a9e51be84
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# __svm_stgi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Imposta il flag di interruzione globale.  
  
## Sintassi  
  
```  
void __svm_stgi(void);  
```  
  
## Note  
 La funzione di `__svm_stgi` equivale all'istruzione macchina di `STGI` .  Il flag di interruzione globale determina se il microprocessore ignora, posticipare, o gestisce le interruzioni a causa degli eventi come un completamento I\/O, un avviso della temperatura hardware, o un'eccezione di debug.  
  
 Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “il volume manuale 2 del programmatore di architettura dei sistemi AMD64: Programmazione di sistema,„ documento numero 24593, revisione 3,11, [Società AMD](http://go.microsoft.com/fwlink/?LinkId=23746) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__svm_stgi`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_svm\_clgi](../intrinsics/svm-clgi.md)