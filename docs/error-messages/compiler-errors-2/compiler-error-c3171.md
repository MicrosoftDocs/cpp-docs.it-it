---
description: 'Altre informazioni su: errore del compilatore C3171'
title: Errore del compilatore C3171
ms.date: 11/04/2016
f1_keywords:
- C3171
helpviewer_keywords:
- C3171
ms.assetid: 1ce26997-7ef1-4c9f-84da-003ea1a4251e
ms.openlocfilehash: 65e7e1db9a864b894a0bce825df09a372489a79d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97242197"
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
