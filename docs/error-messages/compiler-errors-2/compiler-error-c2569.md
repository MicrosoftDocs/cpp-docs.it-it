---
title: Errore del compilatore C2569
ms.date: 11/04/2016
f1_keywords:
- C2569
helpviewer_keywords:
- C2569
ms.assetid: 092bed1e-f631-436c-9586-7750629f6fac
ms.openlocfilehash: 7299fe8daa1fa0fc6e1291bf8c683b33235e8bbf
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755525"
---
# <a name="compiler-error-c2569"></a>Errore del compilatore C2569

' EnumOrUnion ': Impossibile utilizzare enum/Union come classe base

Se è necessario derivare un tipo dall'Unione o dall'enumerazione specificata, modificare l'Unione o l'enumerazione in una classe o una struttura.

L'esempio seguente genera l'C2569:

```cpp
// C2569.cpp
// compile with: /c
union ubase {};
class cHasPubUBase : public ubase {};   // C2569
// OK
struct sbase {};
class cHasPubUBase : public sbase {};
```
