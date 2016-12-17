---
title: "__svm_invlpga | Microsoft Docs"
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
  - "__svm_invlpga"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__svm_invlpga (funzione intrinseca)"
  - "INVLPGA (istruzione)"
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __svm_invlpga
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Invalida la voce di riproduzione d'indirizzi nel buffer di aspetto\-da parte della conversione da host.  I parametri consentono di specificare l'identificatore dello spazio degli indirizzi e di indirizzo virtuale della pagina per invalidare.  
  
## Sintassi  
  
```  
void __svm_invlpga(  
     void *Va,  
     int ASID);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|\[in\] `Va`|Indirizzo virtuale della pagina da invalidare.|  
|\[in\] `ASID`|L'identificatore \(ASID\) dello spazio degli indirizzi della pagina da invalidare.|  
  
## Note  
 La funzione di `__svm_invlpga` equivale all'istruzione macchina di `INVLPGA` .  Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “il volume manuale 2 del programmatore di architettura dei sistemi AMD64: Programmazione di sistema,„ documento numero 24593, revisione 3,11, [Società AMD](http://go.microsoft.com/fwlink/?LinkId=23746) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__svm_invlpga`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)