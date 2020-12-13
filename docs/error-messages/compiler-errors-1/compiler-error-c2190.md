---
description: 'Altre informazioni su: errore del compilatore C2190'
title: Errore del compilatore C2190
ms.date: 11/04/2016
f1_keywords:
- C2190
helpviewer_keywords:
- C2190
ms.assetid: 34e15f85-d979-4948-80fc-46c414508a70
ms.openlocfilehash: aeee732ff819746afa3bc572d4c090a694707afd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337693"
---
# <a name="compiler-error-c2190"></a>Errore del compilatore C2190

primo elenco di parametri più lungo del secondo

Una funzione C è stata dichiarata una seconda volta con un elenco di parametri più breve. C non supporta le funzioni in overload.

L'esempio seguente genera l'C2190:

```c
// C2190.c
// compile with: /Za /c
void func( int, float );
void func( int  );   // C2190, different parameter list
void func2( int  );   // OK
```
