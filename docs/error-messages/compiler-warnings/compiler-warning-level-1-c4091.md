---
title: Del compilatore (livello 1) Avviso C4091
ms.date: 11/04/2016
f1_keywords:
- C4091
helpviewer_keywords:
- C4091
ms.assetid: 3a404967-ab42-49b0-b324-fd7ba1859d78
ms.openlocfilehash: 87432a74dfe7c09a52f436d4e91b3f70eb66856b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50491741"
---
# <a name="compiler-warning-level-1-c4091"></a>Del compilatore (livello 1) Avviso C4091

'keyword': ignorato a sinistra di 'type' quando si dichiara alcuna variabile

Il compilatore ha rilevato una situazione in cui l'utente deve probabilmente una variabile che deve essere dichiarata, ma il compilatore non è in grado di dichiarare la variabile.

## <a name="example"></a>Esempio

Oggetto `__declspec` attributo all'inizio di una dichiarazione di tipo definito dall'utente si applica alla variabile di quel tipo. C4091 indica che nessuna variabile è dichiarata. L'esempio seguente genera l'errore C4091.

```
// C4091.cpp
// compile with: /W1 /c
__declspec(dllimport) class X {}; // C4091

// __declspec attribute applies to varX
__declspec(dllimport) class X2 {} varX;

// __declspec attribute after the class or struct keyword
// applies to user defined type
class __declspec(dllimport) X3 {};
```

## <a name="example"></a>Esempio

Se un identificatore è un typedef, non può essere anche un nome di variabile. L'esempio seguente genera l'errore C4091.

```
// C4091_b.cpp
// compile with: /c /W1 /WX
#define LIST 4
typedef struct _LIST {} LIST;   // C4091
```