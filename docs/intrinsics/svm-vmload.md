---
title: "__svm_vmload | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "__svm_vmload"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__svm_vmload (funzione intrinseca)"
  - "VMLOAD (istruzione)"
ms.assetid: b46a5592-db76-4ffc-8694-2f3494e28bed
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# __svm_vmload
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Carica un sottoinsieme dello stato di processore dal dato blocco di controllo della macchina \(VMCB\) virtuale.  
  
## Sintassi  
  
```  
void __svm_vmload(  
   size_t VmcbPhysicalAddress  
);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `VmcbPhysicalAddress`|L'indirizzo fisico di VMCB.|  
  
## Note  
 La funzione di `__svm_vmload` equivale all'istruzione macchina di `VMLOAD` .  Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “il volume manuale 2 del programmatore di architettura dei sistemi AMD64: Programmazione di sistema,„ documento numero 24593, revisione 3,11, [Società AMD](http://go.microsoft.com/fwlink/?LinkId=23746) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__svm_vmload`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_svm\_vmrun](../intrinsics/svm-vmrun.md)   
 [\_\_svm\_vmsave](../intrinsics/svm-vmsave.md)