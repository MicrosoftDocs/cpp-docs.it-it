---
title: Errore del compilatore C3468 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3468
dev_langs:
- C++
helpviewer_keywords:
- C3468
ms.assetid: cfd320db-2f6e-4e0d-ba02-e79ece87e1e0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6a5d8b4fbdded1fc234e3f0de7e05c76d7164a16
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33256723"
---
# <a name="compiler-error-c3468"></a>Errore del compilatore C3468
'type': i tipi possono essere inoltrati solo a un assembly:  
  
 '`file`' non è un assembly  
  
 È possibile inoltrare solo i tipi in un assembly.  
  
 Per ulteriori informazioni, vedere [inoltro dei tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un modulo.  
  
```  
// C3468.cpp  
// compile with: /LN /clr  
public ref class R {};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3468.  
  
```  
// C3468_b.cpp  
// compile with: /clr /c  
#using "C3468.netmodule"  
[ assembly:TypeForwardedTo(R::typeid) ];   // C3468  
```