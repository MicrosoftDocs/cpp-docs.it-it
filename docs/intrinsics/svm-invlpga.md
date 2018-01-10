---
title: __svm_invlpga | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __svm_invlpga
dev_langs: C++
helpviewer_keywords:
- __svm_invlpga intrinsic
- INVLPGA instruction
ms.assetid: aa6578ce-8278-464b-8815-a0fc45330915
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f3206fa7f67fcd676b1490c6fad3be9a03c1ea40
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="svminvlpga"></a>__svm_invlpga
**Sezione specifica Microsoft**  
  
 Invalida la voce di mapping di indirizzi nel buffer di aspetto-aside traduzione del computer. I parametri specificano l'indirizzo virtuale e l'identificatore dello spazio di indirizzo della pagina da invalidare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __svm_invlpga(  
     void *Va,  
     int ASID);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `Va`|L'indirizzo virtuale della pagina da invalidare.|  
|[in] `ASID`|L'indirizzo spazio identificatore (ASID) della pagina da invalidare.|  
  
## <a name="remarks"></a>Note  
 Il `__svm_invlpga` è equivalente alla funzione di `INVLPGA` istruzioni in linguaggio macchina. Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento, "Volume manuale del programmatore di architettura AMD64 2: programmazione di sistema," documento numero 24593, 3.11, revisione di [corporation AMD](http://go.microsoft.com/fwlink/p/?linkid=23746) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__svm_invlpga`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)