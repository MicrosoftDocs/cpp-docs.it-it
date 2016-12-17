---
title: "__svm_vmrun | Microsoft Docs"
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
  - "__svm_vmrun"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__svm_vmrun (funzione intrinseca)"
  - "VMRUN (istruzione)"
ms.assetid: ae98a781-fc17-47b2-b40f-86fcebf1867b
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __svm_vmrun
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Avvia l'esecuzione del codice del visitatore della macchina virtuale che corrisponde al dato blocco di controllo della macchina \(VMCB\) virtuale.  
  
## Sintassi  
  
```  
void __svm_vmrun(  
   size_t VmcbPhysicalAddress  
);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `VmcbPhysicalAddress`|L'indirizzo fisico di VMCB.|  
  
## Note  
 La funzione di `__svm_vmrun` utilizza una quantità di informazioni minima in VMCB per iniziare il codice del visitatore della macchina virtuale.  Utilizzare la funzione di [\_\_svm\_vmload](../intrinsics/svm-vmload.md) o di [\_\_svm\_vmsave](../intrinsics/svm-vmsave.md) se sono necessarie ulteriori informazioni per gestire un'interruzione complessa o passare a un altro host.  
  
 La funzione di `__svm_vmrun` equivale all'istruzione macchina di `VMRUN` .  Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “il volume manuale 2 del programmatore di architettura dei sistemi AMD64: Programmazione di sistema,„ documento numero 24593, revisione 3,11 o successiva, [Società AMD](http://go.microsoft.com/fwlink/?LinkId=23746) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__svm_vmrun`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [\_\_svm\_vmsave](../intrinsics/svm-vmsave.md)   
 [\_\_svm\_vmload](../intrinsics/svm-vmload.md)