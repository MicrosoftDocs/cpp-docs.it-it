---
title: '&lt;iterator&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- <iterator>
- iterator/std::<iterator>
dev_langs:
- C++
helpviewer_keywords:
- iterator header
ms.assetid: c61a3962-f3ed-411a-b5a3-e8b3c2b500bd
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0216c90a922050d4a752b4dbbd1209b26892ba05
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="ltiteratorgt"></a>&lt;iterator&gt;
Definisce le primitive degli iteratori, gli iteratori predefiniti e gli iteratori di flusso, nonché diversi modelli di supporto. Gli iteratori predefiniti includono gli adattatori di inversione e di inserimento. Esistono tre classi di adattatori degli iteratori di inserimento: front, back e general. Tali classi forniscono la semantica di inserimento anziché la semantica di sovrascrittura fornita dagli iteratori delle funzioni membro del contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <iterator>  
  
```  
  
## <a name="remarks"></a>Note  
 Gli iteratori costituiscono una generalizzazione dei puntatori, che astraggono dai requisiti di tali puntatori in modo da consentire al programma C++ di utilizzare strutture di dati diverse in maniera uniforme. Gli iteratori fungono da intermediari tra i contenitori e gli algoritmi generici. Anziché operare su tipi di dati specifici, gli algoritmi vengono definiti per operare su un intervallo specificato da un tipo di iteratore. L'algoritmo può operare su qualsiasi struttura di dati che soddisfa i requisiti dell'iteratore. Esistono cinque tipi o categorie di iteratori, ciascuno dotato di un proprio set di requisiti e funzionalità risultanti:  
  
-   Output: spostamento in avanti, può archiviare ma non recuperare i valori forniti da ostream e inserter.  
  
-   Input: spostamento in avanti, può recuperare ma non archiviare i valori forni da istream.  
  
-   In avanti: spostamento in avanti, può archiviare e recuperare i valori.  
  
-   Bidirezionale: spostamento in avanti e indietro, può archiviare e recuperare i valori forniti da list, set, multiset, map e multimap.  
  
-   Accesso casuale: elementi a cui si accede in qualsiasi ordine, può archiviare e recuperare i valori forniti da vector, deque, string e array.  
  
 Gli iteratori che dispongono di un numero maggiore di requisiti e quindi di un accesso più efficiente possono essere utilizzati al posto degli iteratori con un numero inferiore di requisiti. Ad esempio, nel caso in cui venga chiamato un iteratore in avanti, può essere invece utilizzato un iteratore ad accesso casuale.  
  
 Sono state aggiunte estensioni agli iteratori della libreria standard C++ per supportare diverse situazioni relative alla modalità di debug per gli iteratori verificati e non verificati. Per altre informazioni, vedere [Librerie protette: libreria standard](../standard-library/safe-libraries-cpp-standard-library.md).  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[advance](../standard-library/iterator-functions.md#advance)|Incrementa un iteratore di un numero specificato di posizioni.|  
|[back_inserter](../standard-library/iterator-functions.md#back_inserter)|Crea un iteratore in grado di inserire gli elementi nella parte finale di un contenitore specificato.|  
|[begin](../standard-library/iterator-functions.md#begin)|Recupera un iteratore al primo elemento di un contenitore specificato.|  
|[cbegin](../standard-library/iterator-functions.md#cbegin)|Recupera un iteratore costante al primo elemento di un contenitore specificato.|  
|[cend](../standard-library/iterator-functions.md#cend)|Recupera un iteratore costante all'elemento successivo all'ultimo elemento del contenitore specificato.|  
|[distance](../standard-library/iterator-functions.md#distance)|Determina il numero di incrementi tra le posizioni a cui puntano due iteratori.|  
|[end](../standard-library/iterator-functions.md#end)|Recupera un iteratore all'elemento successivo all'ultimo elemento nel contenitore specificato.|  
|[front_inserter](../standard-library/iterator-functions.md#front_inserter)|Crea un iteratore in grado di inserire elementi all'inizio di un contenitore specificato.|  
|[inserter](../standard-library/iterator-functions.md#inserter)|Adattatore dell'iteratore che aggiunge un nuovo elemento a un contenitore in corrispondenza di un punto di inserimento specificato.|  
|[make_checked_array_iterator](../standard-library/iterator-functions.md#make_checked_array_iterator)|Crea un oggetto [checked_array_iterator](../standard-library/checked-array-iterator-class.md) che può essere usato da altri algoritmi. **Nota:**  questa funzione è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|  
|[make_move_iterator](../standard-library/iterator-functions.md#make_move_iterator)|Restituisce un iteratore di spostamento contenente l'iteratore fornito come relativo iteratore di base archiviato.|  
|[make_unchecked_array_iterator](../standard-library/iterator-functions.md#make_unchecked_array_iterator)|Crea un oggetto [unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md) che può essere usato da altri algoritmi. **Nota:**  questa funzione è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|  
|[next](../standard-library/iterator-functions.md#next)|Esegue l'iterazione per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.|  
|[prev](../standard-library/iterator-functions.md#prev)|Esegue l'iterazione in ordine inverso per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operator!=](../standard-library/iterator-operators.md#op_neq)|Verifica se l'oggetto iteratore a sinistra dell'operatore non è uguale all'oggetto iteratore a destra.|  
|[operator==](../standard-library/iterator-operators.md#op_eq_eq)|Verifica se l'oggetto iteratore a sinistra dell'operatore è uguale all'oggetto iteratore a destra.|  
|[operator<](../standard-library/iterator-operators.md#op_lt)|Verifica se l'oggetto iteratore a sinistra dell'operatore è minore all'oggetto iteratore a destra.|  
|[operator\<=](../standard-library/iterator-operators.md#op_gt_eq)|Verifica se l'oggetto iteratore a sinistra dell'operatore è minore o uguale all'oggetto iteratore a destra.|  
|[operator>](../standard-library/iterator-operators.md#op_gt)|Verifica se l'oggetto iteratore a sinistra dell'operatore è maggiore dell'oggetto iteratore a destra.|  
|[operator>=](../standard-library/iterator-operators.md#op_gt_eq)|Verifica se l'oggetto iteratore a sinistra dell'operatore è maggiore o uguale all'oggetto iteratore a destra.|  
|[operator+](../standard-library/iterator-operators.md#op_add)|Aggiunge un offset a un iteratore e restituisce il nuovo `reverse_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|  
|[operator-](../standard-library/iterator-operators.md#operator-)|Sottrae un iteratore da un altro e restituisce la differenza.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[back_insert_iterator](../standard-library/back-insert-iterator-class.md)|La classe modello descrive un oggetto iteratore di output. Inserisce gli elementi in un contenitore di tipo **Container**, a cui accede tramite l'oggetto **pointer** protetto archiviato denominato container.|  
|[bidirectional_iterator_tag](../standard-library/bidirectional-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una funzione **iterator_category** che rappresenta un iteratore bidirezionale.|  
|[checked_array_iterator](../standard-library/checked-array-iterator-class.md)|Classe che accede a una matrice mediante un iteratore verificato ad accesso causale. **Nota:**  questa classe è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|  
|[forward_iterator_tag](../standard-library/forward-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una funzione **iterator_category** che rappresenta un iteratore in avanti.|  
|[front_insert_iterator](../standard-library/front-insert-iterator-class.md)|La classe modello descrive un oggetto iteratore di output. Inserisce gli elementi in un contenitore di tipo **Container**, a cui accede tramite l'oggetto **pointer** protetto archiviato denominato container.|  
|[input_iterator_tag](../standard-library/input-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una funzione **iterator_category** che rappresenta un iteratore di input.|  
|[insert_iterator](../standard-library/insert-iterator-class.md)|La classe modello descrive un oggetto iteratore di output. Inserisce gli elementi in un contenitore di tipo **Container**, a cui accede tramite l'oggetto **pointer** protetto archiviato denominato container. Archivia inoltre l'oggetto **iterator** protetto, della classe **Container::iterator**, denominato **iter**.|  
|[istream_iterator](../standard-library/istream-iterator-class.md)|La classe modello descrive un oggetto iteratore di input. Estrae gli oggetti della classe **Ty** da un flusso di input, a cui accede tramite un oggetto archiviato di tipo pointer a `basic_istream`\<**Elem**, **Tr**>.|  
|[istreambuf_iterator](../standard-library/istreambuf-iterator-class.md)|La classe modello descrive un oggetto iteratore di input. Inserisce gli elementi della classe **Elem** in un buffer del flusso di output, a cui accede tramite un oggetto archiviato di tipo **pointer** a `basic_streambuf`\<**Elem**, **Tr**>.|  
|[iterator](../standard-library/iterator-struct.md)|La classe modello viene utilizzata come tipo di base per tutti gli iteratori.|  
|[iterator_traits](../standard-library/iterator-traits-struct.md)|Classe helper del modello che fornisce tipi critici associati a diversi tipi di iteratori in modo che sia possibile fare riferimento a essi nello stesso modo.|  
|[move_iterator](../standard-library/move-iterator-class.md)|Un oggetto `move_iterator` consente di archiviare un iteratore ad accesso casuale di tipo `RandomIterator`. Si comporta come un iteratore ad accesso casuale, salvo quando viene dereferenziato. Viene eseguito il cast in modo implicito del risultato di `operator*` a `value_type&&:` per creare un `rvalue reference`.|  
|[ostream_iterator](../standard-library/ostream-iterator-class.md)|La classe modello descrive un oggetto iteratore di output. Inserisce gli oggetti della classe **Type** in un flusso di output, a cui accede tramite un oggetto archiviato di tipo **pointer** a `basic_ostream`\<**Elem**, **Tr**>.|  
|[Classe ostreambuf_iterator](../standard-library/ostreambuf-iterator-class.md)|La classe modello descrive un oggetto iteratore di output. Inserisce gli elementi della classe **Elem** in un buffer del flusso di output, a cui accede tramite un oggetto archiviato di tipo pointer a `basic_streambuf`\<**Elem**, **Tr**>.|  
|[output_iterator_tag](../standard-library/output-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una funzione **iterator_category** che rappresenta un iteratore di output.|  
|[random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una funzione **iterator_category** che rappresenta un iteratore ad accesso casuale.|  
|[reverse_iterator](../standard-library/reverse-iterator-class.md)|La classe modello descrive un oggetto che si comporta come un iteratore ad accesso casuale solo in senso inverso.|  
|[unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md)|Classe che accede a una matrice mediante un iteratore ad accesso causale non verificato. **Nota:**  questa classe è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)



