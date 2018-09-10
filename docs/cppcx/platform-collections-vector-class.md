---
title: Classe platform::Collections::Vector | Microsoft Docs
ms.custom: ''
ms.date: 12/30/2016
ms.technology: cpp-windows
ms.topic: reference
f1_keywords:
- COLLECTION/Platform::Collections::Vector::Vector
- COLLECTION/Platform::Collections::Vector::Append
- COLLECTION/Platform::Collections::Vector::Clear
- COLLECTION/Platform::Collections::Vector::First
- COLLECTION/Platform::Collections::Vector::GetAt
- COLLECTION/Platform::Collections::Vector::GetMany
- COLLECTION/Platform::Collections::Vector::GetView
- COLLECTION/Platform::Collections::Vector::IndexOf
- COLLECTION/Platform::Collections::Vector::InsertAt
- COLLECTION/Platform::Collections::Vector::ReplaceAll
- COLLECTION/Platform::Collections::Vector::RemoveAt
- COLLECTION/Platform::Collections::Vector::RemoveAtEnd
- COLLECTION/Platform::Collections::Vector::SetAt
- COLLECTION/Platform::Collections::Vector::Size
- COLLECTION/Platform::Collections::Vector::VectorChanged
dev_langs:
- C++
helpviewer_keywords:
- Vector Class (C++/Cx)
ms.assetid: aee8c076-9700-47c3-99b6-799fd3edb0ca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 36fe82bc5d17cd3c4951b008af28ba89b171c78f
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44103932"
---
# <a name="platformcollectionsvector-class"></a>Classe Platform::Collections::Vector

Rappresenta una raccolta sequenziale di oggetti a cui è possibile accedere tramite indice.

## <a name="syntax"></a>Sintassi

```
template <typename T, typename E>
   ref class Vector sealed;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo degli elementi contenuti nell'oggetto Vector.

*E*<br/>
Specifica un predicato binario per verificare l'uguaglianza con valori di tipo *T*. Il valore predefinito è `std::equal_to<T>`.

### <a name="remarks"></a>Note

I tipi consentiti sono:

1. Integer

1. classe di interfaccia ^

1. classe di riferimento pubblica^

1. value struct

1. classe enum pubblica

Il **vettore** classe è l'implementazione concreta di C++ del [Windows::Foundation::Collections::IVector](/uwp/api/Windows.Foundation.Collections.IVector_T_) interfaccia.

Se si prova a usare una **vettore** immettere un valore restituito pubblico o un parametro, l'errore del compilatore C3986 viene generato. È possibile correggere l'errore modificando il parametro o tipo di valore da restituire [Windows::Foundation::Collections::IVector](/uwp/api/Windows.Foundation.Collections.IVector_T_). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Vector:: Vector](#ctor)|Inizializza una nuova istanza della classe Vector.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Vector:: Append](#append)|Inserisce l'elemento specificato dopo l'ultimo elemento nel vettore corrente.|
|[Vector:: Clear](#clear)|Elimina tutti gli elementi nell'oggetto Vector corrente.|
|[Vector:: First](#first)|Restituisce un iteratore che specifica il primo elemento nell'oggetto Vector.|
|[Vector:: GetAt](#getat)|Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.|
|[Vector:: getmany](#getmany)|Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato.|
|[Vector:: GetView](#getview)|Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md).|
|[Vector:: IndexOf](#indexof)|Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.|
|[Vector:: InsertAt](#insertat)|Inserisce l'elemento specificato nell'oggetto Vector corrente dopo l'elemento identificato dall'indice specificato.|
|[Vector:: ReplaceAll](#replaceall)|Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.|
|[Vector:: RemoveAt](#removeat)|Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.|
|[Vector:: removeatend](#removeatend)|Elimina l'elemento alla fine dell'oggetto Vector corrente.|
|[Vector:: SetAt](#setat)|Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.|
|[Vector:: Size](#size)|Restituisce il numero di elementi nell'oggetto Vector corrente.|

### <a name="events"></a>Eventi

|||
|-|-|
|nome|Descrizione|
|evento [Windows::Foundation::Collection::VectorChangedEventHandler\<T > ^ VectorChanged](/uwp/api/windows.foundation.collections.vectorchangedeventhandler)|Si verifica quando l'oggetto Vector subisce delle modifiche.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Vector`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="append"></a>  Metodo Vector:: Append

Inserisce l'elemento specificato dopo l'ultimo elemento nel vettore corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Append(T item);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Elemento da inserire nel vettore. Il tipo di *articoli* è definito dalle *T* typename.

## <a name="clear"></a>  Metodo Vector:: Clear

Elimina tutti gli elementi nell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="first"></a>  Metodo Vector:: First

Restituisce un iteratore che fa riferimento al primo elemento nell'oggetto Vector.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator <T>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che fa riferimento al primo elemento in Vector.

### <a name="remarks"></a>Note

Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **automatica** digita parola chiave di deduzione dei tipi. Ad esempio `auto x = myVector->First();`. Questo iteratore conosce la lunghezza della raccolta.

Quando è necessaria una coppia di iteratori da passare a una funzione STL, Usa le funzioni free [Collections:: begin](../cppcx/begin-function.md) e [Windows](../cppcx/end-function.md)

## <a name="getat"></a>  Vector:: GetAt (metodo)

Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual T GetAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

### <a name="return-value"></a>Valore restituito

L'elemento specificato per il *indice* parametro. Il tipo di elemento è definito per il *T* typename.

## <a name="getmany"></a>  Vector:: getmany (metodo)

Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato e li copia nella matrice allocata dal chiamante.

### <a name="syntax"></a>Sintassi

```cpp
virtual unsigned int GetMany(
    unsigned int startIndex,
    Platform::WriteOnlyArray<T>^ dest);
```

### <a name="parameters"></a>Parametri

*startIndex*<br/>
Indice a base zero dell'inizio degli elementi da recuperare.

*dest*<br/>
Una matrice allocata dal chiamante di elementi che iniziano in corrispondenza dell'elemento specificato da *startIndex* e terminano all'ultimo elemento nel vettore.

### <a name="return-value"></a>Valore restituito

Numero di elementi recuperati.

### <a name="remarks"></a>Note

Questa funzione non deve essere usata direttamente dal codice client. Viene usato internamente nel [to_vector Function](../cppcx/to-vector-function.md) per consentire la conversione efficiente di istanze di Platform alle istanze di std:: Vector.

## <a name="getview"></a>  Metodo Vector:: GetView

Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero un oggetto IVectorView.

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IVectorView<T>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto IVectorView.

## <a name="indexof"></a>  Metodo Vector:: IndexOf

Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool IndexOf(T value, unsigned int* index);
```

### <a name="parameters"></a>Parametri

*valore*<br/>
Elemento da cercare.

*index*<br/>
Indice a base zero dell'elemento se parametro *valore* viene trovato; in caso contrario, 0.

Il *indice* parametro è 0 se l'elemento è il primo elemento del vettore o se l'elemento non è stato trovato. Se il valore restituito è `true`, l'elemento è stato trovato ed è il primo elemento; in caso contrario, l'elemento non è stato trovato.

### <a name="return-value"></a>Valore restituito

`true` se l'elemento specificato è stato trovato; in caso contrario, `false`.

### <a name="remarks"></a>Note

IndexOf usa std::find_if per trovare l'elemento. I tipi di elemento personalizzati dovrebbero quindi essere in rapporto di overload con l'operatore == e != in modo da abilitare i confronti di eguaglianza necessari per find_if.

##  <a name="insertat"></a>  Metodo Vector:: InsertAt

Inserisce l'elemento specificato nell'oggetto Vector corrente dopo l'elemento identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual void InsertAt(unsigned int index, T item)
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*<br/>
Un elemento da inserire in Vector dopo l'elemento specificato da *indice*. Il tipo di *articoli* è definito dalle *T* typename.

## <a name="removeat"></a>  Metodo Vector:: RemoveAt

Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void RemoveAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

## <a name="removeatend"></a>  Metodo Vector:: removeatend

Elimina l'elemento alla fine dell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void RemoveAtEnd();
```

## <a name="replaceall"></a>  Metodo Vector:: ReplaceAll

Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.

### <a name="syntax"></a>Sintassi

```cpp
virtual void ReplaceAll(const ::Platform::Array<T>^ arr);
```

### <a name="parameters"></a>Parametri

*arr*<br/>
Una matrice di oggetti il cui tipo è definito per il *T* typename.

## <a name="setat"></a>  Metodo Vector:: SetAt

Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual void SetAt(unsigned int index, T item);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*<br/>
Valore da assegnare all'elemento specificato. Il tipo di *articoli* è definito dalle *T* typename.

## <a name="size"></a>  Metodo Vector:: Size

Restituisce il numero di elementi nell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto Vector corrente.

## <a name="ctor"></a>  Costruttore Vector:: Vector

Inizializza una nuova istanza della classe Vector.

### <a name="syntax"></a>Sintassi

```cpp
Vector();

explicit Vector(unsigned int size);
Vector( unsigned int size, T value);
template <typename U> explicit Vector( const ::std::vector<U>& v);
template <typename U> explicit Vector( std::vector<U>&& v);

Vector( const T * ptr, unsigned int size);
template <size_t N> explicit Vector(const T(&arr)[N]);
template <size_t N> explicit Vector(const std::array<T, N>& a);
explicit Vector(const Array<T>^ arr);

template <typename InIt> Vector(InIt first, InIt last);
Vector(std::initializer_list<T> il);
```

### <a name="parameters"></a>Parametri

*a*<br/>
Oggetto [std:: Array](../standard-library/array-class-stl.md) che verrà utilizzato per inizializzare l'oggetto Vector.

*arr*<br/>
Oggetto [platform:: Array](../cppcx/platform-array-class.md) che verrà utilizzato per inizializzare l'oggetto Vector.

*InIt*<br/>
Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*il*<br/>
Oggetto [std:: initializer_list](../standard-library/initializer-list-class.md) degli oggetti di tipo *T* che verrà utilizzato per inizializzare l'oggetto Vector.

*N*<br/>
Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*size*<br/>
Numero di elementi nell'oggetto Vector.

*valore*<br/>
Valore utilizzato per inizializzare ciascun elemento nell'oggetto Vector corrente.

*v*<br/>
Un' [Lvalues e Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un [std:: Vector](../standard-library/vector-class.md) che viene usato per inizializzare l'oggetto Vector corrente.

*ptr*<br/>
Puntatore a `std::vector` utilizzato per inizializzare l'oggetto Vector corrente.

*first*<br/>
Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo della *primo* viene passato per mezzo della *inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

*last*<br/>
Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo della *ultima* viene passato per mezzo della *inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedere anche

[Platform Namespace](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)