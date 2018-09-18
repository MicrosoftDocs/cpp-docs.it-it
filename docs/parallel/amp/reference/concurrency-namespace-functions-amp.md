---
title: Funzioni dello spazio dei nomi Concurrency (AMP) | Microsoft Docs
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
ms.openlocfilehash: ba253744b7abc3cc37dfa765ebe15af49b89c0ac
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46069144"
---
# <a name="concurrency-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency (AMP)
||||  
|-|-|-|  
|[all_memory_fence](#all_memory_fence)|[amp_uninitialize](#amp_uninitialize)|[atomic_compare_exchange](#atomic_compare_exchange)|  
|[atomic_exchange (C++ AMP) (funzione)](#atomic_exchange)|[atomic_fetch_add (funzione) (C++ AMP)](#atomic_fetch_add)|[atomic_fetch_and (funzione) (C++ AMP)](#atomic_fetch_and)|  
|[atomic_fetch_dec](#atomic_fetch_dec)|[atomic_fetch_inc](#atomic_fetch_inc)|[atomic_fetch_max](#atomic_fetch_max)|  
|[atomic_fetch_min](#atomic_fetch_min)|[atomic_fetch_or (funzione) (C++ AMP)](#atomic_fetch_or)|[atomic_fetch_sub (funzione) (C++ AMP)](#atomic_fetch_sub)|  
|[atomic_fetch_xor (funzione) (C++ AMP)](#atomic_fetch_xor)|[copy](#copy)|[copy_async](#copy_async)|  
|[direct3d_abort](#direct3d_abort)|[direct3d_errorf](#direct3d_errorf)|[direct3d_printf](#direct3d_printf)|  
|[global_memory_fence](#global_memory_fence)|[parallel_for_each (funzione) (C++ AMP)](#parallel_for_each)|[tile_static_memory_fence](#tile_static_memory_fence)|  
  
##  <a name="all_memory_fence"></a>  all_memory_fence  
 Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria sono state completate. Ciò assicura che tutti gli accessi alla memoria siano visibili agli altri thread nella sezione del thread e vengono eseguite nell'ordine del programma.  
  
```  
inline void all_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Barrier*<br/>
Oggetto `tile_barrier`.  
  
##  <a name="amp_uninitialize"></a>  amp_uninitialize  
 Non inizializza il runtime di AMP C++. È consentito chiamare questa funzione più volte durante un ciclo di vita delle applicazioni. La chiamata a qualsiasi elemento di API di AMP C++ dopo la chiamata a questa funzione reinizializzerà il runtime di AMP C++. Si noti che non è consentito utilizzare gli oggetti di C++ AMP nelle chiamate a questa funzione e tale operazione genererà un comportamento indefinito. Inoltre, contemporaneamente la chiamata a questa funzione e qualsiasi altra APIs AMP non è valida e restituirà un comportamento indefinito.  
  
```  
void __cdecl amp_uninitialize();
```  
  
##  <a name="atomic_compare_exchange"></a>  atomic_compare_exchange  
 In modo atomico confronta il valore archiviato in una posizione di memoria specificato nel primo argomento per verificarne l'uguaglianza con il valore del secondo argomento specificato, e se i valori sono uguali, il valore in corrispondenza della posizione di memoria viene modificato in che del terzo argomento specificato.  
  
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
*Dest*<br/>
Il percorso dal quale uno dei valori da confrontare è di lettura e a cui il nuovo valore, se presente, è da archiviare.  
  
*_Expected_value*<br/>
Posizione da cui viene letto il secondo valore da confrontare.  
  
*valore*<br/>
Il valore da archiviare nella posizione di memoria specificata da `_Dest` se `_Dest` è uguale a `_Expected_value`.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'operazione riesce; in caso contrario, `false`.  
  

##  <a name="atomic_exchange"></a>  atomic_exchange (C++ AMP) (funzione)  
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
*Dest*<br/>
Puntatore alla posizione di destinazione.  
  
*valore*<br/>
Nuovo valore.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale del percorso di destinazione.  
  

##  <a name="atomic_fetch_add"></a>  atomic_fetch_add (funzione) (C++ AMP)  
 Aggiungere in modo atomico un valore per il valore di una posizione di memoria.  
  
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
*Dest*<br/>
Puntatore alla posizione di memoria.  
  
*valore*<br/>
Valore da aggiungere.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_and"></a>  atomic_fetch_and (funzione) (C++ AMP)  
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
*Dest*<br/>
Puntatore alla posizione di memoria.  
  
*valore*<br/>
Il valore da usare nel calcolo AND bit per bit.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_dec"></a>  atomic_fetch_dec  
 Decrementa in modo atomico il valore archiviato nella posizione di memoria specificato.  
  
```  
inline int atomic_fetch_dec(_Inout_ int* _Dest  
    ) restrict(amp)

 
inline unsigned int atomic_fetch_dec(_Inout_ unsigned int* _Dest) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*Dest*<br/>
Posizione nella memoria del valore deve essere diminuito.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato nella posizione di memoria.  
  
##  <a name="atomic_fetch_inc"></a>  atomic_fetch_inc  
 Incrementa in modo atomico il valore archiviato nella posizione di memoria specificata.  
  
```  
inline int atomic_fetch_inc(_Inout_ int* _Dest) restrict(amp);

 
inline unsigned int atomic_fetch_inc(_Inout_ unsigned int* _Dest) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*Dest*<br/>
Posizione nella memoria del valore da incrementare.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato nella posizione di memoria.  
  
##  <a name="atomic_fetch_max"></a>  atomic_fetch_max  
 In modo atomico calcola il valore massimo tra il valore archiviato nella posizione di memoria specificata nel primo argomento e il valore specificato nel secondo argomento e lo archivia nella stessa posizione di memoria.  
  
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
*Dest*<br/>
Il percorso dal quale uno dei valori da confrontare è di lettura e a cui viene archiviato il numero massimo di due valori.  
  
*valore*<br/>
Il valore da confrontare con il valore in corrispondenza della posizione specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato nella posizione specificata.  
  
##  <a name="atomic_fetch_min"></a>  atomic_fetch_min  
 In modo atomico calcola il valore minimo tra il valore archiviato nella posizione di memoria specificata nel primo argomento e il valore specificato nel secondo argomento e lo archivia nella stessa posizione di memoria.  
  
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
*Dest*<br/>
Il percorso dal quale uno dei valori da confrontare è di lettura e a cui viene archiviato il valore minimo di due valori.  
  
*valore*<br/>
Il valore da confrontare con il valore in corrispondenza della posizione specificata.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale archiviato nella posizione specificata.  
  
##  <a name="atomic_fetch_or"></a>  atomic_fetch_or (funzione) (C++ AMP)  
 Esegue in modo atomico un'operazione di OR bit per bit con un valore e il valore di una posizione di memoria.  
  
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
*Dest*<br/>
Puntatore alla posizione di memoria.  
  
*valore*<br/>
Il valore da usare nel calcolo OR bit per bit.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_sub"></a>  atomic_fetch_sub (funzione) (C++ AMP)  
 In modo atomico sottrae un valore da una posizione di memoria.  
  
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
*Dest*<br/>
Puntatore alla posizione di destinazione.  
  
*valore*<br/>
Il valore da sottrarre.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="atomic_fetch_xor"></a>  atomic_fetch_xor (funzione) (C++ AMP)  
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
*Dest*<br/>
Puntatore alla posizione di memoria.  
  
*valore*<br/>
Il valore da usare nel calcolo XOR.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore originale della posizione di memoria.  
  
##  <a name="copy"></a>  copy  
 Copia un oggetto C++ AMP. Tutti i requisiti di trasferimento sincrono dei dati sono soddisfatte. È possibile copiare i dati durante l'esecuzione di codice su un acceleratore. Il formato generale di questa funzione è `copy(src, dest)`.  
  
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
*Dest*<br/>
Oggetto da copiare.  
  
*_DestIter*<br/>
Iteratore di output nella posizione iniziale nella destinazione.  
  
*InputIterator*<br/>
Tipo di iteratore di input.  
  
*OutputIterator*<br/>
Tipo di iteratore di output.  
  
*_Rank*<br/>
Il rango dell'oggetto da copiare da o oggetto da copiare.  
  
*_Src*<br/>
Oggetto da copiare.  
  
*_SrcFirst*<br/>
Un iteratore iniziale nel contenitore di origine.  
  
*_SrcLast*<br/>
Iteratore di fine del contenitore sorgente.  
  
*value_type*<br/>
Il tipo di dati degli elementi copiati.  
  
##  <a name="copy_async"></a>  copy_async  
 Copia un oggetto C++ AMP e restituisce un [completion_future](completion-future-class.md) oggetto che può esserci attesa. È possibile copiare i dati durante l'esecuzione di codice su un acceleratore.  Il formato generale di questa funzione è `copy(src, dest)`.  
  
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
*Dest*<br/>
Oggetto da copiare.  
  
*_DestIter*<br/>
Iteratore di output nella posizione iniziale nella destinazione.  
  
*InputIterator*<br/>
Tipo di iteratore di input.  
  
*OutputIterator*<br/>
Tipo di iteratore di output.  
  
*_Rank*<br/>
Il rango dell'oggetto da copiare da o oggetto da copiare.  
  
*_Src*<br/>
Oggetto da copiare.  
  
*_SrcFirst*<br/>
Un iteratore iniziale nel contenitore di origine.  
  
*_SrcLast*<br/>
Iteratore di fine del contenitore sorgente.  
  
*value_type*<br/>
Il tipo di dati degli elementi copiati.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `future<void>` che può esserci attesa.  
  
##  <a name="direct3d_abort"></a>  direct3d_abort  
 Interrompe l'esecuzione di una funzione con la clausola di restrizione `restrict(amp)` . Quando il runtime AMP rileva la chiamata, viene generata una [runtime_exception](runtime-exception-class.md) eccezione con il messaggio di errore "Reference Rasterizer: Shader abort istruzione hit".  
  
```  
void direct3d_abort() restrict(amp);
```  
  
##  <a name="direct3d_errorf"></a>  direct3d_errorf  
 Stampa una stringa formattata per la finestra di output di Visual Studio. Viene chiamato da una funzione con il `restrict(amp)` clausola di restrizione. Quando il runtime AMP rileva la chiamata, viene generata una [runtime_exception](runtime-exception-class.md) eccezione con la stessa stringa di formattazione.  
  
```  
void direct3d_errorf(
    const char *,  
 ...) restrict(amp);
```  
  
##  <a name="direct3d_printf"></a>  direct3d_printf  
 Stampa una stringa formattata per la finestra di output di Visual Studio. Viene chiamato da una funzione con il `restrict(amp)` clausola di restrizione.  
  
```  
void direct3d_printf(
    const char *,  
 ...) restrict(amp);
```  
  
##  <a name="global_memory_fence"></a>  global_memory_fence  
 Blocca l'esecuzione di tutti i thread in una sezione finché gli accessi alla memoria globale tutti sono state completate. Ciò garantisce che gli accessi alla memoria globale siano visibili agli altri thread nella sezione del thread e vengono eseguiti nell'ordine del programma.  
  
```  
inline void global_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Barrier*<br/>
Un oggetto tile_barrier  
  
##  <a name="parallel_for_each"></a>  parallel_for_each (funzione) (C++ AMP)  
 Esegue una funzione tra il dominio di calcolo. Per altre informazioni, vedere [Panoramica di C++ AMP](../../../parallel/amp/cpp-amp-overview.md).  
  
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
*_Accl_view*<br/>
Il `accelerator_view` oggetto per eseguire il calcolo in parallelo.  
  
*_Compute_domain*<br/>
Un `extent` oggetto che contiene i dati per il calcolo.  
  
*_Dim0*<br/>
La dimensione del `tiled_extent` oggetto.  
  
*_Dim1*<br/>
La dimensione del `tiled_extent` oggetto.  
  
*_Dim2*<br/>
La dimensione del `tiled_extent` oggetto.  
  
*_Kernel*<br/>
Un oggetto lambda o funzione che accetta un argomento di tipo "indice\<_Rank >" ed esegue il calcolo parallelo.  
  
*_Kernel_type*<br/>
Un'espressione lambda o functor.  
  
*_Rank*<br/>
Numero di dimensioni dell'extent.  
  
##  <a name="tile_static_memory_fence"></a>  tile_static_memory_fence  
 Blocca l'esecuzione di tutti i thread in una sezione finché tutti in sospeso `tile_static` gli accessi alla memoria sono state completate. Ciò garantisce che `tile_static` gli accessi alla memoria siano visibili agli altri thread nella sezione del thread e siano eseguiti nell'ordine del programma.  
  
```  
inline void tile_static_memory_fence(const tile_barrier& _Barrier) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
*_Barrier*<br/>
Un oggetto tile_barrier.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
