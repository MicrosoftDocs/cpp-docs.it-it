---
title: Errore del compilatore C2778
ms.date: 11/04/2016
f1_keywords:
- C2778
helpviewer_keywords:
- C2778
ms.assetid: b24cb732-2914-42cc-8928-e2d87b393428
ms.openlocfilehash: 98b5bf0a1315236f3ce96fd4b8c140ce1ab70a9f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69501042"
---
# <a name="compiler-error-c2778"></a>Errore del compilatore C2778

GUID in formato non corretto in _ _ declspec (UUID ())

All'attributo esteso [UUID](../../cpp/uuid-cpp.md) viene fornito un GUID errato.

Il GUID deve essere una stringa di numeri esadecimali nel formato seguente:

```
// C2778a.cpp
// compile with: /c
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};
struct __declspec(uuid("{00000000-0000-0000-0000-000000000000}")) B{};
```

L' `uuid` attributo esteso accetta le stringhe riconosciute da [CLSIDFromString](/windows/win32/api/combaseapi/nf-combaseapi-clsidfromstring), con o senza delimitatori di parentesi graffe.

L'esempio seguente genera l'C2778:

```
// C2778b.cpp
struct __declspec(uuid(" 00000000-0000-0000-0000-000000000000 ")) C { };   // C2778
struct __declspec(uuid("00000000000000000000000000000000")) D { };   // C2778
```