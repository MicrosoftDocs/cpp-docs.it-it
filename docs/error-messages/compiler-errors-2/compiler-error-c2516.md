---
title: Errore del compilatore C2516
ms.date: 11/04/2016
f1_keywords:
- C2516
helpviewer_keywords:
- C2516
ms.assetid: cd3accc1-0179-4a13-9587-616908c4ad1d
ms.openlocfilehash: 2114ad048c2061b81f223c86536f23737bdf43fb
ms.sourcegitcommit: c6f8e6c2daec40ff4effd8ca99a7014a3b41ef33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/24/2019
ms.locfileid: "64344753"
---
# <a name="compiler-error-c2516"></a>Errore del compilatore C2516

'name': non è una classe base valida

La classe è derivata da un nome di tipo definito da un `typedef` istruzione.

L'esempio seguente genera l'errore C2516:

```
// C2516.cpp
typedef unsigned long ulong;
class C : public ulong {}; // C2516
```