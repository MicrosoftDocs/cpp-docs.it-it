---
title: "Classe array | Microsoft Docs"
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
  - "amp/Concurrency::array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "array (classe)"
ms.assetid: 0832b6c1-40f0-421d-9104-6b1baa0c63a7
caps.latest.revision: 31
caps.handback.revision: 31
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe array
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un contenitore di dati utilizzato per spostare i dati a un tasto di scelta rapida.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <
    typename value_type,  
    int _Rank  
>  
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
|[Costruttore Array:: Array](#array__array_constructor)|Inizializza una nuova istanza della classe `array`.|  
|[Array:: ~ array distruttore](#array___dtorarray_destructor)|Elimina il `array` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Array:: copy_to](#array__copy_to_method)|Copia il contenuto della matrice a un'altra matrice.|  
|[Metodo Array:: data](#array__data_method)|Restituisce un puntatore ai dati non elaborati della matrice.|  
|[Array:: get_accelerator_view (metodo)](#array__get_accelerator_view_method)|Restituisce il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto che rappresenta la posizione in cui la matrice viene allocata. Questa proprietà è accessibile solo sulla CPU.|  
|[Metodo Array:: get_associated_accelerator_view](#array__get_associated_accelerator_view_method)|Ottiene il secondo [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) l'oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di [matrice](../../../parallel/amp/reference/array-class.md) oggetto.|  
|[Metodo Array:: get_cpu_access_type](#array__get_cpu_access_type_method)|Restituisce il [access_type](access_type%20Enumeration.md) della matrice. Questo metodo è accessibile solo sulla CPU.|  
|[Metodo Array:: get_extent](#array__get_extent_method)|Restituisce il [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) oggetto della matrice.|  
|[Metodo Array:: reinterpret_as](#array__reinterpret_as_method)|Restituisce una matrice unidimensionale che contiene tutti gli elementi di `array` oggetto.|  
|[Metodo Array:: Section](#array__section_method)|Restituisce una sottosezione del [matrice](../../../parallel/amp/reference/array-class.md) oggetto che si trova l'origine specificata e, facoltativamente, che ha l'estensione specificata.|  
|[Metodo Array:: view_as](#array__view_as_method)|Restituisce un [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto costruito dal `array` oggetto.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator std:: Vector&lt;value_type&gt; (operatore)](#array__operator_std__vector_lt__value_type_gt__operator)|Utilizza `copy(*this, vector)` per convertire in modo implicito la matrice in un std::[vettore](vector%20Class.md) oggetto.|  
|[Array:: operator () (operatore)](#array__operator___operator)|Restituisce il valore dell'elemento specificato dai parametri.|  
|[operator [] (operatore)](#array__operator_at_operator)|Restituisce l'elemento in corrispondenza dell'indice specificato.|  
|[operator = (operatore)](#array__operator_eq_operator)|Copia il contenuto dell'oggetto specificato `array` specificato in questo oggetto.|  
  
### <a name="public-constants"></a>Costanti pubbliche  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Array:: rank (costante)](#array__rank_constant)|Archivia il numero di dimensioni della matrice.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati Array:: accelerator_view](#array__accelerator_view_data_member)|Ottiene il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto che rappresenta la posizione in cui la matrice viene allocata. Questa proprietà è accessibile solo sulla CPU.|  
|[Array:: associated_accelerator_view (membro dati)](#array__associated_accelerator_view_data_member)|Ottiene il secondo [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) l'oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di [matrice](../../../parallel/amp/reference/array-class.md) oggetto.|  
|[Membro dati Array:: cpu_access_type](#array__cpu_access_type_data_member)|Ottiene il [access_type](access_type%20Enumeration.md) che rappresenta la CPU può accedere all'archiviazione della matrice.|  
|[Membro dati Array:: extent](#array__extent_data_member)|Ottiene l'ambito che definisce la forma di matrice.|  
  
## <a name="remarks"></a>Note  
 Il tipo `array<T,N>` rappresenta un ad alta densità e regolare (non irregolari) *N*-matrice dimensionale che si trova in una posizione specifica, ad esempio la CPU o di un tasto di scelta rapida. Il tipo di dati degli elementi nella matrice è `T`, che deve essere di un tipo compatibile con l'acceleratore di destinazione. Sebbene la classificazione, `N`, (della matrice viene determinata in modo statico e fa parte del tipo, l'ambito della matrice è determinato dal runtime e viene espresso utilizzando la classe `extent<N>`.  
  
 Una matrice può avere qualsiasi numero di dimensioni, anche se alcune funzionalità è specializzata per `array` gli oggetti con rango uno, due e tre. Se si omette l'argomento di dimensione, il valore predefinito è 1.  
  
 Dati di matrice sono disposto in modo contiguo nella memoria. Gli elementi che differiscono da uno nella dimensione meno significativa sono adiacenti in memoria.  
  
 Le matrici sono logicamente considerate tipi di valore, perché quando si copia una matrice a un'altra matrice, viene eseguita una copia completa. Due matrici non puntano mai agli stessi dati.  
  
 Il `array<T,N>` tipo viene utilizzato in diversi scenari:  
  
-   Come contenitore di dati che può essere utilizzato nell'esecuzione di calcoli su un tasto di scelta rapida.  
  
-   Come contenitore di dati per contenere memoria CPU dell'host (che può essere utilizzata per copiare in e da altre matrici).  
  
-   Come un oggetto di gestione temporanea di agire come un intermediario veloce nelle copie di host al dispositivo.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `array`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amp.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-namearraydtorarraydestructora-arrayarray-destructor"></a><a name="array___dtorarray_destructor"></a>  Array:: ~ array distruttore  
 Elimina il `array` oggetto.  
  
```  
~array() restrict(cpu);
```  
  
##  <a name="a-namearrayacceleratorviewdatamembera-arrayacceleratorview-data-member"></a><a name="array__accelerator_view_data_member"></a>  Membro dati Array:: accelerator_view  
 Ottiene il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto che rappresenta la posizione in cui la matrice viene allocata. Questa proprietà è accessibile solo sulla CPU.  
  
```  
__declspec(property(get= get_accelerator_view)) Concurrency::accelerator_view accelerator_view;  
```  
  
##  <a name="a-namearrayarrayconstructora-arrayarray-constructor"></a><a name="array__array_constructor"></a>  Costruttore Array:: Array  
 Inizializza una nuova istanza di [classe array](../../../parallel/amp/reference/array-class.md). Nessun costruttore predefinito per `array<T,N>`. Tutti i costruttori vengono eseguiti sulla CPU solo. Non possono essere eseguite su una destinazione di Direct3D.  
  
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

 
template <
    typename _InputIterator  
>  
array(
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first, _InputIterator _Src_last) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0, _InputIterator _Src_first) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1, _InputIterator _Src_first) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av  
    access_type _Cpu_access_type = access_type_auto) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    const Concurrency::extent<_Rank>& _Extent, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1, _InputIterator _Src_first,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

 
template <
    typename _InputIterator  
>  
array(
    int _E0,  
    int _E1,  
    int _E2, _InputIterator _Src_first, _InputIterator _Src_last,  
    Concurrency::accelerator_view _Av,  
    Concurrency::accelerator_view _Associated_Av) restrict(cpu);

 
template <
    typename _InputIterator  
>  
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

 
array(
    const array& _Other) restrict(cpu);

 
array(
    array&& _Other) restrict(cpu);
```  
  
### <a name="parameters"></a>Parametri  
 `_Associated_Av`  
 Un accelerator_view che specifica il percorso di destinazione preferita della matrice.  
  
 `_Av`  
 Un [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto che specifica la posizione della matrice.  
  
 `_Cpu_access_type`  
 Il valore desiderato [access_type](access_type%20Enumeration.md)  per la matrice sulla CPU. Questo parametro ha un valore predefinito di `access_type_auto` lasciando le CPU `access_type` Determinazione al runtime. L'effettivo utilizzo della CPU `access_type` per la matrice è possibile eseguire query utilizzando il `get_cpu_access_type` metodo.  
  
 `_Extent`  
 L'estensione in ogni dimensione della matrice.  
  
 `_E0`  
 Il componente più significativo dell'ambito di questa sezione.  
  
 `_E1`  
 Il componente successivo-a-più significativo dell'ambito di questa sezione.  
  
 `_E2`  
 Il componente meno significativo dell'ambito di questa sezione.  
  
 `_InputIterator`  
 Il tipo di interator input.  
  
 `_Src`  
 A un oggetto da copiare.  
  
 `_Src_first`  
 Un iteratore di inizio nel contenitore di origine.  
  
 `_Src_last`  
 Un iteratore finale nel contenitore di origine.  
  
 `_Other`  
 Altra origine dati.  
  
 `_Rank`  
 Il numero di dimensioni della sezione.  
  
 `value_type`  
 Il tipo di dati degli elementi copiati.  
  
##  <a name="a-namearrayassociatedacceleratorviewdatamembera-arrayassociatedacceleratorview-data-member"></a><a name="array__associated_accelerator_view_data_member"></a>  Array:: associated_accelerator_view (membro dati)  
 Ottiene il secondo [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) l'oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di [matrice](../../../parallel/amp/reference/array-class.md) oggetto.  
  
```  
__declspec(property(get= get_associated_accelerator_view)) Concurrency::accelerator_view associated_accelerator_view;  
```  
  
##  <a name="a-namearraycopytomethoda-arraycopyto-method"></a><a name="array__copy_to_method"></a>  Metodo Array:: copy_to  
 Copia il contenuto di [matrice](../../../parallel/amp/reference/array-class.md) a un altro `array`.  
  
```  
void copy_to(
    array<value_type, _Rank>& _Dest) const ;  
 
void copy_to(
    array_view<value_type, _Rank>& _Dest) const ;  
```  
  
### <a name="parameters"></a>Parametri  
 `_Dest`  
 Il [array_view](../../../parallel/amp/reference/array-view-class.md) oggetto da copiare.  
  
##  <a name="a-namearraycpuaccesstypedatamembera-arraycpuaccesstype-data-member"></a><a name="array__cpu_access_type_data_member"></a>  Membro dati Array:: cpu_access_type  
 Ottiene il access_type CPU consentiti per questa matrice.  
  
```  
__declspec(property(get= get_cpu_access_type)) access_type cpu_access_type;  
```  
  
##  <a name="a-namearraydatamethoda-arraydata-method"></a><a name="array__data_method"></a>  Metodo Array:: data  
 Restituisce un puntatore ai dati non elaborati del [matrice](../../../parallel/amp/reference/array-class.md).  
  
```  
value_type* data() restrict(amp,
    cpu);

 
const value_type* data() const restrict(amp,
    cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore ai dati non elaborati della matrice.  
  
##  <a name="a-namearrayextentdatamembera-arrayextent-data-member"></a><a name="array__extent_data_member"></a>  Membro dati Array:: extent  
 Ottiene il [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) che definisce la forma dell'oggetto di [matrice](../../../parallel/amp/reference/array-class.md).  
  
```  
__declspec(property(get= get_extent)) Concurrency::extent<_Rank> extent;  
```  
  
##  <a name="a-namearraygetacceleratorviewmethoda-arraygetacceleratorview-method"></a><a name="array__get_accelerator_view_method"></a>  Array:: get_accelerator_view (metodo)  
 Restituisce il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto che rappresenta la posizione in cui il [matrice](../../../parallel/amp/reference/array-class.md) oggetto viene allocato. Questa proprietà è accessibile solo sulla CPU.  
  
```  
Concurrency::accelerator_view get_accelerator_view() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `accelerator_view` oggetto che rappresenta la posizione in cui il [matrice](../../../parallel/amp/reference/array-class.md) oggetto viene allocato.  
  
##  <a name="a-namearraygetassociatedacceleratorviewmethoda-arraygetassociatedacceleratorview-method"></a><a name="array__get_associated_accelerator_view_method"></a>  Metodo Array:: get_associated_accelerator_view  
 Ottiene il secondo [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) l'oggetto passato come parametro quando viene chiamato un costruttore di gestione temporanea per creare un'istanza di [matrice](../../../parallel/amp/reference/array-class.md) oggetto.  
  
```  
Concurrency::accelerator_view get_associated_accelerator_view() const ;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il secondo [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto passato al costruttore di gestione temporanea.  
  
##  <a name="a-namearraygetcpuaccesstypemethoda-arraygetcpuaccesstype-method"></a><a name="array__get_cpu_access_type_method"></a>  Metodo Array:: get_cpu_access_type  
 Restituisce il access_type CPU che è consentito per questa matrice.  
  
```  
access_type get_cpu_access_type() const restrict(cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-namearraygetextentmethoda-arraygetextent-method"></a><a name="array__get_extent_method"></a>  Metodo Array:: get_extent  
 Restituisce il [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) oggetto di [matrice](../../../parallel/amp/reference/array-class.md).  
  
```  
Concurrency::extent<_Rank> get_extent() const restrict(amp,cpu);
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `extent` dell'oggetto di [matrice](../../../parallel/amp/reference/array-class.md).  
  
##  <a name="a-namearrayoperatorstdvectorltvaluetypegtoperatora-arrayoperator-stdvectorltvaluetypegt-operator"></a><a name="array__operator_std__vector_lt__value_type_gt__operator"></a>  operator std:: Vector&lt;value_type&gt; (operatore)  
 Utilizza `copy(*this, vector)` per convertire in modo implicito la matrice a un oggetto std:: Vector.  
  
' ' operator std:: Vector \< value_type > () const Restrict (CPU);
```  
  
### Parameters  
 `value_type`  
 The data type of the elements of the vector.  
  
### Return Value  
 An object of type `vector<T>` that contains a copy of the data that is contained in the array.  
  
##  <a name="array__operator___operator"></a>  array::operator() Operator  
 Returns the element value that is specified by the parameters.  
  
```  
value_type & Operator (const (indice) \< _Rank > & index) restrict(amp,cpu);

 
const value_type & Operator (const (indice) \< _Rank > & index) const restrict(amp,cpu);

 
value_type & restrict(amp,cpu) Operator (_I0 int, int _I1);

 
const value_type & restrict(amp,cpu) const Operator (_I0 int, int _I1);

 
value_type & restrict(amp,cpu) Operator (int _I0, _I1 int, int _I2);

 
const value_type & restrict(amp,cpu) const Operator (int _I0, _I1 int, int _I2);

 
TypeName details::_Projection_result_type \< value_type, _Rank >:: _Result_type Operator (int Dichiaro) restrict(amp,cpu);

 
TypeName details::_Projection_result_type \< value_type, _Rank >:: _Const_result_type (int Dichiaro) operator const restrict(amp,cpu);
```  
  
### Parameters  
 `_Index`  
 The location of the element.  
  
 `_I0`  
 The most significant component of the origin of this section.  
  
 `_I1`  
 The next-to-most-significant component of the origin of this section.  
  
 `_I2`  
 The least significant component of the origin of this section.  
  
 `_I`  
 The location of the element.  
  
### Return Value  
 The element value specified by the parameters.  
  
##  <a name="array__operator_at_operator"></a>  array::operator[] Operator  
 Returns the element that is at the specified index.  
  
```  
value_type & (operatore) [] (const (indice) \< _Rank > & index) restrict(amp,cpu);

 
[] value_type & (operatore) const (const (indice) \< _Rank > & index) const restrict(amp,cpu);

 
TypeName details::_Projection_result_type \< value_type, _Rank >:: operatore _Result_type[](int _I) restrict(amp,cpu);

 
TypeName details::_Projection_result_type \< value_type, _Rank >:: operatore _Const_result_type[](int _I) const restrict(amp,cpu);
```  
  
### Parameters  
 `_Index`  
 The index.  
  
 `_I`  
 The index.  
  
### Return Value  
 The element that is at the specified index.  
  
##  <a name="array__operator_eq_operator"></a>  array::operator= Operator  
 Copies the contents of the specified [array](../../../parallel/amp/reference/array-class.md) object.  
  
```  
operatore & matrice = (const matrice & _Other) Restrict (CPU);

 
operatore & matrice = (matrice & & _Other) Restrict (CPU);

 
operatore & matrice = (const array_view \< const value_type, _Rank > & _Src) Restrict (CPU);
```  
  
### Parameters  
 `_Other`  
 The `array` object to copy from.  
  
 `_Src`  
 The `array` object to copy from.  
  
### Return Value  
 A reference to this `array` object.  
  
##  <a name="array__rank_constant"></a>  array::rank Constant  
 Stores the rank of the [array](../../../parallel/amp/reference/array-class.md).  
  
```  
statico rank int const = _Rank;  
```  
  
##  <a name="array__section_method"></a>  array::section Method  
 Returns a subsection of the [array](../../../parallel/amp/reference/array-class.md) object that is at the specified origin and, optionally, that has the specified extent.  
  
```  
array_view \< value_type, _Rank > sezione (const Concurrency::index \< _Rank > & _Section_origin,  
    const Concurrency::extent \< _Rank > & _Section_extent) restrict(amp,cpu);

 
array_view \< const value_type, _Rank > sezione (const Concurrency::index \< _Rank > & _Section_origin,  
    const Concurrency::extent \< _Rank > & _Section_extent) const restrict(amp,cpu);

 
array_view \< value_type, _Rank > sezione (const Concurrency::extent \< _Rank > & ext) restrict(amp,cpu);

 
array_view \< const value_type, _Rank > sezione (const Concurrency::extent \< _Rank > & ext) const restrict(amp,cpu);

 
array_view \< value_type, _Rank > sezione (indice \< _Rank > const & idx) restrict(amp,cpu);

 
array_view \< const value_type, _Rank > sezione (indice const \< _Rank > & idx) const restrict(amp,cpu);

 
array_view \< value_type, 1 > sezione (int _I0,  
    restrict(amp,cpu) _E0 int);

 
array_view \< const value_type, 1 > sezione (int _I0,  
    restrict(amp,cpu) const int _E0);

 
array_view \< value_type, 2 > sezione (int _I0,  
    int _I1,  
    int _E0,  
    restrict(amp,cpu) _E1 int);

 
array_view \< const value_type, 2 > sezione (int _I0,  
    int _I1,  
    int _E0,  
    restrict(amp,cpu) const int _E1);

 
array_view \< value_type, 3 > sezione (int _I0,  
    int _I1,  
    int _I2,  
    int _E0,  
    int _E1,  
    restrict(amp,cpu) _E2 int);

 
array_view \< const value_type, 3 > sezione (int _I0,  
    int _I1,  
    int _I2,  
    int _E0,  
    int _E1,  
    restrict(amp,cpu) const int _E2);
```  
  
### Parameters  
 `_E0`  
 The most significant component of the extent of this section.  
  
 `_E1`  
 The next-to-most-significant component of the extent of this section.  
  
 `_E2`  
 The least significant component of the extent of this section.  
  
 `_Ext`  
 The [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) object that specifies the extent of the section. The origin is 0.  
  
 `_Idx`  
 The [index](../../../parallel/amp/reference/index-class.md) object that specifies the location of the origin. The subsection is the rest of the extent.  
  
 `_I0`  
 The most significant component of the origin of this section.  
  
 `_I1`  
 The next-to-most-significant component of the origin of this section.  
  
 `_I2`  
 The least significant component of the origin of this section.  
  
 `_Rank`  
 The rank of the section.  
  
 `_Section_extent`  
 The [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) object that specifies the extent of the section.  
  
 `_Section_origin`  
 The [index](../../../parallel/amp/reference/index-class.md) object that specifies the location of the origin.  
  
 `value_type`  
 The data type of the elements that are copied.  
  
### Return Value  
 Returns a subsection of the `array` object that is at the specified origin and, optionally, that has the specified extent. When only the `index` object is specified, the subsection contains all elements in the associated grid that have indexes that are larger than the indexes of the elements in the `index` object.  
  
##  <a name="array__view_as_method"></a>  array::view_as Method  
 Reinterprets this array as an [array_view](../../../parallel/amp/reference/array-view-class.md) of a different rank.  
  
```  
modello \< int _New_rank  
>  
view_as array_view \< value_type, _New_rank > (const Concurrency::extent \< _New_rank > & _View_extent) restrict(amp,cpu);

 
modello \< int _New_rank  
>  
array_view \< const value_type, _New_rank > view_as (const Concurrency::extent \< _New_rank > & _View_extent) const restrict(amp,cpu);
```  
  
### Parameters  
 `_New_rank`  
 The rank of the `extent` object passed as a parameter.  
  
 `_View_extent`  
 The extent that is used to construct the new [array_view](../../../parallel/amp/reference/array-view-class.md) object.  
  
 `value_type`  
 The data type of the elements in both the original [array](../../../parallel/amp/reference/array-class.md) object and the returned `array_view` object.  
  
### Return Value  
 The [array_view](../../../parallel/amp/reference/array-view-class.md) object that is constructed.  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
