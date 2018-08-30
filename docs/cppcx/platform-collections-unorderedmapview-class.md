---
title: Classe platform::Collections::UnorderedMapView | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- collection/Platform::Collections::UnorderedMapView
ms.assetid: 545a3725-2efd-4cc1-b590-4a7cd2351f61
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c463dbcb68b5a4b875dbb109eedc07a3b4b27c86
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43203028"
---
# <a name="platformcollectionsunorderedmapview-class"></a>Classe Platform::Collections::UnorderedMapView
Rappresenta una visualizzazione di sola lettura in una *mappa*, che rappresenta una raccolta di coppie chiave-valore.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
template <  
   typename K,  
   typename V,  
   typename C = ::std::equal_to<K>>  
ref class UnorderedMapView sealed;  
```  
  
#### <a name="parameters"></a>Parametri  
 `K`  
 Tipo di chiave nella coppia chiave-valore.  
  
 `V`  
 Tipo di valore nella coppia chiave-valore.  
  
 `C`  
 Tipo che fornisce un oggetto funzione che può confrontare due valori di chiavi per la loro uguaglianza. Per impostazione predefinita [std:: equal_to\<K >](../standard-library/equal-to-struct.md)  
  
### <a name="remarks"></a>Note  
 UnorderedMapView è un'implementazione concreta di C++ del [Windows::Foundation::Collections::IMapView\<K, V >](http://go.microsoft.com/fwlink/p/?LinkId=262409) passata attraverso l'interfaccia applicativa binaria (ABI). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Unorderedmapview:: Unorderedmapview](#ctor)|Inizializza una nuova istanza della classe UnorderedMapView.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Unorderedmapview:: First](#first)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|  
|[Unorderedmapview:: Haskey](#haskey)|Determina se l'oggetto UnorderedMapView corrente contiene la chiave specificata.|  
|[Unorderedmapview:: lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto UnorderedMapView corrente.|  
|[Unorderedmapview:: Size](#size)|Restituisce il numero di elementi nell'oggetto UnorderedMapView corrente.|  
|[Unorderedmapview:: Split](#split)|Divide un oggetto UnorderedMapView originale in due oggetti UnorderedMapView.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `UnorderedMapView`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  

## <a name="first"></a>  Metodo UnorderedMapView::First
Restituisce un iteratore che specifica il primo [Windows::Foundation::Collections::IKeyValuePair\<K, V >](https://msdn.microsoft.com/library/windows/apps/br226031.aspx) elemento della mappa non ordinata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp   
virtual Windows::Foundation::Collections::IIterator<  
    Windows::Foundation::Collections::IKeyValuePair<K, V>^>^   
    First();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che specifica il primo elemento nella visualizzazione della mappa.  
  
### <a name="remarks"></a>Note  
 Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **automatica** digita parola chiave di deduzione dei tipi. Ad esempio `auto x = myMapView->First();`.  
  


## <a name="haskey"></a>  Metodo UnorderedMapView::HasKey
Determina se l'oggetto UnorderedMap corrente contiene la chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
bool HasKey(K key);  
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave usata per individuare l'elemento. Il tipo della `key` è typename *K*.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se la chiave viene trovata; in caso contrario, `false`.  
  


## <a name="lookup"></a>  Metodo UnorderedMapView::Lookup
Recupera il valore di tipo V associato alla chiave specificata di tipo K.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
V Lookup(K key);  
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave usata per individuare un elemento in UnorderedMapView. Il tipo della `key` è typename *K*.  
  
### <a name="return-value"></a>Valore restituito  
 Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.  
  


## <a name="size"></a>  Metodo UnorderedMapView::Size
Restituisce il numero di [Windows::Foundation::Collections::IKeyValuePair\<K, V >](https://msdn.microsoft.com/library/windows/apps/br226031.aspx) elementi in UnorderedMapView.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp    
virtual property unsigned int Size;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nell'oggetto UnorderedMapView.  
  


## <a name="split"></a>  Metodo UnorderedMapView::Split
Divide l'oggetto UnorderedMapView corrente in due oggetti UnorderedMapView. Questo metodo non è operativo.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
void Split(  
   Windows::Foundation::Collections::IMapView<  
                         K,V>^ * firstPartition,  
   Windows::Foundation::Collections::IMapView<  
                         K,V>^ * secondPartition);  
```  
  
### <a name="parameters"></a>Parametri  
 `firstPartition`  
 Prima parte dell'oggetto UnorderedMapView originale.  
  
 `secondPartition`  
 Seconda parte dell'oggetto UnorderedMapView originale.  
  
### <a name="remarks"></a>Note  
 Questo metodo non è operativo; non esegue alcuna operazione.  
  


## <a name="ctor"></a>  Costruttore UnorderedMapView::UnorderedMapView
Inizializza una nuova istanza della classe UnorderedMapView.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
UnorderedMapView();    
explicit UnorderedMapView(size_t n);   
UnorderedMapView(size_t n, const H& h);   
UnorderedMapView(size_t n, const H& h, const P& p);  
  
explicit UnorderedMapView(  
    const std::unordered_map<K, V, H, P>& m);  
explicit UnorderedMapView(  
    std::unordered_map<K, V, H, P>&& m);  
  
template <typename InIt> UnorderedMapView(InIt first, InIt last );  
template <typename InIt> UnorderedMapView(InIt first, InIt last, size_t n );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n,  
    const H& h );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n,  
    const H& h,  
    const P& p );  
  
UnorderedMapView(std::initializer_list<std::pair<const K, V>);  
  
UnorderedMapView(std::initializer_list< std::pair<const K, V>> il, size_t n   
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n,  
    const H& h);  
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n,  
    const H& h,  
    const P& p );  
```  
  
### <a name="parameters"></a>Parametri  
 n  
 Numero di elementi per cui preallocare spazio.  
  
 `InIt`  
 Typename dell'oggetto UnorderedMapView.  
  
 `H`  
 Oggetto funzione che può eseguire l'hash di un valore per una chiave. Per impostazione predefinita [std:: hash\<K >](https://msdn.microsoft.com/54f67435-af9d-4217-a29d-fa4d2491a104) per i tipi che `std::hash` supporta.  
  
 `P`  
 Tipo che fornisce un oggetto funzione che può confrontare due chiavi per determinare la loro uguaglianza. Per impostazione predefinita [std:: equal_to\<K >](../standard-library/equal-to-struct.md).  
  
 `m`  
 Un riferimento oppure [Lvalues e Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un [std:: unordered_map](../standard-library/unordered-map-class.md) che viene usato per inizializzare l'oggetto unorderedmapview corrente.  
  
 `first`  
 Iteratore di input del primo elemento in un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.  
  
 `last`  
 Iteratore di input del primo elemento dopo un intervallo di elementi usato per inizializzare l'oggetto UnorderedMapView corrente.  
   
## <a name="see-also"></a>Vedere anche  
 [Platform:: Collections Namespace](../cppcx/platform-collections-namespace.md)   
 [Windows::Foundation::IMapView](http://go.microsoft.com/fwlink/p/?LinkId=262409)