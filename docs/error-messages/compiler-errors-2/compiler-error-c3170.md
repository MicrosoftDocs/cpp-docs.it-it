---
description: 'Altre informazioni su: errore del compilatore C3170'
title: Errore del compilatore C3170
ms.date: 11/04/2016
f1_keywords:
- C3170
helpviewer_keywords:
- C3170
ms.assetid: ca9a59d6-7df3-42f0-b028-c09d0af3ac2a
ms.openlocfilehash: c799d3c62b32e87aadd02b22f22bb20db25ff16b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242236"
---
# <a name="compiler-error-c3170"></a>Errore del compilatore C3170

non è possibile avere identificatori di moduli diversi in un progetto

attributi [modulo](../../windows/attributes/module-cpp.md) con nomi diversi trovati in due file in una compilazione. `module`È possibile specificare un solo attributo univoco per compilazione.

`module`Gli attributi identici possono essere specificati in più di un file di codice sorgente.

Ad esempio, se sono stati trovati gli attributi del modulo seguenti:

```cpp
// C3170.cpp
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];
int main() {}
```

E quindi,

```cpp
// C3170b.cpp
// compile with: C3170.cpp
// C3170 expected
[ module(name="MyModule1", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];
```

il compilatore genera C3170 (si notino i nomi diversi).
