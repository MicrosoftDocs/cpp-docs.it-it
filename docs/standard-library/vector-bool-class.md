---
title: Classe vector&lt;bool&gt;
ms.date: 11/04/2016
f1_keywords:
- vector<bool>
- vector/std::vector::flip
helpviewer_keywords:
- std::vector [C++], const_pointer
- std::vector [C++], const_reference
- std::vector [C++], pointer
- std::vector [C++], flip
- std::vector [C++], swap
ms.assetid: 8028c8ed-ac9c-4f06-aba1-5de45c00aafb
ms.openlocfilehash: 4043b46bf2f93b362de029577fe9ac3c11dbcaa2
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79443933"
---
# <a name="vectorltboolgt-class"></a>Classe vector&lt;bool&gt;

La classe `vector<bool>` è una specializzazione parziale di [vector](../standard-library/vector-class.md) per gli elementi di tipo **bool**. Dispone di un allocatore per il tipo sottostante usato dalla specializzazione, che fornisce l'ottimizzazione dello spazio archiviando un valore **bool** per bit.

## <a name="syntax"></a>Sintassi

```cpp
template <class Allocator = allocator<bool>>
class vector<bool, Allocator>
```

## <a name="remarks"></a>Osservazioni

La specializzazione del modello di classe si comporta come vector, a eccezione delle differenze descritte in questo articolo.

Le operazioni che gestiscono il tipo **bool** corrispondono ai valori nell'archiviazione del contenitore. `allocator_traits::construct` non viene utilizzato per la costruzione di tali valori.

### <a name="typedefs"></a>Typedef

|Nome tipo|Descrizione|
|-|-|
|[const_pointer](#const_pointer)|typedef di un `const_iterator` che può essere utilizzato come puntatore costante a un elemento Boolean di `vector<bool>`.|
|[const_reference](#const_reference)|Typedef per **bool**. Dopo l'inizializzazione, non rileva gli aggiornamenti al valore originale.|
|[pointer](#pointer)|typedef di un `iterator` che può essere utilizzato come puntatore a un elemento Boolean di `vector<bool>`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[flip](#flip)|Inverte tutti i bit del `vector<bool>`.|
|[swap](#swap)|Scambia gli elementi di due `vector<bool>`.|
|[operator&#91;&#93;](#op_at)|Restituisce un riferimento simulato all'elemento `vector<bool>` in corrispondenza di una posizione specificata.|
|`at`|Si comporta nello stesso modo della funzione [vector](../standard-library/vector-class.md)::at non specializzata, ad eccezione del fatto che usa la classe proxy [vector\<bool>::reference](#reference_class). Vedere anche [operator&#91;&#93;](#op_at).|
|`front`|Si comporta nello stesso modo della funzione [vector](../standard-library/vector-class.md)::front non specializzata, ad eccezione del fatto che usa la classe proxy [vector\<bool>::reference](#reference_class). Vedere anche [operator&#91;&#93;](#op_at).|
|`back`|Si comporta nello stesso modo della funzione [vector](../standard-library/vector-class.md)::back non specializzata, ad eccezione del fatto che usa la classe proxy [vector\<bool>::reference](#reference_class). Vedere anche [operator&#91;&#93;](#op_at).|

### <a name="proxy-class"></a>Classe proxy

|||
|-|-|
|[Classe vector\<bool> reference](#reference_class)|Classe che funge da proxy per simulare il comportamento di `bool&` e i cui oggetti possono fornire riferimenti agli elementi (singoli bit) all'interno di un oggetto `vector<bool>`.|

## <a name="requirements"></a>Requisiti

**Intestazione**: \<vector>

**Spazio dei nomi:** std

## <a name="const_pointer"></a>  vector\<bool>::const_pointer

Tipo che descrive un oggetto che può essere utilizzato come puntatore costante a un elemento Boolean della sequenza contenuta dall'oggetto `vector<bool>`.

```cpp
typedef const_iterator const_pointer;
```

## <a name="const_reference"></a>  vector\<bool>::const_reference

Tipo che descrive un oggetto che può essere utilizzato come riferimento costante a un elemento Boolean della sequenza contenuta dall'oggetto `vector<bool>`.

```cpp
typedef bool const_reference;
```

### <a name="remarks"></a>Osservazioni

Per altre informazioni ed esempi di codice, vedere [vector&lt;bool&gt;::reference::operator=](#reference_operator_eq).

## <a name="flip"></a>  vector\<bool>::flip

Inverte tutti i bit di un `vector<bool>`.

```cpp
void flip();
```

### <a name="example"></a>Esempio

```cpp
// vector_bool_flip.cpp
// compile with: /EHsc /W4
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    cout << boolalpha; // format output for subsequent code

    vector<bool> vb = { true, false, false, true, true };
    cout << "The vector is:" << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;

    vb.flip();

    cout << "The flipped vector is:" << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;
}
```

## <a name="op_at"></a>  vector\<bool>::operator[]

Restituisce un riferimento simulato all'elemento `vector<bool>` in corrispondenza di una posizione specificata.

```cpp
vector<bool>::reference operator[](size_type Pos);

vector&<bool&>::const_reference operator[](size_type Pos) const;
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|-|-|
|*Pos*|Posizione dell'elemento `vector<bool>`.|

### <a name="return-value"></a>Valore restituito

Oggetto [vector\<bool>::reference](#reference_class) o [vector\<bool>::const_reference](#const_reference) contenente il valore dell'elemento indicizzato.

Se la posizione specificata è maggiore o uguale alla dimensione del contenitore, il risultato sarà non definito.

### <a name="remarks"></a>Osservazioni

Se si compila con _ITERATOR_DEBUG_LEVEL set, si verifica un errore di run-time se si tenta di accedere a un elemento all'esterno dei limiti del vettore.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md).

### <a name="example"></a>Esempio

Questo esempio di codice illustra l'uso corretto di `vector<bool>::operator[]` e due errori di codifica comuni, che vengono impostati come commento. Questi errori causano errori perché non è possibile eseguire l'indirizzo del `vector<bool>::reference` oggetto restituito da `vector<bool>::operator[]`.

```cpp
// cl.exe /EHsc /nologo /W4 /MTd
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    cout << boolalpha;
    vector<bool> vb;

    vb.push_back(true);
    vb.push_back(false);

    //    bool* pb = &vb[1]; // conversion error - do not use
    //    bool& refb = vb[1];   // conversion error - do not use
    bool hold = vb[1];
    cout << "The second element of vb is " << vb[1] << endl;
    cout << "The held value from the second element of vb is " << hold << endl;

    // Note this doesn't modify hold.
    vb[1] = true;
    cout << "The second element of vb is " << vb[1] << endl;
    cout << "The held value from the second element of vb is " << hold << endl;
}
```

## <a name="pointer"></a>  vector\<bool>::pointer

Tipo che descrive un oggetto che può essere utilizzato come puntatore a un elemento Boolean della sequenza contenuta dall'oggetto `vector<bool>`.

```cpp
typedef iterator pointer;
```

## Classe <a name="reference_class"></a>  vector\<bool>::reference

La classe `vector<bool>::reference` è una classe proxy fornita dalla [classe vector\<bool>](../standard-library/vector-bool-class.md) per simulare `bool&`.

### <a name="remarks"></a>Osservazioni

È necessario un riferimento simulato perché C++ non consente riferimenti diretti ai bit a livello nativo. `vector<bool>` utilizza un solo bit per elemento, a cui è possibile fare riferimento tramite questa classe proxy. Tuttavia, la simulazione dei riferimenti non è completata perché alcune assegnazioni non sono valide. Ad esempio, poiché l'indirizzo dell'oggetto `vector<bool>::reference` non può essere accettato, il codice seguente che usa [vector\<bool>::operator&#91;&#93;](#op_at) non è corretto:

```cpp
vector<bool> vb;
//...
bool* pb = &vb[1]; // conversion error - do not use
bool& refb = vb[1];   // conversion error - do not use
```

###  <a name="reference_flip"></a>  vector\<bool>::reference::flip

Inverte il valore booleano di un elemento [vector\<bool>](../standard-library/vector-bool-class.md) a cui viene fatto riferimento.

```cpp
void flip();
```

#### <a name="example"></a>Esempio

```cpp
// vector_bool_ref_flip.cpp
// compile with: /EHsc /W4
#include <vector>
#include <iostream>

int main()
{
    using namespace std;
    cout << boolalpha;

    vector<bool> vb = { true, false, false, true, true };

    cout << "The vector is: " << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;

    vector<bool>::reference vbref = vb.front();
    vbref.flip();

    cout << "The vector with first element flipped is: " << endl << "    ";
    for (const auto& b : vb) {
        cout << b << " ";
    }
    cout << endl;
}
```

```Output
The vector is:
    true false false true true
The vector with first element flipped is:
    false false false true true
```

###  <a name="reference_operator_bool"></a>vector\< ::reference::operator bool

Fornisce una conversione implicita da `vector<bool>::reference` a **bool**.

```cpp
operator bool() const;
```

#### <a name="return-value"></a>Valore restituito

Valore booleano dell'elemento dell'oggetto vector\<bool>.

#### <a name="remarks"></a>Osservazioni

L'oggetto `vector<bool>` non può essere modificato da questo operatore.

###  <a name="reference_operator_eq"></a>  vector\<bool>::reference::operator=

Assegna a un bit un valore booleano o il valore di un elemento a cui si fa riferimento.

```cpp
reference& operator=(const reference& Right);
reference& operator=(bool Val);
```

### <a name="parameters"></a>Parametri

\ a *destra*
Riferimento dell'elemento il cui valore deve essere assegnato al bit.

\ *Val*
Valore booleano da assegnare al bit.

#### <a name="example"></a>Esempio

```cpp
// vector_bool_ref_op_assign.cpp
// compile with: /EHsc
#include <vector>
#include <iostream>
#include <string>

using namespace std;

template <typename C> void print(const string& s, const C& c) {
    cout << s;

    for (const auto& e : c) {
        cout << e << " ";
    }

    cout << endl;
}

int main()
{
    cout << boolalpha;

    vector<bool> vb = { true, false, false, true, true };

    print("The vector is: ", vb);

    // Invoke vector<bool>::reference::operator=()
    vector<bool>::reference refelem1 = vb[0];
    vector<bool>::reference refelem2 = vb[1];
    vector<bool>::reference refelem3 = vb[2];

    bool b1 = refelem1;
    bool b2 = refelem2;
    bool b3 = refelem3;
    cout << "The original value of the 1st element stored in a bool: " << b1 << endl;
    cout << "The original value of the 2nd element stored in a bool: " << b2 << endl;
    cout << "The original value of the 3rd element stored in a bool: " << b3 << endl;
    cout << endl;

    refelem2 = refelem1;

    print("The vector after assigning refelem1 to refelem2 is now: ", vb);

    refelem3 = true;

    print("The vector after assigning false to refelem1 is now: ", vb);

    // The initial values are still stored in the bool variables and remained unchanged
    cout << "The original value of the 1st element still stored in a bool: " << b1 << endl;
    cout << "The original value of the 2nd element still stored in a bool: " << b2 << endl;
    cout << "The original value of the 3rd element still stored in a bool: " << b3 << endl;
    cout << endl;
}
```

```Output
The vector is: true false false true true
The original value of the 1st element stored in a bool: true
The original value of the 2nd element stored in a bool: false
The original value of the 3rd element stored in a bool: false

The vector after assigning refelem1 to refelem2 is now: true true false true true
The vector after assigning false to refelem1 is now: true true true true true
The original value of the 1st element still stored in a bool: true
The original value of the 2nd element still stored in a bool: false
The original value of the 3rd element still stored in a bool: false
```

## <a name="swap"></a>  vector\<bool>::swap

Funzione membro statica che scambia due elementi di vettori booleani (`vector<bool>`) usando la classe proxy [vector\<bool>::reference](#reference_class).

```cpp
static void swap(
    reference Left,
    reference Right);
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Elemento da scambiare con l'elemento a *destra* .

\ a *destra*
Elemento da scambiare con l'elemento a *sinistra* .

### <a name="remarks"></a>Osservazioni

Tale overload supporta i requisiti di proxy speciali di `vector<bool>`. [vector](../standard-library/vector-class.md)::swap ha la stessa funzionalità dell'overload con singolo argomento di `vector<bool>::swap()`.

## <a name="see-also"></a>Vedere anche

[Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)\
[Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)
