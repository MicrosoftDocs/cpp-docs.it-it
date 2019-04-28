---
title: Errore del compilatore C3172
ms.date: 11/04/2016
f1_keywords:
- C3172
helpviewer_keywords:
- C3172
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
ms.openlocfilehash: 5c9c1561b63c740b9f7f5d85b2bf3e04de2542c0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62175186"
---
# <a name="compiler-error-c3172"></a>Errore del compilatore C3172

'module_name': non è possibile specificare attributi idl_module diversi nello stesso progetto

[idl_module](../../windows/idl-module.md) attributi con lo stesso nome ma con una diversa `dllname` o `version` parametri sono stati trovati in due dei file in una compilazione. Solo uno univoco `idl_module` attributo può essere specificato per ogni compilazione.

Identico `idl_module` attributi possono essere specificati in più di un file di codice sorgente.

Ad esempio, se seguenti `idl_module` sono stati trovati attributi:

```
// C3172.cpp
[module(name="MyMod")];
[ idl_module(name="x", dllname="file.dll", version="1.1") ];
int main() {}
```

E quindi,

```
// C3172b.cpp
// compile with: C3172.cpp
// C3172 expected
[ idl_module(name="x", dllname="file.dll", version="1.0") ];
```

il compilatore avrebbe generato C3172 (prendere nota dei valori di versione diverso).