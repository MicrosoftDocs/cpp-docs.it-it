---
title: Errore del compilatore C3171
ms.date: 11/04/2016
f1_keywords:
- C3171
helpviewer_keywords:
- C3171
ms.assetid: 1ce26997-7ef1-4c9f-84da-003ea1a4251e
ms.openlocfilehash: a3af19fa6b4f4def9bb42325f648109cfafcdaef
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761751"
---
# <a name="compiler-error-c3171"></a>Errore del compilatore C3171

' Module ': Impossibile specificare attributi di modulo diversi in un progetto

gli attributi [modulo](../../windows/module-cpp.md) con elenchi di parametri diversi sono stati trovati in due file in una compilazione. È possibile specificare un solo attributo `module` univoco per compilazione.

Gli attributi di `module` identici possono essere specificati in più file di codice sorgente.

Ad esempio, se sono stati trovati gli attributi `module` seguenti:

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
