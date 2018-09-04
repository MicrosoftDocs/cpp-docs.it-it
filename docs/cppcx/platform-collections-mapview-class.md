---
title: Mapview | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::MapView::MapView
- COLLECTION/Platform::Collections::MapView::First
- COLLECTION/Platform::Collections::MapView::HasKey
- COLLECTION/Platform::Collections::MapView::Lookup
- COLLECTION/Platform::Collections::MapView::Size
- COLLECTION/Platform::Collections::MapView::Split
dev_langs:
- C++
helpviewer_keywords:
- MapView Class
ms.assetid: 9577dde7-f599-43c6-b1e4-7d653706fd62
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e1dfbcff7e9e470992b0799aac1c87984b52ed50
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43689471"
---
# <a name="platformcollectionsmapview-class"></a>Classe Platform::Collections::MapView
Rappresenta una visualizzazione di sola lettura in una *mappa*, che rappresenta una raccolta di coppie chiave-valore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <  
   typename K,  
   typename V,  
   typename C = ::std::less<K>>  
ref class MapView sealed;  
```  
  
#### <a name="parameters"></a>Parametri  
 `K`  
 Tipo di chiave nella coppia chiave-valore.  
  
 `V`  
 Tipo di valore nella coppia chiave-valore.  
  
 `C`  
 Tipo che fornisce un oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView. Per impostazione predefinita [std:: less\<K >](../standard-library/less-struct.md).  
  
### <a name="remarks"></a>Note  
 MapView è un'implementazione concreta di C++ del [Windows::Foundation::Collections::IMapView \<K, V >](/uwp/api/Windows.Foundation.Collections.IMapView_K_V_) passata attraverso l'interfaccia applicativa binaria (ABI). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Mapview:: Mapview](#ctor)|Inizializza una nuova istanza della classe MapView.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Mapview:: First](#first)|Restituisce un iteratore che viene inizializzato al primo elemento nella visualizzazione della mappa.|  
|[MapView::HasKey](#haskey)|Determina se l'oggetto MapView corrente contiene la chiave specificata.|  
|[MapView::Lookup](#lookup)|Recupera l'elemento in corrispondenza della chiave specificata nell'oggetto MapView corrente.|  
|[Mapview:: Size](#size)|Restituisce il numero di elementi nell'oggetto MapView corrente.|  
|[Mapview:: Split](#split)|Divide un oggetto MapView originale in due oggetti MapView.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `MapView`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  


## <a name="first"></a> Metodo mapview:: First
Restituisce un iteratore che specifica il primo elemento nella visualizzazione della mappa.  
  
### <a name="syntax"></a>Sintassi  
  
```    
virtual Windows::Foundation::Collections::IIterator<  
   Windows::Foundation::Collections::IKeyValuePair<K, V>^>^ First();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che specifica il primo elemento nella visualizzazione della mappa.  
  
### <a name="remarks"></a>Note  
 Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **automatica** digita parola chiave di deduzione dei tipi. Ad esempio `auto x = myMapView->First();`.  
  


## <a name="haskey"></a>  Metodo mapview:: Haskey
Determina se l'oggetto MapView corrente contiene la chiave specificata.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
bool HasKey(K key);  
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave usata per individuare l'elemento MapView. Il tipo della `key` è typename *K*.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se la chiave viene trovata; in caso contrario, `false`.  
  


##  <a name="lookup"></a> Metodo mapview:: lookup
Recupera il valore di tipo V associato alla chiave specificata di tipo K.  
  
### <a name="syntax"></a>Sintassi  
  
```  
V Lookup(K key);  
```  
  
### <a name="parameters"></a>Parametri  
 `key`  
 Chiave utilizzata per individuare un elemento in MapView. Il tipo della `key` è typename *K*.  
  
### <a name="return-value"></a>Valore restituito  
 Valore abbinato a `key`. Il tipo del valore restituito è typename *V*.  
  


##  <a name="ctor"></a> Costruttore mapview:: Mapview
Inizializza una nuova istanza della classe MapView.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
explicit MapView(const C& comp = C());  
  
explicit MapView(const ::std::map<K, V, C>& m);  
  
explicit MapView(std::map<K, V, C>&& m);  
  
template <typename InIt> MapView(  
    InIt first,  
    InIt last,  
    const C& comp = C());  
  
MapView(
    ::std::initializer_list<std::pair<const K, V>> il,  
    const C& comp = C());  
```  
  
### <a name="parameters"></a>Parametri  
 `InIt`  
 Typename dell'oggetto MapView corrente.  
  
 `comp`  
 Oggetto funzione che può confrontare due valori di elementi come chiavi di ordinamento per determinare l'ordine relativo in MapView.  
  
 `m`  
 Un riferimento oppure [Lvalues e Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un `map Class` che viene usato per inizializzare l'oggetto MapView corrente.  
  
 `first`  
 Iteratore di input del primo elemento in un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.  
  
 `last`  
 Iteratore di input del primo elemento dopo un intervallo di elementi utilizzato per inizializzare l'oggetto MapView corrente.  
  
 il  
 Oggetto [std:: initializer_list < std:: Pair\<K, V >>](../standard-library/initializer-list-class.md) cui elementi verranno inseriti in MapView.  



##  <a name="size"></a> Metodo mapview:: Size
Restituisce il numero di elementi nell'oggetto MapView corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
  
virtual property unsigned int Size;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nell'oggetto MapView corrente.  
  


##  <a name="split"></a> Metodo mapview:: Split
Divide l'oggetto MapView corrente in due oggetti MapView. Questo metodo non è operativo.  
  
### <a name="syntax"></a>Sintassi  
  
```  
void Split(  
   Windows::Foundation::Collections::IMapView<  
                         K, V>^ * firstPartition,  
   Windows::Foundation::Collections::IMapView<  
                         K, V>^ * secondPartition);  
```  
  
### <a name="parameters"></a>Parametri  
 `firstPartition`  
 Prima parte dell'oggetto MapView originale.  
  
 `secondPartition`  
 Seconda parte dell'oggetto MapView originale.  
  
### <a name="remarks"></a>Note  
 Questo metodo non è operativo; non esegue alcuna operazione.  
    
## <a name="see-also"></a>Vedere anche  
 [Platform Namespace](platform-namespace-c-cx.md)