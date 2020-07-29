---
title: Errore degli strumenti del linker LNK2031
ms.date: 11/04/2016
f1_keywords:
- LNK2031
helpviewer_keywords:
- LNK2031
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
ms.openlocfilehash: 326886f8de8b59cce9df46eb7b0325b7cc9eb9f2
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87225202"
---
# <a name="linker-tools-error-lnk2031"></a>Errore degli strumenti del linker LNK2031

> Impossibile generare p/invoke per "*function_declaration*" *Decorated_Name*; Convenzione di chiamata mancante nei metadati

## <a name="remarks"></a>Osservazioni

Quando si tenta di importare una funzione nativa in un'immagine pura, tenere presente che le convenzioni di chiamata implicite sono diverse tra le compilazioni native e pure. Per ulteriori informazioni sulle immagini pure, vedere [codice pure e verificabile (C++/CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

L'opzione del compilatore **/CLR: pure** è deprecata in visual studio 2015 e non è supportata in visual studio 2017.

## <a name="example"></a>Esempio

Questo esempio di codice genera un componente con una funzione esportata nativa, la cui Convenzione di chiamata è implicitamente [__cdecl](../../cpp/cdecl.md).

```cpp
// LNK2031.cpp
// compile with: /LD
extern "C" {
   __declspec(dllexport) int func() { return 3; }
};
```

## <a name="example"></a>Esempio

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

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrato come utilizzare la funzione nativa da un'immagine pure. Si noti l' **`__cdecl`** identificatore della convenzione di chiamata esplicita.

```cpp
// LNK2031_c.cpp
// compile with: /clr:pure LNK2031.lib
extern "C" int __cdecl func();

int main() {
   return func();
}
```
