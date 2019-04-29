---
title: Avviso del compilatore (livello 1) C4052
ms.date: 11/04/2016
f1_keywords:
- C4055
helpviewer_keywords:
- C4055
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
ms.openlocfilehash: e9fcb4356d993d86b622fd49c4a75d587554f7c2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388605"
---
# <a name="compiler-warning-level-1-c4055"></a>Avviso del compilatore (livello 1) C4055

> «*conversione*': da puntatore a dati '*type1*'a puntatore a funzione'*type2*»

## <a name="remarks"></a>Note

**Obsoleti:** Questo avviso non viene generato da Visual Studio 2017 e versioni successive.

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
