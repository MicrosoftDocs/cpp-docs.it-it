---
title: Errore del compilatore C3171
ms.date: 11/04/2016
f1_keywords:
- C3171
helpviewer_keywords:
- C3171
ms.assetid: 1ce26997-7ef1-4c9f-84da-003ea1a4251e
ms.openlocfilehash: 14f0cedc5448005a29d74f05ae3e68e74eb5cf1c
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508296"
---
# <a name="compiler-error-c3171"></a>Errore del compilatore C3171

' Module ': Impossibile specificare attributi di modulo diversi in un progetto

gli attributi [modulo](../../windows/attributes/module-cpp.md) con elenchi di parametri diversi sono stati trovati in due file in una compilazione. `module`È possibile specificare un solo attributo univoco per compilazione.

`module`Gli attributi identici possono essere specificati in più di un file di codice sorgente.

Ad esempio, se `module` sono stati trovati gli attributi seguenti:

```cpp
// C3171.cpp
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.0") ];
int main() {}
```

E quindi,

```cpp
// C3171b.cpp
// compile with: C3171.cpp
// C3171 expected
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.1") ];
```

il compilatore genera C3171 (si notino i valori di versione diversi).
