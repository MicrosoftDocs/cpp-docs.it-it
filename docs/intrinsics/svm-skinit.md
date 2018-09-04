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
ms.openlocfilehash: d8c59ad4af53a38ee28450e51adf9cdf81ec7bad
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43687285"
---
# <a name="svmskinit"></a>__svm_skinit
**Sezione specifica Microsoft**  
  
 Avvia il caricamento di software indipendente dai tipi verificabile protetto, ad esempio un monitor di macchina virtuale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __svm_skinit(  
   int SLB  
);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`SLB`|L'indirizzo fisico a 32 bit di un byte 64K blocco del caricatore di Secure (SLB).|  
  
## <a name="remarks"></a>Note  
 Il `__svm_skinit` è equivalente alla funzione il `SKINIT` istruzioni in linguaggio macchina. Questa funzione è parte di un sistema di sicurezza che usa il processore e un Trusted Platform Module (TPM) per verificare e caricare il software considerato attendibile chiamato un kernel di sicurezza (SK). Un monitor di macchina virtuale è un esempio di un kernel di sicurezza. Il sistema di sicurezza verifica caricati durante il processo di inizializzazione dei componenti del programma e protegge i componenti dalla manomissione da parte degli interrupt, accesso al dispositivo o un altro programma se il computer è un computer multiprocessore.  
  
 Il `SLB` parametro specifica l'indirizzo fisico di un blocco di 64 KB di memoria denominata la *Secure blocco del caricatore* (SLB). Il bilanciamento del carico software contiene un programma denominato il caricatore sicuro che consente di stabilire l'ambiente operativo per il computer e successivamente carica il kernel di sicurezza.  
  
 Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per altre informazioni, cercare il documento, "Volume manuale per programmatori dell'architettura AMD64 2: programmazione di sistema," documento numero 24593, revisione 3.11, la [corporation AMD](https://developer.amd.com/resources/developer-guides-manuals/) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__svm_skinit`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)