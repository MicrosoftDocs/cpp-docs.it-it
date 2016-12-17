---
title: "vettore classe 1 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::vector"
  - "vector"
  - "std.vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vector (classe)"
ms.assetid: a3e0a8f8-7565-4fe0-93e4-e4d74ae1b70d
caps.latest.revision: 24
caps.handback.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vettore classe 1
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe del vettore STL è una classe modello di contenitori di sequenza che organizzano gli elementi di un determinato tipo in una disposizione lineare e consentono l'accesso casuale veloce a qualsiasi elemento. Dovrebbero essere il contenitore preferito per una sequenza quando le prestazioni di accesso casuale sono molto richieste.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Type, class Allocator = allocator<Type>>  
class vector  
```  
  
#### <a name="parameters"></a>Parametri  
 *Type*  
 Tipo di dati degli elementi da archiviare nel vettore.  
  
 `Allocator`  
 Il tipo che rappresenta l'oggetto allocatore archiviato che incapsula dettagli sull'allocazione del vettore e deallocazione della memoria. Questo argomento è facoltativo e il valore predefinito è **allocatore***\< tipo>.*  
  
## <a name="remarks"></a>Note  
 I vettori consentono inserimenti ed eliminazioni costanti nel tempo alla fine della sequenza. L'inserimento o l'eliminazione di elementi nel mezzo di un vettore richiede un tempo lineare. Le prestazioni della [classe deque](../standard-library/deque-class.md) contenitore è superiore per quanto riguarda gli inserimenti ed eliminazioni all'inizio e alla fine di una sequenza. La [classe list](../standard-library/list-class.md) contenitore è superiore per quanto riguarda gli inserimenti ed eliminazioni in qualsiasi posizione all'interno di una sequenza.  
  
 La riallocazione dei vettori si verifica quando una funzione membro deve aumentare la sequenza contenuta nell'oggetto vettore oltre la capacità di archiviazione corrente. Altre operazioni di inserimento e cancellazione possono modificare i vari indirizzi di archiviazione all'interno della sequenza. In questi casi, gli iteratori o i riferimenti che puntano alle parti modificate della sequenza diventeranno non validi. Se non si verifica alcuna riallocazione, restano validi solo gli iteratori e i riferimenti prima del punto di inserimento o eliminazione.  
  
 Il [vector \< bool> classe](../standard-library/vector-bool-class.md) è una specializzazione completa del vettore della classe modello per gli elementi di tipo bool con un allocatore per il tipo sottostante usato dalla specializzazione.  
  
 Il [vector \< bool> riferimento classe](../standard-library/vector-bool-class.md#vector_lt_bool_gt___reference_class) è una classe annidata i cui oggetti sono in grado di fornire i riferimenti agli elementi (singoli bit) all'interno di un vettore \< bool> oggetto.  
  
## <a name="members"></a>Membri  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[vettore](#vector__vector)|Costruisce un vettore di dimensioni specifiche, con elementi di un valore specifico, con un oggetto `allocator` specifico o come copia di un altro vettore.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[allocator_type](#vector__allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto vector.|  
|[const_iterator](#vector__const_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere un elemento `const` in un vettore.|  
|[const_pointer](#vector__const_pointer)|Tipo che fornisce un puntatore a un elemento `const` di un vettore.|  
|[const_reference](#vector__const_reference)|Tipo che fornisce un riferimento a un elemento `const` archiviato in un vettore per la lettura e l'esecuzione di operazioni `const`.|  
|[const_reverse_iterator](#vector__const_reverse_iterator)|Tipo che fornisce un iteratore ad accesso rapido che può leggere qualsiasi elemento `const` nel vettore.|  
|[difference_type](#vector__difference_type)|Tipo che offre la differenza tra gli indirizzi di due elementi in un vettore.|  
|[iteratore](#vector__iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore.|  
|[puntatore](#vector__pointer)|Tipo che fornisce un puntatore a un elemento in un vettore.|  
|[riferimento](#vector__reference)|Tipo che fornisce un riferimento a un elemento archiviato in un vettore.|  
|[reverse_iterator](#vector__reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore inverso.|  
|[size_type](#vector__size_type)|Tipo che conta il numero di elementi in un vettore.|  
|[value_type](#vector__value_type)|Tipo che rappresenta il tipo di dati archiviati in un vettore.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[assegnare](#vector__assign)|Cancella un vettore e copia gli elementi specificati nel vettore vuoto.|  
|[in](#vector__at)|Restituisce un riferimento all'elemento in una posizione specificata nel vettore.|  
|[Indietro](#vector__back)|Restituisce un riferimento all'ultimo elemento del vettore.|  
|[iniziare](#vector__begin)|Restituisce un iteratore ad accesso casuale al primo elemento nel vettore.|  
|[capacità](#vector__capacity)|Restituisce il numero di elementi che il vettore può contenere senza allocare più spazio di archiviazione.|  
|[cbegin](#vector__cbegin)|Restituisce un iteratore const ad accesso casuale al primo elemento nel vettore.|  
|[cend](#vector__cend)|Restituisce un iteratore const ad accesso casuale che punta appena oltre la fine del vettore.|  
|[crbegin](#vector__crbegin)|Restituisce un iteratore const che punta al primo elemento di un vettore invertito.|  
|[crend](#vector__crend)|Restituisce un iteratore const alla fine di un vettore invertito.|  
|[deselezionare](#vector__clear)|Cancella gli elementi del vettore.|  
|[dati](#vector__data)|Restituisce un puntatore al primo elemento nel vettore.|  
|[emplace](#vector__emplace)|Inserisce un elemento costruito sul posto nel vettore in una posizione specificata.|  
|[emplace_back](#vector__emplace_back)|Aggiunge un elemento costruito sul posto alla fine del vettore.|  
|[vuoto](#vector__empty)|Verifica se il contenitore del vettore è vuoto.|  
|[fine](#vector__end)|Restituisce un iteratore ad accesso casuale che punta alla fine del vettore.|  
|[cancellazione](#vector__erase)|Rimuove un elemento o un intervallo di elementi di un vettore dalle posizioni specificate.|  
|[primo piano](#vector__front)|Restituisce un riferimento al primo elemento di un vettore.|  
|[get_allocator](#vector__get_allocator)|Restituisce un oggetto alla classe `allocator` usata da un vettore.|  
|[inserimento](#vector__insert)|Inserisce un elemento o un numero di elementi nel vettore in una posizione specificata.|  
|[max_size](#vector__max_size)|Restituisce la lunghezza massima del vettore.|  
|[pop_back](#vector__pop_back)|Elimina l'elemento alla fine del vettore.|  
|[push_back](#vector__push_back)|Aggiunge un elemento alla fine del vettore.|  
|[rbegin](#vector__rbegin)|Restituisce un iteratore al primo elemento in un vettore inverso.|  
|[REND)](#vector__rend)|Restituisce un iteratore alla fine di un vettore invertito.|  
|[riserva](#vector__reserve)|Riserva una lunghezza di archiviazione minima per un oggetto vettore.|  
|[ridimensionamento](#vector__resize)|Specifica una nuova dimensione per un vettore.|  
|[shrink_to_fit](#vector__shrink_to_fit)|Elimina la capacità in eccesso.|  
|[dimensioni](#vector__size)|Restituisce il numero di elementi nel vettore.|  
|[swap](#vector__swap)|Scambia gli elementi di due vettori.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore &#91; &#93;](#vector__operator_at)|Restituisce un riferimento a un elemento di vettore in corrispondenza di una posizione specificata.|  
|[operatore =](#vector__operator_eq)|Sostituisce gli elementi del vettore con una copia di un altro vettore.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \< vettore>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namevectorallocatortypea-vectorallocatortype"></a><a name="vector__allocator_type"></a>  Vector:: allocator_type  
 Tipo che rappresenta la classe allocator per l'oggetto vettore.  
  
```  
typedef Allocator allocator_type;  
```  
  
### <a name="remarks"></a>Note  
 `allocator_type` è un sinonimo del parametro di modello **allocatore.**  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [get_allocator](#vector__get_allocator) per un esempio che utilizza `allocator_type`.  
  
##  <a name="a-namevectorassigna-vectorassign"></a><a name="vector__assign"></a>  Vector:: Assign  
 Cancella un vettore e copia gli elementi specificati nel vettore vuoto.  
  
```  
void assign(
    size_type Count,  
    const Type& Val);

void assign(
    initializer_list<Type> IList);

template <class InputIterator>  
void assign(
    InputIterator First,  
    InputIterator Last);
```  
  
### <a name="parameters"></a>Parametri  
 `First`  
 Posizione del primo elemento nell'intervallo di elementi da copiare.  
  
 `Last`  
 Posizione del primo elemento oltre l'intervallo di elementi da copiare.  
  
 `Count`  
 Numero di copie di un elemento da inserire nel vettore.  
  
 `Val`  
 Valore dell'elemento da inserire nel vettore.  
  
 `IList`  
 Oggetto initializer_list contenente gli elementi da inserire.  
  
### <a name="remarks"></a>Note  
 Dopo aver cancellato tutti gli elementi esistenti in un vettore, inserire un intervallo specificato di elementi dal vettore originale in un vettore o inserire le copie di un nuovo elemento di un valore specificato in un vettore.  
  
### <a name="example"></a>Esempio  
  
```  
/ vector_assign.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    vector<int> v1, v2, v3;  
  
    v1.push_back(10);  
    v1.push_back(20);  
    v1.push_back(30);  
    v1.push_back(40);  
    v1.push_back(50);  
  
    cout << "v1 = ";  
    for (auto& v : v1){  
        cout << v << " ";  
    }  
    cout << endl;  
  
    v2.assign(v1.begin(), v1.end());  
    cout << "v2 = ";  
    for (auto& v : v2){  
        cout << v << " ";  
    }  
    cout << endl;  
  
    v3.assign(7, 4);  
    cout << "v3 = ";  
    for (auto& v : v3){  
        cout << v << " ";  
    }  
    cout << endl;  
  
    v3.assign({ 5, 6, 7 });  
    for (auto& v : v3){  
        cout << v << " ";  
    }  
    cout << endl;  
}  
  
```  
  
##  <a name="a-namevectorata-vectorat"></a><a name="vector__at"></a>  Vector:: AT  
 Restituisce un riferimento all'elemento in una posizione specificata nel vettore.  
  
```  
reference at(size_type _Pos);

const_reference at(size_type _Pos) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Pos`  
 Numero di posizione o indice dell'elemento a cui fare riferimento nel vettore.  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento all'elemento con indice nell'argomento. Se `_Off` è maggiore della dimensione del vettore, **in** genera un'eccezione.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di **in** viene assegnato a un `const_reference`, l'oggetto vettore non può essere modificato. Se il valore restituito di **in** viene assegnato a un **riferimento**, l'oggetto vettore può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_at.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector <int> v1;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
  
   const int &i = v1.at( 0 );  
   int &j = v1.at( 1 );  
   cout << "The first element is " << i << endl;  
   cout << "The second element is " << j << endl;  
}  
```  
  
```Output  
The first element is 10  
The second element is 20  
```  
  
##  <a name="a-namevectorbacka-vectorback"></a><a name="vector__back"></a>  Vector:: back  
 Restituisce un riferimento all'ultimo elemento del vettore.  
  
```  
reference back();

const_reference back() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Ultimo elemento del vettore. Se il vettore è vuoto, il valore restituito non è definito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di **nuovamente** viene assegnato a un `const_reference`, l'oggetto vettore non può essere modificato. Se il valore restituito di **nuovamente** viene assegnato a un **riferimento**, l'oggetto vettore può essere modificato.  
  
 Durante la compilazione con _SECURE_SCL 1, si verificherà un errore di runtime se si prova ad accedere a un elemento in un vettore vuoto.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```  
// vector_back.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main() {  
   using namespace std;     
   vector <int> v1;  
  
   v1.push_back( 10 );  
   v1.push_back( 11 );  
  
   int& i = v1.back( );  
   const int& ii = v1.front( );  
  
   cout << "The last integer of v1 is " << i << endl;  
   i--;  
   cout << "The next-to-last integer of v1 is "<< ii << endl;  
}  
```  
  
##  <a name="a-namevectorbegina-vectorbegin"></a><a name="vector__begin"></a>  Vector:: begin  
 Restituisce un iteratore ad accesso casuale al primo elemento nel vettore.  
  
```  
const_iterator begin() const;

 
iterator begin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale che punta al primo elemento di `vector` o alla posizione successiva vuoto `vector`. È consigliabile confrontare sempre il valore restituito con [vector:: end](#vector__end) per assicurarsi che sia valido.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di `begin` viene assegnato a un [vector:: const_iterator](#vector__const_iterator),  `vector` oggetto non può essere modificato. Se il valore restituito di `begin` viene assegnato a un [vector:: iterator](#vector__iterator),  `vector` oggetto può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_begin.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    vector<int> c1;  
    vector<int>::iterator c1_Iter;  
    vector<int>::const_iterator c1_cIter;  
  
    c1.push_back(1);  
    c1.push_back(2);  
  
    cout << "The vector c1 contains elements:";  
    c1_Iter = c1.begin();  
    for (; c1_Iter != c1.end(); c1_Iter++)  
    {  
        cout << " " << *c1_Iter;  
    }  
    cout << endl;  
  
    cout << "The vector c1 now contains elements:";  
    c1_Iter = c1.begin();  
 *c1_Iter = 20;  
    for (; c1_Iter != c1.end(); c1_Iter++)  
    {  
        cout << " " << *c1_Iter;  
    }  
    cout << endl;  
  
    // The following line would be an error because iterator is const  
    // *c1_cIter = 200;  
}  
```  
  
```Output  
The vector c1 contains elements: 1 2  
The vector c1 now contains elements: 20 2  
```  
  
##  <a name="a-namevectorcapacitya-vectorcapacity"></a><a name="vector__capacity"></a>  Vector:: Capacity  
 Restituisce il numero di elementi che il vettore può contenere senza allocare più spazio di archiviazione.  
  
```  
size_type capacity() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza di archiviazione corrente allocata per il vettore.  
  
### <a name="remarks"></a>Note  
 La funzione membro [ridimensionare](#vector__resize) sarà più efficiente se viene allocata memoria sufficiente per contenerla. Utilizzare la funzione membro [riservare](#vector__reserve) per specificare la quantità di memoria allocata.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_capacity.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector <int> v1;  
  
   v1.push_back( 1 );  
   cout << "The length of storage allocated is "  
        << v1.capacity( ) << "." << endl;  
  
   v1.push_back( 2 );  
   cout << "The length of storage allocated is now "  
        << v1.capacity( ) << "." << endl;  
}  
```  
  
```Output  
The length of storage allocated is 1.  
The length of storage allocated is now 2.  
```  
  
##  <a name="a-namevectorcbegina-vectorcbegin"></a><a name="vector__cbegin"></a>  Vector:: cbegin  
 Restituisce un iteratore `const` che punta al primo elemento dell'intervallo.  
  
```  
const_iterator cbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale `const` che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).  
  
### <a name="remarks"></a>Note  
 Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.  
  
 È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene utilizzato in combinazione con il [auto](../cpp/auto-cpp.md) digitare parola chiave di deduzione, come mostrato nell'esempio seguente. Nell'esempio, è consigliabile `Container` siano un modificabili (non - `const`) contenitore di qualsiasi tipo che supporta `begin()` e `cbegin()`.  
  
```cpp  
 
auto i1 = Container.begin();
// i1 is Container<T>::iterator   
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator  
```  
  
##  <a name="a-namevectorcenda-vectorcend"></a><a name="vector__cend"></a>  Vector:: cend  
 Restituisce un iteratore `const` che punta alla posizione oltre l'ultimo elemento di un intervallo.  
  
```  
const_iterator cend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore `const` ad accesso casuale che punta oltre la fine dell'intervallo.  
  
### <a name="remarks"></a>Note  
 `cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.  
  
 È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene utilizzato in combinazione con il [auto](../cpp/auto-cpp.md) digitare parola chiave di deduzione, come mostrato nell'esempio seguente. Nell'esempio, è consigliabile `Container` siano un modificabili (non - `const`) contenitore di qualsiasi tipo che supporta `end()` e `cend()`.  
  
```cpp  
 
auto i1 = Container.end();
// i1 is Container<T>::iterator   
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator  
```  
  
 Non è consigliabile dereferenziare il valore restituito da `cend`.  
  
##  <a name="a-namevectorcleara-vectorclear"></a><a name="vector__clear"></a>  Vector:: Clear  
 Cancella gli elementi del vettore.  
  
```  
void clear();
```  
  
### <a name="example"></a>Esempio  
  
```  
// vector_clear.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
   v1.push_back( 30 );  
  
   cout << "The size of v1 is " << v1.size( ) << endl;  
   v1.clear( );  
   cout << "The size of v1 after clearing is " << v1.size( ) << endl;  
}  
```  
  
```Output  
The size of v1 is 3  
The size of v1 after clearing is 0  
```  
  
##  <a name="a-namevectorconstiteratora-vectorconstiterator"></a><a name="vector__const_iterator"></a>  Vector:: const_iterator  
 Un tipo che fornisce un iteratore ad accesso casuale che può leggere un **const** elemento in un vettore.  
  
```  
typedef implementation-defined const_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [nuovamente](#vector__back) per un esempio che utilizza `const_iterator`.  
  
##  <a name="a-namevectorconstpointera-vectorconstpointer"></a><a name="vector__const_pointer"></a>  Vector:: const_pointer  
 Un tipo che fornisce un puntatore a un **const** elemento in un vettore.  
  
```  
typedef typename Allocator::const_pointer const_pointer;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento.  
  
 Un [iteratore](#vector__iterator) più comunemente utilizzato per accedere a un elemento di vettore.  
  
##  <a name="a-namevectorconstreferencea-vectorconstreference"></a><a name="vector__const_reference"></a>  Vector:: const_reference  
 Tipo che fornisce un riferimento a un **const** elemento archiviato in un vettore per la lettura e l'esecuzione **const** operazioni.  
  
```  
typedef typename Allocator::const_reference const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_reference` non può essere usato per modificare il valore di un elemento.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_const_ref.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector <int> v1;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
  
   const vector <int> v2 = v1;  
   const int &i = v2.front( );  
   const int &j = v2.back( );  
   cout << "The first element is " << i << endl;  
   cout << "The second element is " << j << endl;  
  
   // The following line would cause an error as v2 is const  
   // v2.push_back( 30 );  
}  
```  
  
```Output  
The first element is 10  
The second element is 20  
```  
  
##  <a name="a-namevectorconstreverseiteratora-vectorconstreverseiterator"></a><a name="vector__const_reverse_iterator"></a>  Vector:: const_reverse_iterator  
 Un tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi **const** elemento nel vettore.  
  
```  
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene utilizzato per scorrere il vettore in ordine inverso.  
  
### <a name="example"></a>Esempio  
  Vedere [rbegin](#vector__rbegin) per un esempio di come dichiarare e utilizzare un iteratore.  
  
##  <a name="a-namevectorcrbegina-vectorcrbegin"></a><a name="vector__crbegin"></a>  Vector:: crbegin  
 Restituisce un iteratore const che punta al primo elemento di un vettore invertito.  
  
```  
const_reverse_iterator crbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale che punta al primo elemento di un invertito inverso costante [vettore](vector%20Class.md) o addressing quello che era stato l'ultimo elemento nell'oggetto `vector`.  
  
### <a name="remarks"></a>Note  
 Con il valore restituito di `crbegin`, l'oggetto `vector` non può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_crbegin.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::iterator v1_Iter;  
   vector <int>::const_reverse_iterator v1_rIter;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
  
   v1_Iter = v1.begin( );  
   cout << "The first element of vector is "  
        << *v1_Iter << "." << endl;  
  
   v1_rIter = v1.crbegin( );  
   cout << "The first element of the reversed vector is "  
        << *v1_rIter << "." << endl;  
}  
```  
  
```Output  
The first element of vector is 1.  
The first element of the reversed vector is 2.  
```  
  
##  <a name="a-namevectorcrenda-vectorcrend"></a><a name="vector__crend"></a>  Vector:: crend  
 Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in un vettore inverso.  
  
```  
const_reverse_iterator crend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale che punta alla posizione successiva all'ultimo elemento in un invertito inverso costante [vettore](vector%20Class.md) (la posizione che precedeva il primo elemento nell'oggetto `vector`).  
  
### <a name="remarks"></a>Note  
 `crend` viene utilizzato con un invertito `vector` come [vector:: cend](#vector__cend) viene utilizzato con un `vector`.  
  
 Con il valore restituito di `crend` (adeguatamente decrementato), il `vector` oggetto non può essere modificato.  
  
 `crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine dell'oggetto `vector`.  
  
 Non è consigliabile dereferenziare il valore restituito da `crend`.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_crend.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::const_reverse_iterator v1_rIter;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
  
   for ( v1_rIter = v1.rbegin( ) ; v1_rIter != v1.rend( ) ; v1_rIter++ )  
      cout << *v1_rIter << endl;  
}  
```  
  
```Output  
2  
1  
```  
  
##  <a name="a-namevectordataa-vectordata"></a><a name="vector__data"></a>  Vector:: data  
 Restituisce un puntatore al primo elemento nel vettore.  
  
```  
const_pointer data() const;

 
pointer data();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al primo elemento nel [vettore](vector%20Class.md) o alla posizione successiva vuoto `vector`.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_data.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    vector<int> c1;  
    vector<int>::pointer c1 ptr;  
    vector<int>::const_pointer c1_cPtr;  
  
    c1.push_back(1);  
    c1.push_back(2);  
  
    cout << "The vector c1 contains elements:";  
    c1_cPtr = c1.data();  
    for (size_t n = c1.size(); 0 < n; --n, c1_cPtr++)  
    {  
        cout << " " << *c1_cPtr;  
    }  
    cout << endl;  
  
    cout << "The vector c1 now contains elements:";  
    c1 ptr = c1.data();  
 *c1 ptr = 20;  
    for (size_t n = c1.size(); 0 < n; --n, c1 ptr++)  
    {  
        cout << " " << *c1 ptr;  
    }  
    cout << endl;  
}  
```  
  
```Output  
The vector c1 contains elements: 1 2  
The vector c1 now contains elements: 20 2  
```  
  
##  <a name="a-namevectordifferencetypea-vectordifferencetype"></a><a name="vector__difference_type"></a>  Vector:: difference_type  
 Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno dello stesso vettore.  
  
```  
typedef typename Allocator::difference_type difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Oggetto `difference_type` può anche essere descritto come il numero di elementi tra due puntatori, perché un puntatore a un elemento contiene l'indirizzo.  
  
 Un [iteratore](#vector__iterator) più comunemente utilizzato per accedere a un elemento di vettore.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_diff_type.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <vector>  
#include <algorithm>  
  
int main( )  
{  
   using namespace std;  
  
   vector <int> c1;  
   vector <int>::iterator c1_Iter, c2_Iter;  
  
   c1.push_back( 30 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
   c1.push_back( 10 );  
   c1.push_back( 30 );  
   c1.push_back( 20 );  
  
   c1_Iter = c1.begin( );  
   c2_Iter = c1.end( );  
  
   vector <int>::difference_type   df_typ1, df_typ2, df_typ3;  
  
   df_typ1 = count( c1_Iter, c2_Iter, 10 );  
   df_typ2 = count( c1_Iter, c2_Iter, 20 );  
   df_typ3 = count( c1_Iter, c2_Iter, 30 );  
   cout << "The number '10' is in c1 collection " << df_typ1 << " times.\n";  
   cout << "The number '20' is in c1 collection " << df_typ2 << " times.\n";  
   cout << "The number '30' is in c1 collection " << df_typ3 << " times.\n";  
}  
```  
  
```Output  
The number '10' is in c1 collection 1 times.  
The number '20' is in c1 collection 2 times.  
The number '30' is in c1 collection 3 times.  
```  
  
##  <a name="a-namevectoremplacea-vectoremplace"></a><a name="vector__emplace"></a>  Vector:: emplace  
 Inserisce un elemento costruito sul posto nel vettore in una posizione specificata.  
  
```  
iterator emplace(
    const_iterator _Where,  
    Type&& val);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`_Where`|La posizione nel [vettore](vector%20Class.md) in cui è inserito il primo elemento.|  
|` val`|Valore dell'elemento da inserire nell'oggetto `vector`.|  
  
### <a name="return-value"></a>Valore restituito  
 La funzione restituisce un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nell'oggetto `vector`.  
  
### <a name="remarks"></a>Note  
 Un'operazione di inserimento può essere costoso, vedere [classe vector](vector%20Class.md) per una discussione su `vector` delle prestazioni.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_emplace.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::iterator Iter;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
   v1.push_back( 30 );  
  
   cout << "v1 =" ;  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
  
// initialize a vector of vectors by moving v1  
   vector < vector <int> > vv1;  
  
   vv1.emplace( vv1.begin(), move( v1 ) );  
   if ( vv1.size( ) != 0 && vv1[0].size( ) != 0 )  
      {  
      cout << "vv1[0] =";  
      for (Iter = vv1[0].begin( ); Iter != vv1[0].end( ); Iter++ )  
         cout << " " << *Iter;  
      cout << endl;  
      }  
}  
```  
  
```Output  
v1 = 10 20 30  
vv1[0] = 10 20 30  
```  
  
##  <a name="a-namevectoremplacebacka-vectoremplaceback"></a><a name="vector__emplace_back"></a>  Vector:: emplace_back  
 Aggiunge un elemento costruito sul posto alla fine del vettore.  
  
```  
template <class... Types>  
void emplace_back(Types&&... _Args);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`_Args`|Argomenti del costruttore. La funzione deduce di quale costruttore eseguire l'overload per richiamare il costruttore in base agli argomenti forniti.|  
  
### <a name="example"></a>Esempio  
  
```cpp  
  
#include <vector>  
struct obj  
{  
   obj(int, double) {}  
};  
  
int main()  
{  
   std::vector<obj> v;  
   v.emplace_back(1, 3.14); // obj in created in place in the vector  
}  
  
```  
  
##  <a name="a-namevectoremptya-vectorempty"></a><a name="vector__empty"></a>  Vector:: Empty  
 Verifica se il vettore è vuoto.  
  
```  
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** Se il vettore è vuoto; **false** Se il vettore non è vuoto.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_empty.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
  
   v1.push_back( 10 );  
  
   if ( v1.empty( ) )  
      cout << "The vector is empty." << endl;  
   else  
      cout << "The vector is not empty." << endl;  
}  
```  
  
```Output  
The vector is not empty.  
```  
  
##  <a name="a-namevectorenda-vectorend"></a><a name="vector__end"></a>  Vector:: end  
 Restituisce l'iteratore successivo all'ultimo valore.  
  
```  
iterator end();

const_iterator end() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore successivo all'ultimo valore per il vettore. Se il vettore è vuoto, `vector::end() == vector::begin()`.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di **end** viene assegnato a una variabile di tipo `const_iterator`, l'oggetto vettore non può essere modificato. Se il valore restituito di **end** viene assegnato a una variabile di tipo **iteratore**, l'oggetto vettore può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_end.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
int main( )  
{  
   using namespace std;  
   vector <int> v1;  
   vector <int>::iterator v1_Iter;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
  
   for ( v1_Iter = v1.begin( ) ; v1_Iter != v1.end( ) ; v1_Iter++ )  
      cout << *v1_Iter << endl;  
}  
```  
  
```Output  
1  
2  
```  
  
##  <a name="a-namevectorerasea-vectorerase"></a><a name="vector__erase"></a>  Vector:: Erase  
 Rimuove un elemento o un intervallo di elementi di un vettore dalle posizioni specificate.  
  
```  
iterator erase(
    const_iterator _Where);

iterator erase(
    const_iterator first,  
    const_iterator last);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`_Where`|Posizione dell'elemento da rimuovere dal vettore.|  
|` first`|Posizione del primo elemento rimosso dal vettore.|  
|` last`|Posizione oltre l'ultimo elemento rimosso dal vettore.|  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore che definisce il primo elemento rimanente oltre tutti gli elementi rimossi o puntatore alla fine del vettore se tale elemento non esiste.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_erase.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::iterator Iter;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
   v1.push_back( 30 );  
   v1.push_back( 40 );  
   v1.push_back( 50 );  
  
   cout << "v1 =" ;  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
  
   v1.erase( v1.begin( ) );  
   cout << "v1 =";  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
  
   v1.erase( v1.begin( ) + 1, v1.begin( ) + 3 );  
   cout << "v1 =";  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
}  
```  
  
```Output  
v1 = 10 20 30 40 50  
v1 = 20 30 40 50  
v1 = 20 50  
```  
  
##  <a name="a-namevectorfronta-vectorfront"></a><a name="vector__front"></a>  Vector:: front  
 Restituisce un riferimento al primo elemento di un vettore.  
  
```  
reference front();

const_reference front() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento al primo elemento dell'oggetto vettore. Se il vettore è vuoto, il valore restituito non è definito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito `front` viene assegnato a un `const_reference`, l'oggetto vettore non può essere modificato. Se il valore restituito di `front` viene assegnato a un **riferimento**, l'oggetto vettore può essere modificato.  
  
 Durante la compilazione con _SECURE_SCL 1, si verificherà un errore di runtime se si prova ad accedere a un elemento in un vettore vuoto.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```  
// vector_front.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
  
   v1.push_back( 10 );  
   v1.push_back( 11 );  
  
   int& i = v1.front( );  
   const int& ii = v1.front( );  
  
   cout << "The first integer of v1 is "<< i << endl;  
   // by incrementing i, we move the the front reference to the second element  
   i++;  
   cout << "Now, the first integer of v1 is "<< i << endl;  
}  
```  
  
##  <a name="a-namevectorgetallocatora-vectorgetallocator"></a><a name="vector__get_allocator"></a>  Vector:: get_allocator  
 Restituisce una copia dell'oggetto dell'allocatore utilizzato per costruire il vettore.  
  
```  
Allocator get_allocator() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Allocatore usato dal vettore.  
  
### <a name="remarks"></a>Note  
 Gli allocatori per la classe vector specificano come la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi dei contenitori STL sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_get_allocator.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   // The following lines declare objects that use the default allocator.  
   vector<int> v1;  
   vector<int, allocator<int> > v2 = vector<int, allocator<int> >(allocator<int>( )) ;  
  
   // v3 will use the same allocator class as v1  
   vector <int> v3( v1.get_allocator( ) );  
  
   vector<int>::allocator_type xvec = v3.get_allocator( );  
   // You can now call functions on the allocator class used by vec  
}  
```  
  
##  <a name="a-namevectorinserta-vectorinsert"></a><a name="vector__insert"></a>  Vector:: Insert  
 Inserisce un elemento, un numero di elementi o un intervallo di elementi nel vettore in una posizione specificata.  
  
```  
iterator insert(
    const_iterator _Where,  
    const Type& val);

iterator insert(
    const_iterator _Where,  
    Type&& val);

void insert(
    const_iterator _Where,  
    size_type count,  
    const Type& val);

template <class InputIterator>  
void insert(
    const_iterator _Where,  
    InputIterator first,  
    InputIterator last);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`_Where`|Posizione nel vettore in cui viene inserito il primo elemento.|  
|` val`|Valore dell'elemento da inserire nel vettore.|  
|` count`|Numero di elementi da inserire nel vettore.|  
|` first`|Posizione del primo elemento nell'intervallo di elementi da copiare.|  
|` last`|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|  
  
### <a name="return-value"></a>Valore restituito  
 Le prime due funzioni `insert` restituiscono un iteratore che punta alla posizione in cui è stato inserito il nuovo elemento nel vettore.  
  
### <a name="remarks"></a>Note  
 Un'operazione di inserimento può essere costoso, vedere [classe vector](vector%20Class.md) per una discussione su `vector` delle prestazioni.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_insert.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::iterator Iter;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
   v1.push_back( 30 );  
  
   cout << "v1 =" ;  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
  
   v1.insert( v1.begin( ) + 1, 40 );  
   cout << "v1 =";  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
   v1.insert( v1.begin( ) + 2, 4, 50 );  
  
   cout << "v1 =";  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
  
   v1.insert( v1.begin( )+1, v1.begin( )+2, v1.begin( )+4 );  
   cout << "v1 =";  
   for (Iter = v1.begin( ); Iter != v1.end( ); Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
  
// initialize a vector of vectors by moving v1  
   vector < vector <int> > vv1;  
  
   vv1.insert( vv1.begin(), move( v1 ) );  
   if ( vv1.size( ) != 0 && vv1[0].size( ) != 0 )  
      {  
      vector < vector <int> >::iterator Iter;  
      cout << "vv1[0] =";  
      for (Iter = vv1[0].begin( ); Iter != vv1[0].end( ); Iter++ )  
         cout << " " << *Iter;  
      cout << endl;  
      }  
}  
```  
  
```Output  
v1 = 10 20 30  
v1 = 10 40 20 30  
v1 = 10 40 50 50 50 50 20 30  
v1 = 10 50 50 40 50 50 50 50 20 30  
vv1[0] = 10 50 50 40 50 50 50 50 20 30  
```  
  
##  <a name="a-namevectoriteratora-vectoriterator"></a><a name="vector__iterator"></a>  Vector:: iterator  
 Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore.  
  
```  
typedef implementation-defined iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo **iteratore** può essere utilizzato per modificare il valore di un elemento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [iniziare](#vector__begin).  
  
##  <a name="a-namevectormaxsizea-vectormaxsize"></a><a name="vector__max_size"></a>  Vector:: max_size  
 Restituisce la lunghezza massima del vettore.  
  
```  
size_type max_size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza massima possibile del vettore.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_max_size.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::size_type i;  
  
   i = v1.max_size( );     
   cout << "The maximum possible length of the vector is " << i << "." << endl;  
}  
```  
  
##  <a name="a-namevectoroperatorata-vectoroperator"></a><a name="vector__operator_at"></a>  Vector:: operator]  
 Restituisce un riferimento a un elemento di vettore in corrispondenza di una posizione specificata.  
  
```  
reference operator[](size_type Pos);

const_reference operator[](size_type Pos) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Pos`|Posizione dell'elemento di vettore.|  
  
### <a name="return-value"></a>Valore restituito  
 Se la posizione specificata è maggiore o uguale alla dimensione del contenitore, il risultato sarà non definito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito `operator[]` viene assegnato a un `const_reference`, l'oggetto vettore non può essere modificato. Se il valore restituito `operator[]` viene assegnato a un riferimento, l'oggetto vettore può essere modificato.  
  
 Durante la compilazione con SECURE_SCL 1 (controllato con [ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md)), si verificherà un errore di runtime se si tenta di accedere a un elemento all'esterno dei limiti del vettore.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_op_ref.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
  
   int& i = v1[1];  
   cout << "The second integer of v1 is " << i << endl;  
}  
```  
  
##  <a name="a-namevectoroperatoreqa-vectoroperator"></a><a name="vector__operator_eq"></a>  Vector:: operator =  
 Sostituisce gli elementi del vettore con una copia di un altro vettore.  
  
```  
vector& operator=(const vector& right);

vector& operator=(vector&& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|` right`|Il [vettore](vector%20Class.md) viene copiato il `vector`.|  
  
### <a name="remarks"></a>Note  
 Dopo la cancellazione di tutti gli elementi esistenti in un oggetto `vector`, `operator=` copia o sposta il contenuto di ` right` nell'oggetto `vector`.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_operator_as.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector<int> v1, v2, v3;  
   vector<int>::iterator iter;  
  
   v1.push_back(10);  
   v1.push_back(20);  
   v1.push_back(30);  
   v1.push_back(40);  
   v1.push_back(50);  
  
   cout << "v1 = " ;  
   for (iter = v1.begin(); iter != v1.end(); iter++)  
      cout << *iter << " ";  
   cout << endl;  
  
   v2 = v1;  
   cout << "v2 = ";  
   for (iter = v2.begin(); iter != v2.end(); iter++)  
      cout << *iter << " ";  
   cout << endl;  
  
// move v1 into v2  
   v2.clear();  
   v2 = move(v1);  
   cout << "v2 = ";  
   for (iter = v2.begin(); iter != v2.end(); iter++)  
      cout << *iter << " ";  
   cout << endl;  
}  
```  
  
##  <a name="a-namevectorpointera-vectorpointer"></a><a name="vector__pointer"></a>  Vector:: pointer  
 Tipo che fornisce un puntatore a un elemento in un vettore.  
  
```  
typedef typename Allocator::pointer pointer;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo **puntatore** può essere utilizzato per modificare il valore di un elemento.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_pointer.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector<int> v;  
   v.push_back( 11 );  
   v.push_back( 22 );  
  
   vector<int>::pointer ptr = &v[0];  
   cout << *ptr << endl;  
   ptr++;  
   cout << *ptr << endl;  
 *ptr = 44;  
   cout << *ptr << endl;  
}  
```  
  
```Output  
11  
22  
44  
```  
  
##  <a name="a-namevectorpopbacka-vectorpopback"></a><a name="vector__pop_back"></a>  Vector:: pop_back  
 Elimina l'elemento alla fine del vettore.  
  
```  
void pop_back();
```  
  
### <a name="remarks"></a>Note  
 Per un esempio di codice, vedere [vector:: push_back ()](#vector__push_back).  
  
##  <a name="a-namevectorpushbacka-vectorpushback"></a><a name="vector__push_back"></a>  Vector:: push_back  
 Aggiunge un elemento alla fine del vettore.  
  
```  
void push_back(const T& Val);

 
void push_back(T&& Val);
```  
  
### <a name="parameters"></a>Parametri  
 `Val`  
 Valore da assegnare all'elemento aggiunto alla fine del vettore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// compile with: /EHsc /W4  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
template <typename T> void print_elem(const T& t) {  
    cout << "(" << t << ") ";  
}  
  
template <typename T> void print_collection(const T& t) {  
    cout << "  " << t.size() << " elements: ";  
  
    for (const auto& p : t) {  
        print_elem(p);  
    }  
    cout << endl;  
}  
  
int main()  
{  
    vector<int> v;  
    for (int i = 0; i < 10; ++i) {  
        v.push_back(10 + i);  
    }  
  
    cout << "vector data: " << endl;  
    print_collection(v);  
  
    // pop_back() until it's empty, printing the last element as we go  
    while (v.begin() != v.end()) {   
        cout << "v.back(): "; print_elem(v.back()); cout << endl;  
        v.pop_back();  
    }  
}  
```  
  
##  <a name="a-namevectorrbegina-vectorrbegin"></a><a name="vector__rbegin"></a>  Vector:: rbegin  
 Restituisce un iteratore al primo elemento in un vettore inverso.  
  
```  
reverse_iterator rbegin();

const_reverse_iterator rbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale inverso che punta al primo elemento in un vettore inverso o addressing quello che era stato l'ultimo elemento nel vettore non invertito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto vettore non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto vettore può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_rbegin.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::iterator v1_Iter;  
   vector <int>::reverse_iterator v1_rIter;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
  
   v1_Iter = v1.begin( );  
   cout << "The first element of vector is "  
        << *v1_Iter << "." << endl;  
  
   v1_rIter = v1.rbegin( );  
   cout << "The first element of the reversed vector is "  
        << *v1_rIter << "." << endl;  
}  
```  
  
```Output  
The first element of vector is 1.  
The first element of the reversed vector is 2.  
```  
  
##  <a name="a-namevectorreferencea-vectorreference"></a><a name="vector__reference"></a>  Vector:: Reference  
 Tipo che fornisce un riferimento a un elemento archiviato in un vettore.  
  
```  
typedef typename Allocator::reference reference;  
```  
  
### <a name="example"></a>Esempio  
  Vedere [in](#vector__at) per un esempio di come utilizzare **riferimento** nella classe vector.  
  
##  <a name="a-namevectorrenda-vectorrend"></a><a name="vector__rend"></a>  Vector:: rend  
 Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in un vettore inverso.  
  
```  
const_reverse_iterator rend() const;

reverse_iterator rend();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale inverso che punta alla posizione successiva all'ultimo elemento in un vettore inverso (la posizione che precedeva il primo elemento nel vettore non invertito).  
  
### <a name="remarks"></a>Note  
 `rend` viene utilizzato con un vettore inverso proprio come [end](#vector__end) viene utilizzato con un vettore.  
  
 Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, quindi l'oggetto vettore non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, quindi l'oggetto vettore può essere modificato.  
  
 `rend` può essere utilizzato per verificare se un iteratore inverso ha raggiunto la fine del relativo vettore.  
  
 Non è consigliabile dereferenziare il valore restituito da `rend`.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_rend.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::reverse_iterator v1_rIter;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
  
   for ( v1_rIter = v1.rbegin( ) ; v1_rIter != v1.rend( ) ; v1_rIter++ )  
      cout << *v1_rIter << endl;  
}  
```  
  
```Output  
2  
1  
```  
  
##  <a name="a-namevectorreservea-vectorreserve"></a><a name="vector__reserve"></a>  Vector:: Reserve  
 Riserva una lunghezza di archiviazione minima per un oggetto vettore, allocando lo spazio se necessario.  
  
```  
void reserve(size_type count);
```  
  
### <a name="parameters"></a>Parametri  
 ` count`  
 Lunghezza di archiviazione minima da allocare per il vettore.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_reserve.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   //vector <int>::iterator Iter;  
  
   v1.push_back( 1 );  
   cout << "Current capacity of v1 = "   
      << v1.capacity( ) << endl;  
   v1.reserve( 20 );  
   cout << "Current capacity of v1 = "   
      << v1.capacity( ) << endl;  
}  
```  
  
```Output  
Current capacity of v1 = 1  
Current capacity of v1 = 20  
```  
  
##  <a name="a-namevectorresizea-vectorresize"></a><a name="vector__resize"></a>  Vector:: Resize  
 Specifica una nuova dimensione per un vettore.  
  
```  
void resize(size_type Newsize);

void resize(size_type Newsize, Type Val);
```  
  
### <a name="parameters"></a>Parametri  
 `Newsize`  
 La nuova dimensione del vettore.  
  
 `Val`  
 Valore di inizializzazione dei nuovi elementi aggiunti al vettore se la nuova dimensione è maggiore di quella originaria. Se il valore viene omesso, i nuovi oggetti usano il proprio costruttore predefinito.  
  
### <a name="remarks"></a>Note  
 Se la dimensione del contenitore è inferiore a quella richiesta, `Newsize`, vengono aggiunti elemento al vettore finché non raggiunge la dimensione richiesta. Se la dimensione del contenitore è maggiore di quella richiesta, vengono eliminati gli elementi più vicini alla fine del contenitore finché il contenitore non raggiunge la dimensione `Newsize`. Se la dimensione attuale del contenitore corrisponde a quella richiesta, non viene eseguita alcuna azione.  
  
 [dimensioni](#vector__size) riflette la dimensione corrente del vettore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vectorsizing.cpp  
// compile with: /EHsc /W4  
// Illustrates vector::reserve, vector::max_size,  
// vector::resize, vector::resize, and vector::capacity.  
//  
// Functions:  
//  
//    vector::max_size - Returns maximum number of elements vector could  
//                       hold.  
//  
//    vector::capacity - Returns number of elements for which memory has  
//                       been allocated.  
//  
//    vector::size - Returns number of elements in the vector.  
//  
//    vector::resize - Reallocates memory for vector, preserves its  
//                     contents if new size is larger than existing size.  
//  
//    vector::reserve - Allocates elements for vector to ensure a minimum  
//                      size, preserving its contents if the new size is  
//                      larger than existing size.  
//  
//    vector::push_back - Appends (inserts) an element to the end of a  
//                        vector, allocating memory for it if necessary.  
//  
//////////////////////////////////////////////////////////////////////  
  
// The debugger cannot handle symbols more than 255 characters long.  
// STL often creates symbols longer than that.  
// The warning can be disabled:  
//#pragma warning(disable:4786)  
  
#include <iostream>  
#include <vector>  
#include <string>  
  
using namespace std;  
  
template <typename C> void print(const string& s, const C& c) {  
    cout << s;  
  
    for (const auto& e : c) {  
        cout << e << " ";  
    }  
    cout << endl;  
}  
  
void printvstats(const vector<int>& v) {  
    cout << "   the vector's size is: " << v.size() << endl;  
    cout << "   the vector's capacity is: " << v.capacity() << endl;  
    cout << "   the vector's maximum size is: " << v.max_size() << endl;  
}  
  
int main()  
{  
    // declare a vector that begins with 0 elements.  
    vector<int> v;  
  
    // Show statistics about vector.  
    cout << endl << "After declaring an empty vector:" << endl;  
    printvstats(v);  
    print("   the vector's contents: ", v);  
  
    // Add one element to the end of the vector.  
    v.push_back(-1);  
    cout << endl << "After adding an element:" << endl;  
    printvstats(v);  
    print("   the vector's contents: ", v);  
  
    for (int i = 1; i < 10; ++i) {  
        v.push_back(i);  
    }  
    cout << endl << "After adding 10 elements:" << endl;  
    printvstats(v);  
    print("   the vector's contents: ", v);  
  
    v.resize(6);  
    cout << endl << "After resizing to 6 elements without an initialization value:" << endl;  
    printvstats(v);  
    print("   the vector's contents: ", v);  
  
    v.resize(9, 999);  
    cout << endl << "After resizing to 9 elements with an initialization value of 999:" << endl;  
    printvstats(v);  
    print("   the vector's contents: ", v);  
  
    v.resize(12);  
    cout << endl << "After resizing to 12 elements without an initialization value:" << endl;  
    printvstats(v);  
    print("   the vector's contents: ", v);  
  
    // Ensure there's room for at least 1000 elements.  
    v.reserve(1000);  
    cout << endl << "After vector::reserve(1000):" << endl;  
    printvstats(v);  
  
    // Ensure there's room for at least 2000 elements.  
    v.resize(2000);  
    cout << endl << "After vector::resize(2000):" << endl;  
    printvstats(v);  
}  
```  
  
##  <a name="a-namevectorreverseiteratora-vectorreverseiterator"></a><a name="vector__reverse_iterator"></a>  Vector:: reverse_iterator  
 Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in un vettore inverso.  
  
```  
typedef std::reverse_iterator<iterator> reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `reverse_iterator` viene usato per scorrere il vettore in ordine inverso.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [rbegin](#vector__rbegin).  
  
##  <a name="a-namevectorshrinktofita-vectorshrinktofit"></a><a name="vector__shrink_to_fit"></a>  Vector:: shrink_to_fit  
 Elimina la capacità in eccesso.  
  
```  
void shrink_to_fit();
```  
  
### <a name="example"></a>Esempio  
  
```  
// vector_shrink_to_fit.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   //vector <int>::iterator Iter;  
  
   v1.push_back( 1 );  
   cout << "Current capacity of v1 = "   
      << v1.capacity( ) << endl;  
   v1.reserve( 20 );  
   cout << "Current capacity of v1 = "   
      << v1.capacity( ) << endl;  
   v1.shrink_to_fit();  
   cout << "Current capacity of v1 = "   
      << v1.capacity( ) << endl;  
}  
```  
  
```Output  
Current capacity of v1 = 1  
Current capacity of v1 = 20  
Current capacity of v1 = 1  
```  
  
##  <a name="a-namevectorsizea-vectorsize"></a><a name="vector__size"></a>  Vector:: Size  
 Restituisce il numero di elementi nel vettore.  
  
```  
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza corrente del vettore.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_size.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1;  
   vector <int>::size_type i;  
  
   v1.push_back( 1 );  
   i = v1.size( );  
   cout << "Vector length is " << i << "." << endl;  
  
   v1.push_back( 2 );  
   i = v1.size( );  
   cout << "Vector length is now " << i << "." << endl;  
}  
```  
  
```Output  
Vector length is 1.  
Vector length is now 2.  
```  
  
##  <a name="a-namevectorsizetypea-vectorsizetype"></a><a name="vector__size_type"></a>  Vector:: size_type  
 Tipo che conta il numero di elementi in un vettore.  
  
```  
typedef typename Allocator::size_type size_type;  
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [capacità](#vector__capacity).  
  
##  <a name="a-namevectorswapa-vectorswap"></a><a name="vector__swap"></a>  Vector:: swap  
 Scambia gli elementi di due vettori.  
  
```  
void swap(
    vector<Type, Allocator>& right);

friend void swap(
    vector<Type, Allocator>& left,  
    vector<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Vettore che fornisce gli elementi da scambiare o vettore i cui elementi devono essere scambiati con quelli del vettore ` left`.  
  
 ` left`  
 Vettore i cui elementi devono essere scambiati con quelli del vettore ` right`.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_swap.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   vector <int> v1, v2;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
   v1.push_back( 3 );  
  
   v2.push_back( 10 );  
   v2.push_back( 20 );  
  
   cout << "The number of elements in v1 = " << v1.size( ) << endl;  
   cout << "The number of elements in v2 = " << v2.size( ) << endl;  
   cout << endl;  
  
   v1.swap( v2 );  
  
   cout << "The number of elements in v1 = " << v1.size( ) << endl;  
   cout << "The number of elements in v2 = " << v2.size( ) << endl;  
}  
```  
  
```Output  
The number of elements in v1 = 3  
The number of elements in v2 = 2  
  
The number of elements in v1 = 2  
The number of elements in v2 = 3  
```  
  
##  <a name="a-namevectorvaluetypea-vectorvaluetype"></a><a name="vector__value_type"></a>  Vector:: value_type  
 Tipo che rappresenta il tipo di dati archiviati in un vettore.  
  
```  
typedef typename Allocator::value_type value_type;  
```  
  
### <a name="remarks"></a>Note  
 `value_type` è un sinonimo del parametro di modello **tipo**.  
  
### <a name="example"></a>Esempio  
  
```  
// vector_value_type.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector<int>::value_type AnInt;  
   AnInt = 44;  
   cout << AnInt << endl;  
}  
```  
  
```Output  
44  
```  
  
##  <a name="a-namevectorvectora-vectorvector"></a><a name="vector__vector"></a>  Vector:: Vector  
 Costruisce un vettore di dimensioni specifiche, con elementi di un valore specifico, con un allocatore specifico oppure come copia di tutto o parte di un altro vettore.  
  
```  
vector();

explicit vector(
    const Allocator& Al);

explicit vector(
    size_type Count);

vector(
    size_type Count,  
    const Type& Val);

vector(
    size_type Count,  
    const Type& Val,  
    const Allocator& Al);

vector(
    const vector& Right);

vector(
    vector&& Right);

vector(
    initializer_list<Type> IList,  
    const _Allocator& Al);

template <class InputIterator>  
vector(
 InputIterator First,  
    InputIterator Last);

template <class InputIterator>  
vector(
 InputIterator First,  
    InputIterator Last,  
    const Allocator& Al);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Al`|Classe Allocator da usare con questo oggetto. [get_allocator](#vector__get_allocator) restituisce la classe dell'allocatore per l'oggetto.|  
|`Count`|Numero di elementi del vettore costruito.|  
|`Val`|Valore degli elementi del vettore costruito.|  
|`Right`|Vettore di cui il vettore costruito deve essere una copia.|  
|`First`|Posizione del primo elemento nell'intervallo di elementi da copiare.|  
|`Last`|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|  
|`IList`|Oggetto initializer_list contenente gli elementi da copiare.|  
  
### <a name="remarks"></a>Note  
 Tutti i costruttori archiviano un oggetto allocatore ( `Al`) e inizializzano il vettore.  
  
 I primi due costruttori specificano un vettore iniziale vuoto. Il secondo specifica in modo esplicito il tipo di allocatore ( `Al`) da utilizzare.  
  
 Il terzo costruttore specifica una ripetizione di un numero specificato ( `Count`) degli elementi del valore predefinito per la classe `Type`.  
  
 Il quarto costruttore specificano una ripetizione di ( `Count`) degli elementi di valore `Val`.  
  
 Il sesto costruttore specifica una copia del vettore `Right`.  
  
 Il settimo costruttore sposta il vettore `Right`.  
  
 L'ottavo costruttore usa un oggetto initializer_list per specificare gli elementi.  
  
 Il nono e decimo costruttore copiano l'intervallo [ `First`, `Last`) di un vettore.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// vector_ctor.cpp  
// compile with: /EHsc  
#include <vector>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    vector <int>::iterator v1_Iter, v2_Iter, v3_Iter, v4_Iter, v5_Iter, v6_Iter;  
  
    // Create an empty vector v0  
    vector <int> v0;  
  
    // Create a vector v1 with 3 elements of default value 0  
    vector <int> v1(3);  
  
    // Create a vector v2 with 5 elements of value 2  
    vector <int> v2(5, 2);  
  
    // Create a vector v3 with 3 elements of value 1 and with the allocator   
    // of vector v2  
    vector <int> v3(3, 1, v2.get_allocator());  
  
    // Create a copy, vector v4, of vector v2  
    vector <int> v4(v2);  
  
    // Create a new temporary vector for demonstrating copying ranges  
    vector <int> v5(5);  
    for (auto i : v5) {  
        v5[i] = i;  
    }  
  
    // Create a vector v6 by copying the range v5[ first,  last)  
    vector <int> v6(v5.begin() + 1, v5.begin() + 3);  
  
    cout << "v1 =";  
    for (auto& v : v1){  
        cout << " " << v;  
    }  
    cout << endl;  
  
    cout << "v2 =";  
    for (auto& v : v2){  
        cout << " " << v;  
    }  
    cout << endl;  
  
    cout << "v3 =";  
    for (auto& v : v3){  
        cout << " " << v;  
    }  
    cout << endl;  
    cout << "v4 =";  
    for (auto& v : v4){  
        cout << " " << v;  
    }  
    cout << endl;  
  
    cout << "v5 =";  
    for (auto& v : v5){  
        cout << " " << v;  
    }  
    cout << endl;  
  
    cout << "v6 =";  
    for (auto& v : v6){  
        cout << " " << v;  
    }  
    cout << endl;  
  
    // Move vector v2 to vector v7  
    vector <int> v7(move(v2));  
    vector <int>::iterator v7_Iter;  
  
    cout << "v7 =";  
    for (auto& v : v7){  
        cout << " " << v;  
    }  
    cout << endl;  
  
    vector<int> v8{ { 1, 2, 3, 4 } };  
    for (auto& v : v8){  
        cout << " " << v ;  
    }  
    cout << endl;  
}  
  
```  
  
```Output  
v1 = 0 0 0v2 = 2 2 2 2 2v3 = 1 1 1v4 = 2 2 2 2 2v5 = 0 1 2 3 4v6 = 1 2v7 = 2 2 2 2 21 2 3 4  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

