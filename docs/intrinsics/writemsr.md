---
title: __writemsr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __writemsr
dev_langs:
- C++
helpviewer_keywords:
- Write Model Specific Register instruction
- wrmsr instruction
- __writemsr intrinsic
ms.assetid: 938b1553-51a8-4822-a818-6bed79b0fde5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d9a3fdc9b094ebb81db1bfe841d7974c5df89ca0
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42543167"
---
# <a name="writemsr"></a>__writemsr
**Sezione specifica Microsoft**  
  
 Genera la scrittura in Model Specific Register (`wrmsr`) (istruzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __writemsr(   
   unsigned long Register,   
   unsigned __int64 Value   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `Register`  
 Il registro specifico di modello.  
  
 [in] `Value`  
 Valore da scrivere.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__writemsr`|x86, x64|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa funzione può essere usata solo in modalità kernel e questa routine è disponibile solo come funzione intrinseca.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)