---
title: Errore del compilatore C3369
ms.date: 11/04/2016
f1_keywords:
- C3369
helpviewer_keywords:
- C3369
ms.assetid: c6ceb9cb-3df9-4334-9a5c-d16db351d476
ms.openlocfilehash: ee936f4921369b1d59d81b51dcb3e81c69be083c
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755603"
---
# <a name="compiler-error-c3369"></a>Errore del compilatore C3369

'module name': idl_module già definito

L'oggetto [idl_module](../../windows/idl-module.md) in cui è stata definita la DLL può essere usato una sola volta in un programma.

L'esempio seguente genera l'errore C3369:

```cpp
// C3369.cpp
// compile with: /c
[idl_module(name="name1", dllname="x.dll")]; // C3369
[idl_module(name="name1", dllname="x.dll")];
```
