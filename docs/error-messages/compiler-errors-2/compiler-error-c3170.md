---
title: Errore del compilatore C3170 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3170
dev_langs:
- C++
helpviewer_keywords:
- C3170
ms.assetid: ca9a59d6-7df3-42f0-b028-c09d0af3ac2a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e7a193abcd59c3e9454eec1108f1e3bbb66efcc8
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46070366"
---
# <a name="compiler-error-c3170"></a>Errore del compilatore C3170

non può avere identificatori di moduli diversi in un progetto

[modulo](../../windows/module-cpp.md) sono stati trovati attributi con nomi diversi in due dei file in una compilazione. Solo uno univoco `module` attributo può essere specificato per ogni compilazione.

Identico `module` attributi possono essere specificati in più di un file di codice sorgente.

Ad esempio, se sono stati rilevati i seguenti attributi di modulo:

```
// C3170.cpp
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];
int main() {}
```

E quindi,

```
// C3170b.cpp
// compile with: C3170.cpp
// C3170 expected
[ module(name="MyModule1", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];
```

il compilatore avrebbe generato C3170 (notare i nomi diversi).