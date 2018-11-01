---
title: Avviso del compilatore (livello 4) C4295
ms.date: 1/09/2018
f1_keywords:
- C4295
helpviewer_keywords:
- C4295
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
ms.openlocfilehash: ed31ea19f9c36a9c6fab7452a4bfc3843a151059
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50472189"
---
# <a name="compiler-warning-level-4-c4295"></a>Avviso del compilatore (livello 4) C4295

> «*matrice*': matrice è troppo piccola per includere un carattere di terminazione null

È stata inizializzata una matrice, ma l'ultimo carattere nella matrice non è un valore null. accedere alla matrice sotto forma di stringa possono produrre risultati imprevisti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4295. Per risolvere questo problema, si potrebbe dichiarare la dimensione della matrice più grande, per contenere un carattere di terminazione null da stringa di inizializzatore, oppure è possibile usare un elenco di inizializzatori di matrice per rendere chiaro intent che si tratta di una matrice di `char`, non una stringa con terminazione null.

```C
// C4295.c
// compile with: /W4

int main() {
   char a[3] = "abc";           // C4295
   char b[3] = {'d', 'e', 'f'}; // No warning
   a[0] = b[2];
}
```
