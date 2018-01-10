---
title: Risoluzione ambigue dichiarazioni (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
ms.assetid: 3d773ee7-bbea-47de-80c2-cb0a9d4ec0b9
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 70c010cf3806581c6b77bb508f3adb68e3c230f0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="resolving-ambiguous-declarations-c"></a>Risoluzione ambigue dichiarazioni (C++)
Per eseguire le conversioni esplicite da un tipo a un altro, è necessario utilizzare i cast, specificando il nome del tipo desiderato. Alcuni cast di tipo danno come risultato un'ambiguità sintattica. Il seguente cast di tipo funzione è ambiguo:  
  
```  
char *aName( String( s ) );  
```  
  
 Non è chiaro se è una dichiarazione di funzione o una dichiarazione dell'oggetto con una funzione cast di tipo come l'inizializzatore: può dichiarare una funzione che restituisce il tipo di **char \***  che accetta un argomento di tipo `String` , oppure può dichiarare l'oggetto `aName` e inizializzarlo con il valore di `s` cast al tipo `String`.  
  
 Se una dichiarazione può essere considerata una dichiarazione di funzione valida, viene trattata come tale. Solo se non può eventualmente essere una dichiarazione della funzione (ovvero se è sintatticamente errata) è un'istruzione valutata per verificare se si tratta di un cast di tipo funzione. Di conseguenza, il compilatore considera l'istruzione come una dichiarazione di una funzione e ignora le parentesi dell'identificatore `s`. D'altra parte, le istruzioni:  
  
```  
char *aName( (String)s );  
```  
  
 e  
  
```  
char *aName = String( s );  
```  
  
 sono chiaramente le dichiarazioni di oggetti e una conversione definita dall'utente dal tipo `String` al tipo **char \***  viene richiamato per eseguire l'inizializzazione di `aName`.  
  
## <a name="see-also"></a>Vedere anche  
 