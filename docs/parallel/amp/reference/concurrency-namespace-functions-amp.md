---
title: Funzioni dello spazio dei nomi Concurrency (AMP) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
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
dev_langs:
- C++
ms.assetid: 2bef0985-cb90-4ece-90b9-66529aec73c9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 061587fae8728c6489296426a849075a6b4d00f0
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="concurrency-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency (AMP)
||||  
|-|-|-|  
|[all_memory_fence](#all_memory_fence)|[amp_uninitialize](#amp_uninitialize)|[atomic_compare_exchange](#atomic_compare_exchange)|  
|[Funzione atomic_exchange (C++ AMP)](#atomic_exchange)|[Funzione atomic_fetch_add (C++ AMP)](#atomic_fetch_add)|[Funzione atomic_fetch_and (C++ AMP)](#atomic_fetch_and)|  
|[atomic_fetch_dec](#atomic_fetch_dec)|[atomic_fetch_inc](#atomic_fetch_inc)|[atomic_fetch_max](#atomic_fetch_max)|  
|[atomic_fetch_min](#atomic_fetch_min)|[Funzione atomic_fetch_or (C++ AMP)](#atomic_fetch_or)|[Funzione atomic_fetch_sub (C++ AMP)](#atomic_fetch_sub)|  
|[Funzione atomic_fetch_xor (C++ AMP)](#atomic_fetch_xor)|[copy](#copy)|[copy_async](#copy_async)|  
|[direct3d_abort](#direct3d_abort)|[direct3d_errorf](#direct3d_errorf)|[direct3d_printf](#direct3d_printf)|  
|[global_memory_fence](#global_memory_fence)|[parallel_for_each (funzione) (C++ AMP)](#parallel_for_each)|[tile_static_memory_fence](#tile_static_memory_fence)|  
  
##  <a name="all_memory_fence"></a>  all_memory_fence  
 Blocca l'esecuzione di tutti i thread in un riquadro fino a quando non sono stati completati tutti gli accessi alla memoria. Ciò garantisce che tutti gli accessi alla memoria sono visibili agli altri thread nel riquadro del thread e vengono eseguite nell'ordine del programma.  
  
```  
inline void all_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Barrier`  
 Oggetto `tile_barrier`.  
  
##  <a name="amp_uninitialize"></a>  amp_uninitialize  
 Non inizializza il runtime C++ AMP. È possibile chiamare questa funzione più volte durante un ciclo di vita di applicazioni. La chiamata dopo qualsiasi API C++ AMP chiamare questa funzione verrà reinizializzato il runtime C++ AMP. Si noti che non è consentito utilizzare gli oggetti di C++ AMP durante le chiamate a questa funzione e tale operazione genererà un comportamento indefinito. Inoltre, contemporaneamente la chiamata a questa funzione e qualsiasi altro APIs AMP non è valida e darà origine a un comportamento indefinito.  
  
```  
void __cdecl amp_uninitialize();
```  
  
##  <a name="atomic_compare_exchange"></a>  atomic_compare_exchange  
 In modo atomico consente di confrontare il valore archiviato in una posizione di memoria specificati nel primo argomento per verificarne l'uguaglianza con il valore del secondo argomento specificato, e se i valori sono uguali, il valore in corrispondenza della posizione di memoria viene modificato in che del terzo specificato argomento.  
  
```  
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
 `_Dest`  
 Il percorso da cui uno dei valori da confrontare è di lettura e a cui il nuovo valore, se presente, è da archiviare.  
  
 `_Expected_value`  
 Il percorso da cui viene letto il secondo valore da confrontare.  
  
 `value`  
 Il valore da archiviare nella posizione di memoria specificata da `_Dest` se `_Dest` è uguale a `_Expected_value`.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'operazione riesce; in caso contrario, `false`.  
  

##  <a name="atomic_exchange"></a>  Funzione atomic_exchange (C++ AMP)  
 Imposta il valore del percorso di destinazione come operazione atomica.  
  
```  
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
 `_Dest`  
 Puntatore al percorso di destinazione.  
  
 `value`  
 Nuovo valore.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale del percorso di destinazione.  
  

##  <a name="atomic_fetch_add"></a>  Funzione atomic_fetch_add (C++ AMP)  
 Aggiungere atomicamente un valore per il valore di una posizione di memoria.  
  
```  
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
 `_Dest`  
 Puntatore alla posizione di memoria.  
  
 `value`  
 Valore da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_and"></a>  Funzione atomic_fetch_and (C++ AMP)  
 Esegue in modo atomico un'operazione con AND bit per bit di un valore e il valore di una posizione di memoria.  
  
```  
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
 `_Dest`  
 Puntatore alla posizione di memoria.  
  
 `value`  
 Il valore da utilizzare nel calcolo AND bit per bit.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_dec"></a>  atomic_fetch_dec  
 In modo atomico decrementa il valore archiviato in corrispondenza della posizione di memoria specificata.  
  
```  
inline int atomic_fetch_dec(_Inout_ int* _Dest  
    ) restrict(amp)

 
inline unsigned int atomic_fetch_dec(_Inout_ unsigned int* _Dest) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Dest`  
 Posizione nella memoria del valore deve essere diminuito.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato in una posizione di memoria.  
  
##  <a name="atomic_fetch_inc"></a>  atomic_fetch_inc  
 In modo atomico incrementa il valore archiviato in una posizione specificata per la memoria.  
  
```  
inline int atomic_fetch_inc(_Inout_ int* _Dest) restrict(amp);

 
inline unsigned int atomic_fetch_inc(_Inout_ unsigned int* _Dest) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Dest`  
 Posizione nella memoria del valore deve essere incrementato.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato in una posizione di memoria.  
  
##  <a name="atomic_fetch_max"></a>  atomic_fetch_max  
 In modo atomico calcola il valore massimo tra il valore archiviato nella posizione di memoria specificata in cui il primo argomento e il valore specificato nel secondo argomento e lo archivia nella stessa posizione di memoria.  
  
```  
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
 `_Dest`  
 Il percorso da cui uno dei valori da confrontare è di lettura e a cui viene archiviato il numero massimo di due valori.  
  
 `value`  
 Il valore da confrontare con il valore nella posizione specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato in corrispondenza della posizione del percorso specificato.  
  
##  <a name="atomic_fetch_min"></a>  atomic_fetch_min  
 In modo atomico calcola il valore minimo tra il valore archiviato nella posizione di memoria specificata in cui il primo argomento e il valore specificato nel secondo argomento e lo archivia nella stessa posizione di memoria.  
  
```  
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
 `_Dest`  
 Il percorso da cui uno dei valori da confrontare è di lettura e a cui viene archiviato il valore minimo di due valori.  
  
 `value`  
 Il valore da confrontare con il valore nella posizione specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato in corrispondenza della posizione del percorso specificato.  
  
##  <a name="atomic_fetch_or"></a>  Funzione atomic_fetch_or (C++ AMP)  
 Esegue in modo atomico un'operazione OR bit per bit con un valore e il valore di una posizione di memoria.  
  
```  
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
 `_Dest`  
 Puntatore alla posizione di memoria.  
  
 `value`  
 Il valore da utilizzare nel calcolo OR bit per bit.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_sub"></a>  Funzione atomic_fetch_sub (C++ AMP)  
 Sottrae atomicamente un valore da una posizione di memoria.  
  
```  
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
 `_Dest`  
 Puntatore al percorso di destinazione.  
  
 `value`  
 Il valore da sottrarre.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_xor"></a>  Funzione atomic_fetch_xor (C++ AMP)  
 Esegue un'operazione XOR bit per bit di un valore e una posizione di memoria in modo atomico.  
  
```  
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
 `_Dest`  
 Puntatore alla posizione di memoria.  
  
 `value`  
 Il valore da utilizzare nel calcolo XOR.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="copy"></a>  copy  
 Copia un oggetto C++ AMP. Vengono soddisfatti tutti i requisiti di trasferimento di dati sincroni. È possibile copiare i dati durante l'esecuzione di codice su un tasto di scelta rapida. Il formato generale di questa funzione è `copy(src, dest)`.  
  
```  
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
 `_Dest`  
 Oggetto da copiare.  
  
 `_DestIter`  
 Un iteratore di output per la posizione iniziale nella destinazione.  
  
 `InputIterator`  
 Il tipo di interator l'input.  
  
 `OutputIterator`  
 Il tipo di iteratore di output.  
  
 `_Rank`  
 Il numero di dimensioni dell'oggetto da copiare da o oggetto da copiare.  
  
 `_Src`  
 A un oggetto da copiare.  
  
 `_SrcFirst`  
 Un iteratore di inizio nel contenitore di origine.  
  
 `_SrcLast`  
 Iteratore di fine in un contenitore di origine.  
  
 `value_type`  
 Il tipo di dati degli elementi copiati.  
  
##  <a name="copy_async"></a>  copy_async  
 Copia un oggetto C++ AMP e restituisce un [completion_future](completion-future-class.md) oggetto che può restare in attesa. È possibile copiare i dati durante l'esecuzione di codice su un tasto di scelta rapida.  Il formato generale di questa funzione è `copy(src, dest)`.  
  
```  
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
 `_Dest`  
 Oggetto da copiare.  
  
 `_DestIter`  
 Un iteratore di output per la posizione iniziale nella destinazione.  
  
 `InputIterator`  
 Il tipo di interator l'input.  
  
 `OutputIterator`  
 Il tipo di iteratore di output.  
  
 `_Rank`  
 Il numero di dimensioni dell'oggetto da copiare da o oggetto da copiare.  
  
 `_Src`  
 A un oggetto da copiare.  
  
 `_SrcFirst`  
 Un iteratore di inizio nel contenitore di origine.  
  
 `_SrcLast`  
 Iteratore di fine in un contenitore di origine.  
  
 `value_type`  
 Il tipo di dati degli elementi copiati.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `future<void>` che può essere attesa.  
  
##  <a name="direct3d_abort"></a>  direct3d_abort  
 Interrompe l'esecuzione di una funzione con la clausola di restrizione `restrict(amp)` . Quando il runtime AMP rileva la chiamata, viene generato un [runtime_exception](runtime-exception-class.md) eccezione con il messaggio di errore "Reference Rasterizer: Shader abort istruzione hit".  
  
```  
void direct3d_abort() restrict(amp);
```  
  
##  <a name="direct3d_errorf"></a>  direct3d_errorf  
 Stampa di una stringa formattata nella finestra di output di Visual Studio. Viene chiamato da una funzione con il `restrict(amp)` clausola di restrizione. Quando il runtime AMP rileva la chiamata, viene generato un [runtime_exception](runtime-exception-class.md) eccezione con la stessa stringa di formattazione.  
  
```  
void direct3d_errorf(
    const char *,  
 ...) restrict(amp);
```  
  
##  <a name="direct3d_printf"></a>  direct3d_printf  
 Stampa di una stringa formattata nella finestra di output di Visual Studio. Viene chiamato da una funzione con il `restrict(amp)` clausola di restrizione.  
  
```  
void direct3d_printf(
    const char *,  
 ...) restrict(amp);
```  
  
##  <a name="global_memory_fence"></a>  global_memory_fence  
 Blocca l'esecuzione di tutti i thread in un riquadro fino a quando non accede a tutta la memoria globale sono stati completati. Ciò garantisce che gli accessi alla memoria globali sono visibili agli altri thread nel riquadro del thread e vengono eseguite nell'ordine del programma.  
  
```  
inline void global_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Barrier`  
 Un oggetto tile_barrier  
  
##  <a name="parallel_for_each"></a>  parallel_for_each (funzione) (C++ AMP)  
 Esegue una funzione all'interno del dominio di calcolo. Per ulteriori informazioni, vedere [C++ AMP Panoramica](../../../parallel/amp/cpp-amp-overview.md).  
  
```  
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
 `_Accl_view`  
 Il `accelerator_view` oggetto per eseguire il calcolo parallelo in.  
  
 `_Compute_domain`  
 Un `extent` oggetto che contiene i dati per il calcolo.  
  
 `_Dim0`  
 La dimensione del `tiled_extent` oggetto.  
  
 `_Dim1`  
 La dimensione del `tiled_extent` oggetto.  
  
 `_Dim2`  
 La dimensione del `tiled_extent` oggetto.  
  
 `_Kernel`  
 Un oggetto lambda o una funzione che accetta un argomento di tipo "indice\<_Rank >" ed esegue il calcolo parallelo.  
  
 `_Kernel_type`  
 Un'espressione lambda o functor.  
  
 `_Rank`  
 Il numero di dimensioni dell'estensione.  
  
##  <a name="tile_static_memory_fence"></a>  tile_static_memory_fence  
 Blocca l'esecuzione di tutti i thread in un riquadro finché tutti in sospeso `tile_static` gli accessi alla memoria sono state completate. In questo modo `tile_static` gli accessi alla memoria sono visibili agli altri thread nel riquadro del thread e che gli accessi vengono eseguiti nell'ordine del programma.  
  
```  
inline void tile_static_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Barrier`  
 Un oggetto tile_barrier.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
