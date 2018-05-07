---
title: Classe platform::Collections::Vector | Documenti Microsoft
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
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c7433ed3d1a81704180aa724424a39d39b193f15
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="platformcollectionsvector-class"></a>Classe Platform::Collections::Vector

Rappresenta una raccolta sequenziale di oggetti a cui è possibile accedere tramite indice.

## <a name="syntax"></a>Sintassi

```
template <typename T, typename E>
   ref class Vector sealed;
```

### <a name="parameters"></a>Parametri

*T*  
Tipo degli elementi contenuti nell'oggetto Vector.

*E*  
Specifica un predicato binario per verificare l'uguaglianza con valori di tipo *T*. Il valore predefinito è `std::equal_to<T>`.

### <a name="remarks"></a>Note

I tipi consentiti sono:

1. Integer

1. classe di interfaccia ^

1. classe di riferimento pubblica^

1. value struct

1. classe enum pubblica

Il **vettore** classe è l'implementazione concreta di C++ del [Windows::Foundation::Collections::IVector](/uwp/api/Windows.Foundation.Collections.IVector_T_) interfaccia.

Se si tenta di utilizzare un **vettore** immettere un valore restituito pubblico o un parametro, l'errore del compilatore C3986 viene generato. È possibile correggere l'errore modificando il parametro o tipo valore restituito [Windows::Foundation::Collections::IVector](/uwp/api/Windows.Foundation.Collections.IVector_T_). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

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
|[Vector](#first)|Restituisce un iteratore che specifica il primo elemento nell'oggetto Vector.|
|[Vector:: GetAt](#getat)|Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.|
|[Vector:: getmany](#getmany)|Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato.|
|[GetView](#getview)|Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md).|
|[IndexOf](#indexof)|Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.|
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
|evento [Windows::Foundation::Collection::VectorChangedEventHandler\<T > ^ VectorChanged](http://go.microsoft.com/fwlink/p/?LinkId=262644)|Si verifica quando l'oggetto Vector subisce delle modifiche.|

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

*index*  
Elemento da inserire nel vettore. Il tipo di *elemento* è definito dal *T* typename.

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

Un modo pratico per contenere l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la **auto** parola chiave di deduzione del tipo. Ad esempio `auto x = myVector->First();`. Questo iteratore conosce la lunghezza della raccolta.

Quando è necessaria una coppia di iteratori da passare a una funzione STL, Usa le funzioni free [Collections:: begin](../cppcx/begin-function.md) e [Windows](../cppcx/end-function.md)

## <a name="getat"></a>  Vector:: GetAt (metodo)

Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual T GetAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*index*  
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

### <a name="return-value"></a>Valore restituito

L'elemento specificato da di *indice* parametro. Il tipo di elemento è definito per il *T* typename.

## <a name="getmany"></a>  Vector:: getmany (metodo)

Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato e li copia nella matrice allocata dal chiamante.

### <a name="syntax"></a>Sintassi

```cpp
virtual unsigned int GetMany(
    unsigned int startIndex,
    Platform::WriteOnlyArray<T>^ dest);
```

### <a name="parameters"></a>Parametri

*startIndex*  
Indice a base zero dell'inizio degli elementi da recuperare.

*dest*  
Una matrice allocata dal chiamante di elementi che inizia con l'elemento specificato da *startIndex* e finisce in corrispondenza l'ultimo elemento nel vettore.

### <a name="return-value"></a>Valore restituito

Numero di elementi recuperati.

### <a name="remarks"></a>Note

Questa funzione non deve essere usata direttamente dal codice client. È usata internamente nel [to_vector Function](../cppcx/to-vector-function.md) per consentire la conversione efficiente di istanze di Platform alle istanze di std:: Vector.

## <a name="getview"></a>  Metodo Vector:: GetView

Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero un oggetto IVectorView.

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IVectorView<T>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto IVectorView.

## <a name="indexof"></a>  Vector:: IndexOf (metodo)

Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool IndexOf(T value, unsigned int* index);
```

### <a name="parameters"></a>Parametri

*valore*  
Elemento da cercare.

*index*  
L'indice in base zero dell'elemento se parametro *valore* è stato trovato; in caso contrario, 0.

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

*index*  
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*  
Un elemento da inserire in Vector dopo l'elemento specificato da *indice*. Il tipo di *elemento* è definito dal *T* typename.

## <a name="removeat"></a>  Metodo Vector:: RemoveAt

Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void RemoveAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*index*  
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

*arr*  
Una matrice di oggetti il cui tipo è definito per il *T* typename.

## <a name="setat"></a>  Metodo Vector:: SetAt

Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual void SetAt(unsigned int index, T item);
```

### <a name="parameters"></a>Parametri

*index*  
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*  
Valore da assegnare all'elemento specificato. Il tipo di *elemento* è definito dal *T* typename.

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

*a*  
Oggetto [std:: Array](../standard-library/array-class-stl.md) che verrà usato per inizializzare l'oggetto Vector.

*arr*  
Oggetto [platform:: Array](../cppcx/platform-array-class.md) che verrà usato per inizializzare l'oggetto Vector.

*InIt*  
Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*il*  
Oggetto [std:: initializer_list](../standard-library/initializer-list-class.md) di oggetti di tipo *T* che verrà usato per inizializzare l'oggetto Vector.

*N*  
Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*size*  
Numero di elementi nell'oggetto Vector.

*valore*  
Valore utilizzato per inizializzare ciascun elemento nell'oggetto Vector corrente.

*v*  
Un [elementi lvalue e Rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md) per un [std:: Vector](../standard-library/vector-class.md) utilizzato per inizializzare l'oggetto Vector corrente.

*ptr*  
Puntatore a `std::vector` utilizzato per inizializzare l'oggetto Vector corrente.

*first*  
Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo di *prima* viene passato mediante *un inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

*last*  
Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo di *ultimo* viene passato mediante *un inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedere anche

[Piattaforma Namespace](platform-namespace-c-cx.md)  
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)  