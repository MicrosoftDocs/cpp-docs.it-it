---
title: Compilatore avviso (livello 1) C4138 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4138
dev_langs:
- C++
helpviewer_keywords:
- C4138
ms.assetid: 65ebf929-bba0-4237-923b-c1b66adfe17d
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: cc3102f18021c16663bdf61dcde6df5e6893d46c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43197088"
---
# <a name="compiler-warning-level-1-c4138"></a>Avviso del compilatore (livello 1) C4138
trovato '*/' all'esterno di un commento  
  
 Il delimitatore di chiusura commento non è preceduto da un delimitatore di apertura commento. Il compilatore prevede la presenza di uno spazio tra l'asterisco (<strong>\**</strong>) e la barra (/).  
  
## <a name="example"></a>Esempio  
  
```  
// C4138a.cpp  
// compile with: /W1  
int */*comment*/ptr;   // C4138 Ambiguous first delimiter causes warning  
int main()  
{  
}  
```  
  
 Questo avviso può derivare dal tentativo di annidare commenti.  
  
 Per risolvere l'avviso, è possibile impostare come commento le sezioni di codice che contengono commenti, racchiudere il codice in un blocco **#if/#endif** e impostare l'espressione di controllo su zero:  
  
```  
// C4138b.cpp  
// compile with: /W1  
#if 0  
int my_variable;   /* Declaration currently not needed */  
#endif  
int main()  
{  
}  
```