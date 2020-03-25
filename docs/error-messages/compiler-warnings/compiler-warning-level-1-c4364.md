---
title: Avviso del compilatore (livello 1) C4364
ms.date: 11/04/2016
f1_keywords:
- C4364
helpviewer_keywords:
- C4364
ms.assetid: 1477634c-d60f-4570-ad16-1aaeae24ac7f
ms.openlocfilehash: 79c8809b4de9d6853aaacec4283bf01d0e89305e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187102"
---
# <a name="compiler-warning-level-1-c4364"></a>Avviso del compilatore (livello 1) C4364

\#utilizzando per l'assembly ' file ' precedentemente visualizzato nella posizione (line_number) senza as_friend attributo; as_friend non applicato

Una direttiva `#using` è stata ripetuta per un file di metadati specificato, ma il qualificatore di `as_friend` non è stato usato nella prima occorrenza; il compilatore ignorerà il secondo `as_friend`.

Per ulteriori informazioni, vedere [assembly Friend (C++)](../../dotnet/friend-assemblies-cpp.md).

## <a name="example"></a>Esempio

L'esempio seguente crea un componente.

```cpp
// C4364.cpp
// compile with: /clr /LD
ref class A {};
```

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4364.

```cpp
// C4364_b.cpp
// compile with: /clr /W1 /c
#using " C4364.dll"
#using " C4364.dll" as_friend   // C4364
```
