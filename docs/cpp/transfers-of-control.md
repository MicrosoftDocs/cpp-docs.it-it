---
title: Trasferimenti del controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- control flow, branching
- control flow, transferring control
ms.assetid: aa51e7f2-060f-4106-b0fe-331f04357423
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e773a0188eb3450ab1a13a24fc556fa8e8c4f874
ms.sourcegitcommit: 51f804005b8d921468775a0316de52ad39b77c3e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/02/2018
ms.locfileid: "39464269"
---
# <a name="transfers-of-control"></a>Trasferimenti del controllo
È possibile usare la **goto** istruzione o un' **case** etichette in un **passare** istruzione per specificare un programma che esegue il branching dopo un inizializzatore. Tale codice non è valido, a meno che la dichiarazione che contiene l'inizializzatore non sia in un blocco incluso dal blocco in cui si verifica l'istruzione di salto.  
  
 Nell'esempio seguente viene illustrato un ciclo che dichiara e inizializza gli oggetti `total`, `ch` e `i`. È inoltre disponibile un errati **goto** istruzione che trasferisce il controllo dopo un inizializzatore.  
  
```cpp 
// transfers_of_control.cpp  
// compile with: /W1  
// Read input until a nonnumeric character is entered.  
int main()  
{  
   char MyArray[5] = {'2','2','a','c'};  
   int i = 0;  
   while( 1 )  
   {  
      int total = 0;  
  
      char ch = MyArray[i++];  
  
      if ( ch >= '0' && ch <= '9' )  
      {  
         goto Label1;  
  
         int i = ch - '0';  
      Label1:  
         total += i;   // C4700: transfers past initialization of i.  
      } // i would be destroyed here if  goto error were not present  
   else  
      // Break statement transfers control out of loop,  
      //  destroying total and ch.  
      break;  
   }  
}  
```  
  
 Nell'esempio precedente, il **goto** istruzione prova a trasferire il controllo dopo l'inizializzazione di `i`. Tuttavia, se `i` è stato dichiarato ma non inizializzato, il trasferimento è valido.  
  
 Gli oggetti `total` e `ch`, dichiarati nel blocco in cui viene utilizzato come il *istruzione* del **mentre** istruzione, vengono eliminati definitivamente quando tale blocco viene chiuso mediante la  **interruzione** istruzione.  