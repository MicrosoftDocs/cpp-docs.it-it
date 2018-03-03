---
title: Compilatore avviso (livello 1) C4138 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4138
dev_langs:
- C++
helpviewer_keywords:
- C4138
ms.assetid: 65ebf929-bba0-4237-923b-c1b66adfe17d
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 568c12beecfcfc7f5fd8cece4b19f10fa38e54e7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4138"></a>Avviso del compilatore (livello 1) C4138
trovato '*/' all'esterno di un commento  
  
 Il delimitatore di chiusura commento non è preceduto da un delimitatore di apertura commento. Il compilatore prevede la presenza di uno spazio tra l'asterisco (**\***) e la barra (/).  
  
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