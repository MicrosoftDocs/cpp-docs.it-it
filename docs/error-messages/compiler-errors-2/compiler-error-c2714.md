---
title: Errore del compilatore C2714
ms.date: 11/04/2016
f1_keywords:
- C2714
helpviewer_keywords:
- C2714
ms.assetid: 401a5a42-660c-4bad-9d63-1a2d092bc489
ms.openlocfilehash: feba363a7cd15d92bf850e8cba457ff310d15490
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62386798"
---
# <a name="compiler-error-c2714"></a>Errore del compilatore C2714

non è consentito __alignof(void)

Un valore non valido passato a un operatore.

Visualizzare [operatore alignof](../../cpp/alignof-operator.md) per altre informazioni.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2714.

```
// C2714.cpp
int main() {
   return __alignof(void);   // C2714
   return __alignof(char);   // OK
}
```