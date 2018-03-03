---
title: Errore del compilatore C3461 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3461
dev_langs:
- C++
helpviewer_keywords:
- C3461
ms.assetid: bd66833a-545d-445a-bdfe-dee771a450a4
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 3a06d10bc8a66f1506458a5d095585826c0a6b03
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3461"></a>Errore del compilatore C3461
'type': è possibile inoltrare solo un tipo gestito  
  
 L'inoltro dei tipi può essere usato solo nei tipi CLR.  Vedere [classi e struct](../../windows/classes-and-structs-cpp-component-extensions.md) per ulteriori informazioni.  
  
 Per ulteriori informazioni, vedere [inoltro dei tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C3461.cpp  
// compile with: /clr /LD  
public ref class R {};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3461.  
  
```  
// C3461b.cpp  
// compile with: /clr /c  
#using "C3461.dll"  
class N {};  
[assembly:TypeForwardedTo(N::typeid)];   // C3461  
[assembly:TypeForwardedTo(R::typeid)];   // OK  
```