---
title: Spazio dei nomi Concurrency (C++ AMP)
ms.date: 11/04/2016
f1_keywords:
- AMP/Concurrency
helpviewer_keywords:
- Concurrency namespace
ms.assetid: b5aab265-3bac-42c5-8ead-f92ce05ef267
ms.openlocfilehash: 5ddafe5dd821fb21eb6dd03d63122fa98a56af51
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50635370"
---
# <a name="concurrency-namespace-c-amp"></a>Spazio dei nomi Concurrency (C++ AMP)

Fornisce classi e funzioni che permettono di velocizzare l'esecuzione del codice C++ su hardware parallelo. Per altre informazioni, vedere [Panoramica di C++ AMP](../cpp-amp-overview.md)

## <a name="syntax"></a>Sintassi

```
namespace Concurrency;
```

## <a name="members"></a>Membri

### <a name="namespaces"></a>Namespaces

|Nome|Descrizione|
|----------|-----------------|
|[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)|Sono disponibili funzioni che supportano l'interoperabilità D3D. Consente l'utilizzo delle risorse D3D per il calcolo in codice AMP e l'uso delle risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti. È possibile utilizzare C++ AMP per accelerare gradualmente le sezioni di calcolo a elevato utilizzo delle applicazioni DirectX e usare le API D3D sui dati prodotti dai calcoli AMP.|
|[Spazio dei nomi Concurrency::fast_math](concurrency-fast-math-namespace.md)|Le funzioni di `fast_math` dello spazio dei nomi non sono conformi a C99. Vengono fornite solo le versioni e precisione singola di ogni funzione. Queste funzioni usano le funzioni intrinseche di DirectX, che sono più veloci rispetto alle funzioni corrispondenti nel `precise_math` dello spazio dei nomi e non richiedono il supporto a precisione doppia estesa sull'acceleratore, ma sono meno accurate. Sono disponibili due versioni di ogni funzione per la compatibilità a livello di origine con il codice C99; entrambe le versioni accettano e restituiscono valori a precisione singola.|
|[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)|Fornisce tipi e funzioni che sono progettate per la programmazione grafica.|
|[Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)|Le funzioni di `precise_math` dello spazio dei nomi sono conformi a C99. Le versioni sia a precisione singola e precisione doppia di ogni funzione sono incluse. Queste funzioni, incluse le funzioni a precisione singola, ovvero richiedono il supporto a precisione doppia estesa sull'acceleratore.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe accelerator](accelerator-class.md)|Rappresenta un'astrazione di un nodo fisico di calcolo DP-ottimizzato.|
|[Classe accelerator_view](accelerator-view-class.md)|Rappresenta un'astrazione del dispositivo virtuale su un acceleratore di dati paralleli AMP C++.|
|[Classe accelerator_view_removed](accelerator-view-removed-class.md)|Eccezione generata quando una chiamata sottostante di DirectX ha esito negativo a causa di un meccanismo di timeout detection-e di ripristino di Windows.|
|[Classe array](array-class.md)|Aggregato di dati in un `accelerator_view` nel dominio della griglia. È una raccolta di variabili, una per ogni elemento in un dominio della rete. Ogni variabile contiene un valore che corrisponde a un tipo C++.|
|[Classe array_view](array-view-class.md)|Rappresenta una visualizzazione dei dati in una matrice\<T, N >.|
|[Classe completion_future](completion-future-class.md)|Rappresenta un corrispondente futuro alle operazioni asincrone di C++ AMP.|
|[Classe extent](extent-class.md)|Rappresenta un vettore di N valori interi che specificano i limiti di uno spazio N-dimensionale che ha origine in 0. I valori del vettore delle coordinate sono ordinati dal più significativo al meno significativo. Ad esempio, nello spazio cartesiano di 3 dimensioni, il vettore extent (7,5,3) rappresenta un'area in cui la coordinata z varia da 0 a 7, la coordinata y varia da 0 a 5, e la coordinata x è compreso tra 0 e 3.|
|[Classe index](index-class.md)|Definisce un punto di indice N-dimensionale.|
|[Classe invalid_compute_domain](invalid-compute-domain-class.md)|L'eccezione generata quando il runtime non è possibile avviare un kernel con il dominio di calcolo specificato al `parallel_for_each` sito di chiamata.|
|[Classe out_of_memory](out-of-memory-class.md)|Eccezione generata quando un metodo ha esito negativo a causa della mancanza di memoria di sistema o dispositivo.|
|[Classe runtime_exception](runtime-exception-class.md)|Il tipo di base per le eccezioni nella libreria di C++ AMP.|
|[Classe tile_barrier](tile-barrier-class.md)|Classe di funzionalità che può essere creata dal sistema soltanto e viene passata a un affiancato `parallel_for_each` lambda come parte del `tiled_index` parametro. Fornisce un metodo, `wait()`, il cui scopo consiste nel sincronizzare l'esecuzione di thread che sono in esecuzione nel gruppo di thread (sezione).|
|[Classe tiled_extent](tiled-extent-class.md)|Oggetto `tiled_extent` oggetto è un `extent` oggetto di tre dimensioni che suddivide lo spazio dell'extent in sezioni unidimensionale, bidimensionale o tridimensionale.|
|[Classe tiled_index](tiled-index-class.md)|Fornisce un indice in un `tiled_grid` oggetto. Questa classe dispone di proprietà per accedere a elemento di origine locale della sezione e relativo all'origine globale.|
|[Classe uninitialized_object](uninitialized-object-class.md)|Eccezione generata quando viene utilizzato un oggetto non inizializzato.|
|[Classe unsupported_feature](unsupported-feature-class.md)|Eccezione generata quando viene utilizzata una funzionalità non supportata.|

### <a name="enumerations"></a>Enumerazioni

|nome|Descrizione|
|----------|-----------------|
|[Enumerazione access_type](concurrency-namespace-enums-amp.md#access_type)|Specifica il tipo di accesso dati.|
|[Enumerazione queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode)|Specifica la modalità di accodamento sono supportate dall'acceleratore.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|--------------|-----------------|
|[operatore = = Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_eq_eq)|Determina se le strutture di dati specificati sono uguali.|
|[operatore! = (operatore) (C++ AMP)](concurrency-namespace-operators-amp.md#operator_neq)|Determina se le strutture di dati specificati sono uguali.|
|[operatore + operatore (C++ AMP)](concurrency-namespace-operators-amp.md#operator_add)|Calcola la somma per componente degli argomenti specificati.|
|[Operatore operator-(C++ AMP)](concurrency-namespace-operators-amp.md#operator-)|Calcola la differenza per componente tra gli argomenti specificati.|
|[operatore * Operator (C++ AMP)](concurrency-namespace-operators-amp.md#operator_star)|Calcola il prodotto per componente degli argomenti specificati.|
|[operatore / operatore (C++ AMP)](concurrency-namespace-operators-amp.md#operator_div)|Calcola il quoziente per componente degli argomenti specificati.|
|[Operatore operator % (C++ AMP)](concurrency-namespace-operators-amp.md#operator_mod)|Calcola il modulo del primo argomento specificato dal secondo argomento specificato.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[all_memory_fence](concurrency-namespace-functions-amp.md#all_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria sono state completate.|
|[amp_uninitialize](concurrency-namespace-functions-amp.md#amp_uninitialize)|Non inizializza il runtime di AMP C++.|
|[atomic_compare_exchange](concurrency-namespace-functions-amp.md#atomic_compare_exchange)|Di overload. Se il valore archiviato nel percorso specificato risulta uguale al primo valore specificato, il secondo valore specificato è archiviato nella stessa posizione come operazione atomica.|
|[atomic_exchange](concurrency-namespace-functions-amp.md#atomic_exchange)|Di overload. Imposta il valore archiviato nella posizione specificata sul valore specificato come operazione atomica.|
|[atomic_fetch_add](concurrency-namespace-functions-amp.md#atomic_fetch_add)|Di overload. Imposta il valore archiviato nella posizione specificata sulla somma di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_and](concurrency-namespace-functions-amp.md#atomic_fetch_and)|Di overload. Imposta il valore archiviato nella posizione specificata per il bit per bit `and` di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_dec](concurrency-namespace-functions-amp.md#atomic_fetch_dec)|Di overload. Decrementa il valore archiviato nella posizione specificata e archivia il risultato nella stessa posizione come operazione atomica.|
|[atomic_fetch_inc](concurrency-namespace-functions-amp.md#atomic_fetch_inc)|Di overload. Incrementa il valore archiviato nella posizione specificata e archivia il risultato nella stessa posizione come operazione atomica.|
|[atomic_fetch_max](concurrency-namespace-functions-amp.md#atomic_fetch_max)|Di overload. Imposta il valore archiviato nella posizione specificata al più grande di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_min](concurrency-namespace-functions-amp.md#atomic_fetch_min)|Di overload. Imposta il valore archiviato nella posizione specificata per il valore più piccolo di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_or](concurrency-namespace-functions-amp.md#atomic_fetch_or)|Di overload. Imposta il valore archiviato nella posizione specificata per il bit per bit `or` di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_sub](concurrency-namespace-functions-amp.md#atomic_fetch_sub)|Di overload. Imposta il valore archiviato nella posizione specificata sulla differenza di tale valore e un valore specificato come operazione atomica.|
|[atomic_fetch_xor](concurrency-namespace-functions-amp.md#atomic_fetch_xor)|Di overload. Imposta il valore archiviato nella posizione specificata per il bit per bit `xor` di quel valore e un valore specificato come operazione atomica.|
|[copy](concurrency-namespace-functions-amp.md#copy)|Copia un oggetto C++ AMP. Tutti i requisiti di trasferimento sincrono dei dati sono soddisfatte. I dati non possono essere copiati quando codice è in esecuzione codice su un acceleratore. Il formato generale di questa funzione è `copy(src, dest)`.|
|[copy_async](concurrency-namespace-functions-amp.md#copy_async)|Copia un oggetto C++ AMP e restituisce [completion_future](completion-future-class.md) che può esserci attesa. Impossibile copiare i dati durante l'esecuzione di codice su un acceleratore. Il formato generale di questa funzione è `copy(src, dest)`.|
|[direct3d_abort](concurrency-namespace-functions-amp.md#direct3d_abort)|Interrompe l'esecuzione di una funzione che ha il `restrict(amp)` clausola di restrizione.|
|[direct3d_errorf](concurrency-namespace-functions-amp.md#direct3d_errorf)|Stampa una stringa formattata di Visual Studio **Output** finestra e genera un [runtime_exception](runtime-exception-class.md) eccezione che ha la stessa formattazione di stringhe.|
|[direct3d_printf](concurrency-namespace-functions-amp.md#direct3d_printf)|Stampa una stringa formattata di Visual Studio **Output** finestra. Viene chiamato da una funzione che ha il `restrict(amp)` clausola di restrizione.|
|[global_memory_fence](concurrency-namespace-functions-amp.md#global_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché gli accessi alla memoria globale tutti sono state completate.|
|[parallel_for_each (funzione) (C++ AMP)](concurrency-namespace-functions-amp.md#parallel_for_each)|Esegue una funzione tra il dominio di calcolo.|
|[tile_static_memory_fence](concurrency-namespace-functions-amp.md#tile_static_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione fino a `tile_static` gli accessi alla memoria sono state completate.|

## <a name="constants"></a>Costanti

|Nome|Descrizione|
|----------|-----------------|
|[HLSL_MAX_NUM_BUFFERS Constant](concurrency-namespace-constants-amp.md#hlsl_max_num_buffers)|Il numero massimo di buffer consentiti da DirectX.|
|[MODULENAME_MAX_LENGTH (costante)](concurrency-namespace-constants-amp.md#modulename_max_length)|Archivia la lunghezza massima del nome del modulo. Questo valore deve essere uguale sul compilatore e il runtime.|

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

## <a name="see-also"></a>Vedere anche

[Riferimento (C++ AMP)](reference-cpp-amp.md)

