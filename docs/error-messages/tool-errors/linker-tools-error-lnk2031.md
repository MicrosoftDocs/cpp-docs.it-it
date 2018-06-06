---
title: Strumenti del linker LNK2031 errore | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK2031
dev_langs:
- C++
helpviewer_keywords:
- LNK2031
ms.assetid: 18ed4b6e-3e75-443c-bbd8-2f6030dc89ee
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d86ea6da8a73d9ba2427e9455c4fca87cd32dd2b
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "34703665"
---
# <a name="linker-tools-error-lnk2031"></a>Errore degli strumenti del linker LNK2031

> Impossibile generare p/invoke per "*function_declaration*" *nome_decorato*; convenzione di chiamata mancante nei metadati

## <a name="remarks"></a>Note

Quando si tenta di importare una funzione nativa in un'immagine pure, tenere presente che le convenzioni di chiamata implicite differiscono tra compilazioni pure e native. Per ulteriori informazioni sulle immagini, vedere [codice Pure e verificabile (C + + CLI)](../../dotnet/pure-and-verifiable-code-cpp-cli.md).

Il **/clr: pure** opzione del compilatore è deprecato in Visual Studio 2015 e non supportata in Visual Studio 2017.

## <a name="example"></a>Esempio

In questo esempio di codice genera un componente con una funzione nativa esportata la cui convenzione di chiamata implicita [cdecl](../../cpp/cdecl.md).

```cpp
// LNK2031.cpp
// compile with: /LD
extern "C" {
   __declspec(dllexport) int func() { return 3; }
};
```

## <a name="example"></a>Esempio

L'esempio seguente crea un client puro che utilizza la funzione nativa. Tuttavia, la convenzione di chiamata in **/clr: pure** è [clrcall](../../cpp/clrcall.md). L'esempio seguente genera l'errore LNK2031.

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

L'esempio seguente viene illustrato come utilizzare una funzione nativa da un'immagine pure. Si noti la proprietà esplicita **cdecl** identificatore di convenzione di chiamata.

```cpp
// LNK2031_c.cpp
// compile with: /clr:pure LNK2031.lib
extern "C" int __cdecl func();

int main() {
   return func();
}
```