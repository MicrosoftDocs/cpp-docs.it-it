---
title: Errore del compilatore C3172 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3172
dev_langs:
- C++
helpviewer_keywords:
- C3172
ms.assetid: 1834e2fd-6036-4c33-aff2-b51bc7c99441
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25c3b1fd9132c6b170fdf74b1619a35d83959f90
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46117640"
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