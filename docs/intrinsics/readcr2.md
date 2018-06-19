---
title: __readcr2 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __readcr2
dev_langs:
- C++
helpviewer_keywords:
- __readcr2 intrinsic
ms.assetid: d02c97d8-1953-46e7-a79e-a781e2c5bf27
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 252b9812f71eca2803b7266b4a45f357f0b11e93
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33324954"
---
# <a name="readcr2"></a>__readcr2
**Sezione specifica Microsoft**  
  
 Legge il registro CR2 e restituisce il relativo valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
unsigned __int64 __readcr2(void);  
```  
  
## <a name="return-value"></a>Valore restituito  
 Il valore del registro CR2.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__readcr2`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questo intrinseco è disponibile solo in modalità kernel e la routine è disponibile solo come intrinseco.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)