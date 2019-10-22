---
title: Funzioni &lt;memory&gt;
ms.date: 08/05/2019
f1_keywords:
- memory/std::addressof
- memory/std::align
- memory/std::allocate_shared
- memory/std::const_pointer_cast
- memory/std::declare_no_pointers
- memory/std::declare_reachable
- memory/std::default_delete
- memory/std::dynamic_pointer_cast
- memory/std::get_deleter
- memory/std::get_pointer_safety
- memory/std::get_temporary_buffer
- xmemory/std::get_temporary_buffer
- memory/std::make_shared
- memory/std::make_unique
- memory/std::owner_less
- memory/std::reinterpret_pointer_cast
- memory/std::return_temporary_buffer
- xmemory/std::return_temporary_buffer
- memory/std::static_pointer_cast
- memory/std::swap
- memory/std::undeclare_no_pointers
- memory/std::undeclare_reachable
- memory/std::uninitialized_copy
- memory/std::uninitialized_copy_n
- memory/std::uninitialized_fill
- memory/std::uninitialized_fill_n
- memory/std::get_temporary_buffer
- memory/std::return_temporary_buffer
ms.assetid: 3e1898c2-44b7-4626-87ce-84962e4c6f1a
helpviewer_keywords:
- std::addressof [C++]
- std::align [C++]
- std::allocate_shared [C++]
- std::const_pointer_cast [C++]
- std::declare_no_pointers [C++]
- std::declare_reachable [C++]
- std::default_delete [C++]
- std::dynamic_pointer_cast [C++]
- std::get_deleter [C++]
- std::get_pointer_safety [C++]
- std::get_temporary_buffer [C++]
- std::make_shared [C++]
- std::make_unique [C++]
- std::owner_less [C++]
- std::return_temporary_buffer [C++]
- std::static_pointer_cast [C++]
- std::swap [C++]
- std::undeclare_no_pointers [C++]
- std::undeclare_reachable [C++]
- std::uninitialized_copy [C++]
- std::uninitialized_copy_n [C++]
- std::uninitialized_fill [C++]
- std::uninitialized_fill_n [C++]
- std::addressof [C++]
- std::align [C++]
- std::allocate_shared [C++]
- std::const_pointer_cast [C++]
- std::declare_no_pointers [C++]
- std::declare_reachable [C++]
- std::default_delete [C++]
- std::dynamic_pointer_cast [C++]
- std::get_deleter [C++]
- std::get_pointer_safety [C++]
- std::get_temporary_buffer [C++]
- std::make_shared [C++]
- std::make_unique [C++]
- std::owner_less [C++]
- std::return_temporary_buffer [C++]
- std::static_pointer_cast [C++]
- std::undeclare_no_pointers [C++]
- std::undeclare_reachable [C++]
- std::uninitialized_copy [C++]
- std::uninitialized_copy_n [C++]
- std::uninitialized_fill [C++]
- std::uninitialized_fill_n [C++]
ms.openlocfilehash: 2aceb96fcda49df8a1fd40a1bd8011170dccd8ef
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72687718"
---
# <a name="ltmemorygt-functions"></a>Funzioni &lt;memory&gt;

## <a name="addressof"></a>AddressOf

Ottiene l'indirizzo true di un oggetto.

```cpp
template <class T>
T* addressof(
    T& value) noexcept;    // before C++17

template <class T>
constexpr T* addressof(
    T& value) noexcept;    // C++17

template <class T>
const T* addressof(
    const T&& value) = delete;   // C++17
```

### <a name="parameters"></a>Parametri

*value*\
Oggetto o funzione per cui ottenere l'indirizzo true.

### <a name="return-value"></a>Valore restituito

Indirizzo effettivo dell'oggetto o della funzione a cui fa riferimento il *valore*, anche se esiste un `operator&()` di overload.

### <a name="remarks"></a>Note

## <a name="align"></a>allineare

Inserisce nell'archivio la dimensione specificata, allineata in base alla specifica di allineamento specificata, nel primo indirizzo possibile dell'archiviazione specificata.

```cpp
void* align(
    size_t alignment, // input
    size_t size,      // input
    void*& ptr,       // input/output
    size_t& space     // input/output
);
```

### <a name="parameters"></a>Parametri

\ di *allineamento*
Limite di allineamento da tentare.

*dimensioni* \
Dimensioni in byte dell'archivio allineato.

\ *ptr*
Indirizzo iniziale del pool di archiviazione contiguo disponibile da utilizzare. Questo parametro è anche un parametro di output e viene impostato per contenere il nuovo indirizzo iniziale se l'allineamento ha esito positivo. Se `align()` ha esito negativo, questo parametro non viene modificato.

*spazio* \
Spazio totale disponibile per `align()` da utilizzare per la creazione di un'archivio allineato. Questo parametro è anche un parametro di output e contiene lo spazio modificato disponibile nel buffer di archiviazione dopo la sottrazione dell'archivio allineato e dell'eventuale sovraccarico associato.

Se `align()` ha esito negativo, questo parametro non viene modificato.

### <a name="return-value"></a>Valore restituito

Puntatore null se il buffer allineato richiesto non rientra nello spazio disponibile; in caso contrario, il nuovo valore di *ptr*.

### <a name="remarks"></a>Note

I parametri *ptr* e *Space* modificati consentono di chiamare ripetutamente `align()` nello stesso buffer, possibilmente con valori diversi per l' *allineamento* e la *dimensione*. Nel frammento di codice riportato di seguito viene illustrato un utilizzo di `align()`.

```cpp
#include <type_traits> // std::alignment_of()
#include <memory>
//...
char buffer[256]; // for simplicity
size_t alignment = std::alignment_of<int>::value;
void * ptr = buffer;
std::size_t space = sizeof(buffer); // Be sure this results in the true size of your buffer

while (std::align(alignment, sizeof(MyObj), ptr, space)) {
    // You now have storage the size of MyObj, starting at ptr, aligned on
    // int boundary. Use it here if you like, or save off the starting address
    // contained in ptr for later use.
    // ...
    // Last, move starting pointer and decrease available space before
    // the while loop restarts.
    ptr = reinterpret_cast<char*>(ptr) + sizeof(MyObj);
    space -= sizeof(MyObj);
}
// At this point, align() has returned a null pointer, signaling it is not
// possible to allow more aligned storage in this buffer.
```

## <a name="allocate_shared"></a>allocate_shared

Crea un [shared_ptr](shared-ptr-class.md) a oggetti allocati e costruiti per un tipo specificato usando un allocatore specificato. Restituisce `shared_ptr`.

```cpp
template <class T, class Allocator, class... Args>
shared_ptr<T> allocate_shared(
    Allocator alloc,
    Args&&... args);
```

### <a name="parameters"></a>Parametri

\ *Alloc*
Allocatore utilizzato per creare oggetti.

*argomenti* \
Zero o più argomenti che diventano gli oggetti.

### <a name="remarks"></a>Note

La funzione crea l'oggetto `shared_ptr<T>`, un puntatore a `T(args...)` allocato e costruito da *Alloc*.

## <a name="atomic_compare_exchange_strong"></a>atomic_compare_exchange_strong

```cpp
template<class T>
bool atomic_compare_exchange_strong(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w);
```

## <a name="atomic_compare_exchange_weak"></a>atomic_compare_exchange_weak

```cpp
template<class T>
bool atomic_compare_exchange_weak(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w);
```

## <a name="atomic_compare_exchange_strong_explicit"></a>atomic_compare_exchange_strong_explicit

```cpp
template<class T>
bool atomic_compare_exchange_strong_explicit(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w,
    memory_order success,
    memory_order failure);
```

## <a name="atomic_compare_exchange_weak_explicit"></a>atomic_compare_exchange_weak_explicit

```cpp
template<class T>
bool atomic_compare_exchange_weak_explicit(
    shared_ptr<T>* u,
    shared_ptr<T>* v,
    shared_ptr<T> w,
    memory_order success,
    memory_order failure);
```

## <a name="atomic_exchange"></a>atomic_exchange

```cpp
template<class T>
shared_ptr<T> atomic_exchange(
    shared_ptr<T>* u,
    shared_ptr<T> r);
```

## <a name="atomic_exchange_explicit"></a>atomic_exchange_explicit

```cpp
template<class T>
shared_ptr<T> atomic_exchange_explicit(
    shared_ptr<T>* u,
    shared_ptr<T> r,
    memory_order mo);
```

## <a name="atomic_is_lock_free"></a>atomic_is_lock_free

```cpp
template<class T>
bool atomic_is_lock_free(
    const shared_ptr<T>* u);
```

## <a name="atomic_load"></a>atomic_load

```cpp
template<class T>
shared_ptr<T> atomic_load(
    const shared_ptr<T>* u);
```

## <a name="atomic_load_explicit"></a>atomic_load_explicit

```cpp
template<class T>
shared_ptr<T> atomic_load_explicit(
    const shared_ptr<T>* u,
    memory_order mo);
```

## <a name="atomic_store"></a>atomic_store

```cpp
template<class T>
void atomic_store(
    shared_ptr<T>* u,
    shared_ptr<T> r);
```

## <a name="atomic_store_explicit"></a>atomic_store_explicit

```cpp
template<class T>
void atomic_store_explicit(
    shared_ptr<T>* u,
    shared_ptr<T> r,
    memory_order mo);
```

## <a name="const_pointer_cast"></a>const_pointer_cast

Cast const a [shared_ptr](shared-ptr-class.md).

```cpp
template <class T, class Other>
shared_ptr<T> const_pointer_cast(
    const shared_ptr<Other>& sp) noexcept;

template <class T, class Other>
shared_ptr<T> const_pointer_cast(
    shared_ptr<Other>&& sp) noexcept;
```

### <a name="parameters"></a>Parametri

@No__t_1 *T*
Tipo controllato dal puntatore condiviso restituito.

*Altri* \
Tipo controllato dal puntatore di tipo argument condiviso.

\ *SP*
Puntatore di tipo argument condiviso.

### <a name="remarks"></a>Note

La funzione modello restituisce un oggetto `shared_ptr` vuoto se `const_cast<T*>(sp.get())` restituisce un puntatore null. in caso contrario, restituisce un oggetto `shared_ptr<T>` che possiede la risorsa di proprietà di *SP*. L'espressione `const_cast<T*>(sp.get())` deve essere valida.

### <a name="example"></a>Esempio

```cpp
// std__memory__const_pointer_cast.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp0(new int);
    std::shared_ptr<const int> sp1 =
        std::const_pointer_cast<const int>(sp0);

    *sp0 = 3;
    std::cout << "sp1 == " << *sp1 << std::endl;

    return (0);
}
```

```Output
sp1 == 3
```

## <a name="declare_no_pointers"></a>declare_no_pointers

Informa un Garbage Collector che i caratteri del blocco di memoria definito da un puntatore all'indirizzo di base e la dimensione del blocco non contengono puntatori tracciabili.

```cpp
void declare_no_pointers(
    char* ptr,
    size_t size);
```

### <a name="parameters"></a>Parametri

\ *ptr*
Indirizzo del primo carattere che non contiene più puntatori tracciabili.

*dimensioni* \
Dimensione del blocco che inizia in corrispondenza di *ptr* che non contiene puntatori tracciabili.

### <a name="remarks"></a>Note

La funzione informa qualsiasi Garbage Collector che gli indirizzi nell'intervallo `[ ptr, ptr + size)` non contengono più puntatori tracciabili. Non è necessario dereferenziare i puntatori all'archiviazione allocata, a meno che non siano raggiungibili.

## <a name="declare_reachable"></a>declare_reachable

Informa un Garbage Collection che l'indirizzo indicato si riferisce all'archiviazione allocata ed è raggiungibile.

```cpp
void declare_reachable(
    void* ptr);
```

### <a name="parameters"></a>Parametri

\ *ptr*
Puntatore a un'area di archiviazione raggiungibile, allocata e valida.

### <a name="remarks"></a>Note

Se *ptr* non è null, la funzione informa qualsiasi Garbage Collector che *ptr* è ora raggiungibile, ovvero fa riferimento a un archivio allocato valido.

## <a name="default_delete"></a>default_delete

Elimina gli oggetti allocati con **operator new**. Adatto per l'uso con [unique_ptr](unique-ptr-class.md).

```cpp
struct default_delete
{
    constexpr default_delete() noexcept = default;

    template <class Other, class = typename enable_if<is_convertible<Other*, T*>::value, void>::type>>
    default_delete(const default_delete<Other>&) noexcept;

    void operator()(T* ptr) const noexcept;
};
```

### <a name="parameters"></a>Parametri

\ *ptr*
Il puntatore dell'oggetto da eliminare.

*Altri* \
Il tipo di elementi nella matrice da eliminare.

### <a name="remarks"></a>Note

Il modello di classe descrive un deleter che elimina gli oggetti scalari allocati con **operator new**, idonei per l'uso con il modello di classe `unique_ptr`. Include inoltre la specializzazione esplicita `default_delete<T[]>`.

## <a name="destroy_at"></a>destroy_at

```cpp
template <class T>
void destroy_at(
    T* location);
```

Uguale a `location->~T()`.

## <a name="destroy"></a>eliminare

```cpp
template <class ForwardIterator>
void destroy(
    ForwardIterator first,
    ForwardIterator last);
```

Uguale a:

```cpp
for (; first != last; ++first)
    destroy_at(addressof(*first));
```

## <a name="destroy_n"></a>destroy_n

```cpp
template <class ForwardIterator, class Size>
ForwardIterator destroy_n(
    ForwardIterator first,
    Size count);
```

Uguale a:

```cpp
for (; count > 0; (void)++first, --count)
    destroy_at(addressof(*first));
return first;
```

## <a name="dynamic_pointer_cast"></a>dynamic_pointer_cast

Cast dinamico a [shared_ptr](shared-ptr-class.md).

```cpp
template <class T, class Other>
shared_ptr<T> dynamic_pointer_cast(
    const shared_ptr<Other>& sp) noexcept;

template <class T, class Other>
shared_ptr<T> dynamic_pointer_cast(
    shared_ptr<Other>&& sp) noexcept;
```

### <a name="parameters"></a>Parametri

@No__t_1 *T*
Tipo controllato dal puntatore condiviso restituito.

*Altri* \
Tipo controllato dal puntatore di tipo argument condiviso.

\ *SP*
Puntatore di tipo argument condiviso.

### <a name="remarks"></a>Note

La funzione modello restituisce un oggetto `shared_ptr` vuoto se `dynamic_cast<T*>(sp.get())` restituisce un puntatore null. in caso contrario, restituisce un oggetto `shared_ptr<T>` che possiede la risorsa di proprietà di *SP*. L'espressione `dynamic_cast<T*>(sp.get())` deve essere valida.

### <a name="example"></a>Esempio

```cpp
// std__memory__dynamic_pointer_cast.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct base
{
    virtual ~base() {}
    int value;
};

struct derived
    : public base
{
};

int main()
{
    std::shared_ptr<base> sp0(new derived);
    std::shared_ptr<derived> sp1 =
        std::dynamic_pointer_cast<derived>(sp0);

    sp0->value = 3;
    std::cout << "sp1->value == " << sp1->value << std::endl;

    return (0);
}
```

```Output
sp1->value == 3
```

## <a name="get_deleter"></a>get_deleter

Ottenere l'oggetto Deleter da un [shared_ptr](shared-ptr-class.md).

```cpp
template <class Deleter, class T>
Deleter* get_deleter(
    const shared_ptr<T>& sp) noexcept;
```

### <a name="parameters"></a>Parametri

*Elimina* \
Tipo del metodo Deleter.

@No__t_1 *T*
Tipo controllato dal puntatore condiviso.

\ *SP*
Puntatore condiviso.

### <a name="remarks"></a>Note

La funzione modello restituisce un puntatore all'eliminazione di tipo *Deleter* appartenente all'oggetto `shared_ptr` *SP*. Se *SP* non ha alcun Deleter o se il relativo Deleter non è di tipo *Deleter*, la funzione restituisce 0.

### <a name="example"></a>Esempio

```cpp
// std__memory__get_deleter.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct base
{
    int value;
};

struct deleter
{
    void operator()(base *pb)
    {
        delete pb;
    }
};

int main()
{
    std::shared_ptr<base> sp0(new base);

    sp0->value = 3;
    std::cout << "get_deleter(sp0) != 0 == " << std::boolalpha
        << (std::get_deleter<deleter>(sp0) != 0) << std::endl;

    std::shared_ptr<base> sp1(new base, deleter());

    sp0->value = 3;
    std::cout << "get_deleter(sp1) != 0 == " << std::boolalpha
        << (std::get_deleter<deleter>(sp1) != 0) << std::endl;

    return (0);
}
```

```Output
get_deleter(sp0) != 0 == false
get_deleter(sp1) != 0 == true
```

## <a name="get_pointer_safety"></a>get_pointer_safety

Restituisce il tipo di sicurezza dei puntatori utilizzata dal Garbage Collector.

```cpp
pointer_safety get_pointer_safety() noexcept;
```

### <a name="remarks"></a>Note

La funzione restituisce il tipo di sicurezza del puntatore assunto da qualsiasi Garbage Collector automatico.

## <a name="get_temporary_buffer"></a>get_temporary_buffer

Alloca lo spazio di archiviazione temporaneo per una sequenza di elementi che non supera un numero specificato di elementi.

```cpp
template <class T>
pair<T *, ptrdiff_t> get_temporary_buffer(
    ptrdiff_t count);
```

### <a name="parameters"></a>Parametri

*conteggio* \
Numero massimo di elementi richiesti per cui deve essere allocata la memoria.

### <a name="return-value"></a>Valore restituito

Oggetto `pair` il cui primo componente è un puntatore alla memoria allocata e il secondo componente fornisce la dimensione del buffer, per indicare il numero massimo di elementi che è possibile archiviare.

### <a name="remarks"></a>Note

La funzione esegue una richiesta di memoria ed è possibile che tale richiesta non abbia esito positivo. Se non viene allocato alcun buffer, la funzione restituisce una coppia in cui il secondo componente è uguale a zero e il primo è uguale al puntatore null.

Utilizzare questa funzione solo per la memoria temporanea.

### <a name="example"></a>Esempio

```cpp
// memory_get_temp_buf.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

using namespace std;

int main( )
{
    // Create an array of ints
    int intArray [] = { 10, 20, 30, 40, 100, 200, 300, 1000, 2000 };
    int count = sizeof ( intArray ) / sizeof ( int );
    cout << "The number of integers in the array is: "
        << count << "." << endl;

    pair<int *, ptrdiff_t> resultPair;
    resultPair = get_temporary_buffer<int>( count );

    cout << "The number of elements that the allocated memory\n"
        << "could store is given by: resultPair.second = "
        << resultPair.second << "." << endl;
}
```

```Output
The number of integers in the array is: 9.
The number of elements that the allocated memory
could store is given by: resultPair.second = 9.
```

## <a name="make_shared"></a>make_shared

Crea e restituisce un [shared_ptr](shared-ptr-class.md) che punta agli oggetti allocati costruiti da zero o più argomenti usando l'allocatore predefinito. Alloca e costruisce un oggetto del tipo specifico e `shared_ptr` per gestire la proprietà condivisa dell'oggetto e restituisce `shared_ptr`.

```cpp
template <class T, class... Args>
shared_ptr<T> make_shared(
    Args&&... args);
```

### <a name="parameters"></a>Parametri

*argomenti* \
Zero o più argomenti del costruttore. La funzione deduce di quale costruttore eseguire l'overload per richiamare il costruttore in base agli argomenti forniti.

### <a name="remarks"></a>Note

Usare `make_shared` come metodo semplice ed efficace per creare un oggetto e `shared_ptr` per gestire contemporaneamente l'accesso condiviso all'oggetto. Semanticamente, queste due istruzioni sono equivalenti:

```cpp
auto sp = std::shared_ptr<Example>(new Example(argument));
auto msp = std::make_shared<Example>(argument);
```

Tuttavia, la prima istruzione crea due allocazioni e, se l'allocazione di `shared_ptr` non riesce dopo la corretta allocazione dell'oggetto `Example`, l'oggetto senza nome `Example` viene perso. L'istruzione che usa `make_shared` è più semplice perché comprende una sola chiamata di funzione. È più efficiente perché la libreria può eseguire una singola allocazione per l'oggetto e il puntatore intelligente. Questa funzione è più veloce e comporta una minore frammentazione della memoria e non è possibile eseguire un'eccezione in un'unica allocazione. Le prestazioni sono migliorate grazie a un posizionamento più preciso del codice che fa riferimento all'oggetto e aggiorna i conteggi dei riferimenti nel puntatore intelligente.

Se non è necessario l'accesso condiviso all'oggetto, provare a usare [make_unique](memory-functions.md#make_unique) . Usare [allocate_shared](memory-functions.md#allocate_shared) per specificare un'allocazione personalizzata per l'oggetto. Non è possibile usare `make_shared` se l'oggetto richiede un deleter personalizzato, perché non è possibile passare l'eliminazione come argomento.

Nell'esempio seguente viene mostrato come creare puntatori condivisi a un tipo richiamando overload specifici del costruttore.

### <a name="example"></a>Esempio

```cpp
// stl_make_shared.cpp
// Compile by using: cl /W4 /EHsc stl_make_shared.cpp
#include <iostream>
#include <string>
#include <memory>
#include <vector>

class Song {
public:
    std::wstring title_;
    std::wstring artist_;

    Song(std::wstring title, std::wstring artist) : title_(title), artist_(artist) {}
    Song(std::wstring title) : title_(title), artist_(L"Unknown") {}
};

void CreateSharedPointers()
{
    // Okay, but less efficient to have separate allocations for
    // Song object and shared_ptr control block.
    auto song = new Song(L"Ode to Joy", L"Beethoven");
    std::shared_ptr<Song> sp0(song);

    // Use make_shared function when possible. Memory for control block
    // and Song object are allocated in the same call:
    auto sp1 = std::make_shared<Song>(L"Yesterday", L"The Beatles");
    auto sp2 = std::make_shared<Song>(L"Blackbird", L"The Beatles");

    // make_shared infers which constructor to use based on the arguments.
    auto sp3 = std::make_shared<Song>(L"Greensleeves");

    // The playlist vector makes copies of the shared_ptr pointers.
    std::vector<std::shared_ptr<Song>> playlist;
    playlist.push_back(sp0);
    playlist.push_back(sp1);
    playlist.push_back(sp2);
    playlist.push_back(sp3);
    playlist.push_back(sp1);
    playlist.push_back(sp2);
    for (auto&& sp : playlist)
    {
        std::wcout << L"Playing " << sp->title_ <<
            L" by " << sp->artist_ << L", use count: " <<
            sp.use_count() << std::endl;
    }
}

int main()
{
    CreateSharedPointers();
}
```

L'esempio produce il seguente output:

```Output
Playing Ode to Joy by Beethoven, use count: 2
Playing Yesterday by The Beatles, use count: 3
Playing Blackbird by The Beatles, use count: 3
Playing Greensleeves by Unknown, use count: 2
Playing Yesterday by The Beatles, use count: 3
Playing Blackbird by The Beatles, use count: 3
```

## <a name="make_unique"></a>make_unique

crea e restituisce un [unique_ptr](unique-ptr-class.md) a un oggetto di tipo specificato costruito mediante gli argomenti indicati.

```cpp
// make_unique<T>
template <class T, class... Args>
unique_ptr<T> make_unique(Args&&... args);

// make_unique<T[]>
template <class T>
unique_ptr<T> make_unique(size_t size);

// make_unique<T[N]> disallowed
template <class T, class... Args>
/* unspecified */ make_unique(Args&&...) = delete;
```

### <a name="parameters"></a>Parametri

@No__t_1 *T*
Tipo dell'oggetto a cui punta `unique_ptr`.

*Argomenti* \
Tipi degli argomenti del costruttore specificati da *args*.

*argomenti* \
Argomenti da passare al costruttore dell'oggetto di tipo *T*.

*elementi* \
Matrice di elementi di tipo *T*.

*dimensioni* \
Numero di elementi per allocare spazio per la nuova matrice.

### <a name="remarks"></a>Note

Il primo overload viene utilizzato per i singoli oggetti. Il secondo overload viene richiamato per le matrici. Il terzo overload impedisce di specificare la dimensione di una matrice nell'argomento tipo (make_unique \<T [N] >); Questa costruzione non è supportata dallo standard corrente. Quando si usa `make_unique` per creare un `unique_ptr` a una matrice, è necessario inizializzare gli elementi della matrice separatamente. Anziché utilizzare questo overload, forse una scelta migliore consiste nell'utilizzare un [std:: Vector](vector-class.md).

Poiché `make_unique` viene implementato con cautela per la sicurezza dell'eccezione, si consiglia di utilizzare `make_unique` anziché chiamare direttamente i costruttori `unique_ptr`.

### <a name="example"></a>Esempio

Nell'esempio riportato di seguito viene illustrato come usare `make_unique`. Per altri esempi, vedere [Procedura: creare e utilizzare istanze unique_ptr](../cpp/how-to-create-and-use-unique-ptr-instances.md).

[!code-cpp[stl_smart_pointers#214](../cpp/codesnippet/CPP/memory-functions_1.cpp)]

Quando viene visualizzato l'errore C2280 in relazione a `unique_ptr`, è quasi certo che sia dovuto al tentativo di richiamare il costruttore di copia, che è una funzione eliminata.

## <a name="owner_less"></a>owner_less

Consente confronti misti basati sulla proprietà dei puntatori condivisi e deboli. Restituisce **true** se il parametro left viene ordinato prima del parametro right dalla funzione membro `owner_before`.

```cpp
template <class T>
    struct owner_less; // not defined

template <class T>
struct owner_less<shared_ptr<T>>
{
    bool operator()(
        const shared_ptr<T>& left,
        const shared_ptr<T>& right) const noexcept;

    bool operator()(
        const shared_ptr<T>& left,
        const weak_ptr<T>& right) const noexcept;

    bool operator()(
        const weak_ptr<T>& left,
        const shared_ptr<T>& right) const noexcept;
};

template <class T>
struct owner_less<weak_ptr<T>>
    bool operator()(
        const weak_ptr<T>& left,
        const weak_ptr<T>& right) const noexcept;

    bool operator()(
        const weak_ptr<T>& left,
        const shared_ptr<T>& right) const noexcept;

    bool operator()(
        const shared_ptr<T>& left,
        const weak_ptr<T>& right) const noexcept;
};

template<> struct owner_less<void>
{
    template<class T, class U>
    bool operator()(
        const shared_ptr<T>& left,
        const shared_ptr<U>& right) const noexcept;

    template<class T, class U>
    bool operator()(
        const shared_ptr<T>& left,
        const weak_ptr<U>& right) const noexcept;

    template<class T, class U>
    bool operator()(
        const weak_ptr<T>& left,
        const shared_ptr<U>& right) const noexcept;

    template<class T, class U>
    bool operator()(
        const weak_ptr<T>& left,
        const weak_ptr<U>& right) const noexcept;
};
```

### <a name="parameters"></a>Parametri

\ a *sinistra*
Puntatore debole non valido.

\ a *destra*
Puntatore debole non valido.

### <a name="remarks"></a>Note

I modelli di classe definiscono tutti gli operatori membro come restituiti `left.owner_before(right)`.

## <a name="reinterpret_pointer_cast"></a>reinterpret_pointer_cast

Crea una nuova `shared_ptr` da un puntatore condiviso esistente utilizzando un cast.

```cpp
template<class T, class U>
shared_ptr<T> reinterpret_pointer_cast(
    const shared_ptr<U>& ptr) noexcept;

template<class T, class U>
shared_ptr<T> reinterpret_pointer_cast(
    shared_ptr<U>&& ptr) noexcept;
```

### <a name="parameters"></a>Parametri

\ *ptr*
Riferimento a un `shared_ptr<U>`.

### <a name="remarks"></a>Note

Se *ptr* è vuoto, anche il nuovo `shared_ptr` è vuoto; in caso contrario, condivide la proprietà con *ptr*. Il nuovo puntatore condiviso è il risultato della valutazione `reinterpret_cast<Y*>(ptr.get())`, in cui `Y` è `typename std::shared_ptr<T>::element_type`. Il comportamento non è definito se `reinterpret_cast<T*>((U*)nullptr)` non è ben formato.

La funzione di modello che accetta un riferimento lvalue è una novità di C++ 17. La funzione di modello che accetta un riferimento rvalue è una novità di C++ 20.

## <a name="return_temporary_buffer"></a>return_temporary_buffer

Dealloca la memoria temporanea allocata tramite la funzione di modello `get_temporary_buffer`.

```cpp
template <class T>
void return_temporary_buffer(
    T* buffer);
```

### <a name="parameters"></a>Parametri

\ *buffer*
Puntatore alla memoria da deallocare.

### <a name="remarks"></a>Note

Utilizzare questa funzione solo per la memoria temporanea.

### <a name="example"></a>Esempio

```cpp
// memory_ret_temp_buf.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

using namespace std;

int main( )
{
    // Create an array of ints
    int intArray [] = { 10, 20, 30, 40, 100, 200, 300 };
    int count = sizeof ( intArray ) / sizeof ( int );
    cout << "The number of integers in the array is: "
         << count << "." << endl;

    pair<int *, ptrdiff_t> resultPair;
    resultPair = get_temporary_buffer<int>( count );

    cout << "The number of elements that the allocated memory\n"
         << " could store is given by: resultPair.second = "
         << resultPair.second << "." << endl;

    int* tempBuffer = resultPair.first;

    // Deallocates memory allocated with get_temporary_buffer
    return_temporary_buffer( tempBuffer );
}
```

```Output
The number of integers in the array is: 7.
The number of elements that the allocated memory
could store is given by: resultPair.second = 7.
```

## <a name="static_pointer_cast"></a>static_pointer_cast

Cast statico a [shared_ptr](shared-ptr-class.md).

```cpp
template <class T, class Other>
shared_ptr<T> static_pointer_cast(
    const shared_ptr<Other>& sp) noexcept;

template <class T, class Other>
shared_ptr<T> static_pointer_cast(
    shared_ptr<Other>&& sp) noexcept;
```

### <a name="parameters"></a>Parametri

@No__t_1 *T*
Tipo controllato dal puntatore condiviso restituito.

*Altri* \
Tipo controllato dal puntatore di tipo argument condiviso.

\ *SP*
Puntatore di tipo argument condiviso.

### <a name="remarks"></a>Note

La funzione modello restituisce un oggetto `shared_ptr` vuoto se *SP* è un oggetto `shared_ptr` vuoto; in caso contrario, restituisce un oggetto `shared_ptr<T>` che possiede la risorsa di proprietà di *SP*. L'espressione `static_cast<T*>(sp.get())` deve essere valida.

### <a name="example"></a>Esempio

```cpp
// std__memory__static_pointer_cast.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

struct base
{
    int value;
};

struct derived
    : public base
{
};

int main()
{
    std::shared_ptr<base> sp0(new derived);
    std::shared_ptr<derived> sp1 =
        std::static_pointer_cast<derived>(sp0);

    sp0->value = 3;
    std::cout << "sp1->value == " << sp1->value << std::endl;

    return (0);
}
```

```Output
sp1->value == 3
```

## <a name="swap"></a>scambio

Scambia due oggetti [shared_ptr](shared-ptr-class.md), [unique_ptr](unique-ptr-class.md)o [weak_ptr](weak-ptr-class.md) .

```cpp
template <class T>
void swap(
    shared_ptr<T>& left,
    shared_ptr<T>& right) noexcept;

template <class T, class Deleter>
void swap(
    unique_ptr<T, Deleter>& left,
    unique_ptr<T, Deleter>& right) noexcept;

template <class T>
void swap(
    weak_ptr<T>& left,
    weak_ptr<T>& right) noexcept;

```

### <a name="parameters"></a>Parametri

@No__t_1 *T*
Tipo controllato dal puntatore argomento.

*Elimina* \
Eliminatore del tipo di puntatore univoco.

\ a *sinistra*
Puntatore a sinistra.

\ a *destra*
Puntatore a destra.

### <a name="remarks"></a>Note

Le funzioni modello chiamano `left.swap(right)`.

### <a name="example"></a>Esempio

```cpp
// std__memory__swap.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

int main()
{
    std::shared_ptr<int> sp1(new int(5));
    std::shared_ptr<int> sp2(new int(10));
    std::cout << "*sp1 == " << *sp1 << std::endl;

    sp1.swap(sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;

    swap(sp1, sp2);
    std::cout << "*sp1 == " << *sp1 << std::endl;
    std::cout << std::endl;

    std::weak_ptr<int> wp1(sp1);
    std::weak_ptr<int> wp2(sp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    wp1.swap(wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    swap(wp1, wp2);
    std::cout << "*wp1 == " << *wp1.lock() << std::endl;

    return (0);
}
```

```Output
*sp1 == 5
*sp1 == 10
*sp1 == 5

*wp1 == 5
*wp1 == 10
*wp1 == 5
```

## <a name="undeclare_no_pointers"></a>undeclare_no_pointers

Informa un Garbage Collector che i caratteri del blocco di memoria definito da un puntatore all'indirizzo di base e la dimensione del blocco possono contenere puntatori tracciabili.

```cpp
void undeclare_no_pointers(
    char* ptr,
    size_t size);
```

### <a name="parameters"></a>Parametri

\ *ptr*
Puntatore all'indirizzo di memoria precedentemente contrassegnato con [declare_no_pointers](#declare_no_pointers).

*dimensioni* \
Numero di byte nell'intervallo di memoria. Questo valore deve essere uguale al numero utilizzato nella chiamata `declare_no_pointers`.

### <a name="remarks"></a>Note

La funzione informa qualsiasi Garbage Collector che l'intervallo di indirizzi `[ptr, ptr + size)` può ora contenere puntatori tracciabili.

## <a name="undeclare_reachable"></a>undeclare_reachable

Revoca una dichiarazione di raggiungibilità per una posizione di memoria specificata.

```cpp
template <class T>
T *undeclare_reachable(
    T* ptr);
```

### <a name="parameters"></a>Parametri

\ *ptr*
Puntatore all'indirizzo di memoria precedentemente contrassegnato con [declare_reachable](#declare_reachable).

### <a name="remarks"></a>Note

Se *ptr* non è **nullptr**, la funzione informa qualsiasi Garbage Collector che *ptr* non è più raggiungibile. Restituisce un puntatore derivato in modo sicuro che risulta uguale a *ptr*.

## <a name="uninitialized_copy"></a>uninitialized_copy

Copia gli oggetti da un intervallo di origine specificato in un intervallo di destinazione non inizializzato.

```cpp
template <class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_copy(
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_copy(
    ExecutionPolicy&& policy,
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore di input che punta al primo elemento dell'intervallo di origine.

*ultimo* \
Iteratore di input che punta all'ultimo elemento dell'intervallo di origine.

\ *dest*
Iteratore in avanti che punta al primo elemento dell'intervallo di destinazione.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla prima posizione oltre l'intervallo di destinazione, a meno che l'intervallo di origine non sia vuoto.

### <a name="remarks"></a>Note

Questo algoritmo consente la separazione dell'allocazione della memoria dalla costruzione di un oggetto.

La funzione di modello consente di gestire in modo efficace quanto segue:

```cpp
while (first != last)
{
    new (static_cast<void*>(&* dest++))
        typename iterator_traits<InputIterator>::value_type(*first++);
}
return dest;
```

a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.

L'overload con criteri di esecuzione è una novità di C++ 17.

### <a name="example"></a>Esempio

```cpp
// memory_uninit_copy.cpp
// compile with: /EHsc /W3
#include <memory>
#include <iostream>

using namespace std;

class Integer
{
public:
    Integer(int x) : value(x) {}
    int get() { return value; }
private:
    int value;
};

int main()
{
    int Array[] = { 10, 20, 30, 40 };
    const int N = sizeof(Array) / sizeof(int);

    cout << "The initialized Array contains " << N << " elements: ";
    for (int i = 0; i < N; i++)
    {
        cout << " " << Array[i];
    }
    cout << endl;

    Integer* ArrayPtr = (Integer*)malloc(N * sizeof(int));
    Integer* LArrayPtr = uninitialized_copy(
        Array, Array + N, ArrayPtr);  // C4996

    cout << "Address of position after the last element in the array is: "
        << &Array[0] + N << endl;
    cout << "The iterator returned by uninitialized_copy addresses: "
        << (void*)LArrayPtr << endl;
    cout << "The address just beyond the last copied element is: "
        << (void*)(ArrayPtr + N) << endl;

    if ((&Array[0] + N) == (void*)LArrayPtr)
        cout << "The return value is an iterator "
        << "pointing just beyond the original array." << endl;
    else
        cout << "The return value is an iterator "
        << "not pointing just beyond the original array." << endl;

    if ((void*)LArrayPtr == (void*)(ArrayPtr + N))
        cout << "The return value is an iterator "
        << "pointing just beyond the copied array." << endl;
    else
        cout << "The return value is an iterator "
        << "not pointing just beyond the copied array." << endl;

    free(ArrayPtr);

    cout << "Note that the exact addresses returned will vary\n"
        << "with the memory allocation in individual computers."
        << endl;
}
```

## <a name="uninitialized_copy_n"></a>uninitialized_copy_n

Crea una copia di un numero specificato di elementi da un iteratore di input. Le copie vengono inserite in un iteratore in avanti.

```cpp
template <class InputIterator, class Size, class ForwardIterator>
ForwardIterator uninitialized_copy_n(
    InputIterator first,
    Size count,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class Size, class ForwardIterator>
ForwardIterator uninitialized_copy_n(
    ExecutionPolicy&& policy,
    InputIterator first,
    Size count,
    ForwardIterator dest);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore di input che fa riferimento all'oggetto da copiare.

*conteggio* \
Tipo Signed Integer o Unsigned Integer che specifica il numero di volte in cui copiare l'oggetto.

\ *dest*
Iteratore in avanti che fa riferimento al punto in cui vengono inserite le nuove copie.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla prima posizione oltre la destinazione. Se l'intervallo di origine è vuoto, l'iteratore viene indirizzato per *primo*.

### <a name="remarks"></a>Note

La funzione di modello esegue in modo efficace il codice seguente:

```cpp
    for (; 0 < count; --count)
        new (static_cast<void*>(&* dest++))
            typename iterator_traits<InputIterator>::value_type(*first++);
    return dest;
```

a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.

L'overload con criteri di esecuzione è una novità di C++ 17.

## <a name="uninitialized_default_construct"></a>uninitialized_default_construct

Il valore predefinito crea oggetti della `value_type` degli iteratori nell'intervallo specificato.

```cpp
template <class ForwardIterator>
void uninitialized_default_construct(
    ForwardIterator first,
    ForwardIterator last);

template <class ExecutionPolicy, class ForwardIterator>
void uninitialized_default_construct(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    ForwardIterator last);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore che punta al primo elemento dell'intervallo da costruire.

*ultimo* \
Iteratore che punta a un elemento successivo all'ultimo elemento nell'intervallo da costruire.

### <a name="remarks"></a>Note

La versione senza criteri di esecuzione è in realtà identica a quanto segue:

```cpp
for (; first != last; ++first)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type;
```

Se viene generata un'eccezione, gli oggetti costruiti in precedenza vengono eliminati in ordine non specificato.

La versione con criteri di esecuzione ha lo stesso risultato, ma viene eseguita in base ai *criteri*specificati.

Queste funzioni sono nuove in C++ 17.

## <a name="uninitialized_default_construct_n"></a>uninitialized_default_construct_n

Il valore predefinito costruisce un numero specificato di oggetti della `value_type` dell'iteratore, a partire dalla posizione specificata.

```cpp
template <class ForwardIterator, class Size>
ForwardIterator uninitialized_default_construct_n(
    ForwardIterator first,
    Size count);

template <class ExecutionPolicy, class ForwardIterator, class Size>
ForwardIterator uninitialized_default_construct_n(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    Size count);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore che punta al primo elemento dell'intervallo di destinazione da costruire.

*conteggio* \
Numero di elementi nell'intervallo di destinazione da costruire.

### <a name="return-value"></a>Valore restituito

Iteratore in avanti che punta alla prima posizione oltre l'intervallo di destinazione, a meno che l'intervallo di origine non sia vuoto.

### <a name="remarks"></a>Note

La versione senza criteri di esecuzione è in realtà identica a quanto segue:

```cpp
for (; count>0; (void)++first, --count)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type;
return first;
```

Se viene generata un'eccezione, gli oggetti costruiti in precedenza vengono eliminati in ordine non specificato.

La versione con criteri di esecuzione ha lo stesso risultato, ma viene eseguita in base ai *criteri*specificati.

Queste funzioni sono nuove in C++ 17.

## <a name="uninitialized_fill"></a>uninitialized_fill

Copia gli oggetti di un valore specificato in un intervallo di destinazione non inizializzato.

```cpp
template <class ForwardIterator, class T>
void uninitialized_fill(
    ForwardIterator first,
    ForwardIterator last,
    const T& value);

template <class ExecutionPolicy, class ForwardIterator, class T>
void uninitialized_fill(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    ForwardIterator last,
    const T& value);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore in poi che punta al primo elemento dell'intervallo di destinazione da inizializzare.

*ultimo* \
Iteratore in poi che punta all'ultimo elemento dell'intervallo di destinazione da inizializzare.

*value*\
Valore da utilizzare per inizializzare l'intervallo di destinazione.

### <a name="remarks"></a>Note

Questo algoritmo consente la separazione dell'allocazione della memoria dalla costruzione di un oggetto.

La funzione di modello consente di gestire in modo efficace quanto segue:

```cpp
while (first != last)
    new (static_cast<void*>(&* first ++))
        typename iterator_traits<ForwardIterator>::value_type (value);
```

a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.

L'overload con criteri di esecuzione è una novità di C++ 17.

### <a name="example"></a>Esempio

```cpp
// memory_uninit_fill.cpp
// compile with: /EHsc
#include <memory>
#include <iostream>

using namespace std;

class Integer
{
public:
    // No default constructor
    Integer( int x ) : value( x ) {}
    int get() { return value; }
private:
    int value;
};

int main()
{
    const int N = 10;
    Integer value ( 25 );
    Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );
    uninitialized_fill( Array, Array + N, value );
    cout << "The initialized Array contains: ";
    for ( int i = 0; i < N; i++ )
        {
            cout << Array[ i ].get() << " ";
        }
    cout << endl;
}
```

```Output
The initialized Array contains: 25 25 25 25 25 25 25 25 25 25
```

## <a name="uninitialized_fill_n"></a>uninitialized_fill_n

Copia gli oggetti di un valore specificato nel numero specificato di elementi di un intervallo di destinazione non inizializzato.

```cpp
template <class ForwardIterator, class Size, class T>
ForwardIterator uninitialized_fill_n(
    ForwardIterator first,
    Size count,
    const T& value);

template <class ExecutionPolicy, class ForwardIterator, class Size, class T>
ForwardIterator uninitialized_fill_n(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    Size count,
    const T& value);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore in poi che punta al primo elemento dell'intervallo di destinazione da inizializzare.

*conteggio* \
Numero di elementi da inizializzare.

*value*\
Valore da utilizzare per inizializzare l'intervallo di destinazione.

### <a name="remarks"></a>Note

Questo algoritmo consente la separazione dell'allocazione della memoria dalla costruzione di un oggetto.

La funzione di modello consente di gestire in modo efficace quanto segue:

```cpp
while (0 < count--)
    new (static_cast<void*>(&* first++))
        typename iterator_traits<ForwardIterator>::value_type(value);
return first;
```

a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.

L'overload con criteri di esecuzione è una novità di C++ 17.

### <a name="example"></a>Esempio

```cpp
// memory_uninit_fill_n.cpp
// compile with: /EHsc /W3
#include <memory>
#include <iostream>

using namespace std;

class Integer
{
public:
    // No default constructor
    Integer( int x ) : value( x ) {}
    int get() { return value; }
private:
    int value;
};

int main()
{
    const int N = 10;
    Integer value( 60 );
    Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );
    uninitialized_fill_n( Array, N, value );  // C4996
    cout << "The uninitialized Array contains: ";
    for ( int i = 0; i < N; i++ )
        cout << Array[ i ].get() <<  " ";
}
```

## <a name="uninitialized_move"></a>uninitialized_move

Sposta gli elementi di un intervallo di origine in un'area di memoria di destinazione non inizializzata.

```cpp
template <class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_move(
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class ForwardIterator>
ForwardIterator uninitialized_move(
    ExecutionPolicy&& policy,
    InputIterator first,
    InputIterator last,
    ForwardIterator dest);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore di input che punta al primo elemento dell'intervallo di origine da spostare.

*ultimo* \
Iteratore di input che punta a un elemento successivo all'ultimo elemento dell'intervallo di origine da spostare.

\ *dest*
Inizio dell'intervallo di destinazione.

### <a name="remarks"></a>Note

La versione senza criteri di esecuzione è in realtà identica a quanto segue:

```cpp
for (; first != last; (void)++dest, ++first)
    ::new (static_cast<void*>(addressof(*dest)))
        typename iterator_traits<ForwardIterator>::value_type(std::move(*first));
return dest;
```

Se viene generata un'eccezione, è possibile che alcuni oggetti nell'intervallo di origine rimangano in uno stato valido ma non specificato. Gli oggetti costruiti in precedenza vengono eliminati in ordine non specificato.

La versione con criteri di esecuzione ha lo stesso risultato, ma viene eseguita in base ai *criteri*specificati.

Queste funzioni sono nuove in C++ 17.

## <a name="uninitialized_move_n"></a>uninitialized_move_n

Sposta un numero specificato di elementi da un intervallo di origine a un'area di memoria di destinazione non inizializzata.

```cpp
template <class InputIterator, class Size, class ForwardIterator>
pair<InputIterator, ForwardIterator> uninitialized_move_n(
    InputIterator first,
    Size count,
    ForwardIterator dest);

template <class ExecutionPolicy, class InputIterator, class Size, class ForwardIterator>
pair<InputIterator, ForwardIterator> uninitialized_move_n(
    ExecutionPolicy&& policy,
    InputIterator first,
    Size count,
    ForwardIterator dest);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore di input che punta al primo elemento dell'intervallo di origine da spostare.

*conteggio* \
Numero di elementi nell'intervallo di origine da spostare.

\ *dest*
Inizio dell'intervallo di destinazione.

### <a name="remarks"></a>Note

La versione senza criteri di esecuzione è in realtà identica a quanto segue:

```cpp
for (; count > 0; ++dest, (void) ++first, --count)
    ::new (static_cast<void*>(addressof(*dest)))
        typename iterator_traits<ForwardIterator>::value_type(std::move(*first));
return {first, dest};
```

Se viene generata un'eccezione, è possibile che alcuni oggetti nell'intervallo di origine rimangano in uno stato valido ma non specificato. Gli oggetti costruiti in precedenza vengono eliminati in ordine non specificato.

La versione con criteri di esecuzione ha lo stesso risultato, ma viene eseguita in base ai *criteri*specificati.

Queste funzioni sono nuove in C++ 17.

## <a name="uninitialized_value_construct"></a>uninitialized_value_construct

Costruisce gli oggetti degli iteratori ' `value_type` per inizializzazione del valore, nell'intervallo specificato.

```cpp
template <class ForwardIterator>
void uninitialized_value_construct(
    ForwardIterator first,
    ForwardIterator last);

template <class ExecutionPolicy, class ForwardIterator>
void uninitialized_value_construct(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    ForwardIterator last);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore che punta al primo elemento del costrutto range to value.

*ultimo* \
Iteratore che punta a un elemento successivo all'ultimo elemento del costrutto range to value.

### <a name="remarks"></a>Note

La versione senza criteri di esecuzione è in realtà identica a quanto segue:

```cpp
for (; first != last; ++first)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type();
```

Se viene generata un'eccezione, gli oggetti costruiti in precedenza vengono eliminati in ordine non specificato.

La versione con criteri di esecuzione ha lo stesso risultato, ma viene eseguita in base ai *criteri*specificati.

Se si verifica un errore di allocazione della memoria, viene generata un'eccezione `std::bad_alloc`.

Queste funzioni sono nuove in C++ 17.

## <a name="uninitialized_value_construct_n"></a>uninitialized_value_construct_n

Costruisce un numero specificato di oggetti dell'`value_type` dell'iteratore in base all'inizializzazione del valore, a partire dalla posizione specificata.

```cpp
template <class ForwardIterator, class Size>
ForwardIterator uninitialized_value_construct_n(
    ForwardIterator first,
    Size count);

template <class ExecutionPolicy, class ForwardIterator, class Size>
ForwardIterator uninitialized_value_construct_n(
    ExecutionPolicy&& policy,
    ForwardIterator first,
    Size count);
```

### <a name="parameters"></a>Parametri

\ di *criteri*
Criteri di esecuzione da utilizzare.

*primo* \
Iteratore che punta al primo elemento dell'intervallo di destinazione da costruire.

*conteggio* \
Numero di elementi nell'intervallo di destinazione da costruire.

### <a name="remarks"></a>Note

La versione senza criteri di esecuzione è in realtà identica a quanto segue:

```cpp
for (; count > 0; (void)++first, --count)
    ::new (static_cast<void*>(addressof(*first)))
        typename iterator_traits<ForwardIterator>::value_type();
return first;
```

Se viene generata un'eccezione, gli oggetti costruiti in precedenza vengono eliminati in ordine non specificato.

La versione con criteri di esecuzione ha lo stesso risultato, ma viene eseguita in base ai *criteri*specificati.

Se si verifica un errore di allocazione della memoria, viene generata un'eccezione `std::bad_alloc`.

Queste funzioni sono nuove in C++ 17.

## <a name="uses_allocator_v"></a>uses_allocator_v

Modello di variabile helper per accedere al valore del modello `uses_allocator`.

```cpp
template <class T, class Alloc>
inline constexpr bool uses_allocator_v = uses_allocator<T, Alloc>::value;
```

## <a name="see-also"></a>Vedere anche

[\<memory>](memory.md)
