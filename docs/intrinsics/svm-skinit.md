---
title: "__svm_skinit | Microsoft Docs"
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
  - "__svm_skinit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SKINIT (istruzione)"
  - "__svm_skinit (funzione intrinseca)"
ms.assetid: 787ec781-4cf2-40a2-aa20-5192334b131a
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# __svm_skinit
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Specifici di Microsoft**  
  
 Avvia il caricamento di verificabile garantiscono che il software, ad esempio un monitor della macchina virtuale.  
  
## Sintassi  
  
```  
void __svm_skinit(  
   int SLB  
);  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`SLB`|L'indirizzo fisico a 32 bit di un byte KB garantisce il blocco del caricatore \(SLB\).|  
  
## Note  
 La funzione di `__svm_skinit` equivale all'istruzione macchina di `SKINIT` .  Questa funzione fa parte di un sistema di sicurezza che utilizza il processore e un modulo attendibile della piattaforma \(TPM\) per verificare e caricare il software attendibile chiamato un nucleo di \(SK\) sicurezza.  Un monitor della macchina virtuale è un esempio di un nucleo di sicurezza.  Il sistema di sicurezza verificherà i componenti del programma caricate durante il processo di inizializzazione e protegge i componenti dall'alterazione da interruzioni, per l'accesso del dispositivo, o da un altro programma se il computer è un multiprocessore.  
  
 Il parametro di `SLB` specificare l'indirizzo fisico di un blocco di memoria KB chiamato *il blocco del caricatore sicuro \(SLB\)* .  Lo SLB contiene un programma chiamato il caricatore sicuro che stabilisce ambiente operativo del computer e successivamente carica il nucleo di sicurezza.  
  
 Questa funzione supporta l'interazione di monitoraggio della macchina virtuale dell'host con un sistema operativo guest e le relative applicazioni.  Per ulteriori informazioni, ricerca del documento, “il volume manuale 2 del programmatore di architettura dei sistemi AMD64: Programmazione di sistema,„ documento numero 24593, revisione 3,11, [Società AMD](http://go.microsoft.com/fwlink/?LinkId=23746) al sito.  
  
## Requisiti  
  
|Intrinseco|Architettura|  
|----------------|------------------|  
|`__svm_skinit`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin.h\>  
  
## Microsoft FINALE specifico  
  
## Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)