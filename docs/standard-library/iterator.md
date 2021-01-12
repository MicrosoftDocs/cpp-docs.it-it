---
description: 'Altre informazioni su: &lt; iterator&gt;'
title: '&lt;iterator&gt;'
ms.date: 11/04/2016
f1_keywords:
- <iterator>
helpviewer_keywords:
- iterator header
ms.assetid: c61a3962-f3ed-411a-b5a3-e8b3c2b500bd
ms.openlocfilehash: 9376f26acef4cfb5feda4644881d43511b3b77f6
ms.sourcegitcommit: 118e4ad82c0f1c9ac120f105d84224e5fe4cef28
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/12/2021
ms.locfileid: "98126507"
---
# <a name="ltiteratorgt"></a>&lt;iterator&gt;

Definisce le primitive degli iteratori, gli iteratori predefiniti e gli iteratori di flusso, nonché diversi modelli di supporto. Gli iteratori predefiniti includono gli adattatori di inversione e di inserimento. Esistono tre classi di adattatori degli iteratori di inserimento: front, back e general. Tali classi forniscono la semantica di inserimento anziché la semantica di sovrascrittura fornita dagli iteratori delle funzioni membro del contenitore.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<iterator>

**Spazio dei nomi:** std

## <a name="remarks"></a>Osservazioni

Gli iteratori costituiscono una generalizzazione dei puntatori, che astraggono dai requisiti di tali puntatori in modo da consentire al programma C++ di utilizzare strutture di dati diverse in maniera uniforme. Gli iteratori fungono da intermediari tra i contenitori e gli algoritmi generici. Anziché operare su tipi di dati specifici, gli algoritmi vengono definiti per operare su un intervallo specificato da un tipo di iteratore. L'algoritmo può operare su qualsiasi struttura di dati che soddisfa i requisiti dell'iteratore. Esistono cinque tipi o categorie di iteratori, ciascuno dotato di un proprio set di requisiti e funzionalità risultanti:

- Output: spostamento in avanti, può archiviare ma non recuperare i valori forniti da ostream e inserter.

- Input: spostamento in avanti, può recuperare ma non archiviare i valori forni da istream.

- In avanti: spostamento in avanti, può archiviare e recuperare i valori.

- Bidirezionale: spostamento in avanti e indietro, può archiviare e recuperare i valori forniti da list, set, multiset, map e multimap.

- Accesso casuale: elementi a cui si accede in qualsiasi ordine, può archiviare e recuperare i valori forniti da vector, deque, string e array.

Gli iteratori che dispongono di un numero maggiore di requisiti e quindi di un accesso più efficiente possono essere utilizzati al posto degli iteratori con un numero inferiore di requisiti. Ad esempio, nel caso in cui venga chiamato un iteratore in avanti, può essere invece utilizzato un iteratore ad accesso casuale.

Sono state aggiunte estensioni agli iteratori della libreria standard C++ per supportare diverse situazioni relative alla modalità di debug per gli iteratori verificati e non verificati. Per altre informazioni, vedere [Librerie protette: libreria standard](../standard-library/safe-libraries-cpp-standard-library.md).

## <a name="members"></a>Membri

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|-|-|
|[anticipo](../standard-library/iterator-functions.md#advance)|Incrementa un iteratore di un numero specificato di posizioni.|
|[back_inserter](../standard-library/iterator-functions.md#back_inserter)|Crea un iteratore in grado di inserire gli elementi nella parte finale di un contenitore specificato.|
|[iniziare](../standard-library/iterator-functions.md#begin)|Recupera un iteratore al primo elemento di un contenitore specificato.|
|[cbegin](../standard-library/iterator-functions.md#cbegin)|Recupera un iteratore costante al primo elemento di un contenitore specificato.|
|[cend](../standard-library/iterator-functions.md#cend)|Recupera un iteratore costante all'elemento successivo all'ultimo elemento del contenitore specificato.|
|[crbegin](../standard-library/iterator-functions.md#crbegin)||
|[crend](../standard-library/iterator-functions.md#crend)||
|[data](../standard-library/iterator-functions.md#data)||
|[distance](../standard-library/iterator-functions.md#distance)|Determina il numero di incrementi tra le posizioni a cui puntano due iteratori.|
|[end](../standard-library/iterator-functions.md#end)|Recupera un iteratore all'elemento successivo all'ultimo elemento nel contenitore specificato.|
|[empty](../standard-library/iterator-functions.md#empty)||
|[front_inserter](../standard-library/iterator-functions.md#front_inserter)|Crea un iteratore in grado di inserire elementi all'inizio di un contenitore specificato.|
|[Inseritore](../standard-library/iterator-functions.md#inserter)|Adattatore dell'iteratore che aggiunge un nuovo elemento a un contenitore in corrispondenza di un punto di inserimento specificato.|
|[make_checked_array_iterator](../standard-library/iterator-functions.md#make_checked_array_iterator)|Crea un oggetto [checked_array_iterator](../standard-library/checked-array-iterator-class.md) che può essere usato da altri algoritmi. **Nota:**  questa funzione è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|
|[make_move_iterator](../standard-library/iterator-functions.md#make_move_iterator)|Restituisce un iteratore di spostamento contenente l'iteratore fornito come relativo iteratore di base archiviato.|
|[make_unchecked_array_iterator](../standard-library/iterator-functions.md#make_unchecked_array_iterator)|Crea un oggetto [unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md) che può essere usato da altri algoritmi. **Nota:**  questa funzione è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|
|[avanti](../standard-library/iterator-functions.md#next)|Esegue l'iterazione per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.|
|[prev](../standard-library/iterator-functions.md#prev)|Esegue l'iterazione in ordine inverso per un numero specificato di volte e restituisce la nuova posizione dell'iteratore.|
|[rbegin](../standard-library/iterator-functions.md#rbegin)||
|[rend](../standard-library/iterator-functions.md#rend)||
|[size](../standard-library/iterator-functions.md#size)||

### <a name="operators"></a>Operatori

|Nome|Descrizione|
|-|-|
|[operatore! =](../standard-library/iterator-operators.md#op_neq)|Verifica se l'oggetto iteratore a sinistra dell'operatore non è uguale all'oggetto iteratore a destra.|
|[operatore = =](../standard-library/iterator-operators.md#op_eq_eq)|Verifica se l'oggetto iteratore a sinistra dell'operatore è uguale all'oggetto iteratore a destra.|
|[operatore<](../standard-library/iterator-operators.md#op_lt)|Verifica se l'oggetto iteratore a sinistra dell'operatore è minore all'oggetto iteratore a destra.|
|[operatore\<=](../standard-library/iterator-operators.md#op_gt_eq)|Verifica se l'oggetto iteratore a sinistra dell'operatore è minore o uguale all'oggetto iteratore a destra.|
|[operatore>](../standard-library/iterator-operators.md#op_gt)|Verifica se l'oggetto iteratore a sinistra dell'operatore è maggiore dell'oggetto iteratore a destra.|
|[operatore>=](../standard-library/iterator-operators.md#op_gt_eq)|Verifica se l'oggetto iteratore a sinistra dell'operatore è maggiore o uguale all'oggetto iteratore a destra.|
|[operatore +](../standard-library/iterator-operators.md#op_add)|Aggiunge un offset a un iteratore e restituisce il nuovo `reverse_iterator` che punta all'elemento inserito in corrispondenza della nuova posizione dell'offset.|
|[operatore](../standard-library/iterator-operators.md#operator-)|Sottrae un iteratore da un altro e restituisce la differenza.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[back_insert_iterator](../standard-library/back-insert-iterator-class.md)|Il modello di classe descrive un oggetto iteratore di output. Inserisce gli elementi in un contenitore di tipo `Container` , a cui accede tramite l'oggetto protetto `pointer` archiviato denominato contenitore.|
|[bidirectional_iterator_tag](../standard-library/bidirectional-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una `iterator_category` funzione che rappresenta un iteratore bidirezionale.|
|[checked_array_iterator](../standard-library/checked-array-iterator-class.md)|Classe che accede a una matrice mediante un iteratore verificato ad accesso causale. **Nota:**  questa classe è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|
|[forward_iterator_tag](../standard-library/forward-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una `iterator_category` funzione che rappresenta un iteratore in futuro.|
|[front_insert_iterator](../standard-library/front-insert-iterator-class.md)|Il modello di classe descrive un oggetto iteratore di output. Inserisce gli elementi in un contenitore di tipo `Container` , a cui accede tramite l'oggetto protetto `pointer` archiviato denominato contenitore.|
|[input_iterator_tag](../standard-library/input-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per una `iterator_category` funzione che rappresenta un iteratore di input.|
|[insert_iterator](../standard-library/insert-iterator-class.md)|Il modello di classe descrive un oggetto iteratore di output. Inserisce gli elementi in un contenitore di tipo `Container` , a cui accede tramite l'oggetto protetto `pointer` archiviato denominato contenitore. Archivia inoltre l'oggetto protetto `iterator` , della classe `Container::iterator` , denominato `iter` .|
|[istream_iterator](../standard-library/istream-iterator-class.md)|Il modello di classe descrive un oggetto iteratore di input. Estrae gli oggetti della classe `Ty` da un flusso di input, a cui accede tramite un oggetto archiviato di tipo pointer a `basic_istream` \<**Elem**, **Tr**> .|
|[istreambuf_iterator](../standard-library/istreambuf-iterator-class.md)|Il modello di classe descrive un oggetto iteratore di input. Inserisce gli elementi della classe `Elem` in un buffer del flusso di output, a cui accede tramite un oggetto archiviato di tipo `pointer` a `basic_streambuf` \<**Elem**, **Tr**> .|
|[iteratore](../standard-library/iterator-struct.md)|Il modello di classe viene usato come tipo di base per tutti gli iteratori.|
|[iterator_traits](../standard-library/iterator-traits-struct.md)|Classe helper del modello che fornisce tipi critici associati a diversi tipi di iteratori in modo che sia possibile fare riferimento a essi nello stesso modo.|
|[move_iterator](../standard-library/move-iterator-class.md)|Un oggetto `move_iterator` consente di archiviare un iteratore ad accesso casuale di tipo `RandomIterator`. Si comporta come un iteratore ad accesso casuale, salvo quando viene dereferenziato. Viene eseguito il cast in modo implicito del risultato di `operator*` a `value_type&&:` per creare un `rvalue reference`.|
|[ostream_iterator](../standard-library/ostream-iterator-class.md)|Il modello di classe descrive un oggetto iteratore di output. Inserisce oggetti della classe `Type` in un flusso di output, a cui accede tramite un oggetto archiviato di tipo `pointer` a `basic_ostream` \<**Elem**, **Tr**> .|
|[Classe ostreambuf_iterator](../standard-library/ostreambuf-iterator-class.md)|Il modello di classe descrive un oggetto iteratore di output. Inserisce gli elementi della classe `Elem` in un buffer del flusso di output, a cui accede tramite un oggetto archiviato di tipo pointer a `basic_streambuf` \<**Elem**, **Tr**> .|
|[output_iterator_tag](../standard-library/output-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per la `iterator_category` funzione che rappresenta un iteratore di output.|
|[random_access_iterator_tag](../standard-library/random-access-iterator-tag-struct.md)|Classe che fornisce un tipo restituito per la `iterator_category` funzione che rappresenta un iteratore ad accesso casuale.|
|[reverse_iterator](../standard-library/reverse-iterator-class.md)|Il modello di classe descrive un oggetto che si comporta come un iteratore ad accesso casuale, solo in senso inverso.|
|[unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md)|Classe che accede a una matrice mediante un iteratore ad accesso causale non verificato. **Nota:**  questa classe è un'estensione Microsoft della libreria standard C++. Il codice implementato mediante questa funzione non può essere trasferito negli ambienti di compilazione standard di C++ che non supportano questa estensione Microsoft.|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimenti per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
