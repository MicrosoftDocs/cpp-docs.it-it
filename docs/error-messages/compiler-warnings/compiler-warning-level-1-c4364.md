---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4364'
title: Avviso del compilatore (livello 1) C4364
ms.date: 11/04/2016
f1_keywords:
- C4364
helpviewer_keywords:
- C4364
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
ms.openlocfilehash: 760676be4ba431ffa9c514316142b1a14ce87c8e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97311396"
---
# <a name="compiler-warning-level-1-c4364"></a>Avviso del compilatore (livello 1) C4364

\#utilizzo di per l'assembly ' file ' precedentemente visualizzato nella posizione (line_number) senza as_friend attributo; as_friend non applicato

Una `#using` direttiva è stata ripetuta per un file di metadati specificato, ma il **`as_friend`** qualificatore non è stato usato nella prima occorrenza; il compilatore ignorerà il secondo **`as_friend`** .

Per ulteriori informazioni, vedere [assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).

## <a name="examples"></a>Esempio

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
