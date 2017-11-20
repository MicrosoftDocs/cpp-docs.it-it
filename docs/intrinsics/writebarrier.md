---
title: _WriteBarrier | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: _WriteBarrier
dev_langs: C++
helpviewer_keywords:
- WriteBarrier intrinsic
- _WriteBarrier intrinsic
ms.assetid: a5ffdad9-0ca1-4eb7-b2f3-0f092c4bf4b5
caps.latest.revision: "23"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 33644d332a83f1bb80f6812f04daefb227fd8a65
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="writebarrier"></a>_WriteBarrier
**Sezione specifica Microsoft**  
  
 Limita le ottimizzazioni del compilatore che possono riordinare le operazioni di accesso alla memoria nel punto della chiamata.  
  
> [!CAUTION]
>  Le funzioni intrinseche del compilatore `_ReadBarrier`, `_WriteBarrier` e `_ReadWriteBarrier` e la macro `MemoryBarrier` sono deprecate e non vanno usate. Per la comunicazione tra thread, utilizzare meccanismi come [atomic_thread_fence](../standard-library/atomic-functions.md#atomic_thread_fence) e [std:: Atomic\<T >](../standard-library/atomic.md), che sono definite nel [della libreria Standard C++](../standard-library/cpp-standard-library-reference.md). Per accedere a hardware, utilizzare il [/volatile:iso](../build/reference/volatile-volatile-keyword-interpretation.md) con l'opzione del compilatore di [volatile](../cpp/volatile-cpp.md) (parola chiave).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void _WriteBarrier(void);  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_WriteBarrier`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 La funzione intrinseca `_WriteBarrier` limita le ottimizzazioni del compilatore che possono rimuovere o riordinare le operazioni di accesso alla memoria nel punto della chiamata.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [_ReadBarrier](../intrinsics/readbarrier.md)   
 [_ReadWriteBarrier](../intrinsics/readwritebarrier.md)   
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave](../cpp/keywords-cpp.md)