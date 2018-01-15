---
title: Classe Array | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- array
- AMP/array
- AMP/Concurrency::array::array
- AMP/Concurrency::array::copy_to
- AMP/Concurrency::array::data
- AMP/Concurrency::array::get_accelerator_view
- AMP/Concurrency::array::get_associated_accelerator_view
- AMP/Concurrency::array::get_cpu_access_type
- AMP/Concurrency::array::get_extent
- AMP/Concurrency::array::reinterpret_as
- AMP/Concurrency::array::section
- AMP/Concurrency::array::view_as
- AMP/Concurrency::array::rank
- AMP/Concurrency::array::accelerator_view
- AMP/Concurrency::array::associated_accelerator_view
- AMP/Concurrency::array::cpu_access_type
- AMP/Concurrency::array::extent
dev_langs: C++
helpviewer_keywords: array class
ms.assetid: 0832b6c1-40f0-421d-9104-6b1baa0c63a7
caps.latest.revision: "31"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5b76fcb181d955fc051ade5183b67b9d55b823ab
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="array-class"></a>Classe array
Rappresenta un contenitore di dati utilizzato per spostare i dati a un tasto di scelta rapida.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <typename value_type, int _Rank>  
friend class array;  
```  
  
#### <a name="parameters"></a>Parametri  
 `value_type`  
 Il tipo di elemento di dati.  
  
 `_Rank`  
 Il numero di dimensioni della matrice.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Matrice di costruttore](#ctor)|Inizializza una nuova istanza della classe `array`.|  
|[~ matrice distruttore](#dtor)|Elimina definitivamente il `array` oggetto.|  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[copy_to](#copy_to)|Copia il contenuto della matrice a un'altra matrice.|  
|[data](#data)|Restituisce un puntatore ai dati non elaborati della matrice.|  
|[get_accelerator_view](#get_accelerator_view)|Restituisce il [accelerator_view](accelerator-view-class.md) oggetto che rappresenta il percorso in cui la matrice viene allocata. Questa proprietà è accessibile solo sulla CPU.|  
|[get_associated_accelerator_view](#get_associated_accelerator_view)|Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di `array` oggetto.|  
|[get_cpu_access_type](#get_cpu_access_type)|Restituisce il [access_type](concurrency-namespace-enums-amp.md#access_type) della matrice. Questo metodo sono accessibili solo sulla CPU.|  
|[get_extent](#get_extent)|Restituisce il [extent](extent-class.md) oggetto della matrice.|  
|[reinterpret_as](#reinterpret_as)|Restituisce una matrice unidimensionale che contiene tutti gli elementi di `array` oggetto.|  
|[section](#section)|Restituisce una sottosezione del `array` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata.|  
|[view_as](#view_as)|Restituisce un [array_view](array-view-class.md) oggetto costruito dal `array` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore std:: Vector&lt;value_type&gt;](#operator_vec)|Usa `copy(*this, vector)` per convertire in modo implicito la matrice in un std::[vettore](../../../standard-library/vector-class.md) oggetto.|  
|[operator)](#operator_call)|Restituisce il valore dell'elemento specificato dai parametri.|  
|[operator]](#operator_at)|Restituisce l'elemento in corrispondenza dell'indice specificato.|  
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `array` specificato in questo oggetto.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|nome|Descrizione|  
|----------|-----------------|  
|[Rank (costante)](#rank)|Archivia il numero di dimensioni della matrice.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[accelerator_view](#accelerator_view)|Ottiene il [accelerator_view](accelerator-view-class.md) oggetto che rappresenta il percorso in cui la matrice viene allocata. Questa proprietà è accessibile solo sulla CPU.|  
|[associated_accelerator_view](#associated_accelerator_view)|Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di `array` oggetto.|  
|[cpu_access_type](#cpu_access_type)|Ottiene il [access_type](concurrency-namespace-enums-amp.md#access_type) che rappresenta la CPU può accedere all'archiviazione della matrice.|  
|[extent](#extent)|Ottiene l'ambito che definisce la forma di matrice.|  
  
## <a name="remarks"></a>Note  
 Il tipo `array<T,N>` rappresenta un ad alta densità e regolare (non irregolari) *N*-matrice dimensionale che si trova in una posizione specifica, ad esempio la CPU o di un tasto di scelta rapida. Il tipo di dati degli elementi nella matrice è `T`, che deve essere di un tipo compatibile con il tasto di scelta rapida di destinazione. Sebbene la classificazione, `N`, (di matrice viene determinata in modo statico e fa parte del tipo, l'extent della matrice è determinato dal runtime e viene espresso utilizzando la classe `extent<N>`.  
  
 Una matrice può avere qualsiasi numero di dimensioni, anche se alcune funzionalità è specializzato per `array` oggetti con rango uno, due e tre. Se si omette l'argomento di dimensione, il valore predefinito è 1.  
  
 Matrice di dati è disposto in modo contiguo nella memoria. Gli elementi che differiscono da uno nella dimensione meno significativa sono adiacenti in memoria.  
  
 Le matrici sono logicamente considerate tipi di valore, perché quando una matrice viene copiata in un'altra matrice, viene eseguita una copia completa. Due matrici non puntano mai agli stessi dati.  
  
 Il `array<T,N>` tipo viene utilizzato in scenari diversi:  
  
-   Come un contenitore di dati che può essere usato nei calcoli su un tasto di scelta rapida.  
  
-   Come un contenitore di dati per contenere memoria CPU dell'host (che può essere utilizzata per copiare in e da altre matrici).  
  
-   Come un oggetto di gestione temporanea di agire come un intermediario veloce nelle copie di host al dispositivo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `array`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a>~ array 

 Elimina definitivamente il `array` oggetto.  
  
```  
~array() restrict(cpu);
```  
  
##  <a name="accelerator_view"></a>accelerator_view 

 Ottiene il [accelerator_view](accelerator-view-class.md) oggetto che rappresenta il percorso in cui la matrice viene allocata. Questa proprietà è accessibile solo sulla CPU.  
  
```  
__declspec(property(get= get_accelerator_view)) Concurrency::accelerator_view accelerator_view;  
```  
  
##  <a name="ctor"></a>matrice 

 Inizializza una nuova istanza di [classe array](array-class.md). È presente alcun costruttore predefinito per `array<T,N>`. Tutti i costruttori vengono eseguiti sulla CPU solo. Non possono essere eseguite in una destinazione di Direct3D.  
  
```  
explicit array(  
    const Concurrency::extent<_Rank>& _Extent) restrict(cpu);  
  
explicit array(  
    int _E0) restrict(cpu);  
  
explicit array(  
    int _E0,  
    int _E1) restrict(cpu);  
  
explicit array(  
    int _E0,  
    int _E1,  
    int _E2) restrict(cpu);  
  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
array(  
    int _E0,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
array(  
    int _E0,  
    int _E1,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  

 
array(
    int _E0,  
    int _E1,  
    int _E2,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
array(  
    int _E0,  
    accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
array(  
    int _E0,  
    int _E1,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
array(  
    int _E0,  
    int _E1,  
    int _E2,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    _InputIterator _Src_first) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    _InputIterator _Src_first) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    _InputIterator _Src_first) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    int _E2,  
    _InputIterator _Src_first, 
    _InputIterator _Src_last) restrict(cpu);
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    int _E2,  
    _InputIterator _Src_first) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(
    int _E0,  
    int _E1,  
    _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    int _E2,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last,    
    Concurrency::accelerator_view _Av,  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    int _E2,  
    _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    const Concurrency::extent<_Rank>& _Extent,  
    _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    _InputIterator _Src_first,  
    _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
template <typename _InputIterator>  
array(  
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);  
  
explicit array(  
    const array_view<const value_type, _Rank>& _Src) restrict(cpu);  
  
array(  
    const array_view<const value_type, _Rank>& _Src,  
    accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);  
  
array(
    const array_view<const value_type, _Rank>& _Src,  
    accelerator_view _Av,  
    accelerator_view _Associated_Av) restrict(cpu);  
  
array(const array& _Other) restrict(cpu);  
  
array(array&& _Other) restrict(cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Associated_Av`  
 Un accelerator_view che specifica il percorso di destinazione preferita della matrice.  
  
 `_Av`  
 Un [accelerator_view](accelerator-view-class.md) oggetto che specifica la posizione della matrice.  
  
 `_Cpu_access_type`  
 L'oggetto desiderato [access_type](concurrency-namespace-enums-amp.md#access_type) per la matrice nella CPU. Questo parametro ha un valore predefinito di `access_type_auto` lasciando CPU `access_type` determinazione al runtime. La CPU effettiva `access_type` per la matrice può essere eseguita utilizzando il `get_cpu_access_type` metodo.  
  
 `_Extent`  
 L'estensione in ogni dimensione della matrice.  
  
 `_E0`  
 Il componente più significativo dell'ambito di questa sezione.  
  
 `_E1`  
 Il componente successivo-a-più significativo dell'ambito di questa sezione.  
  
 `_E2`  
 Il componente meno significativo dell'ambito di questa sezione.  
  
 `_InputIterator`  
 Il tipo di interator l'input.  
  
 `_Src`  
 A un oggetto da copiare.  
  
 `_Src_first`  
 Un iteratore di inizio nel contenitore di origine.  
  
 `_Src_last`  
 Iteratore di fine in un contenitore di origine.  
  
 `_Other`  
 Altra origine dati.  
  
 `_Rank`  
 Il numero di dimensioni della sezione.  
  
 `value_type`  
 Il tipo di dati degli elementi copiati.  
  
##  <a name="associated_accelerator_view"></a>associated_accelerator_view 

 Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di `array` oggetto.  
  
```  
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;  
```  
  
##  <a name="copy_to"></a>copy_to 

 Copia il contenuto del `array` a un altro `array`.  
  
```  
void copy_to(
    array<value_type, _Rank>& _Dest) const ;  
 
void copy_to(
    array_view<value_type, _Rank>& _Dest) const ;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Dest`  
 Il [array_view](array-view-class.md) oggetto da copiare.  
  
##  <a name="cpu_access_type"></a>cpu_access_type 

 Ottiene il access_type CPU consentito per questa matrice.  
  
```  
__declspec(property(get= get_cpu_access_type)) access_type cpu_access_type;  
```  
  
##  <a name="data"></a>dati 

 Restituisce un puntatore a dati non elaborati del `array`.  
  
```  
value_type* data() restrict(amp, cpu);
  
const value_type* data() const restrict(amp, cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a dati non elaborati della matrice.  
  
##  <a name="extent"></a>extent 

 Ottiene il [extent](extent-class.md) oggetto che definisce la forma del `array`.  
  
```  
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;  
```  
  
##  <a name="get_accelerator_view"></a>get_accelerator_view 

 Restituisce il [accelerator_view](accelerator-view-class.md) oggetto che rappresenta il percorso in cui il `array` oggetto viene allocato. Questa proprietà è accessibile solo sulla CPU.  
  
```  
Concurrency::accelerator_view get_accelerator_view() const;  
```    
  
### <a name="return-value"></a>Valore restituito  
 Il `accelerator_view` oggetto che rappresenta il percorso in cui il `array` oggetto viene allocato.  
  
##  <a name="get_associated_accelerator_view"></a>get_associated_accelerator_view 

 Ottiene il secondo [accelerator_view](accelerator-view-class.md) oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di `array` oggetto.  
  
```  
Concurrency::accelerator_view get_associated_accelerator_view() const ;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il secondo [accelerator_view](accelerator-view-class.md) oggetto passato al costruttore di gestione temporanea.  
  
##  <a name="get_cpu_access_type"></a>get_cpu_access_type 

 Restituisce il access_type CPU che è consentito per questa matrice.  
  
```  
access_type get_cpu_access_type() const restrict(cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="get_extent"></a>get_extent 

 Restituisce il [extent](extent-class.md) oggetto del `array`.  
  
```  
Concurrency::extent<_Rank> get_extent() const restrict(amp,cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `extent` oggetto del `array`.  
  
##  <a name="operator_vec"></a>operatore std:: Vector&lt;value_type&gt; 

 Usa `copy(*this, vector)` per convertire in modo implicito la matrice a un oggetto std:: Vector.  
  
```  
operator std::vector<value_type>() const restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `value_type`  
 Il tipo di dati degli elementi del vettore.  
  
### <a name="return-value"></a>Valore restituito  
 Un oggetto di tipo `vector<T>` che contiene una copia dei dati contenuti nella matrice.  
  
##  <a name="operator_call"></a>operator) 

 Restituisce il valore dell'elemento specificato dai parametri.  
  
```  
value_type& operator() (const index<_Rank>& _Index) restrict(amp,cpu);  
  
const value_type& operator() (const index<_Rank>& _Index) cons  t restrict(amp,cpu);
  
value_type& operator() (int _I0, int _I1) restrict(amp,cpu);  
  
const value_type& operator() (int _I0, int _I1) const restrict(amp,cpu)  ;
  
value_type& operator() (int _I0, int _I1, int _I2) restrict(amp,cpu);  
  
const value_type& operator() (int _I0, int _I1, int _I2) const restrict(amp,cpu);  
  
typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator()(int _I) restrict(amp,cpu);  
  
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator()(int _I) const restrict(amp,cpu);  
```  
  
### <a name="parameters"></a>Parametri  
 `_Index`  
 Il percorso dell'elemento.  
  
 `_I0`  
 Il componente più significativo di origine di questa sezione.  
  
 `_I1`  
 Il componente successivo-a-più significativo dell'origine di questa sezione.  
  
 `_I2`  
 Il componente meno significativo dell'origine di questa sezione.  
  
 `_I`  
 Il percorso dell'elemento.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore dell'elemento specificato dai parametri.  
  
##  <a name="operator_at"></a>operator] 

 Restituisce l'elemento in corrispondenza dell'indice specificato.  
  
```  
value_type& operator[](const index<_Rank>& _Index) restrict(amp,cpu);  
  
const value_type& operator[]  
    (const index<_Rank>& _Index) const restrict(amp,cpu);  
  
typename details::_Projection_result_type<value_type,_Rank>::_Result_type operator[](int _i) restrict(amp,cpu);
  
typename details::_Projection_result_type<value_type,_Rank>::_Const_result_type operator[](int _i) const restrict(amp,cpu);
```  
    
### <a name="parameters"></a>Parametri  
 `_Index`  
 Indice.  
  
 `_I`  
 Indice.  
  
### <a name="return-value"></a>Valore restituito  
 L'elemento in corrispondenza dell'indice specificato.  
  
##  <a name="operator_eq"></a>operator = 

 Copia il contenuto dell'oggetto specificato `array` oggetto.  
  
```  
array& operator= (const array& _Other) restrict(cpu);  
   
array& operator= (array&& _Other) restrict(cpu);  
 
array& operator= (  
    const array_view<const value_type, _Rank>& _Src) restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `array` oggetto da copiare.  
  
 `_Src`  
 Il `array` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `array` oggetto.  
  
##  <a name="rank"></a>numero di dimensioni 

 Archivia il rango di `array`.  
  
```  
static const int rank = _Rank;  
```  
## <a name="reinterpret_as"></a>reinterpret_as 

Reinterpreta array tramite un array_view unidimensionale, a cui facoltativamente può avere un tipo di valore diverso di matrice di origine.

### <a name="syntax"></a>Sintassi
``` 
template <typename _Value_type2>  
array_view<_Value_type2,1> reinterpret_as() restrict(amp,cpu);  
  
template <typename _Value_type2>  
array_view<const _Value_type2, 1> reinterpret_as() const restrict(amp,cpu);  
``` 
  
### <a name="parameters"></a>Parametri  
`_Value_type2`Il tipo di dati dei dati restituiti.

### <a name="return-value"></a>Valore restituito
Un array_view o un oggetto const array_view che è basato su una matrice, con il tipo di elemento reinterpretato da T ElementType e il numero di dimensioni ridotte da N a 1.

### <a name="remarks"></a>Note
Talvolta è utile visualizzare una matrice multidimensionale come se fosse una matrice unidimensionale, lineare, possibilmente con un tipo valore diverso rispetto a matrice di origine. È possibile utilizzare questo metodo per ottenere questo risultato.
**Attenzione** reinterpretare oggetto matrice usando un tipo valore diverso è un'operazione potenzialmente non sicuro. È consigliabile utilizzare questa funzionalità con attenzione. 

Nel codice seguente ne viene illustrato un esempio.

```cpp  
struct RGB { float r; float g; float b; };

array<RGB,3>  a = ...; 
array_view<float,1> v = a.reinterpret_as<float>(); 

assert(v.extent == 3*a.extent);
```  
  
##  <a name="section"></a>sezione 

 Restituisce una sottosezione del `array` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata.  
  
```  
array_view<value_type,_Rank> section(
    const Concurrency::index<_Rank>& _Section_origin,  
    const Concurrency::extent<_Rank>& _Section_extent) restrict(amp,cpu);
  
array_view<const value_type,_Rank> section(
    const Concurrency::index<_Rank>& _Section_origin,  
    const Concurrency::extent<_Rank>& _Section_extent) const restrict(amp,cpu);
  
array_view<value_type,_Rank> section(
    const Concurrency::extent<_Rank>& _Ext) restrict(amp,cpu);
  
array_view<const value_type,_Rank> section(
    const Concurrency::extent<_Rank>& _Ext) const restrict(amp,cpu);
  
array_view<value_type,_Rank> section(
    const index<_Rank>& _Idx) restrict(amp,cpu);
  
array_view<const value_type,_Rank> section(
    const index<_Rank>& _Idx) const restrict(amp,cpu);
  
array_view<value_type,1> section(
    int _I0,  
    int _E0) restrict(amp,cpu);
  
array_view<const value_type,1> section(
    int _I0,  
    int _E0) const restrict(amp,cpu);
  
array_view<value_type,2> section(
    int _I0,  
    int _I1,  
    int _E0,  
    int _E1) restrict(amp,cpu);
  
array_view<const value_type,2> section(
    int _I0,  
    int _I1,  
    int _E0,  
    int _E1) const restrict(amp,cpu);
  
array_view<value_type,3> section(
    int _I0,  
    int _I1,  
    int _I2,  
    int _E0,  
    int _E1,  
    int _E2) restrict(amp,cpu);
  
array_view<const value_type,3> section(
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
  
 `value_type`  
 Il tipo di dati degli elementi copiati.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce una sottosezione del `array` oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata. Quando solo il `index` oggetto è specificato, la sottosezione contiene tutti gli elementi nella griglia associato con gli indici che superano gli indici degli elementi di `index` oggetto.  
  
##  <a name="view_as"></a>view_as 

 Reinterpreta questa matrice come un [array_view](array-view-class.md) di un numero di dimensioni diversa.  
  
```  
template <int _New_rank>  
array_view<value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) restrict(amp,cpu);

 
template <int _New_rank>  
array_view<const value_type,_New_rank> view_as(
    const Concurrency::extent<_New_rank>& _View_extent) const restrict(amp,cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_New_rank`  
 Il rango di `extent` oggetto passato come parametro.  
  
 `_View_extent`  
 L'extent che viene utilizzato per costruire il nuovo [array_view](array-view-class.md) oggetto.  
  
 `value_type`  
 Il tipo di dati degli elementi in entrambi originale `array` oggetto e il valore restituito `array_view` oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Il [array_view](array-view-class.md) oggetto costruito.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)
