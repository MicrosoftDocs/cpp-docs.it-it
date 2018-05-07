---
title: Compilatore avviso (livello 4) C4295 | Documenti Microsoft
ms.custom: ''
ms.date: 1/09/2018
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4295
dev_langs:
- C++
helpviewer_keywords:
- C4295
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 815a669bc359121b13b1d636009cad81dc332304
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-warning-level-4-c4295"></a>Avviso del compilatore (livello 4) C4295
  
> '*matrice*': matrice è troppo piccola per includere un carattere di terminazione null  
  
È stata inizializzata una matrice, ma l'ultimo carattere nella matrice non è un valore null. accedere alla matrice sotto forma di stringa può produrre risultati imprevisti.  
  
## <a name="example"></a>Esempio  
  
L'esempio seguente genera l'errore C4295. Per risolvere questo problema, è possibile dichiarare le dimensioni della matrice più grande per contenere un carattere di terminazione null da stringa di inizializzatore o è possibile utilizzare un elenco di inizializzatori di matrice per rendere chiaro preventivo che si tratta di una matrice di `char`, non una stringa con terminazione null.  
  
```C  
// C4295.c
// compile with: /W4


int main() {
   char a[3] = "abc";           // C4295
   char b[3] = {'d', 'e', 'f'}; // No warning
   a[0] = b[2];
}
```
