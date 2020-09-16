---
title: Avviso del compilatore (livello 1) C4364
ms.date: 11/04/2016
f1_keywords:
- C4364
helpviewer_keywords:
- C4364
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
ms.openlocfilehash: 7f1c71cb3cd6a99d4ed9960032813e7cebca7591
ms.sourcegitcommit: c1fd917a8c06c6504f66f66315ff352d0c046700
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/16/2020
ms.locfileid: "90685079"
---
# <a name="compiler-warning-level-1-c4364"></a>Avviso del compilatore (livello 1) C4364

\#utilizzo di per l'assembly ' file ' precedentemente visualizzato nella posizione (line_number) senza as_friend attributo; as_friend non applicato

Una `#using` direttiva è stata ripetuta per un file di metadati specificato, ma il **`as_friend`** qualificatore non è stato usato nella prima occorrenza; il compilatore ignorerà il secondo **`as_friend`** .

Per ulteriori informazioni, vedere [assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).

## <a name="examples"></a>Esempi

L'esempio seguente crea un componente.

```cpp
// C4364.cpp
// compile with: /clr /LD
ref class A {};
```

L'esempio seguente genera l'C4364.

```cpp
// C4364_b.cpp
// compile with: /clr /W1 /c
#using " C4364.dll"
#using " C4364.dll" as_friend   // C4364
```
