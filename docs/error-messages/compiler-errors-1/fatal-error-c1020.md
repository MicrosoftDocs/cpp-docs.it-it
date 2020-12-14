---
description: 'Altre informazioni su: errore irreversibile C1020'
title: Errore irreversibile C1020
ms.date: 11/04/2016
f1_keywords:
- C1020
helpviewer_keywords:
- C1020
ms.assetid: 42f429e2-5e3b-4086-a10d-b99e032e51c5
ms.openlocfilehash: 444da85bddf65533eb5ae37278085664efeae7ee
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97316362"
---
# <a name="fatal-error-c1020"></a>Errore irreversibile C1020

#endif imprevisto

La direttiva `#endif` non corrisponde ad alcuna direttiva `#if`, `#ifdef`o `#ifndef` . Verificare che a ogni `#endif` corrisponda una direttiva.

L'esempio seguente genera l'errore C1020:

```cpp
// C1020.cpp
#endif     // C1020
```

Possibile soluzione:

```cpp
// C1020b.cpp
// compile with: /c
#if 1
#endif
```
