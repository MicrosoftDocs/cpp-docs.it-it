---
title: Classe Platform::Collections::Vector
ms.date: 12/04/2019
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
helpviewer_keywords:
- Vector Class (C++/Cx)
ms.assetid: aee8c076-9700-47c3-99b6-799fd3edb0ca
ms.openlocfilehash: b7774c2cdab7b9abcb3ebac1453779055eacf897
ms.sourcegitcommit: a6d63c07ab9ec251c48bc003ab2933cf01263f19
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/05/2019
ms.locfileid: "74857892"
---
# <a name="platformcollectionsvector-class"></a>Classe Platform::Collections::Vector

Rappresenta una raccolta sequenziale di oggetti a cui è possibile accedere tramite indice. Implementa [Windows:: Foundation:: Collections:: IObservableVector](/uwp/api/Windows.Foundation.Collections.IObservableVector_T_) per semplificare la [Data Binding](/windows/uwp/data-binding/data-binding-in-depth)XAML.

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

1. integer

1. classe di interfaccia ^

1. classe di riferimento pubblica^

1. struct di valore

1. classe enum pubblica

La classe **vector** è l' C++ implementazione concreta dell'interfaccia [Windows:: Foundation:: Collections:: IVector](/uwp/api/Windows.Foundation.Collections.IVector_T_) .

Se si tenta di usare un tipo **vector** in un valore restituito pubblico o in un parametro, viene generato l'errore del compilatore C3986. È possibile correggere l'errore modificando il tipo di parametro o di valore restituito in [Windows::Foundation::Collections::IVector](/uwp/api/Windows.Foundation.Collections.IVector_T_). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Name|Descrizione|
|----------|-----------------|
|[Vector:: Vector](#ctor)|Inizializza una nuova istanza della classe Vector.|

### <a name="public-methods"></a>Metodi pubblici

|Name|Descrizione|
|----------|-----------------|
|[Vector:: Append](#append)|Inserisce l'elemento specificato dopo l'ultimo elemento nel vettore corrente.|
|[Vector:: Clear](#clear)|Elimina tutti gli elementi nell'oggetto Vector corrente.|
|[Vector:: First](#first)|Restituisce un iteratore che specifica il primo elemento nell'oggetto Vector.|
|[Vector:: GetA](#getat)|Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.|
|[Vector:: GetMany](#getmany)|Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato.|
|[Vector:: GetView](#getview)|Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md).|
|[Vector::IndexOf](#indexof)|Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.|
|[Vector:: InsertAt](#insertat)|Inserisce l'elemento specificato nel vettore corrente in corrispondenza dell'elemento identificato dall'indice specificato.|
|[Vector::ReplaceAll](#replaceall)|Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.|
|[Vector::RemoveAt](#removeat)|Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.|
|[Vector:: RemoveAtEnd](#removeatend)|Elimina l'elemento alla fine dell'oggetto Vector corrente.|
|[Vector::SetAt](#setat)|Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.|
|[Vector::Size](#size)|Restituisce il numero di elementi nell'oggetto Vector corrente.|

### <a name="events"></a>eventi

|||
|-|-|
|Name|Descrizione|
|evento [Windows:: Foundation:: Collection:: VectorChangedEventHandler\<t > ^ VectorChanged](/uwp/api/windows.foundation.collections.vectorchangedeventhandler)|Si verifica quando l'oggetto Vector subisce delle modifiche.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Vector`

### <a name="requirements"></a>Requisiti di

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="append"></a>Metodo Vector:: Append

Inserisce l'elemento specificato dopo l'ultimo elemento nel vettore corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Append(T item);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Elemento da inserire nel vettore. Il tipo di *elemento* è definito dal TypeName *T* .

## <a name="clear"></a>Metodo Vector:: Clear

Elimina tutti gli elementi nell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="first"></a>Metodo Vector:: First

Restituisce un iteratore che fa riferimento al primo elemento nell'oggetto Vector.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator <T>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che fa riferimento al primo elemento in Vector.

### <a name="remarks"></a>Note

Un modo pratico per conservare l'iteratore restituito da First () consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave di deduzione del tipo **auto** . Ad esempio `auto x = myVector->First();`. Questo iteratore conosce la lunghezza della raccolta.

Quando è necessaria una coppia di iteratori da passare a una funzione STL, usare le funzioni gratuite [Windows:: Foundation:: Collections:: Begin](../cppcx/begin-function.md) e [Windows:: Foundation:: Collections:: end](../cppcx/end-function.md)

## <a name="getat"></a>Metodo Vector:: GetA

Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual T GetAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

### <a name="return-value"></a>Valore restituito

Elemento specificato dal parametro *index* . Il tipo di elemento è definito dall'oggetto TypeName *T* .

## <a name="getmany"></a>Metodo Vector:: GetMany

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
Matrice allocata dal chiamante di elementi che iniziano in corrispondenza dell'elemento specificato da *startIndex* e terminano in corrispondenza dell'ultimo elemento nel vettore.

### <a name="return-value"></a>Valore restituito

Numero di elementi recuperati.

### <a name="remarks"></a>Note

Questa funzione non deve essere usata direttamente dal codice client. Viene usato internamente nella [funzione to_vector](../cppcx/to-vector-function.md) per consentire una conversione efficiente di Platform:: Vector istanze in istanze std:: Vector.

## <a name="getview"></a>Metodo Vector:: GetView

Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero un oggetto IVectorView.

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IVectorView<T>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto IVectorView.

## <a name="indexof"></a>Metodo Vector:: IndexOf

Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool IndexOf(T value, unsigned int* index);
```

### <a name="parameters"></a>Parametri

*valore*<br/>
Elemento da cercare.

*index*<br/>
Indice in base zero dell'elemento se viene trovato il *valore* del parametro; in caso contrario, 0.

Il parametro *index* è 0 se l'elemento è il primo elemento del vettore o se l'elemento non è stato trovato. Se il valore restituito è **true**, l'elemento è stato trovato ed è il primo elemento. in caso contrario, l'elemento non è stato trovato.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento specificato viene trovato; in caso contrario, **false**.

### <a name="remarks"></a>Note

IndexOf usa std::find_if per trovare l'elemento. I tipi di elemento personalizzati dovrebbero quindi essere in rapporto di overload con l'operatore == e != in modo da abilitare i confronti di eguaglianza necessari per find_if.

##  <a name="insertat"></a>Metodo Vector:: InsertAt

Inserisce l'elemento specificato nel vettore corrente in corrispondenza dell'elemento identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual void InsertAt(unsigned int index, T item)
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*<br/>
Elemento da inserire nel vettore in corrispondenza dell'elemento specificato da *index*. Il tipo di *elemento* è definito dal TypeName *T* .

## <a name="removeat"></a>Metodo Vector:: RemoveAt

Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void RemoveAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

## <a name="removeatend"></a>Metodo Vector:: RemoveAtEnd

Elimina l'elemento alla fine dell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void RemoveAtEnd();
```

## <a name="replaceall"></a>Metodo Vector:: ReplaceAll

Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.

### <a name="syntax"></a>Sintassi

```cpp
virtual void ReplaceAll(const ::Platform::Array<T>^ arr);
```

### <a name="parameters"></a>Parametri

*arr*<br/>
Matrice di oggetti il cui tipo è definito dall'oggetto TypeName *T* .

## <a name="setat"></a>Metodo Vector:: SetAt

Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual void SetAt(unsigned int index, T item);
```

### <a name="parameters"></a>Parametri

*index*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*<br/>
Valore da assegnare all'elemento specificato. Il tipo di *elemento* è definito dal TypeName *T* .

## <a name="size"></a>Metodo Vector:: size

Restituisce il numero di elementi nell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto Vector corrente.

## <a name="ctor"></a>Costruttore vector:: Vector

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
[Std:: Array](../standard-library/array-class-stl.md) che verrà usato per inizializzare il vettore.

*arr*<br/>
Oggetto [Platform:: Array](../cppcx/platform-array-class.md) che verrà usato per inizializzare il vettore.

*InIt*<br/>
Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*il*<br/>
[Std:: initializer_list](../standard-library/initializer-list-class.md) di oggetti di tipo *T* che verranno utilizzati per inizializzare il vettore.

*N*<br/>
Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*size*<br/>
Numero di elementi nell'oggetto Vector.

*valore*<br/>
Valore utilizzato per inizializzare ciascun elemento nell'oggetto Vector corrente.

*v*<br/>
Oggetto [lvalue e rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un oggetto [std:: Vector](../standard-library/vector-class.md) utilizzato per inizializzare il vettore corrente.

*ptr*<br/>
Puntatore a `std::vector` utilizzato per inizializzare l'oggetto Vector corrente.

*first*<br/>
Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo di *primo* viene passato per mezzo dell' *invio perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

*last*<br/>
Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo dell' *ultimo* viene passato per mezzo dell' *invio perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedere anche

[Raccolte (C++/CX)](collections-c-cx.md)<br/>
[Spazio dei nomi Platform](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
