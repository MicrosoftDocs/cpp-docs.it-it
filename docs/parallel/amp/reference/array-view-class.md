---
title: "Classe array_view | Microsoft Docs"
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
  - "amp/Concurrency::array_view"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array_view (classe)"
ms.assetid: 7e7ec9bc-05a2-4372-b05d-752b50006c5a
caps.latest.revision: 21
caps.handback.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe array_view
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una visualizzazione N-dimensionale sui dati contenuti in un altro contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <
    typename value_type,  
    int _Rank = 1  
>  
class array_view : public _Array_view_base<_Rank, sizeof(value_type)/sizeof(int)>;  
 
template <
    typename value_type,  
    int _Rank  
>  
class array_view<const value_type, _Rank> : public _Array_view_base<_Rank, sizeof(value_type)/sizeof(int)>;  
```  
  
#### <a name="parameters"></a>Parametri  
 `value_type`  
 Il tipo di dati degli elementi di `array_view` oggetto.  
  
 `_Rank`  
 Il rango di `array_view` oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore array_view:: array_view](#array_view__array_view_constructor)|Inizializza una nuova istanza della classe `array_view`. Nessun costruttore predefinito per `array<T,N>`. Tutti i costruttori sono limitati per l'esecuzione sulla CPU solo e non possono essere eseguiti una destinazione di Direct3D.|  
|[array_view:: ~ array_view distruttore](#array_view___dtorarray_view_destructor)|Elimina il `array_view` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo array_view:: copy_to](#array_view__copy_to_method)|Copia il contenuto di `array_view` oggetto nella destinazione specificata chiamando `copy(*this, dest)`.|  
|[Metodo array_view:: data](#array_view__data_method)|Restituisce un puntatore ai dati non elaborati di `array_view`.|  
|[Metodo array_view:: discard_data](#array_view__discard_data_method)|Elimina i dati correnti sottostanti questa vista.|  
|[Metodo array_view:: get_extent](#array_view__get_extent_method)|Restituisce l'oggetto di estensione dell'oggetto array_view.|  
|[Metodo array_view:: get_ref](#array_view__get_ref_method)|Restituisce un riferimento all'elemento indicizzato.|  
|[Metodo array_view:: get_source_accelerator_view](#array_view__get_source_accelerator_view_method)|Restituisce il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) in cui l'origine dati di `array_view` si trova.|  
|[Metodo array_view:: Refresh](#array_view__refresh_method)|Notifica di `array_view` oggetto memoria associata è stata modificata all'esterno di `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache non aggiornati.|  
|[Metodo array_view:: reinterpret_as](#array_view__reinterpret_as_method)|Restituisce una matrice unidimensionale che contiene tutti gli elementi di `array_view` oggetto.|  
|[Metodo array_view:: Section](#array_view__section_method)|Restituisce una sottosezione del `array_view` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata.|  
|[Metodo array_view:: Synchronize](#array_view__synchronize_method)|Consente di sincronizzare le modifiche apportate al `array_view` oggetto dati di origine.|  
|[Metodo array_view:: synchronize_async](#array_view__synchronize_async_method)|In modo asincrono consente di sincronizzare le modifiche apportate al [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto dati di origine.|  
|[Metodo array_view:: synchronize_to](#array_view__synchronize_to_method)|Consente di sincronizzare le modifiche apportate al `array_view` oggetto all'oggetto [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md).|  
|[Metodo array_view:: synchronize_to_async](#array_view__synchronize_to_async_method)|In modo asincrono consente di sincronizzare le modifiche apportate al `array_view` oggetto all'oggetto [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md).|  
|[Metodo array_view:: view_as](#array_view__view_as_method)|Produce un `array_view` oggetto di un ordine di priorità diversi utilizzando questo `array_view` dati dell'oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[array_view::operator() (operatore)](#array_view__operator___operator)|Restituisce il valore dell'elemento specificato dal parametro o parametri.|  
|[array_view:: operator [] (operatore)](#array_view__operator_at_operator)|Restituisce l'elemento specificato dai parametri.|  
|[array_view:: operator = (operatore)](#array_view__operator_eq_operator)|Copia il contenuto dell'oggetto specificato `array_view` specificato in questo oggetto.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costante array_view:: rank](#array_view__rank_constant)|Archivia il rango di `array_view` oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati array_view:: extent](#array_view__extent_data_member)|Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.|  
|[Membro dati array_view:: source_accelerator_view](#array_view__source_accelerator_view_data_member)|Ottiene il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) in cui l'origine dati di `array_view` Trova|  
|[array_view:: value_type (membro dati)](#array_view__value_type_data_member)|Il tipo del valore di `array_view` e la matrice associata.|  
  
## <a name="remarks"></a>Note  
 La `array_view` classe rappresenta una visualizzazione dei dati contenuti in un [matrice](../../../parallel/amp/reference/array-class.md) oggetto o una sottosezione di un `array` oggetto.  
  
 È possibile accedere il `array_view` dell'oggetto in cui si trovano i dati di origine (locale) o su un tasto di scelta rapida diversi o in un dominio di coerenza (in modalità remota). Quando si accede all'oggetto in modalità remota, le viste vengono copiate e memorizzati nella cache in base alle esigenze. Ad eccezione degli effetti della memorizzazione nella cache automatica, `array_view` oggetti dispongono di un profilo di prestazioni simile a quelle di `array` oggetti. Si verifica una riduzione delle prestazioni quando si accede ai dati tramite le viste.  
  
 Esistono tre scenari di utilizzo remoto:  
  
-   Una vista a un puntatore di memoria di sistema viene passata per mezzo di un [parallel_for_each](concurrency%20namespace%20functions.md#parallel_for_each) chiamata a un tasto di scelta rapida e accessibili sul tasto di scelta rapida.  
  
-   Una vista in una matrice a cui si trova su un acceleratore viene passata per mezzo di un `parallel_for_each` chiamata a un altro acceleratore di cui si accede non esiste.  
  
-   Una vista in una matrice a cui che si trova su un acceleratore è accessibile sulla CPU.  
  
 In uno qualsiasi di questi scenari, le viste a cui viene fatto riferimento vengono copiate dal runtime per il percorso remoto e, se modificato dalle chiamate al `array_view` dell'oggetto, vengono copiati nella posizione locale. Il runtime potrebbe ottimizzare il processo di copia di nuovo le modifiche, può copiare solo gli elementi modificati o potrebbe anche copiare parti invariate. Sovrapposizione `array_view` oggetti su un'origine dati non è garantiti l'integrità referenziale in una posizione remota.  
  
 È necessario sincronizzare l'accesso multithreading alla stessa origine dati.  
  
 Il runtime effettua le seguenti garanzie riguardo la memorizzazione nella cache dei dati in `array_view` oggetti:  
  
-   Tutti gli accessi ben sincronizzati per un `array` oggetto e un `array_view` oggetto su di esso nell'ordine del programma sono conformi a una porta seriale accade-prima di relazione.  
  
-   Tutti gli accessi ben sincronizzati alla sovrapposizione `array_view` oggetti stesso tasto di scelta rapida in una singola `array` oggetto sono stati creati alias tramite il `array` oggetto. Provocare un totale si verifica-prima relazione secondo l'ordine del programma. Non esiste nessuna memorizzazione nella cache. Se il `array_view` gli oggetti sono in esecuzione su diversi tasti di scelta rapida, l'ordine di accesso è definito, la creazione di una race condition.  
  
 Quando si crea un `array_view` dell'oggetto utilizzando un puntatore in memoria di sistema, è necessario modificare la visualizzazione `array_view` oggetto solo tramite il `array_view` puntatore. In alternativa, è necessario chiamare `refresh()` su uno del `array_view` oggetti associati al puntatore di sistema, se la memoria nativa sottostante viene modificata direttamente, anziché tramite il `array_view` oggetto.  
  
 Notifica a entrambe le azioni di `array_view` dell'oggetto che la memoria nativa sottostante viene modificata e che tutte le copie che si trovano su un tasto di scelta rapida sono aggiornate. Se si seguono queste linee guida, le viste basate su puntatore sono identiche a quelli forniti alle visualizzazioni di matrici di dati in parallelo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_Array_view_shape`  
  
 `_Array_view_base`  
  
 `array_view`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namearrayviewdtorarrayviewdestructora-arrayviewarrayview-destructor"></a><a name="array_view___dtorarray_view_destructor"></a>  array_view:: ~ array_view distruttore  
 Elimina il [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto.  
  
```  
~array_view()restrict(amp,cpu);
```  
  
##  <a name="a-namearrayviewarrayviewconstructora-arrayviewarrayview-constructor"></a><a name="array_view__array_view_constructor"></a>  Costruttore array_view:: array_view  
 Inizializza una nuova istanza di [array_view](../../../parallel/amp/reference/array-view-class.md) (classe).  
  
```  
array_view(
    array<value_type, _Rank>& _Src)restrict(amp,cpu);

 
array_view(
    const array_view& _Other)restrict(amp,cpu);

 
explicit array_view(
    const Concurrency::extent<_Rank>& _Extent) restrict(cpu);

 
template <
    typename _Container  
>  
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    _Container& _Src) restrict(cpu);

 
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    value_type* _Src)restrict(amp,cpu);

 
explicit array_view(
    int _E0) restrict(cpu);

 
template <
    typename _Container  
>  
explicit array_view(
    _Container& _Src,  
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0) restrict(cpu);

 
template <
    typename _Container  
>  
explicit array_view(
    int _E0,  
    _Container& _Src) restrict(cpu);

 
explicit array_view(
    int _E0,  
    int _E1) __CPU_ONLY;  
 
template <
    typename _Container  
>  
explicit array_view(
    int _E0,  
    int _E1,  
    _Container& _Src) restrict(cpu);

 
explicit array_view(
    int _E0,  
    int _E1,  
    int _E2) __CPU_ONLY;  
 
template <
    typename _Container  
>  
explicit array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    _Container& _Src);

 
explicit array_view(
    int _E0,  
    _In_ value_type* _Src)restrict(amp,cpu);

 
template <
    typename _Arr_type,  
    int _Size  
>  
explicit array_view(
    _In_ _Arr_type (& _Src) [_Size]) restrict(amp,cpu);

 
explicit array_view(
    int _E0,  
    int _E1,  
    _In_ value_type* _Src)restrict(amp,cpu);

 
explicit array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    _In_ value_type* _Src)restrict(amp,cpu);

 
array_view(
    const array<value_type, _Rank>& _Src)restrict(amp,cpu);

 
array_view(
    const array_view<value_type, _Rank>& _Src)restrict(amp,cpu);

 
array_view(
    const array_view<const value_type, _Rank>& _Src)restrict(amp,cpu);

 
template <
    typename _Container  
>  
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    const _Container& _Src) restrict(cpu);

 
template <
    typename _Container  
>  
explicit array_view(
    const _Container& _Src,  
    typename std::enable_if<details::_Is_container<_Container>::type::value, void **>::type = 0) restrict(cpu);

 
array_view(
    const Concurrency::extent<_Rank>& _Extent,  
    const value_type* _Src)restrict(amp,cpu);

 
template <
    typename _Arr_type,  
    int _Size  
>  
explicit array_view(
    const _In_ _Arr_type (& _Src) [_Size]) restrict(amp,cpu);

 
template <
    typename _Container  
>  
array_view(
    int _E0,  
    const _Container& _Src);

 
template <
    typename _Container  
>  
array_view(
    int _E0,  
    int _E1,  
    const _Container& _Src);

 
template <
    typename _Container  
>  
array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    const _Container& _Src);

 
array_view(
    int _E0,  
    const value_type* _Src)restrict(amp,cpu);

 
array_view(
    int _E0,  
    int _E1,  
    const value_type* _Src) restrict(amp,cpu);

 
array_view(
    int _E0,  
    int _E1,  
    int _E2,  
    const value_type* _Src) restrict(amp,cpu);

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Arr_type`  
 Il tipo di elemento di una matrice di tipo C da cui vengono forniti i dati.  
  
 `_Container`  
 Un argomento di modello che è necessario specificare un contenitore lineare che supporta `data()` e `size()` membri.  
  
 `_E0`  
 Il componente più significativo dell'ambito di questa sezione.  
  
 `_E1`  
 Il componente successivo-a-più significativo dell'ambito di questa sezione.  
  
 `_E2`  
 Il componente meno significativo dell'ambito di questa sezione.  
  
 `_Extent`  
 L'extent in ogni dimensione di questo `array_view`.  
  
 `_Other`  
 Un oggetto di tipo `array_view<T,N>` da cui inizializzare la nuova `array_view`.  
  
 `_Size`  
 Le dimensioni di una matrice di tipo C da cui vengono forniti i dati.  
  
 `_Src`  
 Un puntatore ai dati di origine che verranno copiati nella nuova matrice.  
  
##  <a name="a-namearrayviewcopytomethoda-arrayviewcopyto-method"></a><a name="array_view__copy_to_method"></a>  Metodo array_view:: copy_to  
 Copia il contenuto di [array_view](../../../parallel/amp/reference/array-view-class.md) all'oggetto di destinazione specificato chiamando `copy(*this, dest)`.  
  
```  
void copy_to(
    array<value_type, _Rank>& _Dest) const;

 
 
void copy_to(
    array_view<value_type, _Rank>& _Dest) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Dest`  
 Oggetto da copiare.  
  
##  <a name="a-namearrayviewdatamethoda-arrayviewdata-method"></a><a name="array_view__data_method"></a>  Metodo array_view:: data  
 Restituisce un puntatore ai dati non elaborati di [array_view](../../../parallel/amp/reference/array-view-class.md).  
  
```  
value_type* data() const restrict(amp,
    cpu);

 
const value_type* data() const restrict(amp,
    cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai dati non elaborati di `array_view`.  
  
##  <a name="a-namearrayviewdiscarddatamethoda-arrayviewdiscarddata-method"></a><a name="array_view__discard_data_method"></a>  Metodo array_view:: discard_data  
 Elimina i dati correnti sottostanti questa vista. Si tratta di un hint di ottimizzazione per la fase di esecuzione utilizzato per evitare di copiare il contenuto corrente della visualizzazione in una destinazione `accelerator_view` che è possibile accedervi in e il suo utilizzo è consigliato se il contenuto esistente non è necessaria. Questo metodo è no-op quando utilizzati in un contesto Restrict (amp)  
  
```  
void discard_data() const restrict(cpu);
```  
  
##  <a name="a-namearrayviewextentdatamembera-arrayviewextent-data-member"></a><a name="array_view__extent_data_member"></a>  Membro dati array_view:: extent  
 Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.  
  
```  
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;  
```  
  
##  <a name="a-namearrayviewgetextentmethoda-arrayviewgetextent-method"></a><a name="array_view__get_extent_method"></a>  Metodo array_view:: get_extent  
 Restituisce il [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) oggetto di [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto.  
  
```  
Concurrency::extent<_Rank> get_extent() const restrict(cpu, amp);
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `extent` dell'oggetto di `array_view` oggetto  
  
##  <a name="a-namearrayviewgetrefmethoda-arrayviewgetref-method"></a><a name="array_view__get_ref_method"></a>  Metodo array_view:: get_ref  
 Ottenere un riferimento all'elemento indicizzato da index. A differenza di altri indicizzazione operatori per l'accesso a array_view sulla CPU, questo metodo non sincronizza in modo implicito il contenuto di questo array_view alla CPU. Dopo l'accesso a array_view in una posizione remota o l'esecuzione di un'operazione di copia che interessano questo array_view gli utenti sono responsabili per sincronizzare l'array_view alla CPU in modo esplicito prima di chiamare questo metodo. In caso contrario, genera un comportamento indefinito.  
  
```  
value_type& get_ref(
    const index<_Rank>& _Index) const restrict(amp, cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Indice.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'elemento indicizzato da Index  
  
##  <a name="a-namearrayviewgetsourceacceleratorviewmethoda-arrayviewgetsourceacceleratorview-method"></a><a name="array_view__get_source_accelerator_view_method"></a>  Metodo array_view:: get_source_accelerator_view  
 Restituisce il accelerator_view in cui si trova l'origine dati di array_view. Se il array_view non dispone di un'origine dati, questa API viene generata una runtime_exception  
  
```  
accelerator_view get_source_accelerator_view() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-namearrayviewoperatoroperatora-arrayviewoperator-operator"></a><a name="array_view__operator___operator"></a>  array_view::operator() (operatore)  
 Restituisce il valore dell'elemento specificato dal parametro o parametri.  
  
```  
value_type& operator() (
    const index<_Rank>& _Index) const restrict(amp,cpu);

 
typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator() (
    int _I) const restrict(amp,cpu);

 
value_type& operator() (
    int _I0,  
    int _I1) const restrict(amp,cpu);

 
value_type& operator() (
    int _I0,  
    int _I1,  
    int _I2) const restrict(amp,cpu);

 
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator() (
    int _I) const restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Il percorso dell'elemento.  
  
 `_I0`  
 Indice nella prima dimensione.  
  
 `_I1`  
 L'indice della seconda dimensione.  
  
 `_I2`  
 Indice nella terza dimensione.  
  
 `_I`  
 Il percorso dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento specificato dal parametro o parametri.  
  
##  <a name="a-namearrayviewoperatoratoperatora-arrayviewoperator-operator"></a><a name="array_view__operator_at_operator"></a>  array_view:: operator [] (operatore)  
 Restituisce l'elemento specificato dai parametri.  
  
```  
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator[] (
    int _I) const restrict(amp,cpu);

 
value_type& operator[] (
    const index<_Rank>& _Index) const restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Indice.  
  
 `_I`  
 Indice.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento in corrispondenza dell'indice o un `array_view` proiettati sulla dimensione più significativo.  
  
##  <a name="a-namearrayviewoperatoreqoperatora-arrayviewoperator-operator"></a><a name="array_view__operator_eq_operator"></a>  array_view:: operator = (operatore)  
 Copia il contenuto dell'oggetto specificato [array_view](../../../parallel/amp/reference/array-view-class.md) a questo oggetto.  
  
```  
array_view& operator= (
    const array_view& _Other) restrict(amp,cpu);

 
array_view& operator= (
    const array_view<value_type, _Rank>& _Other) restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `array_view` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `array_view` oggetto.  
  
##  <a name="a-namearrayviewrankconstanta-arrayviewrank-constant"></a><a name="array_view__rank_constant"></a>  Costante array_view:: rank  
 Archivia il rango di [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto.  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="a-namearrayviewrefreshmethoda-arrayviewrefresh-method"></a><a name="array_view__refresh_method"></a>  Metodo array_view:: Refresh  
 Notifica il [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto memoria associata è stata modificata all'esterno di `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache non aggiornati.  
  
```  
void refresh() const restrict(cpu);
```  
  
##  <a name="a-namearrayviewsectionmethoda-arrayviewsection-method"></a><a name="array_view__section_method"></a>  Metodo array_view:: Section  
 Restituisce una sottosezione del [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata.  
  
```  
array_view section(
    const Concurrency::index<_Rank>& _Section_origin,  
    const Concurrency::extent<_Rank>& _Section_extent) const restrict(amp,cpu);

 
array_view section(
    const Concurrency::index<_Rank>& _Idx) const restrict(amp,cpu);

 
array_view section(
    const Concurrency::extent<_Rank>& _Ext) const restrict(amp,cpu);

 
array_view section(
    int _I0,  
    int _E0) const restrict(amp,cpu);

 
array_view section(
    int _I0,  
    int _I1,  
    int _E0,  
    int _E1) const restrict(amp,cpu);

 
array_view section(
    int _I0,  
    int _I1,  
    int _I2,  
    int _E0,  
    int _E1,  
    int _E2) const restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_E0`  
 Il componente più significativo dell'ambito di questa sezione.  
  
 `_E1`  
 Il componente successivo-a-più significativo dell'ambito di questa sezione.  
  
 `_E2`  
 Il componente meno significativo dell'ambito di questa sezione.  
  
 `_Ext`  
 Il [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) oggetto che specifica il grado della sezione. L'origine è 0.  
  
 `_Idx`  
 Il [indice](../../../parallel/amp/reference/index-class.md) oggetto che specifica il percorso dell'origine. La sottosezione è il resto dell'estensione.  
  
 `_I0`  
 Il componente più significativo dell'origine di questa sezione.  
  
 `_I1`  
 Il componente successivo-a-più significativo dell'origine di questa sezione.  
  
 `_I2`  
 Il componente meno significativo dell'origine di questa sezione.  
  
 `_Rank`  
 Il numero di dimensioni della sezione.  
  
 `_Section_extent`  
 Il [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) oggetto che specifica il grado della sezione.  
  
 `_Section_origin`  
 Il [indice](../../../parallel/amp/reference/index-class.md) oggetto che specifica il percorso dell'origine.  
  
### <a name="return-value"></a>Valore restituito  
 Una sottosezione del `array_view` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata. Quando solo il `index` oggetto è specificato, la sottosezione contiene tutti gli elementi dell'extent associati con gli indici che superano gli indici degli elementi del `index` oggetto.  
  
##  <a name="a-namearrayviewsourceacceleratorviewdatamembera-arrayviewsourceacceleratorview-data-member"></a><a name="array_view__source_accelerator_view_data_member"></a>  Membro dati array_view:: source_accelerator_view  
 Ottiene il accelerator_view di origine che è associato questo array_view.  
  
```  
__declspec(property(get= get_source_accelerator_view)) accelerator_view source_accelerator_view;  
```  
  
##  <a name="a-namearrayviewsynchronizemethoda-arrayviewsynchronize-method"></a><a name="array_view__synchronize_method"></a>  Metodo array_view:: Synchronize  
 Consente di sincronizzare le modifiche apportate al `array_view` oggetto dati di origine.  
  
```  
void synchronize(access_type _Access_type = access_type_read) const restrict(cpu);

 
void synchronize() const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Access_type`  
 Previsto dal [access_type](concurrency%20namespace%20enums.md#access_type) nella destinazione [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md). Questo parametro ha un valore predefinito di `access_type_read`.  
  
##  <a name="a-namearrayviewsynchronizeasyncmethoda-arrayviewsynchronizeasync-method"></a><a name="array_view__synchronize_async_method"></a>  Metodo array_view:: synchronize_async  
 In modo asincrono consente di sincronizzare le modifiche apportate al [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto dati di origine.  
  
```  
concurrency::completion_future synchronize_async(access_type _Access_type = access_type_read) const restrict(cpu);

 
concurrency::completion_future synchronize_async() const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Access_type`  
 Previsto dal [access_type](concurrency%20namespace%20enums.md#access_type) nella destinazione [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md). Questo parametro ha un valore predefinito di `access_type_read`.  
  
### <a name="return-value"></a>Valore restituito  
 Una future in base al quale attendere il completamento dell'operazione.  
  
##  <a name="a-namearrayviewsynchronizetomethoda-arrayviewsynchronizeto-method"></a><a name="array_view__synchronize_to_method"></a>  Metodo array_view:: synchronize_to  
 Consente di sincronizzare le modifiche apportate a questo array_view a accelerator_view specificato.  
  
```  
void synchronize_to(
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read) const restrict(cpu);

 
void synchronize_to(
    const accelerator_view& _Accl_view) const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Accl_view`  
 Accelerator_view di destinazione per la sincronizzazione.  
  
 `_Access_type`  
 Access_type desiderato in accelerator_view di destinazione. Questo parametro ha un valore predefinito di access_type_read.  
  
##  <a name="a-namearrayviewsynchronizetoasyncmethoda-arrayviewsynchronizetoasync-method"></a><a name="array_view__synchronize_to_async_method"></a>  Metodo array_view:: synchronize_to_async  
 In modo asincrono consente di sincronizzare le modifiche apportate a questo array_view a accelerator_view specificato.  
  
```  
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read) const restrict(cpu);

 
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view) const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Accl_view`  
 Accelerator_view di destinazione per la sincronizzazione.  
  
 `_Access_type`  
 Access_type desiderato in accelerator_view di destinazione. Questo parametro ha un valore predefinito di access_type_read.  
  
### <a name="return-value"></a>Valore restituito  
 Una future in base al quale attendere il completamento dell'operazione.  
  
##  <a name="a-namearrayviewvaluetypedatamembera-arrayviewvaluetype-data-member"></a><a name="array_view__value_type_data_member"></a>  array_view:: value_type (membro dati)  
 Il tipo di valore di array_view e la matrice associata.  
  
```  
typedef typenamevalue_type value_type;  
```  
  
##  <a name="a-namearrayviewviewasmethoda-arrayviewviewas-method"></a><a name="array_view__view_as_method"></a>  Metodo array_view:: view_as  
 Reinterpreta questo `array_view` come un `array_view` di un numero di dimensioni diversa.  
  
```  
template <
    int _New_rank  
>  
array_view<value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) const restrict(amp,cpu);

 
template <
    int _New_rank  
>  
array_view<const value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank> _View_extent) const restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_New_rank`  
 Il numero di dimensioni del nuovo `array_view` oggetto.  
  
 `_View_extent`  
 La modifica della forma `extent`.  
  
 `value_type`  
 Il tipo di dati degli elementi di entrambi originale [matrice](../../../parallel/amp/reference/array-class.md) oggetto e il valore restituito `array_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto costruito.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
