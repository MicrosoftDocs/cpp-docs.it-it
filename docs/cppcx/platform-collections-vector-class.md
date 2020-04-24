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
ms.openlocfilehash: 60c82a113bc19e9652af8c1ad531e1c479077f20
ms.sourcegitcommit: 89d9e1cb08fa872483d1cde98bc2a7c870e505e9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "82032122"
---
# <a name="platformcollectionsvector-class"></a>Classe Platform::Collections::Vector

Rappresenta una raccolta sequenziale di oggetti a cui è possibile accedere tramite indice. Implementa [Windows::Foundation::Collections::IObservableVector](/uwp/api/windows.foundation.collections.iobservablevector-1) per facilitare [l'associazione dati](/windows/uwp/data-binding/data-binding-in-depth)XAML.

## <a name="syntax"></a>Sintassi

```
template <typename T, typename E>
   ref class Vector sealed;
```

### <a name="parameters"></a>Parametri

*T*<br/>
Tipo degli elementi contenuti nell'oggetto Vector.

*E (in questo modo*<br/>
Specifica un predicato binario per il test di uguaglianza con valori di tipo *T*. Il valore `std::equal_to<T>`predefinito è .

### <a name="remarks"></a>Osservazioni

I tipi consentiti sono:

1. Integer

1. classe di interfaccia

1. classe di riferimento pubblica^

1. value struct

1. classe enum pubblica

La classe **Vector** è l'implementazione concreta di [Windows::Foundation::Collections::IVector.](/uwp/api/windows.foundation.collections.ivector-1)

Se si tenta di utilizzare un tipo **Vector** in un parametro o un valore restituito pubblico, viene generato l'errore del compilatore C3986. È possibile correggere l'errore modificando il tipo di parametro o di valore restituito in [Windows::Foundation::Collections::IVector](/uwp/api/windows.foundation.collections.ivector-1). Per ulteriori informazioni, vedi [Raccolte (C++/CX)](../cppcx/collections-c-cx.md).

### <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Vettore::Vettore](#ctor)|Inizializza una nuova istanza della classe Vector.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Vector::Append](#append)|Inserisce l'elemento specificato dopo l'ultimo elemento nel vettore corrente.|
|[Vettore::Cancella](#clear)|Elimina tutti gli elementi nell'oggetto Vector corrente.|
|[Vettore::Primo](#first)|Restituisce un iteratore che specifica il primo elemento nell'oggetto Vector.|
|[Vettore::GetAt](#getat)|Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.|
|[Vettore::GetMany](#getmany)|Recupera una sequenza di elementi dall'oggetto Vector corrente, a partire dall'indice specificato.|
|[Vettore::GetView](#getview)|Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero [Platform::Collections::VectorView](../cppcx/platform-collections-vectorview-class.md).|
|[Vettore::Indice](#indexof)|Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.|
|[Vector::InsertAt](#insertat)|Inserisce l'elemento specificato nel vettore corrente in corrispondenza dell'elemento identificato dall'indice specificato.|
|[Vector::ReplaceAll](#replaceall)|Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.|
|[Vector::RemoveAt](#removeat)|Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.|
|[Vector::RemoveAtEnd](#removeatend)|Elimina l'elemento alla fine dell'oggetto Vector corrente.|
|[Vector::SetAt](#setat)|Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.|
|[Vettore::Dimensione](#size)|Restituisce il numero di elementi nell'oggetto Vector corrente.|

### <a name="events"></a>Events

|||
|-|-|
|Nome|Descrizione|
|evento [Windows::Foundation::Collection::VectorChangedEventHandler\<T>: VectorChanged](/uwp/api/windows.foundation.collections.vectorchangedeventhandler-1)|Si verifica quando l'oggetto Vector subisce delle modifiche.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`Vector`

### <a name="requirements"></a>Requisiti

**Intestazione:** collection.h

**Spazio dei nomi:** Platform::Collections

## <a name="vectorappend-method"></a><a name="append"></a>Metodo Vector::Append

Inserisce l'elemento specificato dopo l'ultimo elemento nel vettore corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Append(T item);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Elemento da inserire nel vettore. Il tipo di *elemento* è definito dal nome tipo *T.*

## <a name="vectorclear-method"></a><a name="clear"></a>Metodo Vector::Clear

Elimina tutti gli elementi nell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void Clear();
```

## <a name="vectorfirst-method"></a><a name="first"></a>Metodo Vector::First

Restituisce un iteratore che fa riferimento al primo elemento nell'oggetto Vector.

### <a name="syntax"></a>Sintassi

```cpp
virtual Windows::Foundation::Collections::IIterator <T>^ First();
```

### <a name="return-value"></a>Valore restituito

Iteratore che fa riferimento al primo elemento in Vector.

### <a name="remarks"></a>Osservazioni

Un modo pratico per contenere l'iteratore restituito da First() consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave **auto** type deduction. Ad esempio: `auto x = myVector->First();`. Questo iteratore conosce la lunghezza della raccolta.

Quando è necessaria una coppia di iteratori per passare a una funzione STL, usare le funzioni gratuite [Windows::Foundation::Collections::begin](../cppcx/begin-function.md) e [Windows::Foundation::Collections::end](../cppcx/end-function.md)

## <a name="vectorgetat-method"></a><a name="getat"></a>Metodo Vector::GetAt

Recupera l'elemento dell'oggetto Vector corrente identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual T GetAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

### <a name="return-value"></a>Valore restituito

Elemento specificato dal parametro *index.* Il tipo di elemento è definito dal nome tipo *T.*

## <a name="vectorgetmany-method"></a><a name="getmany"></a>Metodo Vector::GetMany

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

### <a name="remarks"></a>Osservazioni

Questa funzione non deve essere usata direttamente dal codice client. Viene utilizzato internamente nella [funzione to_vector](../cppcx/to-vector-function.md) per consentire la conversione efficiente delle intance Platform::Vector in std::vector.

## <a name="vectorgetview-method"></a><a name="getview"></a>Metodo Vector::GetView

Restituisce una visualizzazione di sola lettura di un oggetto Vector, ovvero un oggetto IVectorView.

### <a name="syntax"></a>Sintassi

```cpp
Windows::Foundation::Collections::IVectorView<T>^ GetView();
```

### <a name="return-value"></a>Valore restituito

Oggetto IVectorView.

## <a name="vectorindexof-method"></a><a name="indexof"></a>Metodo Vector::IndexOf

Cerca l'elemento specificato nell'oggetto Vector corrente e, se lo trova, restituisce l'indice dell'elemento.

### <a name="syntax"></a>Sintassi

```cpp
virtual bool IndexOf(T value, unsigned int* index);
```

### <a name="parameters"></a>Parametri

*value*<br/>
Elemento da cercare.

*Indice*<br/>
Indice in base zero dell'elemento se viene trovato il *valore* del parametro; in caso contrario, 0.

Il parametro *index* è 0 se l'elemento è il primo elemento del vettore o l'elemento non è stato trovato. Se il valore restituito è **true**, l'elemento è stato trovato ed è il primo elemento; in caso contrario, l'elemento non è stato trovato.

### <a name="return-value"></a>Valore restituito

**true** se l'elemento specificato viene trovato; in caso contrario, **false**.

### <a name="remarks"></a>Osservazioni

IndexOf usa std::find_if per trovare l'elemento. I tipi di elemento personalizzati dovrebbero quindi essere in rapporto di overload con l'operatore == e != in modo da abilitare i confronti di eguaglianza necessari per find_if.

## <a name="vectorinsertat-method"></a><a name="insertat"></a>Metodo Vector::InsertAt

Inserisce l'elemento specificato nel vettore corrente in corrispondenza dell'elemento identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual void InsertAt(unsigned int index, T item)
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*<br/>
Elemento da inserire nel vettore in corrispondenza dell'elemento specificato *dall'indice.* Il tipo di *elemento* è definito dal nome tipo *T.*

## <a name="vectorremoveat-method"></a><a name="removeat"></a>Metodo Vector::RemoveAt

Elimina l'elemento identificato dall'indice specificato dall'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void RemoveAt(unsigned int index);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

## <a name="vectorremoveatend-method"></a><a name="removeatend"></a>Metodo Vector::RemoveAtEnd

Elimina l'elemento alla fine dell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual void RemoveAtEnd();
```

## <a name="vectorreplaceall-method"></a><a name="replaceall"></a>Metodo Vector::ReplaceAll

Elimina gli elementi nell'oggetto Vector corrente, quindi li inserisce dalla matrice specificata.

### <a name="syntax"></a>Sintassi

```cpp
virtual void ReplaceAll(const ::Platform::Array<T>^ arr);
```

### <a name="parameters"></a>Parametri

*Arrangiamento*<br/>
Matrice di oggetti il cui tipo è definito dal nome tipo *T.*

## <a name="vectorsetat-method"></a><a name="setat"></a>Metodo Vector::SetAt

Assegna il valore specificato all'elemento nell'oggetto Vector corrente che è identificato dall'indice specificato.

### <a name="syntax"></a>Sintassi

```cpp
virtual void SetAt(unsigned int index, T item);
```

### <a name="parameters"></a>Parametri

*Indice*<br/>
Intero senza segno in base zero che specifica un particolare elemento nell'oggetto Vector.

*item*<br/>
Valore da assegnare all'elemento specificato. Il tipo di *elemento* è definito dal nome tipo *T.*

## <a name="vectorsize-method"></a><a name="size"></a>Metodo Vector::Size

Restituisce il numero di elementi nell'oggetto Vector corrente.

### <a name="syntax"></a>Sintassi

```cpp
virtual property unsigned int Size;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nell'oggetto Vector corrente.

## <a name="vectorvector-constructor"></a><a name="ctor"></a>Vettore::Vector Costruttore

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

*Un*<br/>
Oggetto [std::array](../standard-library/array-class-stl.md) che verrà utilizzato per inizializzare il vettore.

*Arrangiamento*<br/>
Oggetto [Platform::Array](../cppcx/platform-array-class.md) che verrà utilizzato per inizializzare il vettore.

*Init*<br/>
Tipo di una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*il il*<br/>
Oggetto [std::initializer_list](../standard-library/initializer-list-class.md) di oggetti di tipo *T* che verranno utilizzati per inizializzare il vettore.

*N*<br/>
Numero di elementi in una raccolta di oggetti utilizzati per inizializzare l'oggetto Vector corrente.

*size*<br/>
Numero di elementi nell'oggetto Vector.

*value*<br/>
Valore utilizzato per inizializzare ciascun elemento nell'oggetto Vector corrente.

*Presso*<br/>
Un [Lvalues e Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) a un [std::vector](../standard-library/vector-class.md) che viene utilizzato per inizializzare il vettore corrente.

*Ptr*<br/>
Puntatore a `std::vector` utilizzato per inizializzare l'oggetto Vector corrente.

*Prima*<br/>
Primo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo di *primo* viene passato per mezzo di *inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

*Ultima*<br/>
Ultimo elemento di una sequenza di oggetti utilizzati per inizializzare l'oggetto Vector corrente. Il tipo di *ultimo* viene passato per mezzo di *inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

## <a name="see-also"></a>Vedere anche

[Raccolte (C](collections-c-cx.md)<br/>
[Spazio dei nomi della piattaforma](platform-namespace-c-cx.md)<br/>
[Creazione di componenti Windows Runtime in C++](/windows/uwp/winrt-components/creating-windows-runtime-components-in-cpp)
