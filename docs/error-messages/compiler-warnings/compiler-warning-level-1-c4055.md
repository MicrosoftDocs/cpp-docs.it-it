---
title: Compilatore avviso (livello 1) C4052 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4055
dev_langs:
- C++
helpviewer_keywords:
- C4055
ms.assetid: f9955421-16ab-46e5-8f9d-bf1639a519ef
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 47d7d8891b589dc8205b0d799f88466c1e7d8a59
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33278980"
---
# <a name="compiler-warning-level-1-c4055"></a>Avviso del compilatore (livello 1) C4055

> '*conversione*': da puntatore a dati '*type1*'a puntatore a funzione '*type2*'

## <a name="remarks"></a>Note

**Obsoleto:** questo avviso non viene generato da Visual Studio 2017 e versioni successive.

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
