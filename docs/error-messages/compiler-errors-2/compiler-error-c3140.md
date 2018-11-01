---
title: Errore del compilatore C3140
ms.date: 11/04/2016
f1_keywords:
- C3140
helpviewer_keywords:
- C3140
ms.assetid: 122f8943-fac3-4db8-a3a8-2c5d19233de6
ms.openlocfilehash: e7dde3eb27c018502225ea3bc45e4bee7c699379
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50623158"
---
# <a name="compiler-error-c3140"></a>Errore del compilatore C3140

non può contenere più attributi 'module' nella stessa unità di compilazione

Il [modulo](../../windows/module-cpp.md) attributo può essere definito una sola volta per ogni progetto.

L'esempio seguente genera l'errore C3140:

```
// C3140.cpp
// compile with: /c
[emitidl];
[module(name = "MyLibrary")];
[module(name = "MyLibrary2")];   // C3140
```