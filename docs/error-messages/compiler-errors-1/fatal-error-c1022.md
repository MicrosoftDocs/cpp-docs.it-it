---
title: Errore irreversibile C1022 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1022
dev_langs:
- C++
helpviewer_keywords:
- C1022
ms.assetid: edada720-dc73-49bc-bd93-a7945a316312
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4ddeea660515ea0a71e4807a34d2172413796046
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46036735"
---
# <a name="fatal-error-c1022"></a>Errore irreversibile C1022

previsto #endif

Una direttiva `#if`, `#ifdef`o `#ifndef` non corrisponde ad alcuna direttiva `#endif` . Verificare che ogni `#if`, `#ifdef`o `#ifndef` abbia un oggetto `#endif`corrispondente.

L'esempio seguente genera l'errore C1022:

```
// C1022.cpp
#define true 1

#if (true)
#else
#else    // C1022
```

Possibile soluzione:

```
// C1022b.cpp
// compile with: /c
#define true 1

#if (true)
#else
#endif
```