---
title: Avviso del compilatore (livello 4) C4295
ms.date: 01/09/2018
f1_keywords:
- C4295
helpviewer_keywords:
- C4295
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
ms.openlocfilehash: 5e8b546e4eb4b60197db504382b3230e779b1dec
ms.sourcegitcommit: effb516760c0f956c6308eeded48851accc96b92
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2019
ms.locfileid: "70924842"
---
# <a name="compiler-warning-level-4-c4295"></a>Avviso del compilatore (livello 4) C4295

> '*Array*': la matrice è troppo piccola per includere un carattere null di terminazione

Una matrice è stata inizializzata, ma l'ultimo carattere della matrice non è null. l'accesso alla matrice come stringa può produrre risultati imprevisti.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C4295. Per risolvere questo problema, è possibile dichiarare la dimensione della matrice più grande, per mantenere un valore null di terminazione dalla stringa dell'inizializzatore oppure è possibile usare un elenco di inizializzatori di matrice per rendere chiaro che `char`si tratta di una matrice di, non di una stringa con terminazione null.

```C
// C4295.c
// compile with: /W4

int main() {
   char a[3] = "abc";           // C4295
   char b[3] = {'d', 'e', 'f'}; // No warning
   a[0] = b[2];
}
```
