---
title: __invlpg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __invlpg
- __invlpg_cpp
dev_langs:
- C++
helpviewer_keywords:
- invlpg instruction
- __invlpg intrinsic
ms.assetid: 3fb3633f-d9b7-4ec0-9e7f-a7f2fa8ed794
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 373e9c1f8cc24ca4de4f0a78dd75011681c78056
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33327525"
---
# <a name="invlpg"></a>__invlpg
**Sezione specifica Microsoft**  
  
 Genera l'errore x86 `invlpg` (istruzione), che invalida il buffer di translation lookaside (TLB) per la pagina associata alla memoria a cui puntata `Address`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __invlpg(  
   void* Address  
);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in]  `Address`  
 Un indirizzo a 64 bit.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__invlpg`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
## <a name="remarks"></a>Note  
 La funzione intrinseca `__invlpg` genera un'istruzione riservata ed è disponibile solo in modalità kernel con un livello di privilegio (CPL) pari a 0.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)