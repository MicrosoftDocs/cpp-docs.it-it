---
title: Classe array_view | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- array_view
- AMP/array_view
- AMP/Concurrency::array_view::array_view
- AMP/Concurrency::array_view::copy_to
- AMP/Concurrency::array_view::data
- AMP/Concurrency::array_view::discard_data
- AMP/Concurrency::array_view::get_extent
- AMP/Concurrency::array_view::get_ref
- AMP/Concurrency::array_view::get_source_accelerator_view
- AMP/Concurrency::array_view::refresh
- AMP/Concurrency::array_view::reinterpret_as
- AMP/Concurrency::array_view::section
- AMP/Concurrency::array_view::synchronize
- AMP/Concurrency::array_view::synchronize_async
- AMP/Concurrency::array_view::synchronize_to
- AMP/Concurrency::array_view::synchronize_to_async
- AMP/Concurrency::array_view::view_as
- AMP/Concurrency::array_view::rank
- AMP/Concurrency::array_view::extent
- AMP/Concurrency::array_view::source_accelerator_view
- AMP/Concurrency::array_view::value_type
dev_langs: C++
helpviewer_keywords: array_view class
ms.assetid: 7e7ec9bc-05a2-4372-b05d-752b50006c5a
caps.latest.revision: "21"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 467d806203687610265d1b199e01295f93557081
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="arrayview-class"></a>Classe array_view
Rappresenta una vista N-dimensionale dei dati contenuti in un altro contenitore.  
  
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
|[Costruttore array_view](#ctor)|Inizializza una nuova istanza della classe `array_view`. È presente alcun costruttore predefinito per `array<T,N>`. Tutti i costruttori sono limitati per l'esecuzione della CPU solo e non possono essere eseguiti in una destinazione di Direct3D.|  
|[~ array_view, distruttore](#ctor)|Elimina definitivamente il `array_view` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[copy_to](#copy_to)|Copia il contenuto del `array_view` oggetto nella destinazione specificata chiamando `copy(*this, dest)`.|  
|[data](#data)|Restituisce un puntatore a dati non elaborati del `array_view`.|  
|[discard_data](#discard_data)|Elimina i dati correnti in questa vista sottostante.|  
|[get_extent](#get_extent)|Restituisce l'oggetto di estensione dell'oggetto array_view.|  
|[get_ref](#get_ref)|Restituisce un riferimento all'elemento indicizzato.|  
|[get_source_accelerator_view](#get_source_accelerator_view)|Restituisce il [accelerator_view](accelerator-view-class.md) in cui l'origine dati di `array_view` si trova.|  
|[aggiornamento](#refresh)|Invia una notifica di `array_view` oggetto memoria associata è stata modificata all'esterno di `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache non aggiornata.|  
|[reinterpret_as](#reinterpret_as)|Restituisce una matrice unidimensionale che contiene tutti gli elementi di `array_view` oggetto.|  
|[section](#section)|Restituisce una sottosezione del `array_view` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata.|  
|[synchronize](#synchronize)|Consente di sincronizzare le modifiche apportate al `array_view` oggetto dati di origine.|  
|[synchronize_async](#synchronize_async)|Consente di sincronizzare in modo asincrono le modifiche apportate al `array_view` oggetto dati di origine.|  
|[synchronize_to](#synchronize_to)|Consente di sincronizzare le modifiche apportate al `array_view` oggetto specificata [accelerator_view](accelerator-view-class.md).|  
|[synchronize_to_async](#synchronize_to_async)|Consente di sincronizzare in modo asincrono le modifiche apportate al `array_view` oggetto specificata [accelerator_view](accelerator-view-class.md).|  
|[view_as](#view_as)|Produce un `array_view` oggetto di una classificazione diversa usando questa `array_view` dati dell'oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator)](#operator_call)|Restituisce il valore dell'elemento specificato dal parametro o parametri.|  
|[operator]](#operator_at)|Restituisce l'elemento specificato dai parametri.|  
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `array_view` specificato in questo oggetto.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Rank (costante)](#rank)|Archivia il rango di `array_view` oggetto.|  
  
### <a name="data-members"></a>Membri di dati  
  
|nome|Descrizione|  
|----------|-----------------|  
|[extent](#extent)|Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.|  
|[source_accelerator_view](#source_accelerator_view)|Ottiene il [accelerator_view](accelerator-view-class.md) in cui l'origine dati di `array_view` trova|  
|[value_type](#value_type)|Il tipo del valore di `array_view` e l'array associato.|  
  
## <a name="remarks"></a>Note  
 Il `array_view` classe rappresenta una visualizzazione dei dati contenuti in un [matrice](array-class.md) oggetto o una sottosezione di un `array` oggetto.  
  
 È possibile accedere il `array_view` dell'oggetto in cui si trovano i dati di origine (locale) o su un tasto di scelta rapida diversi o in un dominio di coerenza (in modalità remota). Quando si accede all'oggetto in modalità remota, le visualizzazioni vengono copiate e memorizzati nella cache in base alle esigenze. Ad eccezione degli effetti della memorizzazione nella cache automatica, `array_view` oggetti dispongono di un profilo di prestazioni simile a quelle di `array` oggetti. Si verifica una riduzione di prestazioni quando si accede ai dati tramite le viste.  
  
 Esistono tre scenari di utilizzo remoto:  
  
-   Una visualizzazione a un puntatore di memoria di sistema viene passata mediante un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each) chiamata a un tasto di scelta rapida e accedervi nel tasto di scelta rapida.  
  
-   Una vista in una matrice a cui si trova in un acceleratore viene passata mediante un `parallel_for_each` chiamata a un altro tasto di scelta rapida e si accede non esiste.  
  
-   Una vista in una matrice a cui che si trova in un acceleratore avviene nella CPU.  
  
 In uno di questi scenari, le viste a cui fa riferimento vengono copiate dal runtime per il percorso remoto e, se modificato dalle chiamate al `array_view` dell'oggetto, vengono copiati nel percorso locale. Il runtime potrebbe ottimizzare il processo di copia di nuovo le modifiche, può copiare solo gli elementi modificati o potrebbe anche la copia invariate parti. Sovrapposizione `array_view` oggetti su un'origine dati non vengono garantiti l'integrità referenziale in una posizione remota.  
  
 È necessario sincronizzare l'accesso multithreading alla stessa origine dati.  
  
 Il runtime effettua le seguenti garanzie riguardanti la memorizzazione nella cache dei dati in `array_view` oggetti:  
  
-   Tutti gli accessi ben sincronizzati a un `array` oggetto e un `array_view` oggetto su di esso nell'ordine del programma sono conformi a una porta seriale avviene-prima di relazione.  
  
-   Tutti gli accessi ben sincronizzati sovrapposti `array_view` oggetti stesso tasto di scelta rapida in una singola `array` oggetto sono stati creati alias tramite il `array` oggetto. Provocano un totale si verifica-prima relazione secondo l'ordine del programma. Non vi è nessuna memorizzazione nella cache. Se il `array_view` gli oggetti sono in esecuzione su diversi tasti di scelta rapida, l'ordine di accesso è definito, la creazione di una race condition.  
  
 Quando si crea un `array_view` oggetto mediante un puntatore in memoria di sistema, è necessario modificare la visualizzazione `array_view` oggetto solo attraverso il `array_view` puntatore. In alternativa, è necessario chiamare `refresh()` su uno del `array_view` oggetti associati a un puntatore di sistema se la memoria nativa sottostante viene modificata direttamente, anziché tramite il `array_view` oggetto.  
  
 Notifica a entrambe le azioni di `array_view` dell'oggetto che la memoria nativa sottostante viene modificata e che tutte le copie che si trovano su un tasto di scelta rapida sono aggiornate. Se si seguono queste linee guida, le viste basate su puntatore sono identiche a quelli forniti per le visualizzazioni di matrici di dati in parallelo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `_Array_view_shape`  
  
 `_Array_view_base`  
  
 `array_view`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a>~ array_view 

 Elimina definitivamente il `array_view` oggetto.  
  
```  
~array_view()restrict(amp,cpu);
```  
  
##  <a name="ctor"></a>array_view 

 Inizializza una nuova istanza della classe `array_view`.  
  
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
 L'estensione in ogni dimensione di questo `array_view`.  
  
 `_Other`  
 Un oggetto di tipo `array_view<T,N>` da cui inizializzare la nuova `array_view`.  
  
 `_Size`  
 Le dimensioni di una matrice di tipo C da cui vengono forniti i dati.  
  
 `_Src`  
 Puntatore ai dati di origine che verranno copiati nella nuova matrice.  
  
##  <a name="copy_to"></a>copy_to 

 Copia il contenuto del `array_view` all'oggetto di destinazione specificato chiamando `copy(*this, dest)`.  
  
```  
void copy_to(
    array<value_type, _Rank>& _Dest) const;

 
 
void copy_to(
    array_view<value_type, _Rank>& _Dest) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Dest`  
 Oggetto da copiare.  
  
##  <a name="data"></a>dati 

 Restituisce un puntatore a dati non elaborati del `array_view`.  
  
```  
value_type* data() const restrict(amp,
    cpu);

 
const value_type* data() const restrict(amp,
    cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a dati non elaborati del `array_view`.  
  
##  <a name="discard_data"></a>discard_data 

 Elimina i dati correnti in questa vista sottostante. Si tratta di un hint di ottimizzazione per la fase di esecuzione utilizzato per evitare di copiare il contenuto corrente della visualizzazione a una destinazione `accelerator_view` che è possibile accedervi in, e se il contenuto esistente non è necessaria, è consigliabile utilizzarla. Questo metodo è una NOOP quando utilizzato in un contesto Restrict (amp)  
  
```  
void discard_data() const restrict(cpu);
```  
  
##  <a name="extent"></a>extent 

 Ottiene l'oggetto `extent` che definisce la forma dell'oggetto `array_view`.  
  
```  
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;  
```  
  
##  <a name="get_extent"></a>get_extent 

 Restituisce il [extent](extent-class.md) oggetto del `array_view` oggetto.  
  
```  
Concurrency::extent<_Rank> get_extent() const restrict(cpu, amp);
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `extent` oggetto del `array_view` oggetto  
  
##  <a name="get_ref"></a>get_ref 

 Ottenere un riferimento all'elemento indicizzato da index. A differenza di altri indicizzazione operatori per l'accesso di array_view sulla CPU, questo metodo non sincronizzare in modo implicito il contenuto di questo array_view alla CPU. Dopo l'accesso di array_view in una posizione remota o l'esecuzione di un'operazione di copia che interessano questo array_view gli utenti sono responsabili per sincronizzare in modo esplicito il array_view alla CPU prima di chiamare questo metodo. In caso contrario, produce un comportamento indefinito.  
  
```  
value_type& get_ref(
    const index<_Rank>& _Index) const restrict(amp, cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Indice.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'elemento indicizzato da Index  
  
##  <a name="get_source_accelerator_view"></a>get_source_accelerator_view 

 Restituisce il accelerator_view in cui si trova l'origine dati di array_view. Se il array_view non dispone di un'origine dati, questa API genera un runtime_exception  
  
```  
accelerator_view get_source_accelerator_view() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="operator_call"></a>operator) 

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
 Indice della prima dimensione.  
  
 `_I1`  
 Indice della seconda dimensione.  
  
 `_I2`  
 L'indice nella terza dimensione.  
  
 `_I`  
 Il percorso dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento specificato dal parametro o parametri.  
  
##  <a name="operator_at"></a>operator] 

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
 Il valore dell'elemento in corrispondenza dell'indice o un `array_view` proiettato sulla dimensione più significativo.  
  
##  <a name="operator_eq"></a>operator = 

 Copia il contenuto dell'oggetto specificato `array_view` questo oggetto.  
  
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
  
##  <a name="rank"></a>numero di dimensioni 

 Archivia il rango di `array_view` oggetto.  
  
```  
static const int rank = _Rank;  
```  
  
##  <a name="refresh"></a>aggiornamento 

 Invia una notifica di `array_view` oggetto memoria associata è stata modificata all'esterno di `array_view` interfaccia. Una chiamata a questo metodo esegue il rendering di tutte le informazioni memorizzate nella cache non aggiornata.  
  
```  
void refresh() const restrict(cpu);
```  
## <a name="reinterpret_as"></a>reinterpret_as 

Reinterpreta i array_view tramite un array_view unidimensionale, che l'opzione può avere un tipo valore diverso da array_view di origine.  
  
### <a name="syntax"></a>Sintassi  
  
```  
template <  
    typename _Value_type2  
>  
array_view< _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);  
  
template <  
    typename _Value_type2  
>  
array_view<const _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Value_type2`  
 Il tipo di dati del nuovo `array_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Un `array_view` oggetto o una variabile const `array_view` oggetto su cui è basato su questo `array_view`, con il tipo di elemento convertito da `T` a `_Value_type2`, e il numero di dimensioni ridotte da *N* su 1.  
  
### <a name="remarks"></a>Note  
 Talvolta è utile visualizzare una matrice multidimensionale come una matrice unidimensionale lineare, che può avere un tipo valore diverso rispetto a matrice di origine. È possibile conseguire questo risultato in un `array_view` utilizzando questo metodo.  
  
**Avviso** Reinterpeting oggetto array_view utilizzando un tipo valore diverso è un'operazione potenzialmente non sicuro. Questa funzionalità deve essere utilizzata con cautela.  
  
 Di seguito è riportato un esempio:  
  
```cpp  
struct RGB { float r; float g; float b; };  
  
array<RGB,3>  a = ...;   
array_view<float,1> v = a.reinterpret_as<float>();   
  
assert(v.extent == 3*a.extent);  
```  
    
##  <a name="section"></a>sezione 

 Restituisce una sottosezione del `array_view` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata.  
  
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
 Il [extent](extent-class.md) oggetto che specifica l'extent della sezione. L'origine è 0.  
  
 `_Idx`  
 Il [indice](index-class.md) oggetto che specifica il percorso dell'origine. La sottosezione è il resto dell'extent.  
  
 `_I0`  
 Il componente più significativo di origine di questa sezione.  
  
 `_I1`  
 Il componente successivo-a-più significativo dell'origine di questa sezione.  
  
 `_I2`  
 Il componente meno significativo dell'origine di questa sezione.  
  
 `_Rank`  
 Il numero di dimensioni della sezione.  
  
 `_Section_extent`  
 Il [extent](extent-class.md) oggetto che specifica l'extent della sezione.  
  
 `_Section_origin`  
 Il [indice](index-class.md) oggetto che specifica il percorso dell'origine.  
  
### <a name="return-value"></a>Valore restituito  
 Una sottosezione del `array_view` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata. Quando solo il `index` oggetto è specificato, la sottosezione contiene tutti gli elementi dell'extent associati con gli indici che superano gli indici degli elementi nel `index` oggetto.  
  
##  <a name="source_accelerator_view"></a>source_accelerator_view 

 Ottiene il accelerator_view di origine che è associato questo array_view.  
  
```  
__declspec(property(get= get_source_accelerator_view)) accelerator_view source_accelerator_view;  
```  
  
##  <a name="synchronize"></a>la sincronizzazione 

 Consente di sincronizzare le modifiche apportate al `array_view` oggetto dati di origine.  
  
```  
void synchronize(access_type _Access_type = access_type_read) const restrict(cpu);

 
void synchronize() const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Access_type`  
 L'oggetto desiderato [access_type](concurrency-namespace-enums-amp.md#access_type) nella destinazione [accelerator_view](accelerator-view-class.md). Questo parametro ha un valore predefinito di `access_type_read`.  
  
##  <a name="synchronize_async"></a>synchronize_async 

 Consente di sincronizzare in modo asincrono le modifiche apportate al `array_view` oggetto dati di origine.  
  
```  
concurrency::completion_future synchronize_async(access_type _Access_type = access_type_read) const restrict(cpu);

 
concurrency::completion_future synchronize_async() const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Access_type`  
 L'oggetto desiderato [access_type](concurrency-namespace-enums-amp.md#access_type) nella destinazione [accelerator_view](accelerator-view-class.md). Questo parametro ha un valore predefinito di `access_type_read`.  
  
### <a name="return-value"></a>Valore restituito  
 Un futuro in base al quale attendere il completamento dell'operazione.  
  
##  <a name="synchronize_to"></a>synchronize_to 

 Consente di sincronizzare le modifiche apportate a questo array_view per il accelerator_view specificato.  
  
```  
void synchronize_to(
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read) const restrict(cpu);

 
void synchronize_to(
    const accelerator_view& _Accl_view) const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Accl_view`  
 Accelerator_view di destinazione per eseguire la sincronizzazione.  
  
 `_Access_type`  
 Access_type desiderato in accelerator_view di destinazione. Questo parametro ha un valore predefinito di access_type_read.  
  
##  <a name="synchronize_to_async"></a>synchronize_to_async 

 Consente di sincronizzare in modo asincrono le modifiche apportate a questo array_view per il accelerator_view specificato.  
  
```  
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view,  
    access_type _Access_type = access_type_read) const restrict(cpu);

 
concurrency::completion_future synchronize_to_async(
    const accelerator_view& _Accl_view) const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Accl_view`  
 Accelerator_view di destinazione per eseguire la sincronizzazione.  
  
 `_Access_type`  
 Access_type desiderato in accelerator_view di destinazione. Questo parametro ha un valore predefinito di access_type_read.  
  
### <a name="return-value"></a>Valore restituito  
 Un futuro in base al quale attendere il completamento dell'operazione.  
  
##  <a name="value_type"></a>value_type 

 Il tipo di valore di array_view e la matrice associata.  
  
```  
typedef typenamevalue_type value_type;  
```  
  
##  <a name="view_as"></a>view_as 

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
 Il tipo di dati degli elementi in entrambi originale [matrice](array-class.md) oggetto e il valore restituito `array_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il `array_view` oggetto costruito.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
