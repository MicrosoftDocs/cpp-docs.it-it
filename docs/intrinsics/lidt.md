---
title: __lidt | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- __lidt
- __lidt_cpp
dev_langs: C++
helpviewer_keywords:
- LIDT instruction
- __lidt intrinsic
ms.assetid: 8298d25d-a19e-4900-828d-6b3b09841882
caps.latest.revision: "5"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 73a8d0a545ced34a08ace14495b45fcfbb1a990e
ms.sourcegitcommit: 54035dce0992ba5dce0323d67f86301f994ff3db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/03/2018
---
# <a name="lidt"></a>__lidt
**Sezione specifica Microsoft**  
  
 Carica il registro degli interrupt descrittore tabella (IDTR) con il valore nella posizione di memoria specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __lidt(  
     void *Source);  
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `Source`|Puntatore al valore di IDTR da copiare.|  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__lidt`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Il `__lidt` è equivalente alla funzione di `LIDT` istruzioni in linguaggio macchina ed è disponibile solo in modalità kernel. Per ulteriori informazioni, cercare il documento, "manuale dello sviluppatore di Software architettura Intel, Volume 2: riferimento al Set (istruzione)," al [Intel Corporation](http://go.microsoft.com/fwlink/p/?linkid=127) sito.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__sidt](../intrinsics/sidt.md)