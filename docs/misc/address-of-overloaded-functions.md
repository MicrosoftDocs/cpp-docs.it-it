---
title: "Indirizzo di funzioni in overload | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "funzioni in overload indirizzi [C++]"
  - "indirizzi [C++], restituzione con overload"
  - "l'overload, l'indirizzo della funzione (funzione)"
  - "Questo puntatore, le funzioni in overload"
ms.assetid: e7913e65-a295-445d-b2b0-1e60f8dfbc54
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Indirizzo di funzioni in overload
L'utilizzo di un nome di funzione senza argomenti restituisce l'indirizzo di quella funzione. Ad esempio:  
  
```  
int Func( int i, int j );  
int Func( long l );  
  
...  
  
int (*pFunc) ( int, int ) = Func;  
```  
  
 Nell'esempio precedente, la prima versione di `Func` è selezionata e il relativo indirizzo viene copiato in `pFunc`.  
  
 Il compilatore determina quale versione della funzione selezionare trovando una funzione con un elenco di argomenti che corrisponde esattamente a quella della destinazione. Gli argomenti nelle dichiarazioni delle funzioni in overload vengono messi in corrispondenza con uno dei seguenti elementi:  
  
-   Un oggetto inizializzato \(come illustrato nell'esempio precedente\)  
  
-   Il lato sinistro di un'istruzione di assegnazione  
  
-   Un argomento formale a una funzione  
  
-   Un argomento formale a un operatore definito dall'utente  
  
-   Un tipo restituito dalla funzione  
  
 Se non è presente una corrispondenza esatta, l'espressione che accetta l'indirizzo della funzione è ambigua e viene generato un errore.  
  
 Si noti che anche se nell'esempio precedente è stata utilizzata una funzione non membro, `Func`, vengono applicate le stesse regole quando si accetta l'indirizzo delle funzioni membro in overload.  
  
## Vedere anche  
 [Overload \(C\+\+\)](../misc/overloading-cpp.md)