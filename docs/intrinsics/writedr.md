---
title: __writedr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __writedr
dev_langs:
- C++
helpviewer_keywords:
- __writedr intrinsic
ms.assetid: ac55c1ee-df2f-41d4-a429-6f369d2a934d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6fab96a22dec9b4cf2914fa2c02dd973bcd7ace8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33329183"
---
# <a name="writedr"></a>__writedr
Scrive il valore specificato per il Registro di debug specificata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __writedr(unsigned DebugRegister, unsigned DebugValue);  
void __writedr(unsigned DebugRegister, unsigned __int64 DebugValue);  
```  
  
#### <a name="parameters"></a>Parametri  
 [in] `DebugRegister`  
 Registrare un numero compreso tra 0 e 7 che identifica il debug.  
  
 [in] `DebugValue`  
 Registrare un valore da scrivere per il debug.  
  
## <a name="remarks"></a>Note  
 Queste funzioni intrinseche sono disponibili solo in modalità kernel e le routine sono disponibili solo come funzioni intrinseche.  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|  
|---------------|------------------|  
|`__writedr`|x86, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|  
  
 **File di intestazione** \<intrin. h >  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [__readdr](../intrinsics/readdr.md)