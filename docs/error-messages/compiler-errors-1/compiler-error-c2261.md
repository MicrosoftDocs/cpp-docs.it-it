---
description: 'Altre informazioni su: errore del compilatore C2261'
title: Errore del compilatore C2261
ms.date: 11/04/2016
f1_keywords:
- C2261
helpviewer_keywords:
- C2261
ms.assetid: 60969482-9e83-49b5-9631-a04bc844da12
ms.openlocfilehash: c5156a240696f9021613b54cf7013e9372a13b45
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97134615"
---
# <a name="compiler-error-c2261"></a>Errore del compilatore C2261

' String ': il riferimento all'assembly non è valido e non può essere risolto

Valore non valido.

<xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> viene usato per specificare un assembly Friend. Se, ad esempio, a.dll desidera specificare b.dll come assembly Friend, è necessario specificare (in a.dll): InternalsVisibleTo ("b"). Il runtime consente quindi b.dll di accedere a tutti gli elementi in a.dll (ad eccezione dei tipi privati).

Per ulteriori informazioni sulla sintassi corretta quando si specificano gli assembly Friend, vedere [assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2261.

```cpp
// C2261.cpp
// compile with: /clr /c
using namespace System::Runtime::CompilerServices;
[assembly: InternalsVisibleTo("a,a,a")];   // C2261
[assembly: InternalsVisibleTo("a.a")];   // OK
[assembly: InternalsVisibleTo("a")];   // OK
```
