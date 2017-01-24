---
title: "Modalit&#224; di valutazione dei blocchi catch (C++) | Microsoft Docs"
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
helpviewer_keywords: 
  - "gestione delle eccezioni di C++, gestori catch"
  - "catch (parola chiave) [C++], tipi di gestori catch"
  - "gestione eccezioni, intercettazione ed eliminazione di eccezioni"
  - "try-catch (parola chiave) [C++], tipi intercettabili"
  - "tipi [C++], gestione eccezioni"
ms.assetid: 202dbf07-8ace-4b3b-b3ae-4b45c275e0b4
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Modalit&#224; di valutazione dei blocchi catch (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

C\+\+ consente di generare eccezioni di qualsiasi tipo, sebbene in genere sia consigliabile generare i tipi derivati da std::exception.  Un'eccezione C\+\+ può essere rilevata da un gestore **catch** che specifica lo stesso tipo dell'eccezione generata o da un gestore in grado di rilevare qualsiasi tipo di eccezione.  
  
 Se il tipo di eccezione generata è una classe, che dispone inoltre di una o di più classi base, tale eccezione può essere rilevata da gestori che accettano le classi base del tipo dell'eccezione oppure dai riferimenti alle basi del tipo dell'eccezione.  Si noti che quando un'eccezione viene rilevata da un riferimento, viene associata all'oggetto effettivo dell'eccezione generata. In caso contrario, è una copia \(molto simile a un argomento di una funzione\).  
  
 Quando viene generata, un'eccezione può essere rilevata dai seguenti tipi di gestori **catch**:  
  
-   Gestore che accetta qualsiasi tipo \(mediante la sintassi costituita dai puntini di sospensione\).  
  
-   Gestore che accetta lo stesso tipo dell'oggetto eccezione. Poiché è una copia, i modificatori **const** e `volatile` vengono ignorati.  
  
-   Gestore che accetta un riferimento allo stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta un riferimento a un form **const** o `volatile` dello stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta una classe base dello stesso tipo dell'oggetto eccezione. Poiché è una copia, i modificatori **const** e `volatile` vengono ignorati.  Il gestore **catch** per una classe base non deve precedere il gestore **catch** per la classe derivata.  
  
-   Gestore che accetta un riferimento a una classe base dello stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta un riferimento a un form **const** o `volatile` di una classe base dello stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta un puntatore a un elemento in cui un oggetto del puntatore generato può essere convertito tramite le regole di conversione standard del puntatore.  
  
 L'ordine in cui i gestori **catch** vengono visualizzate è significativo perché i gestori per un blocco **try** specificato vengono esaminati nell'ordine di visualizzazione.  Ad esempio, l'inserimento del gestore per una classe base prima del gestore per una classe derivata è un errore.  Dopo che viene rilevato un gestore **catch** corrispondente, i gestori successivi non vengono esaminati.  Di conseguenza, un gestore **catch** con i puntini di sospensione deve essere l'ultimo gestore per il relativo blocco **try**.  Ad esempio:  
  
```  
// ...  
try  
{  
    // ...  
}  
catch( ... )  
{  
    // Handle exception here.  
}  
// Error: the next two handlers are never examined.  
catch( const char * str )  
{  
    cout << "Caught exception: " << str << endl;  
}  
catch( CExcptClass E )  
{  
    // Handle CExcptClass exception here.  
}  
```  
  
 In questo esempio il gestore **catch** con i puntini di sospensione è l'unico gestore che viene esaminato.  
  
## Vedere anche  
 [Gestione delle eccezioni C\+\+](../cpp/cpp-exception-handling.md)