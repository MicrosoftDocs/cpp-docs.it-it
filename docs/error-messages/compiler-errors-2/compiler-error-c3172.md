---
title: Errore del compilatore C3172
ms.date: 11/04/2016
f1_keywords:
- C3172
helpviewer_keywords:
- C3172
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
ms.openlocfilehash: 1da2676d660d23e3fb71b56263779b1f1edacbf9
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761738"
---
# <a name="compiler-error-c3172"></a>Errore del compilatore C3172

' module_name ': Impossibile specificare attributi di idl_module diversi in un progetto

[idl_module](../../windows/idl-module.md) attributi con lo stesso nome ma con parametri `dllname` o `version` diversi sono stati trovati in due dei file di una compilazione. È possibile specificare un solo attributo `idl_module` univoco per compilazione.

Gli attributi di `idl_module` identici possono essere specificati in più file di codice sorgente.

Ad esempio, se sono stati trovati gli attributi `idl_module` seguenti:

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
