---
description: 'Altre informazioni su: &lt; mutex&gt;'
title: '&lt;mutex&gt;'
ms.date: 11/04/2016
f1_keywords:
- <mutex>
ms.assetid: efb60c89-687a-4e38-8fe4-694e11c4e8a3
ms.openlocfilehash: b04b62629253e725e650009f373702f907b9116a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338252"
---
# <a name="ltmutexgt"></a>&lt;mutex&gt;

Includere l'intestazione standard \<mutex> per definire le classi `mutex` ,, e, nonché `recursive_mutex` i modelli e e i tipi e le funzioni di `timed_mutex` `recursive_timed_mutex` `lock_guard` `unique_lock` supporto che definiscono aree di codice a esclusione reciproca.

> [!WARNING]
> A partire da Visual Studio 2015, i tipi di sincronizzazione della libreria standard C++ sono basati sulle primitive di sincronizzazione di Windows e non usano più ConcRT (tranne quando la piattaforma di destinazione è Windows XP). I tipi definiti in \<mutex> non devono essere usati con qualsiasi tipo o funzione concrt.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<mutex>

**Spazio dei nomi:** std

## <a name="remarks"></a>Commenti

> [!NOTE]
> Nel codice compilato utilizzando **/CLR**, questa intestazione è bloccata.

Le classi `mutex` e `recursive_mutex` sono *tipi mutex*. Un tipo mutex dispone di un costruttore e di un distruttore predefiniti che non generano eccezioni. Questi oggetti dispongono di metodi che forniscono l'esclusione reciproca quando più thread tentano di bloccare l'oggetto stesso. In particolare, un tipo mutex contiene i metodi `lock`, `try_lock` e `unlock`:

- Il metodo `lock` blocca il thread chiamante finché il thread non diventa proprietario del mutex. Il valore restituito viene ignorato.

- Il metodo `try_lock` tenta di ottenere la proprietà del tipo mutex senza blocco. Il tipo restituito è convertibile in **`bool`** e **`true`** se il metodo ottiene la proprietà, ma in caso contrario **`false`** .

- Il metodo `unlock` rilascia la proprietà del tipo mutex dal thread chiamante.

È possibile utilizzare i tipi di mutex come argomenti di tipo per creare i modelli `lock_guard` e `unique_lock`. È possibile usare oggetti di questi tipi come argomento `Lock` delle funzioni membro di attesa nel modello [condition_variable_any](../standard-library/condition-variable-any-class.md).

Un *tipo mutex programmato* soddisfa i requisiti per un tipo mutex. Include inoltre i `try_lock_for` `try_lock_until` metodi e che devono essere richiamabili tramite un argomento e devono restituire un tipo convertibile in **`bool`** . Un tipo di mutex programmato consente di definire queste funzioni con argomenti aggiuntivi, purché tali argomenti aggiuntivi dispongano tutti di valori predefiniti.

- Il metodo `try_lock_for` deve essere chiamabile tramite un solo argomento, `Rel_time`, il cui tipo è un'istanza specifica di [chrono::duration](../standard-library/duration-class.md). Il metodo tenta di ottenere la proprietà del tipo mutex, ma restituisce un risultato entro l'orario indicato da `Rel_time`, indipendentemente dall'esito. Il valore restituito viene convertito in **`true`** se il metodo ottiene la proprietà; in caso contrario, il valore restituito viene convertito in **`false`** .

- Il metodo `try_lock_until` deve essere chiamabile tramite un solo argomento, `Abs_time`, il cui tipo è un'istanza specifica di [chrono::time_point](../standard-library/time-point-class.md). Il metodo tenta di ottenere la proprietà del tipo mutex, ma restituisce un risultato entro e non oltre l'orario indicato da `Abs_time`, indipendentemente dall'esito. Il valore restituito viene convertito in **`true`** se il metodo ottiene la proprietà; in caso contrario, il valore restituito viene convertito in **`false`** .

Un tipo mutex è noto anche come *tipo bloccabile*. Se non fornisce la funzione membro `try_lock`, si tratta di un *tipo bloccabile di base*. Un tipo mutex programmato è noto anche come *tipo bloccabile programmato*.

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Description|
|-|-|
|[Classe lock_guard](../standard-library/lock-guard-class.md)|Rappresenta un modello di cui è possibile creare un’istanza per la creazione di un oggetto il cui distruttore sblocca un tipo `mutex`.|
|[Classe Mutex (libreria standard C++)](../standard-library/mutex-class-stl.md)|Rappresenta un tipo mutex. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca in un programma.|
|[Classe recursive_mutex](../standard-library/recursive-mutex-class.md)|Rappresenta un tipo mutex. Contrariamente alla classe `mutex`, il comportamento di chiamata di metodi di blocco per gli oggetti che sono già stati bloccati è ben definito.|
|[Classe recursive_timed_mutex](../standard-library/recursive-timed-mutex-class.md)|Rappresenta un tipo mutex programmato. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca con un blocco a tempo limitato all’interno di un programma. A differenza degli oggetti di tipo `timed_mutex`, l'effetto della chiamata di metodi di blocco per oggetti `recursive_timed_mutex` è ben definito.|
|[Classe scoped_lock](../standard-library/scoped-lock-class.md)||
|[Classe timed_mutex](../standard-library/timed-mutex-class.md)|Rappresenta un tipo mutex programmato. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca con un blocco a tempo limitato all’interno di un programma.|
|[Classe unique_lock](../standard-library/unique-lock-class.md)|Rappresenta un modello di cui è possibile creare un’istanza per la creazione di oggetti che gestiscono il blocco e lo sblocco di un tipo `mutex`.|

### <a name="functions"></a>Funzioni

|Nome|Description|
|-|-|
|[call_once](../standard-library/mutex-functions.md#call_once)|Fornisce un meccanismo per chiamare un oggetto richiamabile esattamente una sola volta l'esecuzione.|
|[blocco](../standard-library/mutex-functions.md#lock)|Tenta di bloccare tutti gli argomenti senza deadlock.|
|[scambio](../standard-library/mutex-functions.md#swap)||
|[try_lock](../standard-library/mutex-functions.md#try_lock)||

### <a name="structs"></a>Struct

|Nome|Description|
|-|-|
|[Struttura adopt_lock_t](../standard-library/adopt-lock-t-structure.md)|Rappresenta un tipo che viene utilizzato per definire un `adopt_lock`.|
|[Struttura defer_lock_t](../standard-library/defer-lock-t-structure.md)|Rappresenta un tipo che definisce un oggetto `defer_lock` che consente di selezionare uno dei costruttori di overload di `unique_lock`.|
|[Struttura once_flag](../standard-library/once-flag-structure.md)|Rappresenta un oggetto **`struct`** utilizzato con la funzione di modello `call_once` per garantire che il codice di inizializzazione venga chiamato una sola volta, anche in presenza di più thread di esecuzione.|
|[Struttura try_to_lock_t](../standard-library/try-to-lock-t-structure.md)|Rappresenta un **`struct`** oggetto che definisce un `try_to_lock` oggetto e che viene utilizzato per selezionare uno dei costruttori di overload di `unique_lock` .|

### <a name="variables"></a>Variabili

|Nome|Description|
|-|-|
|[adopt_lock](../standard-library/mutex-functions.md#adopt_lock)|Rappresenta un oggetto che è possibile passare ai costruttori di `lock_guard` e `unique_lock` per indicare che l'oggetto mutex, anch'esso passato al costruttore è bloccato.|
|[defer_lock](../standard-library/mutex-functions.md#defer_lock)|Rappresenta un oggetto che può essere passato al costruttore di `unique_lock` per indicare che il costruttore non deve bloccare l'oggetto mutex anch’esso passato al costruttore.|
|[try_to_lock](../standard-library/mutex-functions.md#try_to_lock)|Rappresenta un oggetto che può essere passato al costruttore di `unique_lock` per indicare che il costruttore deve provare a sbloccare l’oggetto `mutex` anch’esso passato al costruttore senza blocco.|

## <a name="see-also"></a>Vedi anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)
