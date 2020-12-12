---
description: 'Altre informazioni su: Command-Line avviso D9043'
title: Avviso della riga di comando D9043
ms.date: 11/04/2016
f1_keywords:
- D9043
helpviewer_keywords:
- D9043
ms.assetid: 9263e28d-217b-414c-bfb6-86efd3c27a77
ms.openlocfilehash: ac61626f21465056ea96efe784e19405481f1b0f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97119749"
---
# <a name="command-line-warning-d9043"></a>Avviso della riga di comando D9043

il valore ' warning_level ' non è valido per ' compiler_option '; Supponendo ' 4999'; Gli avvisi di analisi del codice non sono associati ai livelli di avviso

## <a name="example"></a>Esempio

L'esempio seguente genera l'C9043.

```cpp
// D9043.cpp
// compile with: /analyze /w16001
// D9043 warning expected
int main() {}
```
