---
title: '&lt;mutex&gt;'
ms.date: 11/04/2016
f1_keywords:
- <mutex>
ms.assetid: efb60c89-687a-4e38-8fe4-694e11c4e8a3
ms.openlocfilehash: 377ec995f4e61c957e8e620749f96523b60fed3e
ms.sourcegitcommit: 3590dc146525807500c0477d6c9c17a4a8a2d658
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/16/2019
ms.locfileid: "68240591"
---
# <a name="ltmutexgt"></a>&lt;mutex&gt;

Includere l'intestazione standard \<mutex> per definire le classi `mutex`, `recursive_mutex`, `timed_mutex` e `recursive_timed_mutex`, nonché i modelli `lock_guard` e `unique_lock` e i tipi e le funzioni di supporto che definiscono aree di codice a esclusione reciproca.

> [!WARNING]
> A partire da Visual Studio 2015, i tipi di sincronizzazione della libreria Standard C++ si basano sulle primitive di sincronizzazione di Windows e non usano più ConcRT (tranne quando la piattaforma di destinazione è Windows XP). I tipi definiti in \<mutex> non devono essere usati con qualsiasi tipo o funzione ConcRT.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex >

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

> [!NOTE]
> Nel codice compilato usando **/clr**, questa intestazione è bloccata.

Le classi `mutex` e `recursive_mutex` sono *tipi mutex*. Un tipo mutex dispone di un costruttore e di un distruttore predefiniti che non generano eccezioni. Questi oggetti dispongono di metodi che forniscono l'esclusione reciproca quando più thread tentano di bloccare l'oggetto stesso. In particolare, un tipo mutex contiene i metodi `lock`, `try_lock` e `unlock`:

- Il metodo `lock` blocca il thread chiamante finché il thread non diventa proprietario del mutex. Il valore restituito viene ignorato.

- Il metodo `try_lock` tenta di ottenere la proprietà del tipo mutex senza blocco. Il tipo restituito è convertibile in **bool** e viene **true** se il metodo ottiene la proprietà, ma è in caso contrario **false**.

- Il metodo `unlock` rilascia la proprietà del tipo mutex dal thread chiamante.

È possibile utilizzare i tipi di mutex come argomenti di tipo per creare i modelli `lock_guard` e `unique_lock`. È possibile usare oggetti di questi tipi come argomento `Lock` delle funzioni membro di attesa nel modello [condition_variable_any](../standard-library/condition-variable-any-class.md).

Un *tipo mutex programmato* soddisfa i requisiti per un tipo mutex. Inoltre, ha il `try_lock_for` e `try_lock_until` metodi che devono essere chiamabile tramite un solo argomento e devono restituire un tipo convertibile in **bool**. Un tipo di mutex programmato consente di definire queste funzioni con argomenti aggiuntivi, purché tali argomenti aggiuntivi dispongano tutti di valori predefiniti.

- Il metodo `try_lock_for` deve essere chiamabile tramite un solo argomento, `Rel_time`, il cui tipo è un'istanza specifica di [chrono::duration](../standard-library/duration-class.md). Il metodo tenta di ottenere la proprietà del tipo mutex, ma restituisce un risultato entro l'orario indicato da `Rel_time`, indipendentemente dall'esito. Converte il valore restituito **true** se il metodo ottiene la proprietà; in caso contrario, il valore restituito converte **false**.

- Il metodo `try_lock_until` deve essere chiamabile tramite un solo argomento, `Abs_time`, il cui tipo è un'istanza specifica di [chrono::time_point](../standard-library/time-point-class.md). Il metodo tenta di ottenere la proprietà del tipo mutex, ma restituisce un risultato entro e non oltre l'orario indicato da `Abs_time`, indipendentemente dall'esito. Converte il valore restituito **true** se il metodo ottiene la proprietà; in caso contrario, il valore restituito converte **false**.

Un tipo mutex è noto anche come *tipo bloccabile*. Se non fornisce la funzione membro `try_lock`, si tratta di un *tipo bloccabile di base*. Un tipo mutex programmato è noto anche come *tipo bloccabile programmato*.

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe lock_guard](../standard-library/lock-guard-class.md)|Rappresenta un modello di cui è possibile creare un’istanza per la creazione di un oggetto il cui distruttore sblocca un tipo `mutex`.|
|[Classe mutex (libreria standard C++)](../standard-library/mutex-class-stl.md)|Rappresenta un tipo mutex. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca in un programma.|
|[Classe recursive_mutex](../standard-library/recursive-mutex-class.md)|Rappresenta un tipo mutex. Contrariamente alla classe `mutex`, il comportamento di chiamata di metodi di blocco per gli oggetti che sono già stati bloccati è ben definito.|
|[Classe recursive_timed_mutex](../standard-library/recursive-timed-mutex-class.md)|Rappresenta un tipo mutex programmato. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca con un blocco a tempo limitato all’interno di un programma. A differenza degli oggetti di tipo `timed_mutex`, l'effetto della chiamata di metodi di blocco per oggetti `recursive_timed_mutex` è ben definito.|
|[Classe scoped_lock](../standard-library/scoped-lock-class.md)||
|[Classe timed_mutex](../standard-library/timed-mutex-class.md)|Rappresenta un tipo mutex programmato. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca con un blocco a tempo limitato all’interno di un programma.|
|[Classe unique_lock](../standard-library/unique-lock-class.md)|Rappresenta un modello di cui è possibile creare un’istanza per la creazione di oggetti che gestiscono il blocco e lo sblocco di un tipo `mutex`.|

### <a name="functions"></a>Funzioni

|||
|-|-|
|[call_once](../standard-library/mutex-functions.md#call_once)|Fornisce un meccanismo per chiamare un oggetto richiamabile esattamente una sola volta l'esecuzione.|
|[lock](../standard-library/mutex-functions.md#lock)|Tenta di bloccare tutti gli argomenti senza deadlock.|
|[swap](../standard-library/mutex-functions.md#swap)||
|[try_lock](../standard-library/mutex-functions.md#try_lock)||

### <a name="structs"></a>Struct

|||
|-|-|
|[Struttura adopt_lock_t](../standard-library/adopt-lock-t-structure.md)|Rappresenta un tipo che viene utilizzato per definire un `adopt_lock`.|
|[Struttura defer_lock_t](../standard-library/defer-lock-t-structure.md)|Rappresenta un tipo che definisce un oggetto `defer_lock` che consente di selezionare uno dei costruttori di overload di `unique_lock`.|
|[Struttura once_flag](../standard-library/once-flag-structure.md)|Rappresenta un **struct** che viene usato con la funzione modello `call_once` per assicurarsi che l'inizializzazione codice viene chiamato una sola volta, anche in presenza di più thread di esecuzione.|
|[Struttura try_to_lock_t](../standard-library/try-to-lock-t-structure.md)|Rappresenta un **struct** che definisce un `try_to_lock` dell'oggetto e viene usato per selezionare uno dei costruttori di overload di `unique_lock`.|

### <a name="variables"></a>Variabili

|||
|-|-|
|[adopt_lock](../standard-library/mutex-functions.md#adopt_lock)|Rappresenta un oggetto che è possibile passare ai costruttori di `lock_guard` e `unique_lock` per indicare che l'oggetto mutex, anch'esso passato al costruttore è bloccato.|
|[defer_lock](../standard-library/mutex-functions.md#defer_lock)|Rappresenta un oggetto che può essere passato al costruttore di `unique_lock` per indicare che il costruttore non deve bloccare l'oggetto mutex anch’esso passato al costruttore.|
|[try_to_lock](../standard-library/mutex-functions.md#try_to_lock)|Rappresenta un oggetto che può essere passato al costruttore di `unique_lock` per indicare che il costruttore deve provare a sbloccare l’oggetto `mutex` anch’esso passato al costruttore senza blocco.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
