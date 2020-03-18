---
title: Funzioni dello spazio dei nomi Concurrency (AMP)
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::all_memory_fence
- amp/Concurrency::atomic_compare_exchange
- amp/Concurrency::atomic_fetch_dec
- amp/Concurrency::atomic_fetch_max
- amp/Concurrency::atomic_fetch_min
- amp/Concurrency::copy
- amp/Concurrency::direct3d_abort
- amp/Concurrency::direct3d_printf
- amp/Concurrency::global_memory_fence
- amp/Concurrency::tile_static_memory_fence
ms.assetid: 2bef0985-cb90-4ece-90b9-66529aec73c9
ms.openlocfilehash: 90a23ce111f7307610de3f0ad4bcec05d8de27df
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419315"
---
# <a name="concurrency-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency (AMP)

||||
|-|-|-|
|[all_memory_fence](#all_memory_fence)|[amp_uninitialize](#amp_uninitialize)|[atomic_compare_exchange](#atomic_compare_exchange)|
|[Funzione atomic_exchange (C++ amp)](#atomic_exchange)|[Funzione atomic_fetch_add (C++ amp)](#atomic_fetch_add)|[Funzione atomic_fetch_and (C++ amp)](#atomic_fetch_and)|
|[atomic_fetch_dec](#atomic_fetch_dec)|[atomic_fetch_inc](#atomic_fetch_inc)|[atomic_fetch_max](#atomic_fetch_max)|
|[atomic_fetch_min](#atomic_fetch_min)|[Funzione atomic_fetch_or (C++ amp)](#atomic_fetch_or)|[Funzione atomic_fetch_sub (C++ amp)](#atomic_fetch_sub)|
|[Funzione atomic_fetch_xor (C++ amp)](#atomic_fetch_xor)|[copy](#copy)|[copy_async](#copy_async)|
|[direct3d_abort](#direct3d_abort)|[direct3d_errorf](#direct3d_errorf)|[direct3d_printf](#direct3d_printf)|
|[global_memory_fence](#global_memory_fence)|[Funzione parallel_for_each (C++ amp)](#parallel_for_each)|[tile_static_memory_fence](#tile_static_memory_fence)|

## <a name="all_memory_fence"></a>all_memory_fence

Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria non sono stati completati. In questo modo si garantisce che tutti gli accessi alla memoria siano visibili agli altri thread nella sezione del thread e siano eseguiti nell'ordine del programma.

```cpp
inline void all_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Barrier*<br/>
Oggetto `tile_barrier` .

## <a name="amp_uninitialize"></a>amp_uninitialize

Non inizializza il C++ Runtime amp. È possibile chiamare questa funzione più volte durante la durata di un'applicazione. La chiamata C++ di qualsiasi API amp dopo la chiamata di questa funzione C++ comporterà la reinizializzazione del runtime amp. Si noti che non è consentito usare C++ gli oggetti amp tra le chiamate a questa funzione e questa operazione comporterà un comportamento indefinito. Inoltre, la chiamata simultanea di questa funzione e di qualsiasi altra API AMP non è valida e comporta un comportamento non definito.

```cpp
void __cdecl amp_uninitialize();
```

## <a name="atomic_compare_exchange"></a>atomic_compare_exchange

Confronta in modo atomico il valore archiviato in una posizione di memoria specificata nel primo argomento per verificarne l'uguaglianza con il valore del secondo argomento specificato e, se i valori sono uguali, il valore in corrispondenza della posizione di memoria viene modificato in quello del terzo argomento specificato.

```cpp
inline bool atomic_compare_exchange(
    _Inout_ int* _Dest,
    _Inout_ int* _Expected_value,
    int value
    ) restrict(amp)

inline bool atomic_compare_exchange(
    _Inout_ unsigned int* _Dest,
    _Inout_ unsigned int* _Expected_value,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Posizione da cui viene letto uno dei valori da confrontare e in cui deve essere archiviato il nuovo valore, se disponibile.

*_Expected_value*<br/>
Posizione da cui viene letto il secondo valore da confrontare.

*value*<br/>
Valore da archiviare nella posizione di memoria specificata in da `_Dest` se `_Dest` è uguale a `_Expected_value`.

### <a name="return-value"></a>Valore restituito

**true** se l'operazione ha esito positivo; in caso contrario, **false**.

## <a name="atomic_exchange"></a>Funzione atomic_exchange (C++ amp)

Imposta il valore della posizione di destinazione come operazione atomica.

```cpp
inline int atomic_exchange(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_exchange(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)

inline float atomic_exchange(
    _Inout_ float* _Dest,
    float value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Puntatore alla posizione di destinazione.

*value*<br/>
Nuovo valore.

### <a name="return-value"></a>Valore restituito

Valore originale della posizione di destinazione.

## <a name="atomic_fetch_add"></a>Funzione atomic_fetch_add (C++ amp)

Aggiungere in modo atomico un valore al valore di una posizione di memoria.

```cpp
inline int atomic_fetch_add(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_add(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Puntatore alla posizione di memoria.

*value*<br/>
Valore da aggiungere.

### <a name="return-value"></a>Valore restituito

Valore originale della posizione di memoria.

## <a name="atomic_fetch_and"></a>Funzione atomic_fetch_and (C++ amp)

Esegue in modo atomico un'operazione con AND bit per bit di un valore e il valore di una posizione di memoria.

```cpp
inline int atomic_fetch_and(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_and(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Puntatore alla posizione di memoria.

*value*<br/>
Valore da utilizzare nel calcolo AND bit per bit.

### <a name="return-value"></a>Valore restituito

Valore originale della posizione di memoria.

## <a name="atomic_fetch_dec"></a>atomic_fetch_dec

Decrementa atomicamente il valore archiviato nella posizione di memoria specificata.

```cpp
inline int atomic_fetch_dec(_Inout_ int* _Dest
    ) restrict(amp)

inline unsigned int atomic_fetch_dec(_Inout_ unsigned int* _Dest) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Posizione in memoria del valore da decrementare.

### <a name="return-value"></a>Valore restituito

Valore originale archiviato nella posizione di memoria.

## <a name="atomic_fetch_inc"></a>atomic_fetch_inc

Incrementa in modo atomico il valore archiviato nella posizione di memoria specificata.

```cpp
inline int atomic_fetch_inc(_Inout_ int* _Dest) restrict(amp);

inline unsigned int atomic_fetch_inc(_Inout_ unsigned int* _Dest) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Posizione in memoria del valore da incrementare.

### <a name="return-value"></a>Valore restituito

Valore originale archiviato nella posizione di memoria.

## <a name="atomic_fetch_max"></a>atomic_fetch_max

Calcola atomicamente il valore massimo tra il valore archiviato nella posizione di memoria specificata nel primo argomento e il valore specificato nel secondo argomento e lo archivia nella stessa posizione di memoria.

```cpp
inline int atomic_fetch_max(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_max(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Posizione da cui viene letto uno dei valori da confrontare e in cui deve essere archiviato il valore massimo dei due valori.

*value*<br/>
Valore da confrontare con il valore in corrispondenza della posizione specificata.

### <a name="return-value"></a>Valore restituito

Valore originale archiviato nella posizione specificata.

## <a name="atomic_fetch_min"></a>atomic_fetch_min

Calcola atomicamente il valore minimo tra il valore archiviato nella posizione di memoria specificata nel primo argomento e il valore specificato nel secondo argomento e lo archivia nella stessa posizione di memoria.

```cpp
inline int atomic_fetch_min(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_min(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Posizione da cui viene letto uno dei valori da confrontare e in cui archiviare il valore minimo dei due valori.

*value*<br/>
Valore da confrontare con il valore in corrispondenza della posizione specificata.

### <a name="return-value"></a>Valore restituito

Valore originale archiviato nella posizione specificata.

## <a name="atomic_fetch_or"></a>Funzione atomic_fetch_or (C++ amp)

Esegue in modo atomico un'operazione OR bit per bit con un valore e il valore di una posizione di memoria.

```cpp
inline int atomic_fetch_or(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_or(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Puntatore alla posizione di memoria.

*value*<br/>
Valore da utilizzare nel calcolo or bit per bit.

### <a name="return-value"></a>Valore restituito

Valore originale della posizione di memoria.

## <a name="atomic_fetch_sub"></a>Funzione atomic_fetch_sub (C++ amp)

Sottrae in modo atomico un valore da una posizione di memoria.

```cpp
inline int atomic_fetch_sub(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_sub(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Puntatore alla posizione di destinazione.

*value*<br/>
Valore da sottrarre.

### <a name="return-value"></a>Valore restituito

Valore originale della posizione di memoria.

## <a name="atomic_fetch_xor"></a>Funzione atomic_fetch_xor (C++ amp)

Esegue in modo atomico un'operazione XOR bit per bit di un valore e una posizione di memoria.

```cpp
inline int atomic_fetch_xor(
    _Inout_ int* _Dest,
    int value
    ) restrict(amp)

inline unsigned int atomic_fetch_xor(
    _Inout_ unsigned int* _Dest,
    unsigned int value
    ) restrict(amp)
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Puntatore alla posizione di memoria.

*value*<br/>
Valore da usare nel calcolo XOR.

### <a name="return-value"></a>Valore restituito

Valore originale della posizione di memoria.

## <a name="copy"></a>  copy

Copia un C++ oggetto amp. Sono stati soddisfatti tutti i requisiti di trasferimento dati sincrono. Non è possibile copiare dati quando si esegue il codice in un tasto di scelta rapida. Il formato generale di questa funzione è `copy(src, dest)`.

```cpp
template <typename value_type, int _Rank>
void copy(
    const array<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    InputIterator _SrcLast,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    array<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
void copy(
    const array<value_type, _Rank>& _Src,
   OutputIterator _DestIter);

template <typename value_type, int _Rank>
void copy(
    const array<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<const value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<const value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
void copy(
    const array_view<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    InputIterator _SrcLast,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
void copy(
    InputIterator _SrcFirst,
    array_view<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
void copy(
    const array_view<value_type, _Rank>& _Src,
    OutputIterator _DestIter);
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Oggetto in cui copiare.

*_DestIter*<br/>
Iteratore di output nella posizione iniziale nella destinazione.

*InputIterator*<br/>
Tipo di iteratore di input.

*OutputIterator*<br/>
Tipo dell'iteratore di output.

*_Rank*<br/>
Rango dell'oggetto da cui copiare o oggetto in cui eseguire la copia.

*_Src*<br/>
Oggetto da copiare.

*_SrcFirst*<br/>
Iteratore iniziale nel contenitore di origine.

*_SrcLast*<br/>
Iteratore finale nel contenitore di origine.

*value_type*<br/>
Tipo di dati degli elementi copiati.

## <a name="copy_async"></a>copy_async

Copia un C++ oggetto amp e restituisce un [completion_future](completion-future-class.md) oggetto che può essere atteso. Non è possibile copiare dati quando si esegue il codice in un tasto di scelta rapida.  Il formato generale di questa funzione è `copy(src, dest)`.

```cpp
template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst, InputIterator _SrcLast,
    array<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst,
    array<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array<value_type, _Rank>& _Src, OutputIterator _DestIter);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<const value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<value_type, _Rank>& _Src,
    array<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<const value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<value_type, _Rank>& _Src,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst, InputIterator _SrcLast,
    array_view<value_type, _Rank>& _Dest);

template <typename InputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(InputIterator _SrcFirst,
    array_view<value_type, _Rank>& _Dest);

template <typename OutputIterator, typename value_type, int _Rank>
concurrency::completion_future copy_async(
    const array_view<value_type, _Rank>& _Src, OutputIterator _DestIter);
```

### <a name="parameters"></a>Parametri

*_Dest*<br/>
Oggetto in cui copiare.

*_DestIter*<br/>
Iteratore di output nella posizione iniziale nella destinazione.

*InputIterator*<br/>
Tipo di iteratore di input.

*OutputIterator*<br/>
Tipo dell'iteratore di output.

*_Rank*<br/>
Rango dell'oggetto da cui copiare o oggetto in cui eseguire la copia.

*_Src*<br/>
Oggetto da copiare.

*_SrcFirst*<br/>
Iteratore iniziale nel contenitore di origine.

*_SrcLast*<br/>
Iteratore finale nel contenitore di origine.

*value_type*<br/>
Tipo di dati degli elementi copiati.

### <a name="return-value"></a>Valore restituito

`future<void>` su cui è possibile rimanere in attesa.

## <a name="direct3d_abort"></a>direct3d_abort

Interrompe l'esecuzione di una funzione con la clausola di restrizione `restrict(amp)` . Quando il runtime AMP rileva la chiamata, viene generata un'eccezione [runtime_exception](runtime-exception-class.md) con il messaggio di errore "Reference Rasterizer: Shader abort instruction hit".

```cpp
void direct3d_abort() restrict(amp);
```

## <a name="direct3d_errorf"></a>direct3d_errorf

Stampa una stringa formattata nella finestra di output di Visual Studio. Viene chiamato da una funzione con la clausola di restrizione `restrict(amp)`. Quando il runtime AMP rileva la chiamata, genera un'eccezione [runtime_exception](runtime-exception-class.md) con la stessa stringa di formattazione.

```cpp
void direct3d_errorf(
    const char *,
...) restrict(amp);
```

## <a name="direct3d_printf"></a>direct3d_printf

Stampa una stringa formattata nella finestra di output di Visual Studio. Viene chiamato da una funzione con la clausola di restrizione `restrict(amp)`.

```cpp
void direct3d_printf(
    const char *,
...) restrict(amp);
```

## <a name="global_memory_fence"></a>global_memory_fence

Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria globale non sono stati completati. Ciò assicura che gli accessi alla memoria globale siano visibili agli altri thread nella sezione del thread e siano eseguiti nell'ordine del programma.

```cpp
inline void global_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Barrier*<br/>
Oggetto tile_barrier

## <a name="parallel_for_each"></a>Funzione parallel_for_each (C++ amp)

Esegue una funzione nel dominio di calcolo. Per altre informazioni, vedere [ C++ Panoramica amp](../../../parallel/amp/cpp-amp-overview.md).

```cpp
template <int _Rank, typename _Kernel_type>
void parallel_for_each(
    const extent<_Rank>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, int _Dim2, typename _Kernel_type>
void parallel_for_each(
    const tiled_extent<_Dim0, _Dim1, _Dim2>& _Compute_domain,
   const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, typename _Kernel_type>
void parallel_for_each(
    const tiled_extent<_Dim0, _Dim1>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, typename _Kernel_type>
void parallel_for_each(
    const tiled_extent<_Dim0>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Rank, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const extent<_Rank>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, int _Dim2, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const tiled_extent<_Dim0, _Dim1, _Dim2>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, int _Dim1, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const tiled_extent<_Dim0, _Dim1>& _Compute_domain,
    const _Kernel_type& _Kernel);

template <int _Dim0, typename _Kernel_type>
void parallel_for_each(
    const accelerator_view& _Accl_view,
    const tiled_extent<_Dim0>& _Compute_domain,
    const _Kernel_type& _Kernel);
```

### <a name="parameters"></a>Parametri

*_Accl_view*<br/>
Oggetto `accelerator_view` su cui eseguire il calcolo parallelo.

*_Compute_domain*<br/>
Oggetto `extent` contenente i dati per il calcolo.

*_Dim0*<br/>
Dimensione dell'oggetto `tiled_extent`.

*_Dim1*<br/>
Dimensione dell'oggetto `tiled_extent`.

*_Dim2*<br/>
Dimensione dell'oggetto `tiled_extent`.

*_Kernel*<br/>
Un oggetto lambda o funzione che accetta un argomento di tipo "index\<_Rank >" ed esegue il calcolo parallelo.

*_Kernel_type*<br/>
Espressione lambda o functor.

*_Rank*<br/>
Rango dell'extent.

## <a name="tile_static_memory_fence"></a>tile_static_memory_fence

Blocca l'esecuzione di tutti i thread in una sezione fino a quando non sono stati completati tutti gli accessi di memoria `tile_static` in attesa. In questo modo si garantisce che `tile_static` gli accessi di memoria siano visibili agli altri thread nella sezione del thread e che gli accessi vengano eseguiti nell'ordine del programma.

```cpp
inline void tile_static_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Barrier*<br/>
Oggetto tile_barrier.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
