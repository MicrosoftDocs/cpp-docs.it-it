---
title: Avviso del compilatore (livello 1) C4055
ms.date: 11/04/2016
f1_keywords:
- C4055
helpviewer_keywords:
- C4055
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
ms.openlocfilehash: 47883f60c3205125a8ee88b804c1d622b3ba0b41
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041029"
---
# <a name="compiler-warning-level-1-c4055"></a>Avviso del compilatore (livello 1) C4055

> '*conversion*': dal puntatore a dati '*tipo1*' al puntatore a funzione '*tipo2*'

## <a name="remarks"></a>Commenti

**Obsolete:** Questo avviso non viene generato da Visual Studio 2017 e versioni successive.

Viene eseguito il cast (probabilmente in modo errato) di un puntatore a dati a un puntatore a funzione. Si tratta di un avviso di livello 1 in /Za e di un avviso di livello 4 in /Ze.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4055:

```C
// C4055.c
// compile with: /Za /W1 /c
typedef int (*PFUNC)();
int *pi;
PFUNC f() {
   return (PFUNC)pi;   // C4055
}
```

In /Ze questo è un avviso di livello 4.

```C
// C4055b.c
// compile with: /W4 /c
typedef int (*PFUNC)();
int *pi;
PFUNC f() {
return (PFUNC)pi;   // C4055
}
```
