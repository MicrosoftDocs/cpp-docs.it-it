---
title: _InterlockedAddLargeStatistic | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- _InterlockedAddLargeStatistic
- _InterlockedAddLargeStatistic_cpp
dev_langs:
- C++
helpviewer_keywords:
- _InterlockedAddLargeStatistic intrinsic
- InterlockedAddLargeStatistic intrinsic
ms.assetid: 2802e74b-bcee-46e4-b562-894908d44409
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 602cfb415c17c9e57d9fc1e932777cd1929e5f40
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33331397"
---
# <a name="interlockedaddlargestatistic"></a>_InterlockedAddLargeStatistic
**Sezione specifica Microsoft**  
  
 Esegue un'aggiunta interlocked in cui il primo operando è un valore a 64 bit.  
  
## <a name="syntax"></a>Sintassi  
  
```  
long _InterlockedAddLargeStatistic(  
   __int64 volatile * Addend,  
   long Value  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in, out] `Addend`  
 Puntatore al primo operando per l'operazione di aggiunta. Il valore a cui puntato viene sostituito dal risultato dell'addizione.  
  
 [in] `Value`  
 Il secondo operando; valore da aggiungere al primo operando.  
  
## <a name="return-value"></a>Valore restituito  
 Il valore del secondo operando.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`_InterlockedAddLargeStatistic`|x86|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa funzione intrinseca non è atomica perché viene implementata come due distinti istruzioni bloccate. Un valore non coerente letto potrebbe causare una lettura 64-bit atomica che si verifica in un altro thread durante l'esecuzione di questa funzione intrinseca.  
  
 Questa funzione si comporta come una barriera di lettura / scrittura. Per ulteriori informazioni, vedere [_ReadWriteBarrier](../intrinsics/readwritebarrier.md).  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)