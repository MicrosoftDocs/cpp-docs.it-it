---
title: Errore del compilatore C2261
ms.date: 11/04/2016
f1_keywords:
- C2261
helpviewer_keywords:
- C2261
ms.assetid: 60969482-9e83-49b5-9631-a04bc844da12
ms.openlocfilehash: f23c2a38f8e4d6781af73fb70a25cf4737e2c4e8
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74758775"
---
# <a name="compiler-error-c2261"></a>Errore del compilatore C2261

' String ': il riferimento all'assembly non è valido e non può essere risolto

Valore non valido.

<xref:System.Runtime.CompilerServices.InternalsVisibleToAttribute> viene usato per specificare un assembly Friend. Se, ad esempio, un file con estensione dll desidera specificare b. dll come assembly Friend, è necessario specificare (in un file con estensione dll): InternalsVisibleTo ("b"). Il runtime consente quindi a b. dll di accedere a tutti gli elementi in un file con estensione dll (eccetto i tipi privati).

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
