---
title: Avviso del compilatore (livello 1) C4091
ms.date: 11/04/2016
f1_keywords:
- C4091
helpviewer_keywords:
- C4091
ms.assetid: 3a404967-ab42-49b0-b324-fd7ba1859d78
ms.openlocfilehash: ce6dd980ef70f129a0dbae474b8f717f7573f861
ms.sourcegitcommit: 0cfc43f90a6cc8b97b24c42efcf5fb9c18762a42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/05/2019
ms.locfileid: "73626745"
---
# <a name="compiler-warning-level-1-c4091"></a>Avviso del compilatore (livello 1) C4091

' keyword ': ignorato a sinistra di ' type ' quando non è dichiarata alcuna variabile

Il compilatore ha rilevato una situazione in cui l'utente probabilmente ha voluto dichiarare una variabile, ma il compilatore non è stato in grado di dichiarare la variabile.

## <a name="example"></a>Esempio

Un attributo `__declspec` all'inizio di una dichiarazione di tipo definito dall'utente si applica alla variabile di quel tipo. C4091 indica che non è stata dichiarata alcuna variabile. L'esempio seguente genera l'C4091.

```cpp
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

Se un identificatore è un typedef, non può essere anche un nome di variabile. L'esempio seguente genera l'C4091.

```cpp
// C4091_b.cpp
// compile with: /c /W1 /WX
#define LIST 4
typedef struct _LIST {} LIST;   // C4091
```