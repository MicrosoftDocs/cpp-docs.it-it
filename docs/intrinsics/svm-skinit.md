---
title: __svm_skinit | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __svm_skinit
dev_langs:
- C++
helpviewer_keywords:
- SKINIT instruction
- __svm_skinit intrinsic
ms.assetid: 787ec781-4cf2-40a2-aa20-5192334b131a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 95e47608b7ec58e433d9be5e2f2178a825b6be2e
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="svmskinit"></a>__svm_skinit
**Sezione specifica Microsoft**  
  
 Avvia il caricamento di software indipendente dai tipi verificabile protetto, ad esempio un monitor della macchina virtuale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __svm_skinit(  
   int SLB  
);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`SLB`|L'indirizzo fisico a 32 bit di un byte di 64 KB blocco del caricatore di proteggere (SLB).|  
  
## <a name="remarks"></a>Note  
 Il `__svm_skinit` è equivalente alla funzione di `SKINIT` istruzioni in linguaggio macchina. Questa funzione è parte di un sistema di sicurezza che usa il processore e un modulo di piattaforma attendibile (TPM) per verificare e caricare software attendibile chiamato un kernel di sicurezza (SK). Un monitoraggio della macchina virtuale è un esempio di un kernel di sicurezza. Il sistema di sicurezza verifica caricati durante il processo di inizializzazione dei componenti del programma e protegge i componenti da eventuali manomissioni gli interrupt, accedere al dispositivo o un altro programma, se il computer è un computer multiprocessore.  
  
 Il `SLB` parametro specifica l'indirizzo fisico di un blocco di 64 KB di memoria denominata la *Secure blocco del caricatore* (SLB). Il SLB contiene un programma denominato il caricatore sicuro che stabilisce l'ambiente operativo per il computer e successivamente viene caricato il kernel di sicurezza.  
  
 Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento, "Volume manuale del programmatore di architettura AMD64 2: programmazione di sistema," documento numero 24593, 3.11, revisione di [corporation AMD](http://go.microsoft.com/fwlink/p/?linkid=23746) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__svm_skinit`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)