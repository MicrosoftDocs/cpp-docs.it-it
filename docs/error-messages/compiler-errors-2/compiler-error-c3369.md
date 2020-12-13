---
description: 'Altre informazioni su: errore del compilatore C3369'
title: Errore del compilatore C3369
ms.date: 11/04/2016
f1_keywords:
- C3369
helpviewer_keywords:
- C3369
ms.assetid: c6ceb9cb-3df9-4334-9a5c-d16db351d476
ms.openlocfilehash: 0391dbd7fe80daf93c8070253181c40fb805fa82
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97150800"
---
# <a name="compiler-error-c3369"></a>Errore del compilatore C3369

'module name': idl_module già definito

L'oggetto [idl_module](../../windows/attributes/idl-module.md) in cui è stata definita la DLL può essere usato una sola volta in un programma.

L'esempio seguente genera l'errore C3369:

```cpp
// C3369.cpp
// compile with: /c
[idl_module(name="name1", dllname="x.dll")]; // C3369
[idl_module(name="name1", dllname="x.dll")];
```
