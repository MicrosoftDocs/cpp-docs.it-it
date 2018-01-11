---
title: __svm_clgi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: __svm_clgi
dev_langs: C++
helpviewer_keywords:
- CLGI instruction
- __svm_clgi intrinsic
ms.assetid: 6640f5ab-9472-46f9-a042-e15c4f1ff858
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 3fe7aacf6a337235e40c9d681ddce1928fe28c2e
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="svmclgi"></a>__svm_clgi
**Sezione specifica Microsoft**  
  
 Cancella il flag di interrupt globale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __svm_clgi( void );  
```  
  
## <a name="remarks"></a>Note  
 Il `__svm_clgi` è equivalente alla funzione di `CLGI` istruzioni in linguaggio macchina. Il flag di interrupt globale determina se il microprocessore Ignora, viene posticipato o gestione degli interrupt a causa di eventi, ad esempio un completamento dei / o, un avviso di temperatura hardware o un'eccezione di debug.  
  
 Questa funzione supporta l'interazione di monitoraggio della macchina virtuale di un host con un sistema operativo guest e le relative applicazioni. Per ulteriori informazioni, cercare il documento, "Volume manuale del programmatore di architettura AMD64 2: programmazione di sistema," documento numero 24593, 3.11, revisione di [corporation AMD](http://go.microsoft.com/fwlink/p/?linkid=23746) sito.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__svm_clgi`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__svm_stgi](../intrinsics/svm-stgi.md)