---
title: Classe platform::Collections::VectorView | Documenti Microsoft
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::VectorView::VectorView
- COLLECTION/Platform::Collections::VectorView::First
- COLLECTION/Platform::Collections::VectorView::GetAt
- COLLECTION/Platform::Collections::VectorView::GetMany
- COLLECTION/Platform::Collections::VectorView::IndexOf
- COLLECTION/Platform::Collections::VectorView::Size
dev_langs:
- C++
helpviewer_keywords:
- VectorView Class
ms.assetid: 05cd461d-dce7-49d3-b0e7-2e5c78ed8192
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 937342c340b085f2e2bdeef8ed7df21dae826152
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33092910"
---
# <a name="platformcollectionsvectorview-class"></a>Classe Platform::Collections::VectorView
Rappresenta una visualizzazione in sola lettura di una raccolta sequenziale di oggetti a cui è possibile accedere singolarmente attraverso l'indice. Il tipo di ciascun oggetto nella raccolta è specificato dal parametro del modello.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <typename T, typename E>  
   ref class VectorView sealed;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo degli elementi contenuti nell'oggetto `VectorView` .  
  
 `E`  
 Specifica un predicato binario per verificare l'uguaglianza con valori di tipo `T`. Il valore predefinito è `std::equal_to<T>`.  
  
### <a name="remarks"></a>Note  
 Il `VectorView` classe implementa il [Windows::Foundation::Collections::IVectorView\<T >](http://go.microsoft.com/fwlink/p/?LinkId=262411) interfaccia e il supporto per gli iteratori Standard Template Library.  
  
### <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Vectorview](#ctor)|Inizializza una nuova istanza della classe VectorView.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Vectorview](#first)|Restituisce un iteratore che specifica il primo elemento in VectorView.|  
|[GetAt](#getat)|Recupera l'elemento dell'oggetto VectorView corrente indicato dall'indice specificato.|  
|[VectorView::GetMany](#getmany)|Recupera una sequenza di elementi dall'oggetto VectorView corrente, a partire dall'indice specificato.|  
|[IndexOf](#indexof)|Cerca l'elemento specificato nell'oggetto VectorView corrente e, se lo trova, restituisce l'indice dell'elemento.|  
|[Vectorview:: Size](#size)|Restituisce il numero di elementi nell'oggetto VectorView corrente.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `VectorView`  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  

## <a name="first"></a>  Metodo VectorView::First
Restituisce un iteratore che specifica il primo elemento in VectorView.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
virtual Windows::Foundation::Collections::IIterator<T>^   
   First();  
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che specifica il primo elemento in VectorView.  
  
### <a name="remarks"></a>Note  
 Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **auto** parola chiave di deduzione del tipo. Ad esempio `auto x = myVectorView->First();`.  
  


## <a name="getat"></a>  Metodo VectorView::GetAt
Recupera l'elemento dell'oggetto VectorView corrente indicato dall'indice specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
T GetAt(  
   UInt32 index  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `index`  
 Intero senza segno in base zero che specifica un particolare elemento nell'oggetto VectorView.  
  
### <a name="return-value"></a>Valore restituito  
 Elemento specificato dal parametro `index`. Il tipo di elemento è specificato dal parametro di modello VectorView, *T*.  
  


## <a name="getmany"></a>  Metodo VectorView::GetMany
Recupera una sequenza di elementi dall'oggetto VectorView corrente, a partire dall'indice specificato.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
virtual unsigned int GetMany(  
   unsigned int startIndex,   
   ::Platform::WriteOnlyArray<T>^ dest  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `startIndex`  
 Indice a base zero dell'inizio degli elementi da recuperare.  
  
 `dest`  
 Al termine di questa operazione, una matrice di elementi che inizia con l'elemento specificato da `startIndex` e finisce in corrispondenza l'ultimo elemento in VectorView.  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi recuperati.  
  


## <a name="indexof"></a>  Metodo VectorView::IndexOf
Cerca l'elemento specificato nell'oggetto VectorView corrente e, se lo trova, restituisce l'indice dell'elemento.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
virtual bool IndexOf(  
   T value,  
   unsigned int* index  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `value`  
 Elemento da cercare.  
  
 `index`  
 Indice in base zero dell'elemento se è stato trovato `value` del parametro; in caso contrario, 0.  
  
 Il parametro `index` è 0 se l'elemento è il primo elemento dell'oggetto VectorView o se l'elemento non è stato trovato. Se il valore restituito è `true`, l'elemento è stato trovato ed è il primo elemento; in caso contrario, l'elemento non è stato trovato.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se l'elemento specificato è stato trovato; in caso contrario, `false`.  
  


## <a name="size"></a>  Vectorview:: Size (metodo)
Restituisce il numero di elementi nell'oggetto VectorView corrente.  
  
### <a name="syntax"></a>Sintassi  
  
```  
  
virtual property unsigned int Size;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi nell'oggetto VectorView corrente.  
  


## <a name="ctor"></a>  Costruttore Vectorview
Inizializza una nuova istanza della classe VectorView.  
  
### <a name="syntax"></a>Sintassi  
  
```  
VectorView();  
explicit VectorView(  
   UInt32 size  
);  
VectorView(  
   UInt32 size,  
   T value  
);  
explicit VectorView(  
   const ::std::vector<T>& v  
);  
explicit VectorView(  
   ::std::vector<T>&& v  
);  
VectorView(  
   const T * ptr,  
   UInt32 size  
);  
  
template <  
   size_t N  
>  
explicit VectorView(  
   const T (&arr)[N]  
);  
  
template <  
   size_t N  
>  
explicit VectorView(  
   const ::std::array<T,  
   N>& a  
);  
  
explicit VectorView(  
   const ::Platform::Array<T>^ arr  
);  
  
template <  
   typename InIt  
>  
VectorView(  
   InItfirst,  
   InItlast  
);  
  
VectorView(  
   std::initializer_list<T> il  
);  
```  
  
### <a name="parameters"></a>Parametri  
 `InIt`  
 Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto VectorView corrente.  
  
 il  
 Oggetto [std:: initializer_list](../standard-library/initializer-list-class.md) i cui elementi verranno utilizzati per inizializzare VectorView.  
  
 `N`  
 Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto VectorView corrente.  
  
 `size`  
 Numero di elementi nell'oggetto VectorView.  
  
 `value`  
 Valore utilizzato per inizializzare ciascun elemento nell'oggetto VectorView corrente.  
  
 `v`  
 Un [elementi lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) per un [std:: Vector](../standard-library/vector-class.md) che viene utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `ptr`  
 Puntatore a `std::vector` utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `arr`  
 Oggetto [platform:: Array](../cppcx/platform-array-class.md) oggetto utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `a`  
 Oggetto [std:: Array](../standard-library/array-class-stl.md) oggetto utilizzato per inizializzare l'oggetto VectorView corrente.  
  
 `first`  
 Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto VectorView corrente. Il tipo di `first` viene passato mediante *un inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
 `last`  
 Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto VectorView corrente. Il tipo di `last` viene passato mediante *un inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  


  
## <a name="see-also"></a>Vedere anche  
 [Piattaforma Namespace](platform-namespace-c-cx.md)   
 [Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)