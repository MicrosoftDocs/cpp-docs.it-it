---
description: 'Altre informazioni su: errore del compilatore C3553'
title: Errore del compilatore C3553
ms.date: 11/04/2016
f1_keywords:
- C3553
helpviewer_keywords:
- C3553
ms.assetid: 7f84bf37-6419-4ad3-ab30-64266100b930
ms.openlocfilehash: 43e322b78bac05f6e301501a86ce7fbd2f27d285
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223217"
---
# <a name="compiler-error-c3553"></a>Errore del compilatore C3553

> con decltype è prevista un'espressione e non un tipo

La parola chiave `decltype()` richiede un'espressione come argomento, non il nome di un tipo. Ad esempio, l'ultima istruzione nel frammento di codice seguente genera l'errore C3553.

```cpp
int x = 0;
decltype(x+1);
decltype(int); // C3553
```
