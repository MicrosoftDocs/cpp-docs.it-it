---
title: Spazio dei nomi Concurrency (C++ AMP)
ms.date: 11/04/2016
f1_keywords:
- AMP/Concurrency
helpviewer_keywords:
- Concurrency namespace
ms.assetid: b5aab265-3bac-42c5-8ead-f92ce05ef267
ms.openlocfilehash: 34c3c10fa6bec2737ba78a71c282f90f284a28c2
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139363"
---
# <a name="concurrency-namespace-c-amp"></a>Spazio dei nomi Concurrency (C++ AMP)

Fornisce le classi e le funzioni che accelerano l' C++ esecuzione del codice su hardware parallelo ai dati. Per altre informazioni, vedere [ C++ Panoramica amp](../cpp-amp-overview.md)

## <a name="syntax"></a>Sintassi

```cpp
namespace Concurrency;
```

## <a name="members"></a>Members

### <a name="namespaces"></a>Spazi dei nomi

|Nome|Descrizione|
|----------|-----------------|
|[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)|Fornisce funzioni che supportano l'interoperabilità D3D. Consente un uso uniforme delle risorse D3D per il calcolo in codice AMP e l'uso di risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti. È possibile usare C++ amp per accelerare gradualmente le sezioni a elevato utilizzo di calcolo delle applicazioni DirectX e usare l'API D3D sui dati prodotti da calcoli amp.|
|[Spazio dei nomi Concurrency::fast_math](concurrency-fast-math-namespace.md)|Le funzioni nello spazio dei nomi `fast_math` non sono conformi a C99. Vengono fornite solo le versioni con precisione singola di ogni funzione. Queste funzioni usano le funzioni intrinseche DirectX, che sono più veloci delle funzioni corrispondenti nello spazio dei nomi `precise_math` e non richiedono il supporto esteso a precisione doppia sul tasto di scelta rapida, ma sono meno accurate. Esistono due versioni di ciascuna funzione per la compatibilità a livello di origine con il codice C99. entrambe le versioni accettano e restituiscono valori a precisione singola.|
|[Spazio dei nomi Concurrency::graphics](concurrency-graphics-namespace.md)|Fornisce tipi e funzioni progettati per la programmazione grafica.|
|[Spazio dei nomi Concurrency::precise_math](concurrency-precise-math-namespace.md)|Le funzioni nello spazio dei nomi `precise_math` sono conformi a C99. Sono incluse entrambe le versioni con precisione singola e precisione doppia di ogni funzione. Queste funzioni, incluse le funzioni a precisione singola, richiedono un supporto esteso a precisione doppia sul tasto di scelta rapida.|

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe accelerator](accelerator-class.md)|Rappresenta un'astrazione di un nodo di calcolo fisico ottimizzato con DP.|
|[Classe accelerator_view](accelerator-view-class.md)|Rappresenta un'astrazione del dispositivo virtuale C++ in un acceleratore dati-parallelo amp.|
|[Classe accelerator_view_removed](accelerator-view-removed-class.md)|Eccezione generata quando una chiamata a DirectX sottostante ha esito negativo a causa del meccanismo di rilevamento e ripristino del timeout di Windows.|
|[Classe array](array-class.md)|Aggregazione di dati in un `accelerator_view` nel dominio della griglia. Si tratta di una raccolta di variabili, una per ogni elemento in un dominio Grid. Ogni variabile include un valore che corrisponde a un C++ tipo.|
|[Classe array_view](array-view-class.md)|Rappresenta una visualizzazione dei dati in una matrice\<T, N >.|
|[Classe completion_future](completion-future-class.md)|Rappresenta un futuro che corrisponde a un' C++ operazione asincrona amp.|
|[Classe extent](extent-class.md)|Rappresenta un vettore di N valori integer che specificano i limiti di uno spazio N-dimensionale con un'origine di 0. I valori nel vettore delle coordinate sono ordinati dal più significativo al meno significativo. Ad esempio, nello spazio cartesiano tridimensionale, il vettore di extent (7, 5, 3) rappresenta uno spazio in cui la coordinata z è compresa tra 0 e 7, la coordinata y varia da 0 a 5 e la coordinata x varia da 0 a 3.|
|[Classe index](index-class.md)|Definisce un punto di indice N-dimensionale.|
|[Classe invalid_compute_domain](invalid-compute-domain-class.md)|Eccezione generata quando il runtime non è in grado di avviare un kernel utilizzando il dominio di calcolo specificato nel sito di chiamata `parallel_for_each`.|
|[Classe out_of_memory](out-of-memory-class.md)|Eccezione generata quando un metodo ha esito negativo a causa della mancanza di memoria del sistema o del dispositivo.|
|[Classe runtime_exception](runtime-exception-class.md)|Tipo di base per le eccezioni nella C++ libreria amp.|
|[Classe tile_barrier](tile-barrier-class.md)|Classe di funzionalità che può essere creata solo dal sistema e passata a una lambda `parallel_for_each` affiancata come parte del parametro `tiled_index`. Fornisce un metodo, `wait()`, il cui scopo è quello di sincronizzare l'esecuzione di thread in esecuzione nel gruppo di thread (riquadro).|
|[Classe tiled_extent](tiled-extent-class.md)|Un oggetto `tiled_extent` è un oggetto `extent` da una a tre dimensioni che suddivide lo spazio dell'extent in sezioni unidimensionali, bidimensionali o tridimensionali.|
|[Classe tiled_index](tiled-index-class.md)|Fornisce un indice in un oggetto `tiled_grid`. Questa classe dispone di proprietà per accedere all'elemento relativo all'origine del riquadro locale e in relazione all'origine globale.|
|[Classe uninitialized_object](uninitialized-object-class.md)|Eccezione generata quando viene utilizzato un oggetto non inizializzato.|
|[Classe unsupported_feature](unsupported-feature-class.md)|Eccezione generata quando viene utilizzata una funzionalità non supportata.|

### <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|----------|-----------------|
|[Enumerazione access_type](concurrency-namespace-enums-amp.md#access_type)|Specifica il tipo di accesso ai dati.|
|[Enumerazione queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode)|Specifica le modalità di accodamento supportate nel tasto di scelta rapida.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|--------------|-----------------|
|[Operatore operator = = (C++ amp)](concurrency-namespace-operators-amp.md#operator_eq_eq)|Determina se le strutture di dati specificate sono uguali.|
|[operatore operator! = (C++ amp)](concurrency-namespace-operators-amp.md#operator_neq)|Determina se le strutture di dati specificate sono diverse.|
|[operatore operator + (C++ amp)](concurrency-namespace-operators-amp.md#operator_add)|Calcola la somma dei componenti degli argomenti specificati.|
|[operatore operator-(C++ amp)](concurrency-namespace-operators-amp.md#operator-)|Calcola la differenza in termini di componente tra gli argomenti specificati.|
|[operatore operator * (C++ amp)](concurrency-namespace-operators-amp.md#operator_star)|Calcola il prodotto per componente degli argomenti specificati.|
|[operatore operator/(C++ amp)](concurrency-namespace-operators-amp.md#operator_div)|Calcola il quoziente per componente degli argomenti specificati.|
|[operatore operator% (C++ amp)](concurrency-namespace-operators-amp.md#operator_mod)|Calcola il modulo del primo argomento specificato in base al secondo argomento specificato.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[all_memory_fence](concurrency-namespace-functions-amp.md#all_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria non sono stati completati.|
|[amp_uninitialize](concurrency-namespace-functions-amp.md#amp_uninitialize)|Non inizializza il C++ Runtime amp.|
|[atomic_compare_exchange](concurrency-namespace-functions-amp.md#atomic_compare_exchange)|Di overload. Se il valore archiviato nella posizione specificata viene confrontato con il primo valore specificato, il secondo valore specificato viene archiviato nella stessa posizione di un'operazione atomica.|
|[atomic_exchange](concurrency-namespace-functions-amp.md#atomic_exchange)|Di overload. Imposta il valore archiviato nella posizione specificata sul valore specificato come operazione atomica.|
|[atomic_fetch_add](concurrency-namespace-functions-amp.md#atomic_fetch_add)|Di overload. Imposta il valore archiviato nella posizione specificata sulla somma di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_and](concurrency-namespace-functions-amp.md#atomic_fetch_and)|Di overload. Imposta il valore archiviato nella posizione specificata sull'`and` bit per bit di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_dec](concurrency-namespace-functions-amp.md#atomic_fetch_dec)|Di overload. Decrementa il valore archiviato nella posizione specificata e archivia il risultato nella stessa posizione di un'operazione atomica.|
|[atomic_fetch_inc](concurrency-namespace-functions-amp.md#atomic_fetch_inc)|Di overload. Incrementa il valore archiviato nella posizione specificata e archivia il risultato nella stessa posizione di un'operazione atomica.|
|[atomic_fetch_max](concurrency-namespace-functions-amp.md#atomic_fetch_max)|Di overload. Imposta il valore archiviato nella posizione specificata sul valore più grande del valore e un valore specificato come operazione atomica.|
|[atomic_fetch_min](concurrency-namespace-functions-amp.md#atomic_fetch_min)|Di overload. Imposta il valore archiviato nella posizione specificata sul valore più piccolo del valore e un valore specificato come operazione atomica.|
|[atomic_fetch_or](concurrency-namespace-functions-amp.md#atomic_fetch_or)|Di overload. Imposta il valore archiviato nella posizione specificata sull'`or` bit per bit di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_sub](concurrency-namespace-functions-amp.md#atomic_fetch_sub)|Di overload. Imposta il valore archiviato nella posizione specificata sulla differenza di quel valore e un valore specificato come operazione atomica.|
|[atomic_fetch_xor](concurrency-namespace-functions-amp.md#atomic_fetch_xor)|Di overload. Imposta il valore archiviato nella posizione specificata sull'`xor` bit per bit di quel valore e un valore specificato come operazione atomica.|
|[copy](concurrency-namespace-functions-amp.md#copy)|Copia un C++ oggetto amp. Sono stati soddisfatti tutti i requisiti di trasferimento dati sincrono. Non è possibile copiare i dati quando il codice esegue il codice in un tasto di scelta rapida. Il formato generale di questa funzione è `copy(src, dest)`.|
|[copy_async](concurrency-namespace-functions-amp.md#copy_async)|Copia un C++ oggetto amp e restituisce [completion_future](completion-future-class.md) che può essere atteso. Non è possibile copiare i dati quando il codice è in esecuzione in un tasto di scelta rapida. Il formato generale di questa funzione è `copy(src, dest)`.|
|[direct3d_abort](concurrency-namespace-functions-amp.md#direct3d_abort)|Interrompe l'esecuzione di una funzione che ha la clausola di restrizione `restrict(amp)`.|
|[direct3d_errorf](concurrency-namespace-functions-amp.md#direct3d_errorf)|Stampa una stringa formattata nella finestra di **output** di Visual Studio e genera un'eccezione [runtime_exception](runtime-exception-class.md) con la stessa stringa di formattazione.|
|[direct3d_printf](concurrency-namespace-functions-amp.md#direct3d_printf)|Stampa una stringa formattata nella finestra di **output** di Visual Studio. Viene chiamato da una funzione che ha la clausola di restrizione `restrict(amp)`.|
|[global_memory_fence](concurrency-namespace-functions-amp.md#global_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria globale non sono stati completati.|
|[Funzione parallel_for_each (C++ amp)](concurrency-namespace-functions-amp.md#parallel_for_each)|Esegue una funzione nel dominio di calcolo.|
|[tile_static_memory_fence](concurrency-namespace-functions-amp.md#tile_static_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione fino a quando non sono stati completati `tile_static` accessi alla memoria.|

## <a name="constants"></a>Costanti

|Nome|Descrizione|
|----------|-----------------|
|[Costante HLSL_MAX_NUM_BUFFERS](concurrency-namespace-constants-amp.md#hlsl_max_num_buffers)|Numero massimo di buffer consentiti da DirectX.|
|[Costante MODULENAME_MAX_LENGTH](concurrency-namespace-constants-amp.md#modulename_max_length)|Archivia la lunghezza massima del nome del modulo. Questo valore deve essere lo stesso per il compilatore e il Runtime.|

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

## <a name="see-also"></a>Vedere anche

[Riferimento (C++ AMP)](reference-cpp-amp.md)
