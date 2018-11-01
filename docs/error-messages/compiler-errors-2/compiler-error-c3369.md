---
title: Errore del compilatore C3369
ms.date: 11/04/2016
f1_keywords:
- C3369
helpviewer_keywords:
- C3369
ms.assetid: c6ceb9cb-3df9-4334-9a5c-d16db351d476
ms.openlocfilehash: 0cd27da4b73732513afe0bd33a2d7312e6ddbe97
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50618959"
---
# <a name="compiler-error-c3369"></a>Errore del compilatore C3369

'module name': idl_module già definito

L'oggetto [idl_module](../../windows/idl-module.md) in cui è stata definita la DLL può essere usato una sola volta in un programma.

L'esempio seguente genera l'errore C3369:

```
// C3369.cpp
// compile with: /c
[idl_module(name="name1", dllname="x.dll")]; // C3369
[idl_module(name="name1", dllname="x.dll")];
```