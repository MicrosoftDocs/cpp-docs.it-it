---
title: Errore del compilatore C3238 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3238
dev_langs:
- C++
helpviewer_keywords:
- C3238
ms.assetid: 19942497-b3c5-4df0-9144-142ced92468b
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e729e0da83638c93dd7e79a55bc0960590f93f08
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3238"></a>Errore del compilatore C3238
'type': tipo con questo nome già inoltrato all'assembly 'assembly'  
  
 In un'applicazione client è stato definito un tipo già definito, mediante la sintassi di inoltro dei tipi, in un assembly di riferimento. Non è possibile definire entrambi i tipi nell'ambito dell'applicazione.  
  
 Vedere [inoltro dei tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md) per ulteriori informazioni.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un assembly che contiene un tipo che è stato inoltrato da un altro assembly.  
  
```  
// C3238.cpp  
// compile with: /clr /LD  
public ref class R {};  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea un assembly che conteneva la definizione del tipo, ma che adesso contiene solo la sintassi di inoltro dei tipi.  
  
```  
// C3238_b.cpp  
// compile with: /clr /LD  
#using "C3238.dll"  
[ assembly:TypeForwardedTo(R::typeid) ];  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3238.  
  
```  
// C3238_c.cpp  
// compile with: /clr /c  
// C3238 expected  
// Delete the following line to resolve.  
#using "C3238_b.dll"  
public ref class R {};  
```