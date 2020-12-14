---
description: 'Altre informazioni su: errore irreversibile C1022'
title: Errore irreversibile C1022
ms.date: 11/04/2016
f1_keywords:
- C1022
helpviewer_keywords:
- C1022
ms.assetid: edada720-dc73-49bc-bd93-a7945a316312
ms.openlocfilehash: cd608aded29b4f3ebf329586ebc03ce2e325c970
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249763"
---
# <a name="fatal-error-c1022"></a>Errore irreversibile C1022

previsto #endif

Una direttiva `#if`, `#ifdef`o `#ifndef` non corrisponde ad alcuna direttiva `#endif` . Verificare che ogni `#if`, `#ifdef`o `#ifndef` abbia un oggetto `#endif`corrispondente.

L'esempio seguente genera l'errore C1022:

```cpp
// C1022.cpp
#define true 1

#if (true)
#else
#else    // C1022
```

Possibile soluzione:

```cpp
// C1022b.cpp
// compile with: /c
#define true 1

#if (true)
#else
#endif
```
