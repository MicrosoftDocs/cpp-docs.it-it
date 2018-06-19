---
title: __wbinvd | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __wbinvd
dev_langs:
- C++
helpviewer_keywords:
- __wbinvd intrinsic
- wbinvd instruction
ms.assetid: 628d0981-39e5-49e1-bd43-706d123af121
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: be74b466ed641474283e26217ae728c57f28edd8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33326345"
---
# <a name="wbinvd"></a>__wbinvd
**Sezione specifica Microsoft**  
  
 Genera il writeback e invalidare la Cache (`wbinvd`) (istruzione).  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __wbinvd(void);  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__wbinvd`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 Questa funzione è disponibile solo in modalità kernel con un livello di privilegio (CPL) pari a 0 e la routine è disponibile solo come funzione intrinseca.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)