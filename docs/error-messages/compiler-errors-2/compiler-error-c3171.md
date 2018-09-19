---
title: Errore del compilatore C3171 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3171
dev_langs:
- C++
helpviewer_keywords:
- C3171
ms.assetid: 1ce26997-7ef1-4c9f-84da-003ea1a4251e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 32c58f2ecd9651c347f45c29139ffe0ed65a6e3b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46082261"
---
# <a name="compiler-error-c3171"></a>Errore del compilatore C3171

'module': non è possibile specificare gli attributi di modulo diversi in un progetto

[modulo](../../windows/module-cpp.md) sono stati trovati attributi con elenchi di parametri diversi nelle due dei file in una compilazione. Solo uno univoco `module` attributo può essere specificato per ogni compilazione.

Identico `module` attributi possono essere specificati in più di un file di codice sorgente.

Ad esempio, se seguenti `module` sono stati trovati attributi:

```
// C3171.cpp
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.0") ];
int main() {}
```

E quindi,

```
// C3171b.cpp
// compile with: C3171.cpp
// C3171 expected
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f", version="1.1") ];
```

il compilatore avrebbe generato C3171 (prendere nota dei valori di versione diverso).