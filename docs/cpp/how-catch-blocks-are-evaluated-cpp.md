---
title: Come i blocchi Catch vengono valutate (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- try-catch keyword [C++], catchable types
- catch keyword [C++], types of catch handlers
- C++ exception handling, catch handlers
- exception handling, catching and deleting exceptions
- types [C++], exception handling
ms.assetid: 202dbf07-8ace-4b3b-b3ae-4b45c275e0b4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0190b62491dbb9d15ee4f01a1cbc4c2741f74dbe
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943854"
---
# <a name="how-catch-blocks-are-evaluated-c"></a>Modalità di valutazione dei blocchi catch (C++)
C++ consente di generare eccezioni di qualsiasi tipo, sebbene in genere sia consigliabile generare i tipi derivati da std::exception. Un'eccezione C++ può essere rilevata da un **catch** gestore che specifica lo stesso tipo dell'eccezione generata o da un gestore in grado di rilevare qualsiasi tipo di eccezione.  
  
 Se il tipo di eccezione generata è una classe, che dispone inoltre di una o di più classi base, tale eccezione può essere rilevata da gestori che accettano le classi base del tipo dell'eccezione oppure dai riferimenti alle basi del tipo dell'eccezione. Si noti che quando un'eccezione viene rilevata da un riferimento, viene associata all'oggetto effettivo dell'eccezione generata. In caso contrario, è una copia (molto simile a un argomento di una funzione).  
  
 Quando viene generata un'eccezione, può essere rilevata dai seguenti tipi di **catch** gestori:  
  
-   Gestore che accetta qualsiasi tipo (mediante la sintassi costituita dai puntini di sospensione).  
  
-   Gestore che accetta lo stesso tipo dell'oggetto eccezione. Poiché si tratta di una copia **const** e **volatile** modificatori vengono ignorati.  
  
-   Gestore che accetta un riferimento allo stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta un riferimento a un **const** oppure **volatile** modulo dello stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta una classe di base dello stesso tipo dell'oggetto eccezione. Poiché si tratta di una copia **const** e **volatile** modificatori vengono ignorati. Il **intercettare** gestore per una classe di base non deve precedere le **catch** gestore per la classe derivata.  
  
-   Gestore che accetta un riferimento a una classe base dello stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta un riferimento a un **const** oppure **volatile** forma di una classe di base dello stesso tipo dell'oggetto eccezione.  
  
-   Gestore che accetta un puntatore a un elemento in cui un oggetto del puntatore generato può essere convertito tramite le regole di conversione standard del puntatore.  
  
 L'ordine in cui **intercettare** gestori vengono visualizzate è significativo, perché i gestori per un determinato **provare** blocco vengono esaminate nell'ordine di visualizzazione. Ad esempio, l'inserimento del gestore per una classe base prima del gestore per una classe derivata è un errore. Dopo un oggetto corrispondente **catch** gestore viene trovato, i gestori successivi non vengono esaminati. Di conseguenza, i puntini di sospensione **intercettare** gestore deve essere l'ultimo gestore per relativo **provare** blocco. Ad esempio:  
  
```cpp 
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
  
 In questo esempio, i puntini di sospensione **catch** gestore di è l'unico gestore che viene esaminato.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione delle eccezioni C++](../cpp/cpp-exception-handling.md)