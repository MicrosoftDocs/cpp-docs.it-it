---
title: "&lt;iterator&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::<iterator>"
  - "std.<iterator>"
  - "<iterator>"
  - "iterator/std::<iterator>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iterator (intestazione)"
ms.assetid: c61a3962-f3ed-411a-b5a3-e8b3c2b500bd
caps.latest.revision: 27
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;iterator&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce le primitive degli iteratori, gli iteratori predefiniti e gli iteratori di flusso, nonché diversi modelli di supporto.  Gli iteratori predefiniti includono gli adattatori di inversione e di inserimento.  Esistono tre classi di adattatori degli iteratori di inserimento: front, back e general.  Tali classi forniscono la semantica di inserimento anziché la semantica di sovrascrittura fornita dagli iteratori delle funzioni membro del contenitore.  
  
## Sintassi  
  
```  
  
#include <iterator>  
  
```  
  
## Note  
 Gli iteratori costituiscono una generalizzazione dei puntatori, che astraggono dai requisiti di tali puntatori in modo da consentire al programma C\+\+ di utilizzare strutture di dati diverse in maniera uniforme.  Gli iteratori fungono da intermediari tra i contenitori e gli algoritmi generici.  Anziché operare su tipi di dati specifici, gli algoritmi vengono definiti per operare su un intervallo specificato da un tipo di iteratore.  L'algoritmo può operare su qualsiasi struttura di dati che soddisfa i requisiti dell'iteratore.  Esistono cinque tipi o categorie di iteratori, ciascuno dotato di un proprio set di requisiti e funzionalità risultanti:  
  
-   Output: spostamento in avanti, può archiviare ma non recuperare i valori forniti da ostream e inserter.  
  
-   Input: spostamento in avanti, può recuperare ma non archiviare i valori forni da istream.  
  
-   In avanti: spostamento in avanti, può archiviare e recuperare i valori.  
  
-   Bidirezionale: spostamento in avanti e indietro, può archiviare e recuperare i valori forniti da list, set, multiset, map e multimap.  
  
-   Accesso casuale: elementi a cui si accede in qualsiasi ordine, può archiviare e recuperare i valori forniti da vector, deque, string e array.  
  
 Gli iteratori che dispongono di un numero maggiore di requisiti e quindi di un accesso più efficiente possono essere utilizzati al posto degli iteratori con un numero inferiore di requisiti.  Ad esempio, nel caso in cui venga chiamato un iteratore in avanti, può essere invece utilizzato un iteratore ad accesso casuale.  
  
 Sono state aggiunte estensioni agli iteratori della libreria standard C\+\+ per supportare diverse situazioni relative alla modalità di debug per gli iteratori verificati e non verificati.  Per ulteriori informazioni, vedere [Librerie protette: libreria standard C\+\+](../standard-library/safe-libraries-cpp-standard-library.md).  
  
### Funzioni  
  
|||  
|-|-|  
|[advance](../Topic/advance.md)|Incrementa un iteratore di un numero specificato di posizioni.|  
|[back\_inserter](../Topic/back_inserter.md)|Crea un iteratore in grado di inserire gli elementi nella parte finale di un contenitore specificato.|  
|[begin](../Topic/begin.md)|Recupera un iteratore al primo elemento di un contenitore specificato.|  
|[cbegin](../Topic/cbegin.md)|Recupera un iteratore costante al primo elemento di un contenitore specificato.|  
|[cend](../Topic/cend.md)|Recupera un iteratore costante all'elemento successivo all'ultimo elemento del contenitore specificato.|  
|[distance](../Topic/distance.md)|Determina il numero di incrementi tra le posizioni a cui puntano due iteratori.|  
|[end](../Topic/end.md)|Recupera un iteratore all'elemento successivo all'ultimo elemento nel contenitore specificato.|  
|[front\_inserter](../Topic/front_inserter.md)|Crea un iteratore in grado di inserire elementi all'inizio di un contenitore specificato.|  
|[inserter](../Topic/inserter.md)|Adattatore dell'iteratore che aggiunge un nuovo elemento a un contenitore in corrispondenza di un punto di inserimento specificato.|  
|[make\_checked\_array\_iterator](../Topic/make_checked_array_iterator.md)|Crea un [checked\_array\_iterator](../standard-library/checked-array-iterator-class.md) che può essere utilizzato da altri algoritmi. **Note:**  Questa funzione è un'estensione Microsoft della libreria C\+\+ standard.  Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C\+\+ che non supportano questa estensione Microsoft.|  
|[make\_move\_iterator](../Topic/make_move_iterator.md)|Restituisce un iteratore di spostamento contenente l'iteratore fornito come relativo iteratore di base archiviato.|  
|[make\_unchecked\_array\_iterator](../Topic/make_unchecked_array_iterator.md)|Crea [unchecked\_array\_iterator](../standard-library/unchecked-array-iterator-class.md) utilizzabile da altri algoritmi. **Note:**  Questa funzione è un'estensione Microsoft della libreria C\+\+ standard.  Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C\+\+ che non supportano questa estensione Microsoft.|  
|[next](../Topic/next.md)|Esegue l'iterazione per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.|  
|[prev](../Topic/prev.md)|Esegue l'iterazione in ordine inverso per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/operator!=%20\(%3Citerator%3E\).md)|Verifica se l'oggetto iteratore a sinistra dell'operatore non è uguale all'oggetto iteratore a destra.|  
|[operator\=\=](../Topic/operator==%20\(%3Citerator%3E\).md)|Verifica se l'oggetto iteratore a sinistra dell'operatore è uguale all'oggetto iteratore a destra.|  
|[operator\<](../Topic/operator%3C%20\(%3Citerator%3E\).md)|Verifica se l'oggetto iteratore a sinistra dell'operatore è minore all'oggetto iteratore a destra.|  
|[operator\<\=](../Topic/operator%3C=%20\(%3Citerator%3E\).md)|Verifica se l'oggetto iteratore a sinistra dell'operatore è minore o uguale all'oggetto iteratore a destra.|  
|[operator\>](../Topic/operator%3E%20\(%3Citerator%3E\).md)|Verifica se l'oggetto iteratore a sinistra dell'operatore è maggiore dell'oggetto iteratore a destra.|  
|[operator\>\=](../Topic/operator%3E=%20\(%3Citerator%3E\).md)|Verifica se l'oggetto iteratore a sinistra dell'operatore è maggiore o uguale all'oggetto iteratore a destra.|  
|[operator\+](../Topic/operator+%20\(%3Citerator%3E\).md)|Aggiunge un offset a un iteratore e restituisce il nuovo `reverse_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|  
|[operator\-](../Topic/operator-%20\(%3Citerator%3E\).md)|Sottrae un iteratore da un altro e restituisce la differenza.|  
  
### Classi  
  
|||  
|-|-|  
|[back\_insert\_iterator](../standard-library/back-insert-iterator-class.md)|La classe modello descrive un oggetto iteratore di output.  Inserisce gli elementi in un contenitore di tipo **Container**, a cui accede tramite l'oggetto **pointer** protetto archiviato denominato contenitore.|  
|[bidirectional\_iterator\_tag](../standard-library/bidirectional-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una funzione **iterator\_category** che rappresenta un iteratore bidirezionale.|  
|[checked\_array\_iterator](../standard-library/checked-array-iterator-class.md)|Classe che accede a una matrice mediante un iteratore verificato ad accesso causale. **Note:**  Questa classe è un'estensione Microsoft della libreria C\+\+ standard.  Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C\+\+ che non supportano questa estensione Microsoft.|  
|[forward\_iterator\_tag](../standard-library/forward-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una funzione **iterator\_category** che rappresenta un iteratore in avanti.|  
|[front\_insert\_iterator](../standard-library/front-insert-iterator-class.md)|La classe modello descrive un oggetto iteratore di output.  Inserisce gli elementi in un contenitore di tipo **Container**, a cui accede tramite l'oggetto **pointer** protetto archiviato denominato contenitore.|  
|[input\_iterator\_tag](../standard-library/input-iterator-tag-struct.md)|Classe che restituisce un tipo restituito per una funzione **iterator\_category** che rappresenta un iteratore di input.|  
|[insert\_iterator](../standard-library/insert-iterator-class.md)|La classe modello descrive un oggetto iteratore di output.  Inserisce gli elementi in un contenitore di tipo **Container**, a cui accede tramite l'oggetto **pointer** protetto archiviato denominato contenitore.  Archivia inoltre l'oggetto **iterator** protetto, della classe **Container::iterator**, denominato **iter**.|  
|[istream\_iterator](../standard-library/istream-iterator-class.md)|La classe modello descrive un oggetto iteratore di input.  Estrae gli oggetti della classe **Ty** da un flusso di input, a cui accede tramite un oggetto archiviato di tipo puntatore a `basic_istream`\<**Elem**, **Tr**\>.|  
|[istreambuf\_iterator](../standard-library/istreambuf-iterator-class.md)|La classe modello descrive un oggetto iteratore di input.  Inserisce gli elementi della classe **Elem** in un buffer del flusso di output, a cui accede tramite un oggetto archiviato di tipo **pointer** a `basic_streambuf`\<**Elem**, **Tr**\>.|  
|[iteratore](../standard-library/iterator-struct.md)|La classe modello viene utilizzata come tipo di base per tutti gli iteratori.|  
|[iterator\_traits](../standard-library/iterator-traits-struct.md)|Classe helper del modello che fornisce tipi critici associati a diversi tipi di iteratori in modo che sia possibile fare riferimento a essi nello stesso modo.|  
|[move\_iterator](../standard-library/move-iterator-class.md)|Un oggetto `move_iterator` consente di archiviare un iteratore ad accesso casuale di tipo `RandomIterator`.  Si comporta come un iteratore ad accesso casuale, salvo quando viene dereferenziato.  Viene eseguito il cast in modo implicito del risultato di `operator*` a `value_type&&:` per creare un `rvalue reference`.|  
|[ostream\_iterator](../standard-library/ostream-iterator-class.md)|La classe modello descrive un oggetto iteratore di output.  Inserisce gli elementi della classe **Type** in un flusso di output, a cui accede tramite un oggetto archiviato di tipo **pointer** a `basic_ostream`\<**Elem**, **Tr**\>.|  
|[Classe ostreambuf\_iterator](../standard-library/ostreambuf-iterator-class.md)|La classe modello descrive un oggetto iteratore di output.  Inserisce gli elementi della classe **Elem** in un buffer del flusso di output, a cui accede tramite un oggetto archiviato di tipo pointer a `basic_streambuf`\<**Elem**, **Tr**\>.|  
|[output\_iterator\_tag](../standard-library/output-iterator-tag-struct.md)|Classe che restituisce un tipo restituito per una funzione **iterator\_category** che rappresenta un iteratore di output.|  
|[random\_access\_iterator\_tag](../standard-library/random-access-iterator-tag-struct.md)|Classe che restituisce un tipo restituito per una funzione **iterator\_category** che rappresenta un iteratore ad accesso casuale.|  
|[reverse\_iterator](../standard-library/reverse-iterator-class.md)|La classe modello descrive un oggetto che si comporta come un iteratore ad accesso casuale solo in senso inverso.|  
|[unchecked\_array\_iterator](../standard-library/unchecked-array-iterator-class.md)|Classe che accede a una matrice mediante un iteratore ad accesso causale non verificato. **Note:**  Questa classe è un'estensione Microsoft della libreria C\+\+ standard.  Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C\+\+ che non supportano questa estensione Microsoft.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)