---
description: 'Altre informazioni su: errore del compilatore C2516'
title: Errore del compilatore C2516
ms.date: 11/04/2016
f1_keywords:
- C2516
helpviewer_keywords:
- C2516
ms.assetid: cd3accc1-0179-4a13-9587-616908c4ad1d
ms.openlocfilehash: 1561a6917d26a9cc4c71a8970e7a75512c1a1b61
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97339289"
---
# <a name="compiler-error-c2516"></a>Errore del compilatore C2516

' name ': non è una classe di base valida

La classe è derivata da un nome di tipo definito da un' **`typedef`** istruzione.

L'esempio seguente genera l'C2516:

```cpp
// C2516.cpp
typedef unsigned long ulong;
class C : public ulong {}; // C2516
```
