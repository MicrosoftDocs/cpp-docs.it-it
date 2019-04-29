---
title: Errore del compilatore C2261
ms.date: 11/04/2016
f1_keywords:
- C2261
helpviewer_keywords:
- C2261
ms.assetid: 60969482-9e83-49b5-9631-a04bc844da12
ms.openlocfilehash: 2df788efd93fb531822d858ea5aee1722487db81
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62387041"
---
# <a name="compiler-error-c2261"></a>Errore del compilatore C2261

'string': riferimento all'assembly non è valido e non può essere risolto

Un valore non valido.

<xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> Consente di specificare un assembly friend. Ad esempio, se vuole specificare la DLL come assembly friend DLL, si specificherà (in a. dll): InternalsVisibleTo. Il runtime consente quindi di DLL accedere a tutti gli elementi di DLL (eccetto i tipi privati).

Per altre informazioni sulla sintassi corretta quando si specificano gli assembly friend, vedere [gli assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).

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