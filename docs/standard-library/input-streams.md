---
title: "Flussi di input | Microsoft Docs"
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
  - "dati [C++], lettura dal flusso di input"
  - "flusso di input (oggetti)"
  - "flussi di input"
  - "lettura di dati [C++], flussi di input"
ms.assetid: f14d8954-8f8c-4c3c-8b99-14ddb3683f94
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Flussi di input
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto del flusso di input è un'origine di byte.  Le tre classi del flusso di input più importanti sono [istream](http://msdn.microsoft.com/it-it/6801779e-260e-416d-b4ec-fef5ff1b2371), [ifstream](../Topic/ifstream.md) e [istringstream](../Topic/istringstream.md).  
  
 La classe di `istream` viene utilizzata più appropriato per l'input sequenziale di " text\-mode ".  È possibile configurare oggetti della classe `istream` per l'operazione memorizzata nel buffer o privo.  Tutte le funzionalità della classe base, `ios`, inclusa in `istream`.  Costruirete raramente gli oggetti da classe `istream`.  Al contrario, si utilizzerà in genere l'oggetto predefinito di `cin`, che rappresenti un oggetto di classe [ostream](../standard-library/ostream.md).  In alcuni casi, è possibile assegnare `cin` ad altri oggetti flusso dopo l'avvio del programma.  
  
 La classe di `ifstream` supporta l'input di file su disco.  Se è necessario un file su disco solo input, costruire un oggetto con classe `ifstream`.  È possibile specificare il binario o dati su " text\-mode ".  Se si specifica un nome di file nel costruttore, il file viene aperto automaticamente quando l'oggetto viene costruito.  In caso contrario, è possibile utilizzare la funzione di `open` dopo aver richiamato il costruttore predefinito.  Molte opzioni di formattazione e funzioni membro applicano a `ifstream` gli oggetti.  Tutte le funzionalità delle classi base `ios` e `istream` è inclusa in `ifstream`.  
  
 La funzione di libreria `sscanf_s`, la classe di `istringstream` supporta l'input da stringhe in memoria.  Per estrarre i dati da una matrice di caratteri con un carattere di terminazione null, allocare e inizializzare la stringa, quindi costruire un oggetto con classe `istringstream`.  
  
## Argomenti della sezione  
 [Costruzione di oggetti di flusso di input](../standard-library/constructing-input-stream-objects.md)  
  
 [Utilizzo degli operatori di estrazione](../standard-library/using-extraction-operators.md)  
  
 [Verifica degli errori di estrazione](../standard-library/testing-for-extraction-errors.md)  
  
 [Manipolatori del flusso di input](../standard-library/input-stream-manipulators.md)  
  
 [Funzioni membro del flusso di input](../standard-library/input-stream-member-functions.md)  
  
 [Overload dell'operatore \>\> per classi personalizzate](../standard-library/overloading-the-input-operator-for-your-own-classes.md)  
  
## Vedere anche  
 [Programmazione di iostream](../standard-library/iostream-programming.md)