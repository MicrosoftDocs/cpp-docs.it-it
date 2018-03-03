---
title: Compilatore avviso (livello 4) C4295 | Documenti Microsoft
ms.custom: 
ms.date: 1/09/2018
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4295
dev_langs:
- C++
helpviewer_keywords:
- C4295
ms.assetid: 20dbff85-9f62-4ca3-8fe9-079d4512006d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 56ffdce8c2790a3944a8f79753177bc80e249778
ms.sourcegitcommit: bc086a7acbe2d9fd77d115f269cc2a0dbeeb5b88
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/10/2018
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
