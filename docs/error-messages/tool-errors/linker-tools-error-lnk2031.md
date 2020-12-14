---
description: 'Altre informazioni su: errore degli strumenti del linker LNK2031'
title: Errore degli strumenti del linker LNK2031
ms.date: 11/04/2016
f1_keywords:
- LNK2031
helpviewer_keywords:
- LNK2031
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
ms.openlocfilehash: 3d955f106f569f91df9640bacfcca4df511ffd95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97275672"
---
# <a name="linker-tools-error-lnk2031"></a>Errore degli strumenti del linker LNK2031

> Impossibile generare p/invoke per "*function_declaration*" *Decorated_Name*; Convenzione di chiamata mancante nei metadati

## <a name="remarks"></a>Commenti

Quando si tenta di importare una funzione nativa in un'immagine pura, tenere presente che le convenzioni di chiamata implicite sono diverse tra le compilazioni native e pure. Per ulteriori informazioni sulle immagini pure, vedere [codice pure e verificabile (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

## <a name="examples"></a>Esempio

Questo esempio di codice genera un componente con una funzione esportata nativa, la cui Convenzione di chiamata è implicitamente [__cdecl](../../cpp/cdecl.md).

```cpp
// LNK2031.cpp
// compile with: /LD
extern "C" {
   __declspec(dllexport) int func() { return 3; }
};
```

Nell'esempio seguente viene creato un client pure che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata in **/CLR: pure** è [__clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'LNK2031.

```cpp
// LNK2031_b.cpp
// compile with: /clr:pure LNK2031.lib
// LNK2031 expected
extern "C" int func();

int main() {
   return func();
}
```

Nell'esempio seguente viene illustrato come utilizzare la funzione nativa da un'immagine pure. Si noti l' **`__cdecl`** identificatore della convenzione di chiamata esplicita.

```cpp
// LNK2031_c.cpp
// compile with: /clr:pure LNK2031.lib
extern "C" int __cdecl func();

int main() {
   return func();
}
```
