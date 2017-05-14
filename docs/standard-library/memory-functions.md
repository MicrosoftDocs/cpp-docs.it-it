---
title: Funzioni &lt;memory&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
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
- memory/std::make_shared
- memory/std::make_unique
- memory/std::owner_less
- memory/std::return_temporary_buffer
- memory/std::static_pointer_cast
- memory/std::swap
- memory/std::undeclare_no_pointers
- memory/std::undeclare_reachable
- memory/std::uninitialized_copy
- memory/std::uninitialized_copy_n
- memory/std::uninitialized_fill
- memory/std::uninitialized_fill_n
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
- memory/std::make_shared
- memory/std::make_unique
- memory/std::owner_less
- memory/std::return_temporary_buffer
- memory/std::static_pointer_cast
- memory/std::undeclare_no_pointers
- memory/std::undeclare_reachable
- memory/std::uninitialized_copy
- memory/std::uninitialized_copy_n
- memory/std::uninitialized_fill
- memory/std::uninitialized_fill_n
dev_langs:
- C++
ms.assetid: 3e1898c2-44b7-4626-87ce-84962e4c6f1a
caps.latest.revision: 12
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 4d6d010f7f910a89565ef8cd7c07ddbb2f054759
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="ltmemorygt-functions"></a>Funzioni &lt;memory&gt;
||||  
|-|-|-|  
|[addressof](#addressof)|[align](#align)|[allocate_shared](#allocate_shared)|  
|[const_pointer_cast](#const_pointer_cast)|[declare_no_pointers](#declare_no_pointers)|[declare_reachable](#declare_reachable)|  
|[default_delete](#default_delete)|[dynamic_pointer_cast](#dynamic_pointer_cast)|[get_deleter](#get_deleter)|  
|[get_pointer_safety](#get_pointer_safety)|[get_temporary_buffer](#get_temporary_buffer)|[make_shared](#make_shared)|  
|[make_unique](#make_unique)|[owner_less](#owner_less)|[return_temporary_buffer](#return_temporary_buffer)|  
|[static_pointer_cast](#static_pointer_cast)|[swap (libreria standard C++)](#swap)|[undeclare_no_pointers](#undeclare_no_pointers)|  
|[undeclare_reachable](#undeclare_reachable)|[uninitialized_copy](#uninitialized_copy)|[uninitialized_copy_n](#uninitialized_copy_n)|  
|[uninitialized_fill](#uninitialized_fill)|[uninitialized_fill_n](#uninitialized_fill_n)|  
  
##  <a name="addressof"></a>  addressof  
 Ottiene l'indirizzo true di un oggetto.  
  
```  
template <class T>  
T* addressof(T& Val);
```  
  
### <a name="parameters"></a>Parametri  
 `Val`  
 Oggetto o funzione per cui ottenere l'indirizzo true.  
  
### <a name="return-value"></a>Valore restituito  
 Indirizzo effettivo dell'oggetto o della funzione a cui fa riferimento `Val`, anche se esiste un `operator&()` sottoposto a overload.  
  
### <a name="remarks"></a>Note  
  
##  <a name="align"></a>  align  
 Inserisce l'archiviazione dalle dimensioni specificate, allineata in base alla specifica di allineamento specificata, nel primo indirizzo possibile dell'archiviazione specificata.  
  
```  
void* align(
    size_t Alignment, // input  
    size_t Size,   // input  
    void*& Ptr        // input/output  
    size_t& Space     // input/output);
```  
  
### <a name="parameters"></a>Parametri  
 `Alignment`  
 Limite di allineamento da tentare.  
  
 `Size`  
 Dimensioni in byte dell'archivio allineato.  
  
 `Ptr`  
 Indirizzo iniziale del pool di archiviazione contiguo disponibile da utilizzare. Questo parametro è anche un parametro di output e, se l'allineamento ha esito positivo, conterrà il nuovo indirizzo iniziale.  
  
 Se `align()` ha esito negativo, questo parametro non viene modificato.  
  
 `Space`  
 Spazio totale disponibile per `align()` da utilizzare per la creazione di un'archivio allineato. Questo parametro è anche un parametro di output e contiene lo spazio modificato disponibile nel buffer di archiviazione dopo la sottrazione dell'archivio allineato e dell'eventuale sovraccarico associato.  
  
 Se `align()` ha esito negativo, questo parametro non viene modificato.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore Null se il buffer allineato richiesto non entra nello spazio disponibile; in caso contrario, il nuovo valore di `Ptr`.  
  
### <a name="remarks"></a>Note  
 I parametri `Ptr` e `Space` modificati consentono di chiamare più volte `align()` nello stesso buffer, possibilmente con valori diversi per `Alignment` e `Size`. Nel frammento di codice riportato di seguito viene illustrato un utilizzo di `align()`.  
  
```cpp  
#include <type_traits> // std::alignment_of()  
#include <memory>  
//...  
char buffer[256]; // for simplicity  
size_t alignment = std::alignment_of<int>::value;  
void * ptr = buffer;  
std::size_t space = sizeof(buffer); // Be sure this results in the true size of your buffer  
  
while (alignment, sizeof(MyObj), ptr, space)) {  
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
  
##  <a name="allocate_shared"></a>  allocate_shared  
 Crea un `shared_ptr` agli oggetti allocati e costruiti per un tipo specificato mediante un allocatore specificato. Restituisce `shared_ptr`.  
  
```  
template <class Type, class Allocator, class... Types>  
shared_ptr<Type>  
allocate_shared(Allocator Alloc, Types&&... Args);
```  
  
### <a name="parameters"></a>Parametri  
 `Alloc`  
 Allocatore utilizzato per creare oggetti.  
  
 `Args`  
 Zero o più argomenti che diventano gli oggetti.  
  
### <a name="remarks"></a>Note  
 La funzione crea l'oggetto `shared_ptr``<Type>`, un puntatore a `Type(``Args``...)` come allocato e costruito da `Alloc`.  
  
##  <a name="const_pointer_cast"></a>  const_pointer_cast  
 Cast costante per shared_ptr.  
  
```  
template <class Ty, class Other>  
shared_ptr<Ty>  
const_pointer_cast(const shared_ptr<Other>& sp);
```  
  
### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo controllato dal puntatore condiviso restituito.  
  
 `Other`  
 Tipo controllato dal puntatore di tipo argument condiviso.  
  
 `Other`  
 Puntatore di tipo argument condiviso.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce un oggetto shared_ptr vuoto se `const_cast<Ty*>(sp.get())` restituisce un puntatore null. In caso contrario, restituisce un oggetto [classe shared_ptr](../standard-library/shared-ptr-class.md)`<Ty>` proprietario della risorsa di proprietà di `sp`. L'espressione `const_cast<Ty*>(sp.get())` deve essere valida.  
  
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
  
##  <a name="declare_no_pointers"></a>  declare_no_pointers  
 Informa un Garbage Collector che i caratteri del blocco di memoria definito da un puntatore all'indirizzo di base e la dimensione del blocco non contengono puntatori tracciabili.  
  
```  
void declare_no_pointers(
    char* ptr,   
    size_t _Size);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`ptr`|Indirizzo del primo carattere che non contiene più puntatori tracciabili.|  
|`_Size`|Dimensione del blocco che inizia in corrispondenza di `ptr` e non contiene puntatori tracciabili.|  
  
### <a name="remarks"></a>Note  
 La funzione indica qualsiasi `garbage collector` che l'intervallo di indirizzi `[ ptr, ptr + _Size)` non contengono più puntatori tracciabili. I puntatori alla memoria allocata non devono essere dereferenziati a meno che non eseguano `reachable`.  
  
##  <a name="declare_reachable"></a>  declare_reachable  
 Informa un Garbage Collection che l'indirizzo indicato si riferisce all'archiviazione allocata ed è raggiungibile.  
  
```  
void declare_reachable(void* ptr);
```  
  
### <a name="parameters"></a>Parametri  
 `ptr`  
 Puntatore a un'area di archiviazione raggiungibile, allocata e valida.  
  
### <a name="remarks"></a>Note  
 Se `ptr` non è null, la funzione indica a qualsiasi Garbage Collector che d'ora in poi `ptr` è raggiungibile (punta a un'archiviazione allocata valida).  
  
##  <a name="default_delete"></a>  default_delete  
 Elimina gli oggetti allocati con `operator new`. Adatto per l'utilizzo con `unique_ptr`.  
```  
struct default_delete {
   constexpr default_delete() noexcept = default;
   template <class Other, class = typename enable_if<is_convertible<Other*, T*>::value, void>::type>>  
   default_delete(const default_delete<Other>&) noexcept;
   void operator()(T* Ptr) const noexcept;     };  
```
### <a name="parameters"></a>Parametri  
 `Ptr`  
 Il puntatore dell'oggetto da eliminare.  
  
 Altro  
 Il tipo di elementi nella matrice da eliminare.  
  
### <a name="remarks"></a>Note  
 La classe del modello descrive un `deleter` che consente di eliminare gli oggetti scalari allocati con `operator new`, da utilizzare con la classe del modello `unique_ptr`. Include inoltre la specializzazione esplicita `default_delete<Type[]>`.  
  
##  <a name="dynamic_pointer_cast"></a>  dynamic_pointer_cast  
 Cast dinamico per shared_ptr.  
  
```  
template <class Ty, class Other>  
shared_ptr<Ty>  
dynamic_pointer_cast(const shared_ptr`<`Other>& sp);
```  
  
### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo controllato dal puntatore condiviso restituito.  
  
 `Other`  
 Tipo controllato dal puntatore di tipo argument condiviso.  
  
 `sp`  
 Puntatore di tipo argument condiviso.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce un oggetto shared_ptr vuoto se `dynamic_cast<Ty*>(sp.get())` restituisce un puntatore null. In caso contrario, restituisce un oggetto [classe shared_ptr](../standard-library/shared-ptr-class.md)`<Ty>` proprietario della risorsa di proprietà di `sp`. L'espressione `dynamic_cast<Ty*>(sp.get())` deve essere valida.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__dynamic_pointer_cast.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct base   
    {   
    virtual ~base()   
        {   
        }   
  
    int val;   
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
  
    sp0->val = 3;   
    std::cout << "sp1->val == " << sp1->val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
sp1->val == 3  
```  
  
##  <a name="get_deleter"></a>get_deleter
 Ottiene Deleter da shared_ptr.  
  
```  
template <class D, class Ty>  
D *get_deleter(const shared_ptr<Ty>& sp);
```  
  
### <a name="parameters"></a>Parametri  
 `D`  
 Tipo del metodo Deleter.  
  
 `Ty`  
 Tipo controllato dal puntatore condiviso.  
  
 `Other`  
 Puntatore condiviso.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce un puntatore al Deleter di tipo `D` appartenente all'oggetto [classe shared_ptr](../standard-library/shared-ptr-class.md) `sp`. Se `sp` non dispone di alcun Deleter o se il Deleter non è di tipo `D`, la funzione restituisce 0.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__get_deleter.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct base   
    {   
    int val;   
    };   
  
struct deleter   
    {   
    void operator()(base *p)   
        {   
        delete p;   
        }   
    };   
  
int main()   
    {   
    std::shared_ptr<base> sp0(new base);   
  
    sp0->val = 3;   
    std::cout << "get_deleter(sp0) != 0 == " << std::boolalpha   
        << (std::get_deleter<deleter>(sp0) != 0) << std::endl;   
  
    std::shared_ptr<base> sp1(new base, deleter());   
  
    sp0->val = 3;   
    std::cout << "get_deleter(sp1) != 0 == " << std::boolalpha   
        << (std::get_deleter<deleter>(sp1) != 0) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
get_deleter(sp0) != 0 == false  
get_deleter(sp1) != 0 == true  
```  
  
##  <a name="get_pointer_safety"></a>  get_pointer_safety  
 Restituisce il tipo di sicurezza dei puntatori utilizzata dal Garbage Collector.  
  
```  
pointer_safety get_pointer_safety();
```  
  
### <a name="remarks"></a>Note  
 La funzione restituisce il tipo di sicurezza dei puntatori adottato da qualsiasi `garbage collector` automatico.  
  
##  <a name="get_temporary_buffer"></a>  get_temporary_buffer  
 Alloca uno spazio di archiviazione temporaneo per una sequenza di elementi che non supera un numero specificato di elementi.  
  
```  
template <class Type>  
pair<Type *, ptrdiff_t> get_temporary_buffer(ptrdiff_t count);
```  
  
### <a name="parameters"></a>Parametri  
 `count`  
 Numero massimo di elementi richiesti per cui deve essere allocata la memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `pair` il cui primo componente è un puntatore alla memoria allocata e il secondo componente fornisce la dimensione del buffer, per indicare il numero massimo di elementi che è possibile archiviare.  
  
### <a name="remarks"></a>Note  
 La funzione esegue una richiesta di memoria ed è possibile che tale richiesta non abbia esito positivo. Se non viene allocato alcun buffer, la funzione restituisce una coppia in cui il secondo componente è uguale a zero e il primo è uguale al puntatore null.  
  
 Questa funzione deve essere usata soltanto per memoria temporanea.  
  
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
   int intArray [ ] = { 10, 20, 30, 40, 100, 200, 300, 1000, 2000 };  
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
  
##  <a name="make_shared"></a>  make_shared  
 Crea e restituisce un oggetto `shared_ptr` che punta all'oggetto allocato costruito da zero o più argomenti usando l'allocatore predefinito. Alloca e costruisce un oggetto del tipo specifico e `shared_ptr` per gestire la proprietà condivisa dell'oggetto e restituisce `shared_ptr`.  
  
```  
template <class Type, class... Types>  
shared_ptr<Type>  
make_shared(
    Types&&... _Args);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Args`|Zero o più argomenti del costruttore. La funzione deduce di quale costruttore eseguire l'overload per richiamare il costruttore in base agli argomenti forniti.|  
  
### <a name="remarks"></a>Note  
 Usare `make_shared` come metodo semplice ed efficace per creare un oggetto e `shared_ptr` per gestire contemporaneamente l'accesso condiviso all'oggetto. Semanticamente, queste due istruzioni sono equivalenti:  
  
```cpp  
auto sp = std::shared_ptr<Example>(new Example(argument));
auto msp = std::make_shared<Example>(argument);
```  
  
 Tuttavia, la prima istruzione crea due allocazioni e, se l'allocazione di `shared_ptr` non riesce dopo la corretta allocazione dell'oggetto `Example`, l'oggetto senza nome `Example` viene perso. L'istruzione che usa `make_shared` è più semplice perché comprende una sola chiamata di funzione. È più efficiente perché la libreria può eseguire una singola allocazione per l'oggetto e il puntatore intelligente. Questa funzionalità è più rapida e comporta una minore frammentazione della memoria. Inoltre, non esiste alcuna possibilità che si verifichi un'eccezione in una sola allocazione. Le prestazioni sono migliorate grazie a un posizionamento più preciso del codice che fa riferimento all'oggetto e aggiorna i conteggi dei riferimenti nel puntatore intelligente.  
  
 Se non è necessario un accesso condiviso all'oggetto, si consiglia di usare [make_unique](../standard-library/memory-functions.md#make_unique). Usare [allocate_shared](../standard-library/memory-functions.md#allocate_shared) per specificare un'allocazione personalizzata per l'oggetto. Non è possibile usare `make_shared` se l'oggetto richiede un Deleter personalizzato perché non può essere passato come argomento.  
  
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
  
void CreateSharedPointers() {  
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
   for (auto&& sp : playlist) {  
      std::wcout << L"Playing " << sp->title_ <<   
         L" by " << sp->artist_ << L", use count: " <<   
         sp.use_count() << std::endl;  
   }  
}  
  
int main() {  
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
  
##  <a name="make_unique"></a>  make_unique  
 crea e restituisce un [unique_ptr](../standard-library/unique-ptr-class.md) a un oggetto di tipo specificato costruito mediante gli argomenti indicati.  
  
```scr  
// make_unique<T>template <class T,   
    class... Types>  
unique_ptr<T> make_unique(Types&&... Args)  
 {  
    return (unique_ptr<T>(new T(forward<Types>(Args)...)));

 }  
// make_unique<T[]>  
template <class T>  
make_unique(size_t Size)   
 {   
    return (unique_ptr<T>(new Elem[Size]()));

 }  
 
// make_unique<T[N]> disallowed  
template <class T,   
    class... Types>  
typename enable_if<extent<T>::value != 0,   
    void>::type make_unique(Types&&...) = delete;  
```  
  
### <a name="parameters"></a>Parametri  
 `T`  
 Tipo dell'oggetto a cui punta `unique_ptr`.  
  
 `Types`  
 Tipi di argomenti del costruttore specificati da `Args`.  
  
 `Args`  
 Argomenti da passare al costruttore dell'oggetto di tipo `T`.  
  
 `Elem`  
 Matrice di elementi di tipo `T`.  
  
 `Size`  
 Numero di elementi per allocare spazio per la nuova matrice.  
  
### <a name="remarks"></a>Note  
 Il primo overload viene usato per i singoli oggetti, il secondo overload viene richiamato per le matrici e il terzo overload impedisce di specificare la dimensione di una matrice nell'argomento tipo (make_unique\<T[N]>). Questa costruzione non è supportata dallo standard corrente. Quando si usa `make_unique` per creare un `unique_ptr` a una matrice, è necessario inizializzare gli elementi della matrice separatamente. Se si sta considerando questo overload, una scelta migliore consiste probabilmente nell'usare un [std::vector](../standard-library/vector-class.md).  
  
 Poiché `make_unique` viene implementato con cautela per la sicurezza dell'eccezione, si consiglia di utilizzare `make_unique` anziché chiamare direttamente i costruttori `unique_ptr`.  
  
### <a name="example"></a>Esempio  
  Nell'esempio riportato di seguito viene illustrato come usare `make_unique`. Per altri esempi, vedere [Procedura: creare e utilizzare istanze unique_ptr](../cpp/how-to-create-and-use-unique-ptr-instances.md).  
  
 [!code-cpp[stl_smart_pointers#214](../cpp/codesnippet/CPP/memory-functions_1.cpp)]  
  
  Quando viene visualizzato l'errore C2280 in relazione a `unique_ptr`, è quasi certo che sia dovuto al tentativo di richiamare il costruttore di copia, che è una funzione eliminata.  
  
##  <a name="owner_less"></a>  owner_less  
 Consente confronti misti basati sulla proprietà dei puntatori condivisi e deboli. Restituisce `true` se la funzione membro `owner_before` ordina i parametri ponendo quello di sinistra prima di quello di destra.  
  
```  
template <class Type>  
struct owner_less; // not defined  
 
template <class Type>  
struct owner_less<shared_ptr<Type>> {  
    bool operator()(
    const shared_ptr<Type>& left,  
    const shared_ptr<Type>& right);

    bool operator()(
    const shared_ptr<Type>& left,  
    const weak_ptr<Type>& right);

    bool operator()(
    const weak_ptr<Type>& left,  
    const shared_ptr<Type>& right);

};  
 
template <class Type>  
struct owner_less<weak_ptr<Type>>  
    bool operator()(
    const weak_ptr<Type>& left,  
    const weak_ptr<Type>& right);

    bool operator()(
    const weak_ptr<Type>& left,  
    const shared_ptr<Ty>& right);

    bool operator()(
    const shared_ptr<Type>& left,  
    const weak_ptr<Type>& right);

};  
```  
  
### <a name="parameters"></a>Parametri  
 `_left`  
 Puntatore debole non valido.  
  
 `right`  
 Puntatore debole non valido.  
  
### <a name="remarks"></a>Note  
 Le classi modello definiscono i propri operatori membro in modo che restituiscano `left``.owner_before(``right``)`.  
  
##  <a name="return_temporary_buffer"></a>  return_temporary_buffer  
 Dealloca la memoria temporanea allocata tramite la funzione di modello `get_temporary_buffer`.  
  
```  
template <class Type>  
void return_temporary_buffer(Type* _Pbuf);
```  
  
### <a name="parameters"></a>Parametri  
 *_Pbuf*  
 Puntatore alla memoria da deallocare.  
  
### <a name="remarks"></a>Note  
 Questa funzione deve essere usata soltanto per memoria temporanea.  
  
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
   int intArray [ ] = { 10, 20, 30, 40, 100, 200, 300 };  
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
   return_temporary_buffer ( tempBuffer );  
}  
```  
  
```Output  
The number of integers in the array is: 7.  
The number of elements that the allocated memory  
 could store is given by: resultPair.second = 7.  
```  
  
##  <a name="static_pointer_cast"></a>  static_pointer_cast  
 Cast statico per shared_ptr.  
  
```  
template <class Ty, class Other>  
shared_ptr<Ty>  
static_pointer_cast(const shared_ptr<Other>& sp);
```  
  
### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo controllato dal puntatore condiviso restituito.  
  
 `Other`  
 Tipo controllato dal puntatore di tipo argument condiviso.  
  
 `Other`  
 Puntatore di tipo argument condiviso.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce un oggetto shared_ptr se `sp` è un oggetto vuoto `shared_ptr`. In caso contrario, restituisce un oggetto [classe shared_ptr](../standard-library/shared-ptr-class.md)`<Ty>` proprietario della risorsa di proprietà di `sp`. L'espressione `static_cast<Ty*>(sp.get())` deve essere valida.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__static_pointer_cast.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct base   
    {   
    int val;   
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
  
    sp0->val = 3;   
    std::cout << "sp1->val == " << sp1->val << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
sp1->val == 3  
```  
  
##  <a name="swap"></a>  swap (libreria standard C++)  
 Scambia due oggetti shared_ptr o weak_ptr.  
  
```  
template <class Ty, class Other>  
void swap(shared_ptr<Ty>& left, shared_ptr<Other>& right);

template <class Ty, class Other>  
void swap(weak_ptr<Ty>& left, weak_ptr<Other>& right);
```  
  
### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo controllato dal puntatore condiviso sinistro/debole.  
  
 `Other`  
 Tipo controllato dal puntatore condiviso destro/debole.  
  
 `left`  
 Puntatore condiviso sinistro/debole.  
  
 `right`  
 Puntatore condiviso destro/debole.  
  
### <a name="remarks"></a>Note  
 Le funzioni modello chiamano `left.swap(right)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__memory__swap.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
  
struct deleter
{
    void operator()(int *p)
    {
        delete p;
    }
};

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
  
##  <a name="undeclare_no_pointers"></a>  undeclare_no_pointers  
 Informa un Garbage Collector che i caratteri del blocco di memoria definito da un puntatore all'indirizzo di base e la dimensione del blocco possono contenere puntatori tracciabili.  
  
```  
void undeclare_no_pointers(
    char* ptr,   
    size_t _Size);
```  
  
### <a name="remarks"></a>Note  
 La funzione indica qualsiasi `garbage collector` che l'intervallo di indirizzi `[ptr, ptr + _Size)` possono contenere `traceable pointers`.  
  
##  <a name="undeclare_reachable"></a>  undeclare_reachable  
 Informa un `garbage_collector` che una posizione di memoria specificata non è raggiungibile.  
  
```  
template <class Type>  
Type *undeclare_reachable(Type* ptr);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`ptr`|Puntatore all'indirizzo di memoria da dichiarare non raggiungibile.|  
  
### <a name="remarks"></a>Note  
 Se `ptr` non è `null`, la funzione indica a qualsiasi `garbage collector` che `ptr` da ora in poi non è `reachable`. Restituisce un puntatore `safely derived` che risulta uguale a `ptr`.  
  
##  <a name="uninitialized_copy"></a>  uninitialized_copy  
 Copia gli oggetti da un intervallo di origine specificato in un intervallo di destinazione non inizializzato.  
  
```  
template <class InputIterator, class ForwardIterator>  
ForwardIterator uninitialized_copy(InputIterator first, InputIterator last, ForwardIterator dest);
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Iteratore di input che punta al primo elemento dell'intervallo di origine.  
  
 `last`  
 Iteratore di input che punta all'ultimo elemento dell'intervallo di origine.  
  
 `dest`  
 Iteratore in avanti che punta al primo elemento dell'intervallo di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore in avanti che punta alla prima posizione oltre l'intervallo di destinazione, a meno che l'intervallo di origine è vuota e l'iteratore punta * first.*  
  
### <a name="remarks"></a>Note  
 Questo algoritmo consente la separazione dell'allocazione della memoria dalla costruzione di un oggetto.  
  
 La funzione di modello consente di gestire in modo efficace quanto segue:  
  
```  
while (first!= last)  
    new ((void*)&* dest ++)  
    iterator_traits<InputIterator>::value_type (* first ++);

return first;  
```  
  
 a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.  
  
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
    Integer(int x) : val(x) {}
    int get() { return val; }
private:
    int val;
};

int main()
{
    int Array[] = { 10, 20, 30, 40 };
    const int N = sizeof(Array) / sizeof(int);

    int i;
    cout << "The initialized Array contains " << N << " elements: ";
    for (i = 0; i < N; i++)
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
  
##  <a name="uninitialized_copy_n"></a>  uninitialized_copy_n  
 Crea una copia di un numero specificato di elementi da un iteratore di input. Le copie vengono inserite in un iteratore in avanti.  
  
```  
template <class InputIterator, class Size, class ForwardIterator>  
ForwardIterator uninitialized_copy_n(
    InputIterator first,   
    Size count,  
    ForwardIterator dest);
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Iteratore di input che fa riferimento all'oggetto da copiare.  
  
 `count`  
 Tipo Signed Integer o Unsigned Integer che specifica il numero di volte in cui copiare l'oggetto.  
  
 `dest`  
 Iteratore in avanti che fa riferimento al punto in cui vengono inserite le nuove copie.  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore in avanti che punta alla prima posizione oltre la destinazione. Se l'intervallo di origine è vuota, l'iteratore indirizzi `first`.  
  
### <a name="remarks"></a>Note  
 La funzione di modello consente di gestire in modo efficace quanto segue:  
  
```cpp  
    for (; 0 < count; --count)  
        new ((void *)&* dest++) iterator_traits<InputIterator>::value_type(*first++);  
    return dest;  
```  
  
 a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.  
  
##  <a name="uninitialized_fill"></a>  uninitialized_fill  
 Copia gli oggetti di un valore specificato in un intervallo di destinazione non inizializzato.  
  
```  
template <class ForwardIterator, class Type>  
void uninitialized_fill(ForwardIterator first, ForwardIterator last, const Type& val);
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Iteratore in avanti che punta al primo elemento dell'intervallo di destinazione da inizializzare.  
  
 `last`  
 Iteratore in avanti che punta all'ultimo elemento dell'intervallo di destinazione da inizializzare.  
  
 `val`  
 Valore da utilizzare per inizializzare l'intervallo di destinazione.  
  
### <a name="remarks"></a>Note  
 Questo algoritmo consente la separazione dell'allocazione della memoria dalla costruzione di un oggetto.  
  
 La funzione di modello consente di gestire in modo efficace quanto segue:  
  
```  
while (first != last)  
    new ((void*)&* first ++)  
    iterator_traits<ForwardIterator>::value_type (_Val);
```  
  
 a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// memory_uninit_fill.cpp  
// compile with: /EHsc  
#include <memory>  
#include <iostream>  
  
using namespace std;  
  
   class Integer {         // No default constructor  
   public:  
      Integer( int x ) : val( x ) {}  
      int get( ) { return val; }  
   private:  
      int val;  
   };  
  
int main( )  
{  
   const int N = 10;  
   Integer val ( 25 );  
   Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );  
   uninitialized_fill( Array, Array + N, val );  
   int i;  
   cout << "The initialized Array contains: ";  
      for ( i = 0 ; i < N; i++ )  
      {  
         cout << Array [ i ].get( ) << " ";  
      }  
   cout << endl;  
}  
```  
  
```Output  
The initialized Array contains: 25 25 25 25 25 25 25 25 25 25   
```  
  
##  <a name="uninitialized_fill_n"></a>  uninitialized_fill_n  
 Copia gli oggetti di un valore specificato in un numero specificato di elementi di un intervallo di destinazione non inizializzato.  
  
```  
template <class FwdIt, class Size, class Type>  
void uninitialized_fill_n(ForwardIterator first, Size count, const Type& val);
```  
  
### <a name="parameters"></a>Parametri  
 `first`  
 Iteratore in avanti che punta al primo elemento dell'intervallo di destinazione da inizializzare.  
  
 `count`  
 Numero di elementi da inizializzare.  
  
 `val`  
 Valore da utilizzare per inizializzare l'intervallo di destinazione.  
  
### <a name="remarks"></a>Note  
 Questo algoritmo consente la separazione dell'allocazione della memoria dalla costruzione di un oggetto.  
  
 La funzione di modello consente di gestire in modo efficace quanto segue:  
  
```cpp  
while (0 <count--)  
    new ((void*)&* first ++)  
    iterator_traits<ForwardIterator>::value_type(val);
```  
  
 a meno che il codice non generi un'eccezione. In tal caso, tutti gli oggetti creati vengono eliminati definitivamente e l'eccezione viene generata nuovamente.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// memory_uninit_fill_n.cpp  
// compile with: /EHsc /W3  
#include <memory>  
#include <iostream>  
  
using namespace std;  
  
class Integer {   // No default constructor  
public:  
   Integer( int x ) : val( x ) {}  
   int get( ) { return val; }  
private:  
   int val;  
};  
  
int main() {  
   const int N = 10;  
   Integer val ( 60 );  
   Integer* Array = ( Integer* ) malloc( N * sizeof( int ) );  
   uninitialized_fill_n( Array, N, val );  // C4996  
   int i;  
   cout << "The uninitialized Array contains: ";  
   for ( i = 0 ; i < N; i++ )  
      cout << Array [ i ].get( ) <<  " ";  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<memory>](../standard-library/memory.md)

