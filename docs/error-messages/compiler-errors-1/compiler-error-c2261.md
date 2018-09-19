---
title: Errore del compilatore C2261 | Microsoft Docs
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
ms.openlocfilehash: 2ed43dc43fb6ceaf514a8e7452b06eb7bdaf7362
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051646"
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