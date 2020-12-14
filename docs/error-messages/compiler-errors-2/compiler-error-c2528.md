---
description: 'Altre informazioni su: errore del compilatore C2528'
title: Errore del compilatore C2528
ms.date: 11/04/2016
f1_keywords:
- C2528
helpviewer_keywords:
- C2528
ms.assetid: 2ea9d583-67a8-4b16-b35f-a50eeffc03c4
ms.openlocfilehash: de07867f48843be76ff5b8d74dda9725b50a2560
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97302179"
---
# <a name="compiler-error-c2528"></a>Errore del compilatore C2528

' name ': puntatore a riferimento non valido

Non è possibile dichiarare un puntatore a un riferimento. Dereferenziare la variabile prima di dichiararvi un puntatore.

L'esempio seguente genera l'C2528:

```cpp
// C2528.cpp
int i;
int &ir = i;
int & (*irptr) = ir;    // C2528
```
