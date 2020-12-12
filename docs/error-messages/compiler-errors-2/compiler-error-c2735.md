---
description: 'Altre informazioni su: errore del compilatore C2735'
title: Errore del compilatore C2735
ms.date: 11/04/2016
f1_keywords:
- C2735
helpviewer_keywords:
- C2735
ms.assetid: 6ce45600-7148-4bc0-8699-af0ef137571e
ms.openlocfilehash: 75596e403c118d17ee286a579a347f6793c30bbd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97123149"
---
# <a name="compiler-error-c2735"></a>Errore del compilatore C2735

parola chiave ' keyword ' non consentita nell'identificatore di tipo di parametro formale

La parola chiave non è valida in questo contesto.

L'esempio seguente genera l'C2735:

```cpp
// C2735.cpp
void f(inline int){}   // C2735
```
