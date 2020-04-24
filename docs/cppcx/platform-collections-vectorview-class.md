---
title: Classe Platform::Collections::VectorView
ms.date: 12/30/2016
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::VectorView::VectorView
- COLLECTION/Platform::Collections::VectorView::First
- COLLECTION/Platform::Collections::VectorView::GetAt
- COLLECTION/Platform::Collections::VectorView::GetMany
- COLLECTION/Platform::Collections::VectorView::IndexOf
- COLLECTION/Platform::Collections::VectorView::Size
helpviewer_keywords:
- VectorView Class
ms.assetid: 05cd461d-dce7-49d3-b0e7-2e5c78ed8192
ms.openlocfilehash: 7f12c7b926cd8d3d8fc892cff6f2245e7c216219
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032226"
---
# <a name="platformcollectionsvectorview-class"></a>Classe Platform::Collections::VectorView

Rappresenta una visualizzazione in sola lettura di una raccolta sequenziale di oggetti a cui è possibile accedere singolarmente attraverso l'indice. Il tipo di ciascun oggetto nella raccolta è specificato dal parametro del modello.

## <a name="syntax"></a>Sintassi

```
template <typename T, typename E>
   ref class VectorView sealed;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Tipo degli elementi contenuti nell'oggetto `VectorView` .

*E (in questo modo*<br/>
Specifica un predicato binario per verificare l'uguaglianza con valori di tipo `T`. Il valore predefinito è `std::equal_to<T>`.

### <a name="remarks"></a>Osservazioni

La `VectorView` classe implementa l'interfaccia [Windows::Foundation::Collections::IVectorView\<T>](/uwp/api/windows.foundation.collections.ivectorview-1) e il supporto per gli iteratori della libreria di modelli standard.

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[VectorView::VectorView](#ctor)|Inizializza una nuova istanza della classe VectorView.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[VectorView::Primo](#first)|Restituisce un iteratore che specifica il primo elemento in VectorView.|
|[VectorView::GetAt](#getat)|Recupera l'elemento dell'oggetto VectorView corrente indicato dall'indice specificato.|
|[VectorView::GetMany](#getmany)|Recupera una sequenza di elementi dall'oggetto VectorView corrente, a partire dall'indice specificato.|
|[VectorView::IndexOf](#indexof)|Cerca l'elemento specificato nell'oggetto VectorView corrente e, se lo trova, restituisce l'indice dell'elemento.|
|[VectorView::Size](#size)|Restituisce il numero di elementi nell'oggetto VectorView corrente.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`VectorView`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="vectorviewfirst-method"></a><a name="first"></a>Metodo VectorView::First

Restituisce un iteratore che specifica il primo elemento in VectorView.

### <a name="syntax"></a>Sintassi

```

virtual Windows::Foundation::Collections::IIterator<T>^
   First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che specifica il primo elemento in VectorView.

### <a name="remarks"></a>Osservazioni

Un modo pratico per contenere l'iteratore restituito da First() consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave **auto** type deduction. Ad esempio: `auto x = myVectorView->First();`.

## <a name="vectorviewgetat-method"></a><a name="getat"></a>Metodo VectorView::GetAt

Recupera l'elemento dell'oggetto VectorView corrente indicato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```

T GetAt(
   UInt32 index
);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto VectorView.

### <a name="return-value"></a>Valore restituito

Elemento specificato dal parametro `index`. Il tipo di elemento è specificato dal parametro di modello VectorView, *T*.

## <a name="vectorviewgetmany-method"></a><a name="getmany"></a>Metodo VectorView::GetMany

Recupera una sequenza di elementi dall'oggetto VectorView corrente, a partire dall'indice specificato.

### <a name="syntax"></a>Sintassi

```

virtual unsigned int GetMany(
   unsigned int startIndex,
   ::Platform::WriteOnlyArray<T>^ dest
);
```

### <a name="parameters"></a>Parametri

*startIndex*<br/>
Indice a base zero dell'inizio degli elementi da recuperare.

*dest*<br/>
Al termine dell'operazione, una matrice di elementi che inizia con l'elemento specificato da `startIndex` e termina con l'ultimo elemento in VectorView.

### <a name="return-value"></a>Valore restituito

Numero di elementi recuperati.

## <a name="vectorviewindexof-method"></a><a name="indexof"></a>Metodo VectorView::IndexOf

Cerca l'elemento specificato nell'oggetto VectorView corrente e, se lo trova, restituisce l'indice dell'elemento.

### <a name="syntax"></a>Sintassi

```

virtual bool IndexOf(
   T value,
   unsigned int* index
);
```

### <a name="parameters"></a>Parametri

*value*<br/>
Elemento da cercare.

*Indice*<br/>
Indice in base zero dell'elemento se è stato trovato `value` del parametro; in caso contrario, 0.

Il *index* index parametro è 0 se l'elemento è il primo elemento del `VectorView` o l'elemento non è stato trovato. Se il valore restituito è **true**, l'elemento è stato trovato ed è il primo elemento; in caso contrario, l'elemento non è stato trovato.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento specificato viene trovato; in caso contrario, **false**.

## <a name="vectorviewsize-method"></a><a name="size"></a>Metodo VectorView::Size

Restituisce il numero di elementi nell'oggetto VectorView corrente.

### <a name="syntax"></a>Sintassi

```

virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto VectorView corrente.

## <a name="vectorviewvectorview-constructor"></a><a name="ctor"></a>VettorView::VectorView Costruttore

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

*Init*<br/>
Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto VectorView corrente.

*il il*<br/>
Oggetto [std::initializer_list](../standard-library/initializer-list-class.md) i cui elementi verranno utilizzati per inizializzare il VectorView.

*N*<br/>
Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto VectorView corrente.

*size*<br/>
Numero di elementi nell'oggetto VectorView.

*value*<br/>
Valore utilizzato per inizializzare ciascun elemento nell'oggetto VectorView corrente.

*Presso*<br/>
Un [Lvalues e Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un [std::vector](../standard-library/vector-class.md) che viene utilizzato per inizializzare l'oggetto VectorView corrente.

*Ptr*<br/>
Puntatore a `std::vector` utilizzato per inizializzare l'oggetto VectorView corrente.

*Arrangiamento*<br/>
Oggetto [Platform::Array](../cppcx/platform-array-class.md) utilizzato per inizializzare l'oggetto VectorView corrente.

*Un*<br/>
Oggetto [std::array](../standard-library/array-class-stl.md) utilizzato per inizializzare l'oggetto VectorView corrente.

*Prima*<br/>
Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto VectorView corrente. Il tipo `first` di viene passato per mezzo di *inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

*Ultima*<br/>
Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto VectorView corrente. Il tipo `last` di viene passato per mezzo di *inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi della piattaforma](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
