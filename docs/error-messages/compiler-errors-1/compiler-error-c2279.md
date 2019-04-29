---
title: Errore del compilatore C2279
ms.date: 11/04/2016
f1_keywords:
- C2279
helpviewer_keywords:
- C2279
ms.assetid: 1b5c88ef-2336-49b8-9ddb-d61f97c73e14
ms.openlocfilehash: f35e384a5b242eb28427e1ff62ac55a3e9b206c4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388864"
---
# <a name="compiler-error-c2279"></a>Errore del compilatore C2279

Specifica di eccezione non può trovarsi in una dichiarazione typedef

Sotto **/Za**, [specifiche di eccezione](../../cpp/exception-specifications-throw-cpp.md) non sono consentiti in una dichiarazione typedef.

L'esempio seguente genera l'errore C2279:

```
// C2279.cpp
// compile with: /Za /c
typedef int (*xy)() throw(...);   // C2279
typedef int (*xyz)();   // OK
```