---
title: Errore del compilatore C2261 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2261
dev_langs:
- C++
helpviewer_keywords:
- C2261
ms.assetid: 60969482-9e83-49b5-9631-a04bc844da12
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 45050daf3149cd813fb23b5814be5fe49c375f03
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33170466"
---
# <a name="compiler-error-c2261"></a>Errore del compilatore C2261
'string': riferimento all'assembly non è valido e non può essere risolto  
  
 Un valore non valido.  
  
 <xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> Consente di specificare un assembly friend. Ad esempio, specificare DLL come assembly friend DLL, deve specificare (in a. dll): InternalsVisibleTo. Il runtime consentirà la DLL accedere a tutte le funzioni di DLL (tranne i tipi privati).  
  
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