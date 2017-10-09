---
title: Errore del compilatore C2261 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2261
dev_langs:
- C++
helpviewer_keywords:
- C2261
ms.assetid: 60969482-9e83-49b5-9631-a04bc844da12
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 8269b891ed899501625973b81c1823d4db2d56c8
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2261"></a>Errore del compilatore C2261
'string': riferimento all'assembly non è valido e non può essere risolto  
  
 Un valore non valido.  
  
 <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute>viene utilizzato per specificare un assembly friend. Ad esempio, specificare DLL come assembly friend DLL, deve specificare (in a. dll): InternalsVisibleTo. Il runtime consentirà la DLL accedere a tutte le funzioni di DLL (tranne i tipi privati).  
  
 Per ulteriori informazioni sulla sintassi corretta quando si specifica l'assembly friend, vedere [assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C2261.  
  
```  
// C2261.cpp  
// compile with: /clr /c  
using namespace System::Runtime::CompilerServices;  
[assembly: InternalsVisibleTo("a,a,a")];   // C2261  
[assembly: InternalsVisibleTo("a.a")];   // OK  
[assembly: InternalsVisibleTo("a")];   // OK  
```
