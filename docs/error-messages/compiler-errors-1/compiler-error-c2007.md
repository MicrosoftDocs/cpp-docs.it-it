---
title: Errore del compilatore C2007
ms.date: 11/04/2016
f1_keywords:
- C2007
helpviewer_keywords:
- C2007
ms.assetid: ecd09d99-5036-408b-9e46-bc15488f049e
ms.openlocfilehash: 15ac3f76e99b3d101788fdcfd6760f6f9b284f34
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74756539"
---
# <a name="compiler-error-c2007"></a>Errore del compilatore C2007

sintassi \#Definisci

Nessun identificatore viene visualizzato dopo un `#define`. Per risolvere l'errore, usare un identificatore.

L'esempio seguente genera l'C2007:

```cpp
// C2007.cpp
#define   // C2007
```

Possibile soluzione:

```cpp
// C2007b.cpp
// compile with: /c
#define true 1
```
