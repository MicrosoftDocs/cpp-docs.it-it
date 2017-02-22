---
title: "Flussi di output | Microsoft Docs"
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
  - "flussi di output"
ms.assetid: b49410e3-5caa-4153-9d0d-c4266408dc83
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 11
---
# Flussi di output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un oggetto del flusso di output è una destinazione per byte.  Le tre classi del flusso di output più importanti sono `ostream`, `ofstream` e `ostringstream`.  
  
 La classe di `ostream`, attraverso la classe derivata `basic_ostream`, supporta gli oggetti flusso predefiniti:  
  
-   output standard di`cout`  
  
-   errore standard di`cerr`con buffer limitato  
  
-   `clog` simile a `cerr` ma con buffer completo  
  
 Gli oggetti vengono costruiti raramente da `ostream`; gli oggetti predefiniti sono normalmente utilizzati.  In alcuni casi, è possibile riassegnare gli oggetti predefiniti dopo l'avvio del programma.  La classe di `ostream`, che può essere configurata per l'operazione memorizzata nel buffer o privo, risulta più adatta all'output sequenziale di " text\-mode ".  Tutte le funzionalità della classe base, `ios`, inclusa in `ostream`.  Se si costruisce un oggetto con classe `ostream`, è necessario specificare un oggetto di `streambuf` al costruttore.  
  
 La classe di `ofstream` supporta l'output del file su disco.  Se è necessario un disco solo, costruire un oggetto con classe `ofstream`.  È possibile specificare se gli oggetti di `ofstream` accettano il binario o dati su " text\-mode " quando si crea l'oggetto di `ofstream` o quando chiamare la funzione membro di `open` con object.  Molte opzioni di formattazione e funzioni membro applicano a `ofstream` oggetti e tutte le funzionalità delle classi base `ios` e `ostream` è inclusa.  
  
 Se si specifica un nome di file nel costruttore, tale file viene aperto automaticamente quando l'oggetto viene costruito.  In caso contrario, è possibile utilizzare la funzione membro di `open` dopo aver richiamato il costruttore predefinito.  
  
 La funzione di runtime `sprintf_s`, i supporti della classe di `ostringstream` restituiti alle stringhe in memoria.  Per creare una stringa in memoria utilizzando la formattazione di flussi I\/O, costruire un oggetto con classe `ostringstream`.  
  
## Argomenti della sezione  
 [Costruzione di oggetti di flusso di output](../standard-library/constructing-output-stream-objects.md)  
  
 [Utilizzo degli operatori di inserimento e controllo del formato](../standard-library/using-insertion-operators-and-controlling-format.md)  
  
 [Funzioni membro del flussi di file di output](../standard-library/output-file-stream-member-functions.md)  
  
 [Effetti della memorizzazione nel buffer](../standard-library/effects-of-buffering.md)  
  
 [File di output binari](../standard-library/binary-output-files.md)  
  
 [Overload dell'operatore \<\< per classi personalizzate](../standard-library/overloading-the-output-operator-for-your-own-classes.md)  
  
 [Scrittura di manipolatori personalizzati senza gli argomenti](../standard-library/writing-your-own-manipulators-without-arguments.md)  
  
## Vedere anche  
 [\<ostream\> Members](http://msdn.microsoft.com/it-it/a5afd034-0e3c-41ee-bbd7-468d9188da1d)   
 [ofstream](../Topic/ofstream.md)   
 [ostringstream](../Topic/ostringstream.md)   
 [basic\_ostream Members](http://msdn.microsoft.com/it-it/82e5cc91-7c0c-4950-a8ce-ac779cfbbd93)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)