---
title: Errore del compilatore C3170
ms.date: 11/04/2016
f1_keywords:
- C3170
helpviewer_keywords:
- C3170
ms.assetid: ca9a59d6-7df3-42f0-b028-c09d0af3ac2a
ms.openlocfilehash: 5ef39e4580601dd90b5695d9115902bb5b834409
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50655689"
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