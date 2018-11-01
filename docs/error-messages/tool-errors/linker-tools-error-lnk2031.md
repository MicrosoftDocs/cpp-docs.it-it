---
title: Errore degli strumenti del linker LNK2031
ms.date: 11/04/2016
f1_keywords:
- LNK2031
helpviewer_keywords:
- LNK2031
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
ms.openlocfilehash: 003b9a58bfb08130f034530f59e2de27efa2ae8d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50484837"
---
# <a name="linker-tools-error-lnk2031"></a>Errore degli strumenti del linker LNK2031

> Impossibile generare p/invoke per "*function_declaration*" *nome_decorato*; convenzione di chiamata mancante nei metadati

## <a name="remarks"></a>Note

Quando si prova a importare una funzione nativa in un'immagine pure, tenere presente che le convenzioni di chiamata implicite differiscono tra le compilazioni native e pure. Per altre informazioni sulle immagini, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Il **/clr: pure** opzione del compilatore è obsoleta in Visual Studio 2015 e non sono supportata in Visual Studio 2017.

## <a name="example"></a>Esempio

Questo esempio di codice genera un componente con una funzione esportata la nativa, il cui convenzione di chiamata è implicitamente [cdecl](../../cpp/cdecl.md).

```cpp
// LNK2031.cpp
// compile with: /LD
extern "C" {
   __declspec(dllexport) int func() { return 3; }
};
```

## <a name="example"></a>Esempio

L'esempio seguente crea un client puro che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata sotto **/clr: pure** viene [clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'errore LNK2031.

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

L'esempio seguente illustra come usare la funzione nativa da un'immagine pure. Si noti l'impostazione esplicita **cdecl** identificatore di convenzione di chiamata.

```cpp
// LNK2031_c.cpp
// compile with: /clr:pure LNK2031.lib
extern "C" int __cdecl func();

int main() {
   return func();
}
```