---
title: "Risoluzione di ambiguit&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 3d773ee7-bbea-47de-80c2-cb0a9d4ec0b9
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Risoluzione di ambiguit&#224;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per eseguire le conversioni esplicite da un tipo a un altro, è necessario utilizzare i cast, specificando il nome del tipo desiderato.  Alcuni cast di tipo danno come risultato un'ambiguità sintattica.  Il seguente cast di tipo funzione è ambiguo:  
  
```  
char *aName( String( s ) );  
```  
  
 È poco chiaro se si tratta di una dichiarazione della funzione o di una dichiarazione dell'oggetto con un cast di tipo funzione come l'inizializzatore: può dichiarare un tipo di restituzione funzione **char \*** che accetta un argomento di tipo `String`, oppure può dichiarare l'oggetto `aName` e inizializzarlo con il valore del cast `s` del tipo `String`.  
  
 Se una dichiarazione può essere considerata una dichiarazione di funzione valida, viene trattata come tale.  Solo se non può eventualmente essere una dichiarazione della funzione \(ovvero se è sintatticamente errata\) è un'istruzione valutata per verificare se si tratta di un cast di tipo funzione.  Di conseguenza, il compilatore considera l'istruzione come una dichiarazione di una funzione e ignora le parentesi dell'identificatore `s`.  D'altra parte, le istruzioni:  
  
```  
char *aName( (String)s );  
```  
  
 e  
  
```  
char *aName = String( s );  
```  
  
 sono chiaramente le dichiarazioni di oggetti e una conversione definita dal tipo `String` al tipo **char \*** viene richiamata per eseguire l'inizializzazione di `aName`.  
  
## Vedere anche  
 [C\+\+ Abstract Declarators](http://msdn.microsoft.com/it-it/e7e18c18-0cad-4450-942b-d27e1d4dd088)