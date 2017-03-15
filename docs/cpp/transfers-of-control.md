---
title: "Trasferimenti del controllo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "flusso di controllo, esecuzione del branching"
  - "flusso di controllo, trasferimento del controllo"
ms.assetid: aa51e7f2-060f-4106-b0fe-331f04357423
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Trasferimenti del controllo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

È possibile usare l'istruzione `goto` o un'etichetta **case** in un'istruzione `switch` per specificare un programma che esegue il branching dopo un inizializzatore.  Tale codice non è valido, a meno che la dichiarazione che contiene l'inizializzatore non sia in un blocco incluso dal blocco in cui si verifica l'istruzione di salto.  
  
 Nell'esempio seguente viene illustrato un ciclo che dichiara e inizializza gli oggetti `total`, `ch` e `i`.  È presente anche un'istruzione errata `goto` che trasferisce il controllo dopo un inizializzatore.  
  
```  
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
  
 Nell'esempio precedente, l'istruzione `goto` prova a trasferire il controllo dopo l'inizializzazione di `i`.  Tuttavia, se `i` è stato dichiarato ma non inizializzato, il trasferimento è valido.  
  
 Gli oggetti `total` e `ch`, dichiarati nel blocco usato come *statement* dell'istruzione `while`, vengono eliminati quando si effettua l'uscita dal blocco, mediante l'istruzione `break`.  
  
## Vedere anche  
 [\(NOTINBUILD\) Declaration of Automatic Objects](http://msdn.microsoft.com/it-it/81f941e9-c1b1-4d1c-a28d-70b6ee9765db)