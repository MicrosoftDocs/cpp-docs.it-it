---
title: Errore del compilatore C3172
ms.date: 11/04/2016
f1_keywords:
- C3172
helpviewer_keywords:
- C3172
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
ms.openlocfilehash: ca0eab35f6e60d81a324156905619ceb7ace8830
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91508288"
---
# <a name="compiler-error-c3172"></a>Errore del compilatore C3172

' module_name ': Impossibile specificare attributi di idl_module diversi in un progetto

[idl_module](../../windows/attributes/idl-module.md) attributi con lo stesso nome ma con `dllname` parametri diversi o `version` in due file in una compilazione. `idl_module`È possibile specificare un solo attributo univoco per compilazione.

`idl_module`Gli attributi identici possono essere specificati in più di un file di codice sorgente.

Ad esempio, se `idl_module` sono stati trovati gli attributi seguenti:

```cpp
// C3172.cpp
[module(name="MyMod")];
[ idl_module(name="x", dllname="file.dll", version="1.1") ];
int main() {}
```

E quindi,

```cpp
// C3172b.cpp
// compile with: C3172.cpp
// C3172 expected
[ idl_module(name="x", dllname="file.dll", version="1.0") ];
```

il compilatore genera C3172 (si notino i valori di versione diversi).
