---
title: Risoluzione ambigue dichiarazioni (C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 3d773ee7-bbea-47de-80c2-cb0a9d4ec0b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 530111ee439a991201debab876d485a36b7f5ac5
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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
 