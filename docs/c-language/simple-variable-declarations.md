---
title: "Dichiarazioni di variabili semplici | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazione di variabili, semplici"
  - "variabili non tipizzate"
ms.assetid: b07adf9d-9e79-4b64-8a34-e6fe1c7eccec
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Dichiarazioni di variabili semplici
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La dichiarazione di una variabile semplice, il formato più semplice di un dichiaratore diretto, specifica il nome e il tipo della variabile.  Specifica inoltre la classe di archiviazione e il tipo di dati della variabile.  
  
 Le classi o i tipi di archiviazione \(o entrambi\) sono necessari nelle dichiarazioni delle variabili.  Le variabili non tipizzate \(ad esempio `var;`\) generano avvisi.  
  
## Sintassi  
 `declarator`:  
 *pointer*  opt  
  
 *direct\-declarator*  
  
 *direct\-declarator*:  
 *identifier*  
  
 *identifier*:  
 *nondigit*  
  
 *identifier nondigit*  
  
 *identifier digit*  
  
 Per i tipi aritmetici, struttura, unione, enumerazione e void e per i tipi rappresentati dai nomi `typedef`, i dichiaratori semplici possono essere utilizzati in una dichiarazione poiché l'identificatore di tipo fornisce tutte le informazioni sull'immissione.  I tipi puntatore, matrice e funzione richiedono i dichiaratori più complessi.  
  
 È possibile utilizzare un elenco di identificatori delimitati da virgole \(**,**\) per specificare più variabili nella stessa dichiarazione.  Tutte le variabili definite nella dichiarazione hanno lo stesso tipo base.  Ad esempio:  
  
```  
int x, y;        /* Declares two simple variables of type int */  
int const z = 1; /* Declares a constant value of type int */  
```  
  
 Le variabili `x` e `y` possono contenere qualsiasi valore nel set definito dal tipo `int` per una determinata implementazione.  L'oggetto semplice `z` viene inizializzato con il valore 1 e non è modificabile.  
  
 Se la dichiarazione di `z` fosse per una variabile statica non inizializzata o fosse nell'ambito file, riceverebbe un valore iniziale pari a 0 e il valore non sarebbe modificabile.  
  
```  
unsigned long reply, flag; /* Declares two variables  
                              named reply and flag     */  
```  
  
 In questo esempio, entrambe le variabili, `reply` e `flag`, dispongono del tipo `unsigned long` e contengono valori integrali senza segno.  
  
## Vedere anche  
 [Dichiaratori e dichiarazioni di variabili](../c-language/declarators-and-variable-declarations.md)