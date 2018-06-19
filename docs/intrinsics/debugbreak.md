---
title: DebugBreak | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- __debugbreak_cpp
- __debugbreak
dev_langs:
- C++
helpviewer_keywords:
- breakpoints, __debugbreak intrinsic
- __debugbreak intrinsic
ms.assetid: 1d1e1c0c-891a-4613-ae4b-d790094ba830
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1a3dcead3129c87b2d02f8822019af763c0fe8b8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33340177"
---
# <a name="debugbreak"></a>__debugbreak
**Sezione specifica Microsoft**  
  
 Genera un punto di interruzione nel codice in corrispondenza del quale all'utente verrà richiesto di eseguire il debugger.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void __debugbreak();  
```  
  
## <a name="requirements"></a>Requisiti  
  
|Funzione intrinseca|Architettura|Header|  
|---------------|------------------|------------|  
|`__debugbreak`|x86, ARM, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]|\<intrin.h>|  
  
## <a name="remarks"></a>Note  
 Il `__debugbreak` compilatore intrinseche, in modo analogo [DebugBreak](http://msdn.microsoft.com/library/windows/desktop/ms679297.aspx), è un modo portabile Win32 per un punto di interruzione.  
  
> [!NOTE]
>  Durante la compilazione con **/clr**, una funzione contenente `__debugbreak` verrà compilata in MSIL. `asm int 3` determina la compilazione di una funzione per il codice nativo. Per ulteriori informazioni, vedere [ASM](../assembler/inline/asm.md).  
  
 Ad esempio:  
  
```  
main() {  
   __debugbreak();  
}  
```  
  
 è simile a:  
  
```  
main() {  
   __asm {  
      int 3  
   }  
}  
```  
  
 in un computer x86.  
  
 Questa routine è disponibile solo come funzione intrinseca.  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Intrinseci del compilatore](../intrinsics/compiler-intrinsics.md)   
 [Parole chiave](../cpp/keywords-cpp.md)