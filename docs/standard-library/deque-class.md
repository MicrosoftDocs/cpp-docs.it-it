---
title: "Classe deque | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.deque"
  - "deque"
  - "std::deque"
  - "deque/std::deque"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classe deque, informazioni sulla classe deque"
  - "classe deque"
ms.assetid: 64842ee5-057a-4063-8c16-4267a0332584
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# Classe deque
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Organizza gli elementi di un determinato tipo in una disposizione lineare e, come un vettore, consente l'accesso casuale veloce a qualsiasi elemento e l'inserimento e l'eliminazione efficienti sul retro del contenitore. Tuttavia, a differenza di un vettore, la classe `deque` supporta anche l'inserimento e l'eliminazione efficiente davanti al contenitore.  
  
## <a name="syntax"></a>Sintassi  
  
```unstlib  
template <class Type,   
    class Allocator =allocator<Type>>  
class deque  
```  
  
#### <a name="parameters"></a>Parametri  
 `Type`  
 Tipo di dati degli elementi da archiviare nella deque.  
  
 `Allocator`  
 Tipo che rappresenta l'oggetto allocatore memorizzato che incapsula i dettagli sull'allocazione e sulla deallocazione della deque e della memoria. Questo argomento è facoltativo e il valore predefinito è **allocatore \< tipo>***.*  
  
## <a name="remarks"></a>Note  
 La scelta del tipo di contenitore deve essere basata in genere sul tipo di ricerca e di inserimento richiesti dall'applicazione. [Vettori](vector%20Class.md) deve essere il contenitore preferito per la gestione di una sequenza quando l'accesso casuale a qualsiasi elemento è prezioso e inserimenti o eliminazioni di elementi sono solo necessarie alla fine di una sequenza. Le prestazioni del contenitore elenco sono superiori quando efficiente inserimenti e le eliminazioni (in tempo costante) in qualsiasi posizione all'interno della sequenza è prezioso. Tali operazioni al centro della sequenza richiedono copie di elementi e assegnazioni proporzionali al numero di elementi della sequenza (tempo lineare).  
  
 La riallocazione della deque si verifica quando una funzione interna deve inserire o eliminare elementi della sequenza:  
  
-   Se un elemento viene inserito in una sequenza vuota oppure se un elemento verrà cancellato per lasciare una sequenza vuota, quindi gli iteratori in precedenza restituito da [iniziare](#deque__begin) e [end](#deque__end) non saranno più valide.  
  
-   Se un elemento viene inserito nella prima posizione della deque, tutti gli iteratori, ma nessun riferimento, che definiscono gli elementi esistenti diventano validi.  
  
-   Se un elemento viene inserito alla fine di deque, quindi [end](#deque__end) e tutti gli iteratori, ma senza riferimenti, che definiscono gli elementi esistenti non saranno più validi.  
  
-   Se un elemento viene cancellato all'inizio della deque, solo l'iteratore e i riferimenti all'elemento cancellato diventano non validi.  
  
-   Se l'ultimo elemento viene rimosso dalla fine della deque, solo l'iteratore nell'elemento finale e i riferimenti all'elemento eliminato diventano non validi.  
  
 In caso contrario, l'inserimento o l'eliminazione di un elemento invalida tutti gli iteratori e i riferimenti.  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[deque](#deque__deque)|Costruisce un `deque.` diversi costruttori vengono forniti per impostare il contenuto del nuovo `deque` in modi diversi: vuoto; caricato con un numero specificato di elementi vuoti; contenuto spostati o copiati da un altro `deque`; contenuto copiato o spostato utilizzando un iteratore; e un elemento copiato il `deque`` count` volte. Alcuni costruttori consentono l'utilizzo di un `allocator` personalizzato per creare elementi.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[allocator_type](#deque__allocator_type)|Tipo che rappresenta la classe `allocator` per l'oggetto `deque`.|  
|[const_iterator](#deque__const_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può avere accesso e leggere elementi nella `deque` come `const`.|  
|[const_pointer](#deque__const_pointer)|Tipo che fornisce un puntatore a un elemento in un `deque` come `const.`.|  
|[const_reference](#deque__const_reference)|Tipo che fornisce un riferimento a un elemento in una `deque` per leggere ed effettuare altre operazioni come `const.`.|  
|[const_reverse_iterator](#deque__const_reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può avere accesso e leggere elementi nella `deque` come `const`. La deque viene visualizzata al contrario. Per ulteriori informazioni, vedere [reverse_iterator (classe)](../standard-library/reverse-iterator-class.md)|  
|[difference_type](#deque__difference_type)|Tipo che fornisce la differenza tra due iteratori di accesso casuale che fanno riferimento agli elementi all'interno della stessa `deque`.|  
|[iteratore](#deque__iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in una `deque`.|  
|[puntatore](#deque__pointer)|Tipo che fornisce un puntatore a un elemento in un `deque`.|  
|[riferimento](#deque__reference)|Tipo che fornisce un riferimento a un elemento archiviato in un `deque`.|  
|[reverse_iterator](#deque__reverse_iterator)|Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare un elemento in una `deque`. La deque viene visualizzata in ordine inverso.|  
|[size_type](#deque__size_type)|Tipo che conta il numero di elementi in una `deque`.|  
|[value_type](#deque__value_type)|Tipo che rappresenta il tipo di dati archiviati in un `deque`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[assegnare](#deque__assign)|Elimina gli elementi da una `deque` e copia una nuova sequenza di elementi nella `deque` di destinazione.|  
|[in](#deque__at)|Restituisce un riferimento all'elemento in corrispondenza della posizione specificata nella `deque`.|  
|[Indietro](#deque__back)|Restituisce un riferimento all'ultimo elemento della `deque`.|  
|[iniziare](#deque__begin)|Restituisce un iteratore ad accesso casuale che punta al primo elemento nella `deque`.|  
|[deque:: cbegin](#deque__cbegin)|Restituisce un iteratore const al primo elemento nella `deque`.|  
|[deque:: cend](#deque__cend)|Restituisce iteratore `const` ad accesso casuale che punta appena oltre la fine della `deque`.|  
|[deselezionare](#deque__clear)|Cancella tutti gli elementi di un `deque`.|  
|[deque:: crbegin](#deque__crbegin)|Restituisce un iteratore const ad accesso casuale al primo elemento in una `deque` visualizzata in ordine inverso.|  
|[deque:: crend](#deque__crend)|Restituisce un iteratore const ad accesso casuale al primo elemento in una `deque` visualizzata in ordine inverso.|  
|[deque:: emplace](#deque__emplace)|Inserisce un elemento costruito sul posto nella `deque` in una posizione specificata.|  
|[deque:: emplace_back](#deque__emplace_back)|Aggiunge un elemento costruito sul posto alla fine della `deque`.|  
|[deque:: emplace_front](#deque__emplace_front)|Aggiunge un elemento costruito sul posto all'inizio della `deque`.|  
|[vuoto](#deque__empty)|Restituisce `true` se la `deque` contiene zero elementi e `false` se contiene uno o più elementi.|  
|[fine](#deque__end)|Restituisce un iteratore ad accesso casuale che punta appena oltre la fine della `deque`.|  
|[cancellazione](#deque__erase)|Rimuove un elemento o un intervallo di elementi in una `deque` da posizioni specificate.|  
|[primo piano](#deque__front)|Restituisce un riferimento al primo elemento in una `deque`.|  
|[get_allocator](#deque__get_allocator)|Restituisce una copia dell'oggetto `allocator` utilizzato per costruire il `deque`.|  
|[inserimento](#deque__insert)|Inserisce un elemento, diversi elementi, o un intervallo di elementi nella `deque` in una posizione specificata.|  
|[max_size](#deque__max_size)|Restituisce la lunghezza massima possibile della `deque`.|  
|[pop_back](#deque__pop_back)|Cancella l'elemento alla fine della `deque`.|  
|[pop_front](#deque__pop_front)|Cancella l'elemento all'inizio della `deque`.|  
|[push_back](#deque__push_back)|Aggiunge un elemento alla fine della `deque`.|  
|[push_front](#deque__push_front)|Aggiunge un elemento all'inizio della `deque`.|  
|[rbegin](#deque__rbegin)|Restituisce un iteratore ad accesso casuale al primo elemento in una `deque` invertita.|  
|[REND)](#deque__rend)|Restituisce un iteratore ad accesso casuale che punta appena oltre l'ultimo elemento di una `deque` invertita.|  
|[ridimensionamento](#deque__resize)|Specifica una nuova dimensione per `deque`.|  
|[deque:: shrink_to_fit](#deque__shrink_to_fit)|Elimina la capacità in eccesso.|  
|[dimensioni](#deque__size)|Restituisce il numero di elementi nel `deque`.|  
|[swap](#deque__swap)|Scambia gli elementi di due `deque`.|  
  
### <a name="operators"></a>Operatori  
  
|||  
|-|-|  
|[operatore &#91; &#93;](#deque__operator_at)|Restituisce un riferimento all'elemento `deque` in una posizione specificata.|  
|[deque:: operator =](#deque__operator_eq)|Sostituisce gli elementi di una `deque` con una copia di un'altra `deque`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \< deque>  
  
##  <a name="a-namedequeallocatortypea-dequeallocatortype"></a><a name="deque__allocator_type"></a>  deque:: allocator_type  
 Un tipo che rappresenta la classe dell'allocatore per l'oggetto deque.  
  
```  
typedef Allocator allocator_type;  
```  
  
### <a name="remarks"></a>Note  
 **allocator_type** è un sinonimo del parametro di modello **allocatore**.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [get_allocator](#deque__get_allocator).  
  
##  <a name="a-namedequeassigna-dequeassign"></a><a name="deque__assign"></a>  deque:: Assign  
 Elimina elementi da una classe deque e copia un nuovo set di elementi per la destinazione deque.  
  
```  
template <class InputIterator>  
void assign(
    InputIterator First,  
    InputIterator Last);

void assign(
    size_type Count,  
    const Type& Val);

void assign(
    initializer_list<Type>  
IList);
```  
  
### <a name="parameters"></a>Parametri  
 `First`  
 Posizione del primo elemento nell'intervallo di elementi da copiare dal deque argomento.  
  
 `Last`  
 Posizione del primo elemento oltre l'intervallo di elementi da copiare da deque l'argomento.  
  
 `Count`  
 Il numero di copie di un elemento viene inserito il deque.  
  
 `Val`  
 Il valore dell'elemento inserito nel deque.  
  
 `IList`  
 Initializer_list da inserire di deque.  
  
### <a name="remarks"></a>Note  
 Dopo che tutti gli elementi esistenti in deque di destinazione vengono cancellati, `assign` inserisce un intervallo di elementi specificato da deque originale o da alcuni altri deque deque la destinazione o inserire copie di un nuovo elemento di un valore specificato deque di destinazione.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_assign.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
#include <initializer_list>  
  
int main()  
{  
    using namespace std;  
    deque <int> c1, c2;  
    deque <int>::const_iterator cIter;  
  
    c1.push_back(10);  
    c1.push_back(20);  
    c1.push_back(30);  
    c2.push_back(40);  
    c2.push_back(50);  
    c2.push_back(60);  
  
    deque<int> d1{ 1, 2, 3, 4 };  
    initializer_list<int> iList{ 5, 6, 7, 8 };  
    d1.assign(iList);  
  
    cout << "d1 = ";  
    for (int i : d1)  
        cout << i;  
    cout << endl;  
  
    cout << "c1 =";  
    for (int i : c1)  
        cout << i;  
    cout << endl;  
  
    c1.assign(++c2.begin(), c2.end());  
    cout << "c1 =";  
    for (int i : c1)  
        cout << i;  
    cout << endl;  
  
    c1.assign(7, 4);  
    cout << "c1 =";  
    for (int i : c1)  
        cout << i;  
    cout << endl;  
  
}  
  
```  
  
```Output  
d1 = 5678c1 =102030c1 =5060c1 =4444444  
```  
  
##  <a name="a-namedequeata-dequeat"></a><a name="deque__at"></a>  deque:: AT  
 Restituisce un riferimento all'elemento in una posizione specificata di deque.  
  
```  
reference at(size_type _Pos);

const_reference at(size_type _Pos) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Pos`  
 L'indice (o numero di posizione) dell'elemento come riferimento di deque.  
  
### <a name="return-value"></a>Valore restituito  
 Se `_Pos` è maggiore della dimensione di deque, **in** genera un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 Se il valore restituito di **in** viene assegnato a un `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di **in** viene assegnato a un **riferimento**, l'oggetto deque può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_at.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
  
   const int& i = c1.at( 0 );  
   int& j = c1.at( 1 );  
   cout << "The first element is " << i << endl;  
   cout << "The second element is " << j << endl;  
}  
```  
  
```Output  
The first element is 10  
The second element is 20  
```  
  
##  <a name="a-namedequebacka-dequeback"></a><a name="deque__back"></a>  deque:: back  
 Restituisce un riferimento all'ultimo elemento di deque.  
  
```  
reference back();

const_reference back() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ultimo elemento di deque. Se il deque è vuoto, il valore restituito è indefinito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di **nuovamente** viene assegnato a un `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di **nuovamente** viene assegnato a un **riferimento**, l'oggetto deque può essere modificato.  
  
 Durante la compilazione con SECURE_SCL 1, si verificherà un errore di runtime se si tenta di accedere a un elemento in una classe deque vuoto.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```  
// deque_back.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 11 );  
  
   int& i = c1.back( );  
   const int& ii = c1.front( );  
  
   cout << "The last integer of c1 is " << i << endl;  
   i--;  
   cout << "The next-to-last integer of c1 is " << ii << endl;  
}  
```  
  
```Output  
The last integer of c1 is 11  
The next-to-last integer of c1 is 10  
```  
  
##  <a name="a-namedequebegina-dequebegin"></a><a name="deque__begin"></a>  deque:: begin  
 Restituisce un iteratore che punta al primo elemento di deque.  
  
```  
const_iterator begin() const;

iterator begin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale che punta il primo elemento di deque o alla posizione successiva un deque vuoto.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di **iniziare** viene assegnato a un `const_iterator`, l'oggetto deque non può essere modificato. Se il valore restituito di **iniziare** viene assegnato a un **iteratore**, l'oggetto deque può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_begin.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
   deque <int>::iterator c1_Iter;  
   deque <int>::const_iterator c1_cIter;  
  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
  
   c1_Iter = c1.begin( );  
   cout << "The first element of c1 is " << *c1_Iter << endl;  
  
 *c1_Iter = 20;  
   c1_Iter = c1.begin( );  
   cout << "The first element of c1 is now " << *c1_Iter << endl;  
  
   // The following line would be an error because iterator is const  
   // *c1_cIter = 200;  
}  
```  
  
```Output  
The first element of c1 is 1  
The first element of c1 is now 20  
```  
  
##  <a name="a-namedequecbegina-dequecbegin"></a><a name="deque__cbegin"></a>  deque:: cbegin  
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
  
##  <a name="a-namedequecenda-dequecend"></a><a name="deque__cend"></a>  deque:: cend  
 Restituisce un iteratore `const` che punta alla posizione oltre l'ultimo elemento di un intervallo.  
  
```  
const_iterator cend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale che punta oltre la fine dell'intervallo.  
  
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
  
##  <a name="a-namedequecleara-dequeclear"></a><a name="deque__clear"></a>  deque:: Clear  
 Cancella tutti gli elementi di una classe deque.  
  
```  
void clear();
```  
  
### <a name="example"></a>Esempio  
  
```  
// deque_clear.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
  
   cout << "The size of the deque is initially " << c1.size( ) << endl;  
   c1.clear( );  
   cout << "The size of the deque after clearing is " << c1.size( ) << endl;  
}  
```  
  
```Output  
The size of the deque is initially 3  
The size of the deque after clearing is 0  
```  
  
##  <a name="a-namedequeconstiteratora-dequeconstiterator"></a><a name="deque__const_iterator"></a>  deque:: const_iterator  
 Un tipo che fornisce un iteratore ad accesso casuale che può accedere e leggere un **const** elemento di deque.  
  
```  
typedef implementation-defined const_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_iterator` non può essere usato per modificare il valore di un elemento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [nuovamente](#deque__back).  
  
##  <a name="a-namedequeconstpointera-dequeconstpointer"></a><a name="deque__const_pointer"></a>  deque:: const_pointer  
 Fornisce un puntatore a un elemento `const` in una classe deque.  
  
```unstlib  
typedef typename Allocator::const_pointer const_pointer;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_pointer` non può essere usato per modificare il valore di un elemento. Un [iteratore](#deque__iterator) più comunemente utilizzato per accedere a un elemento di deque.  
  
##  <a name="a-namedequeconstreferencea-dequeconstreference"></a><a name="deque__const_reference"></a>  deque:: const_reference  
 Tipo che fornisce un riferimento a un **const** elemento archiviato in una classe deque per lettura e l'esecuzione **const** operazioni.  
  
```  
typedef typename Allocator::const_reference const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_reference` non può essere usato per modificare il valore di un elemento.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_const_ref.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
  
   const deque <int> c2 = c1;  
   const int &i = c2.front( );  
   const int &j = c2.back( );  
   cout << "The first element is " << i << endl;  
   cout << "The second element is " << j << endl;  
  
   // The following line would cause an error as c2 is const  
   // c2.push_back( 30 );  
}  
```  
  
```Output  
The first element is 10  
The second element is 20  
```  
  
##  <a name="a-namedequeconstreverseiteratora-dequeconstreverseiterator"></a><a name="deque__const_reverse_iterator"></a>  deque:: const_reverse_iterator  
 Un tipo che fornisce un iteratore ad accesso casuale che può leggere qualsiasi **const** elemento di deque.  
  
```  
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `const_reverse_iterator` non può modificare il valore di un elemento e viene utilizzato per scorrere deque in ordine inverso.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [rbegin](#deque__rbegin) per un esempio di come dichiarare e utilizzare un iteratore.  
  
##  <a name="a-namedequecrbegina-dequecrbegin"></a><a name="deque__crbegin"></a>  deque:: crbegin  
 Restituisce un iteratore const al primo elemento in una classe deque invertito.  
  
```  
const_reverse_iterator crbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale che punta al primo elemento di un invertito inverso costante [deque](../standard-library/deque-class.md) o addressing quello che era stato l'ultimo elemento nell'oggetto `deque`.  
  
### <a name="remarks"></a>Note  
 Con il valore restituito di `crbegin`, l'oggetto `deque` non può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_crbegin.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   deque <int> v1;  
   deque <int>::iterator v1_Iter;  
   deque <int>::const_reverse_iterator v1_rIter;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
  
   v1_Iter = v1.begin( );  
   cout << "The first element of deque is "  
        << *v1_Iter << "." << endl;  
  
   v1_rIter = v1.crbegin( );  
   cout << "The first element of the reversed deque is "  
        << *v1_rIter << "." << endl;  
}  
```  
  
```Output  
The first element of deque is 1.  
The first element of the reversed deque is 2.  
```  
  
##  <a name="a-namedequecrenda-dequecrend"></a><a name="deque__crend"></a>  deque:: crend  
 Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento in una classe deque invertita.  
  
```  
const_reverse_iterator crend() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale che punta alla posizione successiva all'ultimo elemento in un invertito inverso costante [deque](../standard-library/deque-class.md) (la posizione che precedeva il primo elemento di deque non invertito).  
  
### <a name="remarks"></a>Note  
 `crend` viene utilizzato con un invertito `deque` come [array::cend](../standard-library/array-class-stl.md#array__cend) viene utilizzato con un `deque`.  
  
 Con il valore restituito di `crend` (adeguatamente decrementato), il `deque` oggetto non può essere modificato.  
  
 `crend` può essere utilizzato per verificare se un iteratore inverso ha raggiunto la fine del relativo deque.  
  
 Non è consigliabile dereferenziare il valore restituito da `crend`.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_crend.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   deque <int> v1;  
   deque <int>::const_reverse_iterator v1_rIter;  
  
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
  
##  <a name="a-namedequedequea-dequedeque"></a><a name="deque__deque"></a>  deque:: deque  
 Costruisce una deque di dimensioni specifiche, o con elementi di un valore specifico, con un allocatore specifico oppure come copia di tutto o parte di alcuni altri deque.  
  
```  
deque();

explicit deque(
    const Allocator& Al);

explicit deque(
    size_type Count);

deque(
    size_type Count,  
    const Type& Val);

deque(
    size_type Count,  
    const Type& Val,  
    const Allocator& Al);

deque(
    const deque& Right);

template <class InputIterator>  
deque(
 InputIterator First,  
    InputIterator Last);

template <class InputIterator>  
deque(
 InputIterator First,  
    InputIterator Last,  
    const Allocator& Al);

deque(
    initializer_list<value_type>  
IList,  
    const Allocator& Al);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Al`|Classe Allocator da usare con questo oggetto.|  
|`Count`|Il numero di elementi in deque costruito.|  
|`Val`|Il valore degli elementi di deque costruito.|  
|`Right`|Deque di cui è deque costruito deve essere una copia.|  
|`First`|Posizione del primo elemento nell'intervallo di elementi da copiare.|  
|`Last`|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|  
|`IList`|Initializer_list da copiare.|  
  
### <a name="remarks"></a>Note  
 Tutti i costruttori archiviano un oggetto allocatore ( `Al`) e l'inizializzazione di deque.  
  
 I primi due costruttori specificano un deque iniziale vuoto; il secondo specifica inoltre il tipo di allocatore ( `_Al`) da utilizzare.  
  
 Il terzo costruttore specifica una ripetizione di un numero specificato ( ` count`) degli elementi del valore predefinito per la classe `Type`.  
  
 Il quarto costruttore specificano una ripetizione di ( `Count`) degli elementi di valore ` val`.  
  
 Il sesto costruttore specifica una copia del deque `Right`.  
  
 Il settimo e ottavo costruttore copiano l'intervallo `[First, Last)` di una classe deque.  
  
 Il settimo costruttore sposta il deque `Right`.  
  
 L'ottavo costruttore copia il contenuto di un oggetto initializer_list.  
  
 Nessuno dei costruttori esegue riallocazioni provvisorie.  
  
### <a name="example"></a>Esempio  
  
```  
/ compile with: /EHsc  
#include <deque>  
#include <iostream>  
#include <forward_list>  
  
int main()  
{  
    using namespace std;  
  
    forward_list<int> f1{ 1, 2, 3, 4 };  
  
    f1.insert_after(f1.begin(), { 5, 6, 7, 8 });  
  
    deque <int>::iterator c1_Iter, c2_Iter, c3_Iter, c4_Iter, c5_Iter, c6_Iter;  
  
    // Create an empty deque c0  
    deque <int> c0;  
  
    // Create a deque c1 with 3 elements of default value 0  
    deque <int> c1(3);  
  
    // Create a deque c2 with 5 elements of value 2  
    deque <int> c2(5, 2);  
  
    // Create a deque c3 with 3 elements of value 1 and with the   
    // allocator of deque c2  
    deque <int> c3(3, 1, c2.get_allocator());  
  
    // Create a copy, deque c4, of deque c2  
    deque <int> c4(c2);  
  
    // Create a deque c5 by copying the range c4[ first,  last)  
    c4_Iter = c4.begin();  
    c4_Iter++;  
    c4_Iter++;  
    deque <int> c5(c4.begin(), c4_Iter);  
  
    // Create a deque c6 by copying the range c4[ first,  last) and   
    // c2 with the allocator of deque  
    c4_Iter = c4.begin();  
    c4_Iter++;  
    c4_Iter++;  
    c4_Iter++;  
    deque <int> c6(c4.begin(), c4_Iter, c2.get_allocator());  
  
    // Create a deque c8 by copying the contents of an initializer_list  
    // using brace initialization  
    deque<int> c8({ 1, 2, 3, 4 });  
  
    initializer_list<int> iList{ 5, 6, 7, 8 };  
    deque<int> c9( iList);  
  
    cout << "c1 = ";  
    for (int i : c1)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c2 = ";  
    for (int i : c2)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c3 = ";  
    for (int i : c3)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c4 = ";  
    for (int i : c4)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c5 = ";  
    for (int i : c5)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c6 = ";  
    for (int i : c6)  
        cout << i << " ";  
    cout << endl;  
  
    // Move deque c6 to deque c7  
    deque <int> c7(move(c6));  
    deque <int>::iterator c7_Iter;  
  
    cout << "c7 =";  
    for (int i : c7)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c8 = ";  
    for (int i : c8)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c9 = ";  
    for (int i : c9)  
        cout << i << " ";  
    cout << endl;  
  
    int x = 3;  
}  
// deque_deque.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
    using namespace std;  
   deque <int>::iterator c1_Iter, c2_Iter, c3_Iter, c4_Iter, c5_Iter, c6_Iter;  
  
    // Create an empty deque c0  
    deque <int> c0;  
  
    // Create a deque c1 with 3 elements of default value 0  
    deque <int> c1( 3 );  
  
    // Create a deque c2 with 5 elements of value 2  
    deque <int> c2( 5, 2 );  
  
    // Create a deque c3 with 3 elements of value 1 and with the   
    // allocator of deque c2  
    deque <int> c3( 3, 1, c2.get_allocator( ) );  
  
    // Create a copy, deque c4, of deque c2  
    deque <int> c4( c2 );  
  
    // Create a deque c5 by copying the range c4[ first,  last)  
    c4_Iter = c4.begin( );  
    c4_Iter++;  
    c4_Iter++;  
    deque <int> c5( c4.begin( ), c4_Iter );  
  
    // Create a deque c6 by copying the range c4[ first,  last) and   
    // c2 with the allocator of deque  
    c4_Iter = c4.begin( );  
   c4_Iter++;  
   c4_Iter++;  
   c4_Iter++;  
   deque <int> c6( c4.begin( ), c4_Iter, c2.get_allocator( ) );  
  
    // Create a deque c8 by copying the contents of an initializer_list  
    // using brace initialization  
    deque<int> c8({ 1, 2, 3, 4 });  
  
        initializer_list<int> iList{ 5, 6, 7, 8 };  
    deque<int> c9( iList);  
  
    cout << "c1 = ";  
    for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
        cout << *c1_Iter << " ";  
    cout << endl;  
  
    cout << "c2 = ";  
    for ( c2_Iter = c2.begin( ); c2_Iter != c2.end( ); c2_Iter++ )  
        cout << *c2_Iter << " ";  
    cout << endl;  
  
    cout << "c3 = ";  
    for ( c3_Iter = c3.begin( ); c3_Iter != c3.end( ); c3_Iter++ )  
        cout << *c3_Iter << " ";  
    cout << endl;  
  
    cout << "c4 = ";  
    for ( c4_Iter = c4.begin( ); c4_Iter != c4.end( ); c4_Iter++ )  
        cout << *c4_Iter << " ";  
    cout << endl;  
  
    cout << "c5 = ";  
    for ( c5_Iter = c5.begin( ); c5_Iter != c5.end( ); c5_Iter++ )  
        cout << *c5_Iter << " ";  
    cout << endl;  
  
    cout << "c6 = ";  
    for ( c6_Iter = c6.begin( ); c6_Iter != c6.end( ); c6_Iter++ )  
        cout << *c6_Iter << " ";  
    cout << endl;  
  
    // Move deque c6 to deque c7  
    deque <int> c7( move(c6) );  
    deque <int>::iterator c7_Iter;  
  
    cout << "c7 =" ;  
    for ( c7_Iter = c7.begin( ) ; c7_Iter != c7.end( ) ; c7_Iter++ )  
        cout << " " << *c7_Iter;  
    cout << endl;  
  
    cout << "c8 = ";  
    for (int i : c8)  
        cout << i << " ";  
    cout << endl;  
  
    cout << "c9 = ";  
    or (int i : c9)  
        cout << i << " ";  
    cout << endl;  
}  
```  
  
##  <a name="a-namedequedifferencetypea-dequedifferencetype"></a><a name="deque__difference_type"></a>  deque:: difference_type  
 Tipo che fornisce la differenza tra due iteratori che fanno riferimento agli elementi all'interno di deque stesso.  
  
```  
typedef typename Allocator::difference_type difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Un oggetto `difference_type` può anche essere descritto come il numero di elementi tra due puntatori.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_diff_type.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <deque>  
#include <algorithm>  
  
int main( )   
{  
   using namespace std;  
  
   deque <int> c1;  
   deque <int>::iterator c1_Iter, c2_Iter;  
  
   c1.push_back( 30 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
   c1.push_back( 10 );  
   c1.push_back( 30 );  
   c1.push_back( 20 );  
  
   c1_Iter = c1.begin( );  
   c2_Iter = c1.end( );  
  
   deque <int>::difference_type df_typ1, df_typ2, df_typ3;  
  
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
  
##  <a name="a-namedequeemplacea-dequeemplace"></a><a name="deque__emplace"></a>  deque:: emplace  
 Inserisce un elemento costruito sul posto in deque in una posizione specificata.  
  
```  
iterator emplace(
    const_iterator _Where,  
    Type&& val);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`_Where`|La posizione nel [deque](../standard-library/deque-class.md) in cui è inserito il primo elemento.|  
|` val`|Valore dell'elemento da inserire nell'oggetto `deque`.|  
  
### <a name="return-value"></a>Valore restituito  
 La funzione restituisce un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito il deque.  
  
### <a name="remarks"></a>Note  
 Un'operazione di inserimento può essere costoso, vedere `deque` per una discussione su `deque` delle prestazioni.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_emplace.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   deque <int> v1;  
   deque <int>::iterator Iter;  
  
   v1.push_back( 10 );  
   v1.push_back( 20 );  
   v1.push_back( 30 );  
  
   cout << "v1 =" ;  
   for ( Iter = v1.begin( ) ; Iter != v1.end( ) ; Iter++ )  
      cout << " " << *Iter;  
   cout << endl;  
  
// initialize a deque of deques by moving v1  
   deque < deque <int> > vv1;  
  
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
  
##  <a name="a-namedequeemplacebacka-dequeemplaceback"></a><a name="deque__emplace_back"></a>  deque:: emplace_back  
 Aggiunge un elemento costruito sul posto alla fine di deque.  
  
```  
void emplace_back(Type&& val);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|` val`|L'elemento aggiunto alla fine di [deque](../standard-library/deque-class.md).|  
  
### <a name="example"></a>Esempio  
  
```  
// deque_emplace_back.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   deque <int> v1;  
  
   v1.push_back( 1 );  
   if ( v1.size( ) != 0 )  
      cout << "Last element: " << v1.back( ) << endl;  
  
   v1.push_back( 2 );  
   if ( v1.size( ) != 0 )  
      cout << "New last element: " << v1.back( ) << endl;  
  
// initialize a deque of deques by moving v1  
   deque < deque <int> > vv1;  
  
   vv1.emplace_back( move( v1 ) );  
   if ( vv1.size( ) != 0 && vv1[0].size( ) != 0 )  
      cout << "Moved last element: " << vv1[0].back( ) << endl;  
}  
```  
  
```Output  
Last element: 1  
New last element: 2  
Moved last element: 2  
```  
  
##  <a name="a-namedequeemplacefronta-dequeemplacefront"></a><a name="deque__emplace_front"></a>  deque:: emplace_front  
 Aggiunge un elemento costruito sul posto alla fine di deque.  
  
```  
void emplace_front(Type&& val);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|` val`|L'elemento aggiunto all'inizio del [deque](../standard-library/deque-class.md).|  
  
### <a name="example"></a>Esempio  
  
```  
// deque_emplace_front.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   deque <int> v1;  
  
   v1.push_back( 1 );  
   if ( v1.size( ) != 0 )  
      cout << "Last element: " << v1.back( ) << endl;  
  
   v1.push_back( 2 );  
   if ( v1.size( ) != 0 )  
      cout << "New last element: " << v1.back( ) << endl;  
  
// initialize a deque of deques by moving v1  
   deque < deque <int> > vv1;  
  
   vv1.emplace_front( move( v1 ) );  
   if ( vv1.size( ) != 0 && vv1[0].size( ) != 0 )  
      cout << "Moved last element: " << vv1[0].back( ) << endl;  
}  
```  
  
```Output  
Last element: 1  
New last element: 2  
Moved last element: 2  
```  
  
##  <a name="a-namedequeemptya-dequeempty"></a><a name="deque__empty"></a>  deque:: Empty  
 Verifica se una classe deque è vuota.  
  
```  
bool empty() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 **true** se è vuoto; il deque **false** Se il deque non è vuoto.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_empty.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   if ( c1.empty( ) )  
      cout << "The deque is empty." << endl;  
   else  
      cout << "The deque is not empty." << endl;  
}  
```  
  
```Output  
The deque is not empty.  
```  
  
##  <a name="a-namedequeenda-dequeend"></a><a name="deque__end"></a>  deque:: end  
 Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in una classe deque.  
  
```  
const_iterator end() const;

iterator end();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale che punta alla posizione successiva all'ultimo elemento in una classe deque. Se il deque è vuoto, quindi deque:: end = = deque.  
  
### <a name="remarks"></a>Note  
 **Fine** viene utilizzato per verificare se un iteratore ha raggiunto la fine del relativo deque.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_end.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
   deque <int>::iterator c1_Iter;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
  
   c1_Iter = c1.end( );  
   c1_Iter--;  
   cout << "The last integer of c1 is " << *c1_Iter << endl;  
  
   c1_Iter--;  
 *c1_Iter = 400;  
   cout << "The new next-to-last integer of c1 is " << *c1_Iter << endl;  
  
   // If a const iterator had been declared instead with the line:  
   // deque <int>::const_iterator c1_Iter;  
   // an error would have resulted when inserting the 400  
  
   cout << "The deque is now:";  
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
      cout << " " << *c1_Iter;  
}  
```  
  
```Output  
The last integer of c1 is 30  
The new next-to-last integer of c1 is 400  
The deque is now: 10 400 30  
```  
  
##  <a name="a-namedequeerasea-dequeerase"></a><a name="deque__erase"></a>  deque:: Erase  
 Rimuove un elemento o un intervallo di elementi in una classe deque dalle posizioni specificate.  
  
```  
iterator erase(iterator _Where);

iterator erase(iterator first, iterator last);
```  
  
### <a name="parameters"></a>Parametri  
 `_Where`  
 Posizione dell'elemento da rimuovere di deque.  
  
 ` first`  
 Posizione del primo elemento rimosso di deque.  
  
 ` last`  
 Posizione immediatamente successiva all'ultimo elemento rimosso di deque.  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale che definisce il primo elemento rimanente oltre tutti gli elementi rimossi o puntatore alla fine della deque se tale elemento non esiste.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni su **erase**, vedere [deque:: Erase e deque:: Clear](../misc/deque-erase-and-deque-clear.md).  
  
 **cancellare** non genera mai un'eccezione.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_erase.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
   deque <int>::iterator Iter;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
   c1.push_back( 40 );  
   c1.push_back( 50 );  
   cout << "The initial deque is: ";  
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )  
      cout << *Iter << " ";  
   cout << endl;  
   c1.erase( c1.begin( ) );  
   cout << "After erasing the first element, the deque becomes:  ";  
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )  
      cout << *Iter << " ";  
   cout << endl;  
   Iter = c1.begin( );  
   Iter++;  
   c1.erase( Iter, c1.end( ) );  
   cout << "After erasing all elements but the first, deque becomes: ";  
   for ( Iter = c1.begin( ); Iter != c1.end( ); Iter++ )  
      cout << *Iter << " ";  
   cout << endl;  
}  
```  
  
```Output  
The initial deque is: 10 20 30 40 50   
After erasing the first element, the deque becomes:  20 30 40 50   
After erasing all elements but the first, deque becomes: 20   
```  
  
##  <a name="a-namedequefronta-dequefront"></a><a name="deque__front"></a>  deque:: front  
 Restituisce un riferimento al primo elemento in una classe deque.  
  
```  
reference front();

const_reference front() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il deque è vuoto, il valore restituito è definito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di `front` viene assegnato a un `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di `front` viene assegnato a un **riferimento**, l'oggetto deque può essere modificato.  
  
 Durante la compilazione con SECURE_SCL 1, si verificherà un errore di runtime se si tenta di accedere a un elemento in una classe deque vuoto.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```  
// deque_front.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 11 );  
  
   int& i = c1.front( );  
   const int& ii = c1.front( );  
  
   cout << "The first integer of c1 is " << i << endl;  
   i++;  
   cout << "The second integer of c1 is " << ii << endl;  
}  
```  
  
```Output  
The first integer of c1 is 10  
The second integer of c1 is 11  
```  
  
##  <a name="a-namedequegetallocatora-dequegetallocator"></a><a name="deque__get_allocator"></a>  deque:: get_allocator  
 Restituisce una copia dell'oggetto dell'allocatore utilizzato per costruire il deque.  
  
```  
Allocator get_allocator() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Allocatore usato di deque.  
  
### <a name="remarks"></a>Note  
 Gli allocatori per la classe deque specificano come la classe gestisce l'archiviazione. Gli allocatori predefiniti forniti con le classi dei contenitori STL sono sufficienti per la maggior parte delle esigenze di programmazione. Scrivere e usare una classe allocator personalizzata è un argomento di C++ avanzato.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_get_allocator.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   // The following lines declare objects that use the default allocator.  
   deque <int> c1;  
   deque <int, allocator<int> > c2 = deque <int, allocator<int> >( allocator<int>( ) );  
  
   // c3 will use the same allocator class as c1  
   deque <int> c3( c1.get_allocator( ) );  
  
   deque <int>::allocator_type xlst = c1.get_allocator( );  
   // You can now call functions on the allocator class used by c1  
}  
```  
  
##  <a name="a-namedequeinserta-dequeinsert"></a><a name="deque__insert"></a>  deque:: Insert  
 Inserisce un elemento o un numero di elementi o un intervallo di elementi in deque in una posizione specificata.  
  
```  
iterator insert(
    const_iterator Where,  
    const Type& Val);

iterator insert(
    const_iterator Where,  
    Type&& Val);

void insert(
    iterator Where,  
    size_type Count,  
    const Type& Val);

template <class InputIterator>  
void insert(
    iterator Where,  
    InputIterator First,  
    InputIterator Last);

iterator insert(
    iterator Where,initializer_list<Type>  
IList);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Where`|Posizione deque la destinazione in cui è inserito il primo elemento.|  
|`Val`|Il valore dell'elemento inserito nel deque.|  
|`Count`|Il numero di elementi da inserire di deque.|  
|`First`|La posizione del primo elemento nell'intervallo di elementi in deque l'argomento da copiare.|  
|`Last`|La posizione del primo elemento oltre l'intervallo di elementi in deque l'argomento da copiare.|  
|`IList`|Oggetto initializer_list degli elementi da inserire.|  
  
### <a name="return-value"></a>Valore restituito  
 Le prime due funzioni di inserimento restituiscono un iteratore che punta alla posizione in cui il nuovo elemento è stato inserito il deque.  
  
### <a name="remarks"></a>Note  
 Un'operazione di inserimento può essere costosa.  
  
##  <a name="a-namedequeiteratora-dequeiterator"></a><a name="deque__iterator"></a>  deque:: iterator  
 Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare qualsiasi elemento in una classe deque.  
  
```  
typedef implementation-defined iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo **iteratore** può essere utilizzato per modificare il valore di un elemento.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [iniziare](#deque__begin).  
  
##  <a name="a-namedequemaxsizea-dequemaxsize"></a><a name="deque__max_size"></a>  deque:: max_size  
 Restituisce la lunghezza massima di deque.  
  
```  
size_type max_size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Lunghezza massima possibile di deque.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_max_size.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
   deque <int>::size_type i;  
  
   i = c1.max_size( );  
   cout << "The maximum possible length of the deque is " << i << "." << endl;  
}  
```  
  
##  <a name="a-namedequeoperatorata-dequeoperator"></a><a name="deque__operator_at"></a>  deque:: operator]  
 Restituisce un riferimento all'elemento di deque in una posizione specificata.  
  
```  
reference operator[](size_type _Pos);

const_reference operator[](size_type _Pos) const;
```  
  
### <a name="parameters"></a>Parametri  
 `_Pos`  
 La posizione dell'elemento deque venga fatto riferimento.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento all'elemento la cui posizione è specificata nell'argomento. Se la posizione specificata è maggiore della dimensione del deque, il risultato sarà indefinito.  
  
### <a name="remarks"></a>Note  
 Se il valore restituito di `operator[]` viene assegnato a un `const_reference`, l'oggetto deque non può essere modificato. Se il valore restituito di `operator[]` viene assegnato a un **riferimento**, l'oggetto deque può essere modificato.  
  
 Durante la compilazione con SECURE_SCL 1, si verificherà un errore di runtime se si tenta di accedere a un elemento all'esterno dei limiti di deque.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md) .  
  
### <a name="example"></a>Esempio  
  
```  
// deque_op_ref.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
   cout << "The first integer of c1 is " << c1[0] << endl;  
   int& i = c1[1];  
   cout << "The second integer of c1 is " << i << endl;  
  
}  
```  
  
```Output  
The first integer of c1 is 10  
The second integer of c1 is 20  
```  
  
##  <a name="a-namedequeoperatoreqa-dequeoperator"></a><a name="deque__operator_eq"></a>  deque:: operator =  
 Sostituisce gli elementi di questo deque utilizzando gli elementi da un altro deque.  
  
```  
deque& operator=(const deque& right);

deque& operator=(deque&& right);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|` right`|Deque che fornisce il nuovo contenuto.|  
  
### <a name="remarks"></a>Note  
 La sostituzione prima copia di elementi in questa deque da ` right`, l'origine dell'assegnazione. Gli elementi vengono spostati al secondo override per questo deque da ` right`.  
  
 Vengono rimossi gli elementi contenuti in questa classe deque prima che venga eseguito l'operatore.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_operator_as.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
using namespace std;  
  
typedef deque<int> MyDeque;  
  
template<typename MyDeque> struct S;  
  
template<typename MyDeque> struct S<MyDeque&> {  
  static void show( MyDeque& d ) {  
    MyDeque::const_iterator iter;  
    for (iter = d.cbegin(); iter != d.cend(); iter++)  
       cout << *iter << " ";  
    cout << endl;  
  }  
};  
  
template<typename MyDeque> struct S<MyDeque&&> {  
  static void show( MyDeque&& d ) {  
    MyDeque::const_iterator iter;  
    for (iter = d.cbegin(); iter != d.cend(); iter++)  
       cout << *iter << " ";  
cout << " via unnamed rvalue reference " << endl;  
  }  
};  
  
int main( )  
{  
   MyDeque d1, d2;  
  
   d1.push_back(10);  
   d1.push_back(20);  
   d1.push_back(30);  
   d1.push_back(40);  
   d1.push_back(50);  
  
   cout << "d1 = " ;  
   S<MyDeque&>::show( d1 );  
  
   d2 = d1;  
   cout << "d2 = ";  
   S<MyDeque&>::show( d2 );  
  
   cout << "     ";  
   S<MyDeque&&>::show ( move< MyDeque& > (d1) );  
 }  
```  
  
##  <a name="a-namedequepointera-dequepointer"></a><a name="deque__pointer"></a>  deque:: pointer  
 Fornisce un puntatore a un elemento in un [deque](../standard-library/deque-class.md).  
  
```unstlib  
typedef typename Allocator::pointer pointer;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo **puntatore** può essere utilizzato per modificare il valore di un elemento. Un [iteratore](#deque__iterator) più comunemente utilizzato per accedere a un elemento di deque.  
  
##  <a name="a-namedequepopbacka-dequepopback"></a><a name="deque__pop_back"></a>  deque:: pop_back  
 Elimina l'elemento alla fine di deque.  
  
```  
void pop_back();
```  
  
### <a name="remarks"></a>Note  
 L'ultimo elemento non deve essere vuoto. `pop_back` non genera mai un'eccezione.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_pop_back.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
   cout << "The first element is: " << c1.front( ) << endl;  
   cout << "The last element is: " << c1.back( ) << endl;  
  
   c1.pop_back( );  
   cout << "After deleting the element at the end of the deque, the "  
      "last element is: " << c1.back( ) << endl;  
}  
```  
  
```Output  
The first element is: 1  
The last element is: 2  
After deleting the element at the end of the deque, the last element is: 1  
```  
  
##  <a name="a-namedequepopfronta-dequepopfront"></a><a name="deque__pop_front"></a>  deque:: pop_front  
 Elimina l'elemento all'inizio di deque.  
  
```  
void pop_front();
```  
  
### <a name="remarks"></a>Note  
 Il primo elemento non deve essere vuoto. `pop_front` non genera mai un'eccezione.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_pop_front.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
   cout << "The first element is: " << c1.front( ) << endl;  
   cout << "The second element is: " << c1.back( ) << endl;  
  
   c1.pop_front( );  
   cout << "After deleting the element at the beginning of the "  
      "deque, the first element is: " << c1.front( ) << endl;  
}  
```  
  
```Output  
The first element is: 1  
The second element is: 2  
After deleting the element at the beginning of the deque, the first element is: 2  
```  
  
##  <a name="a-namedequepushbacka-dequepushback"></a><a name="deque__push_back"></a>  deque:: push_back  
 Aggiunge un elemento alla fine di deque.  
  
```  
void push_back(const Type& val);

void push_back(Type&& val);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|` val`|L'elemento aggiunto alla fine di deque.|  
  
### <a name="remarks"></a>Note  
 Se viene generata un'eccezione, il deque viene lasciato inalterato e viene nuovamente generata l'eccezione.  
  
##  <a name="a-namedequepushfronta-dequepushfront"></a><a name="deque__push_front"></a>  deque:: push_front  
 Aggiunge un elemento all'inizio di deque.  
  
```  
    void push_front(const Type& val);

void push_front(Type&& val);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|` val`|Elemento aggiunto all'inizio di deque.|  
  
### <a name="remarks"></a>Note  
 Se viene generata un'eccezione, il deque viene lasciato inalterato e viene nuovamente generata l'eccezione.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_push_front.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
#include <string>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_front( 1 );  
   if ( c1.size( ) != 0 )  
      cout << "First element: " << c1.front( ) << endl;  
  
   c1.push_front( 2 );  
   if ( c1.size( ) != 0 )  
      cout << "New first element: " << c1.front( ) << endl;  
  
// move initialize a deque of strings  
   deque <string> c2;  
   string str("a");  
  
   c2.push_front( move( str ) );  
   cout << "Moved first element: " << c2.front( ) << endl;  
}  
```  
  
```Output  
First element: 1  
New first element: 2  
Moved first element: a  
```  
  
##  <a name="a-namedequerbegina-dequerbegin"></a><a name="deque__rbegin"></a>  deque:: rbegin  
 Restituisce un iteratore al primo elemento in una classe deque invertito.  
  
```  
const_reverse_iterator rbegin() const;

reverse_iterator rbegin();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale inverso punta al primo elemento in una classe deque invertita o addressing quello che era stato l'ultimo elemento di deque non invertito.  
  
### <a name="remarks"></a>Note  
 `rbegin` viene utilizzato con una classe deque invertita come [iniziare](#deque__begin) viene utilizzata con una classe deque.  
  
 Se il valore restituito di `rbegin` viene assegnato a un `const_reverse_iterator`, l'oggetto deque non può essere modificato. Se il valore restituito di `rbegin` viene assegnato a un `reverse_iterator`, l'oggetto deque può essere modificato.  
  
 `rbegin` può essere utilizzato per scorrere una classe deque con le versioni precedenti.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_rbegin.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
   deque <int>::iterator c1_Iter;  
   deque <int>::reverse_iterator c1_rIter;  
  
   // If the following line had replaced the line above, an error   
   // would have resulted in the line modifying an element   
   // (commented below) because the iterator would have been const  
   // deque <int>::const_reverse_iterator c1_rIter;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
  
   c1_rIter = c1.rbegin( );  
   cout << "Last element in the deque is " << *c1_rIter << "." << endl;  
  
   cout << "The deque contains the elements: ";  
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
      cout << *c1_Iter << " ";  
   cout << "in that order.";  
   cout << endl;  
  
   // rbegin can be used to iterate through a deque in reverse order  
   cout << "The reversed deque is: ";  
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )  
      cout << *c1_rIter << " ";  
   cout << endl;  
  
   c1_rIter = c1.rbegin( );  
 *c1_rIter = 40;  // This would have caused an error if a   
                    // const_reverse iterator had been declared as   
                    // noted above  
   cout << "Last element in deque is now " << *c1_rIter << "." << endl;  
}  
```  
  
```Output  
Last element in the deque is 30.  
The deque contains the elements: 10 20 30 in that order.  
The reversed deque is: 30 20 10   
Last element in deque is now 40.  
```  
  
##  <a name="a-namedequereferencea-dequereference"></a><a name="deque__reference"></a>  deque:: Reference  
 Un tipo che fornisce un riferimento a un elemento archiviato in una classe deque.  
  
```  
typedef typename Allocator::reference reference;  
```  
  
### <a name="example"></a>Esempio  
  
```  
// deque_reference.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
  
   const int &i = c1.front( );  
   int &j = c1.back( );  
   cout << "The first element is " << i << endl;  
   cout << "The second element is " << j << endl;  
}  
```  
  
```Output  
The first element is 10  
The second element is 20  
```  
  
##  <a name="a-namedequerenda-dequerend"></a><a name="deque__rend"></a>  deque:: rend  
 Restituisce un iteratore che punta alla posizione successiva all'ultimo elemento in una classe deque invertita.  
  
```  
const_reverse_iterator rend() const;

reverse_iterator rend();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un iteratore ad accesso casuale inverso che punta alla posizione successiva all'ultimo elemento in una classe deque invertita (la posizione che precedeva il primo elemento di deque non invertito).  
  
### <a name="remarks"></a>Note  
 `rend` viene utilizzato con una classe deque invertita come [end](#deque__end) viene utilizzata con una classe deque.  
  
 Se il valore restituito di `rend` viene assegnato a un `const_reverse_iterator`, l'oggetto deque non può essere modificato. Se il valore restituito di `rend` viene assegnato a un `reverse_iterator`, l'oggetto deque può essere modificato.  
  
 `rend` può essere utilizzato per verificare se un iteratore inverso ha raggiunto la fine del relativo deque.  
  
 Non è consigliabile dereferenziare il valore restituito da `rend`.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_rend.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
  
   deque <int> c1;  
   deque <int>::iterator c1_Iter;  
   deque <int>::reverse_iterator c1_rIter;  
   // If the following line had replaced the line above, an error  
   // would have resulted in the line modifying an element  
   // (commented below) because the iterator would have been const  
   // deque <int>::const_reverse_iterator c1_rIter;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
  
   c1_rIter = c1.rend( );  
   c1_rIter --; // Decrementing a reverse iterator moves it forward   
                // in the deque (to point to the first element here)  
   cout << "The first element in the deque is: " << *c1_rIter << endl;  
  
   cout << "The deque is: ";  
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
      cout << *c1_Iter << " ";  
   cout << endl;  
  
   // rend can be used to test if an iteration is through all of   
   // the elements of a reversed deque  
   cout << "The reversed deque is: ";  
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )  
      cout << *c1_rIter << " ";  
   cout << endl;  
  
   c1_rIter = c1.rend( );  
   c1_rIter--; // Decrementing the reverse iterator moves it backward   
               // in the reversed deque (to the last element here)  
 *c1_rIter = 40; // This modification of the last element would   
                   // have caused an error if a const_reverse   
                   // iterator had been declared (as noted above)  
   cout << "The modified reversed deque is: ";  
   for ( c1_rIter = c1.rbegin( ); c1_rIter != c1.rend( ); c1_rIter++ )  
      cout << *c1_rIter << " ";  
   cout << endl;  
}  
```  
  
```Output  
The first element in the deque is: 10  
The deque is: 10 20 30   
The reversed deque is: 30 20 10   
The modified reversed deque is: 30 20 40   
```  
  
##  <a name="a-namedequeresizea-dequeresize"></a><a name="deque__resize"></a>  deque:: Resize  
 Specifica una nuova dimensione per una classe deque.  
  
```  
void resize(size_type _Newsize);

void resize(size_type _Newsize, Type val);
```  
  
### <a name="parameters"></a>Parametri  
 `_Newsize`  
 La nuova dimensione di deque.  
  
 ` val`  
 Il valore dei nuovi elementi da aggiungere al deque se la nuova dimensione è maggiore di quella originale. Se il valore viene omesso, i nuovi elementi vengono assegnati il valore predefinito per la classe.  
  
### <a name="remarks"></a>Note  
 Se la dimensione del deque è inferiore a quella richiesta, `_Newsize`, gli elementi vengono aggiunti il deque finché raggiunge la dimensione richiesta.  
  
 Se le dimensioni del deque sono superiore a quella richiesta, vengono eliminati gli elementi più vicini alla fine del deque finché il deque raggiunge la dimensione `_Newsize`.  
  
 Se la dimensione attuale del deque è quello utilizzato per la dimensione richiesta, viene eseguita alcuna azione.  
  
 [dimensioni](#deque__size) riflette la dimensione corrente di deque.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_resize.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{   
   using namespace std;  
   deque <int> c1;  
  
   c1.push_back( 10 );  
   c1.push_back( 20 );  
   c1.push_back( 30 );  
  
   c1.resize( 4,40 );  
   cout << "The size of c1 is: " << c1.size( ) << endl;  
   cout << "The value of the last element is " << c1.back( ) << endl;  
  
   c1.resize( 5 );  
   cout << "The size of c1 is now: " << c1.size( ) << endl;  
   cout << "The value of the last element is now " << c1.back( ) << endl;  
  
   c1.resize( 2 );  
   cout << "The reduced size of c1 is: " << c1.size( ) << endl;  
   cout << "The value of the last element is now " << c1.back( ) << endl;  
}  
```  
  
```Output  
The size of c1 is: 4  
The value of the last element is 40  
The size of c1 is now: 5  
The value of the last element is now 0  
The reduced size of c1 is: 2  
The value of the last element is now 20  
```  
  
##  <a name="a-namedequereverseiteratora-dequereverseiterator"></a><a name="deque__reverse_iterator"></a>  deque:: reverse_iterator  
 Tipo che fornisce un iteratore ad accesso casuale che può leggere o modificare un elemento in una classe deque invertito.  
  
```  
typedef std::reverse_iterator<iterator> reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Un tipo `reverse_iterator` è usato per scorrere il deque.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per rbegin.  
  
##  <a name="a-namedequeshrinktofita-dequeshrinktofit"></a><a name="deque__shrink_to_fit"></a>  deque:: shrink_to_fit  
 Elimina la capacità in eccesso.  
  
```  
void shrink_to_fit();
```  
  
### <a name="remarks"></a>Note  
 Non è portabile per determinare se `shrink_to_fit` riduce la memoria utilizzata da un [deque](../standard-library/deque-class.md).  
  
### <a name="example"></a>Esempio  
  
```  
// deque_shrink_to_fit.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   deque <int> v1;  
   //deque <int>::iterator Iter;  
  
   v1.push_back( 1 );  
   v1.push_back( 2 );  
   cout << "Current size of v1 = "   
      << v1.size( ) << endl;  
   v1.shrink_to_fit();  
   cout << "Current size of v1 = "   
      << v1.size( ) << endl;  
}  
```  
  
```Output  
Current size of v1 = 1  
Current size of v1 = 1  
```  
  
##  <a name="a-namedequesizea-dequesize"></a><a name="deque__size"></a>  deque:: Size  
 Restituisce il numero di elementi di deque.  
  
```  
size_type size() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 La lunghezza corrente di deque.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_size.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1;  
   deque <int>::size_type i;  
  
   c1.push_back( 1 );  
   i = c1.size( );  
   cout << "The deque length is " << i << "." << endl;  
  
   c1.push_back( 2 );  
   i = c1.size( );  
   cout << "The deque length is now " << i << "." << endl;  
}  
```  
  
```Output  
The deque length is 1.  
The deque length is now 2.  
```  
  
##  <a name="a-namedequesizetypea-dequesizetype"></a><a name="deque__size_type"></a>  deque:: size_type  
 Tipo che conta il numero di elementi in una classe deque.  
  
```  
typedef typename Allocator::size_type size_type;  
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [dimensioni](#deque__size).  
  
##  <a name="a-namedequeswapa-dequeswap"></a><a name="deque__swap"></a>  deque:: swap  
 Scambia gli elementi di due deque.  
  
```  
void swap(deque<Type, Allocator>& right);

friend void swap(deque<Type, Allocator>& left, deque<Type, Allocator>& right) template <class Type, class Allocator>  
void swap(deque<Type, Allocator>& left, deque<Type, Allocator>& right);
```  
  
### <a name="parameters"></a>Parametri  
 ` right`  
 Il deque fornisce gli elementi da scambiare o il deque i cui elementi devono essere scambiati con quelli del deque ` left`.  
  
 ` left`  
 Una classe deque i cui elementi devono essere scambiati con quelli del deque ` right`.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_swap.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
  
int main( )   
{  
   using namespace std;  
   deque <int> c1, c2, c3;  
   deque <int>::iterator c1_Iter;  
  
   c1.push_back( 1 );  
   c1.push_back( 2 );  
   c1.push_back( 3 );  
   c2.push_back( 10 );  
   c2.push_back( 20 );  
   c3.push_back( 100 );  
  
   cout << "The original deque c1 is:";  
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
      cout << " " << *c1_Iter;  
   cout << endl;  
  
   c1.swap( c2 );  
  
   cout << "After swapping with c2, deque c1 is:";  
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
      cout << " " << *c1_Iter;  
   cout << endl;  
  
   swap( c1,c3 );  
  
   cout << "After swapping with c3, deque c1 is:";  
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
      cout << " " << *c1_Iter;  
   cout << endl;  
  
   swap<>(c1, c2);  
   cout << "After swapping with c2, deque c1 is:";  
   for ( c1_Iter = c1.begin( ); c1_Iter != c1.end( ); c1_Iter++ )  
      cout << " " << *c1_Iter;  
   cout << endl;  
}  
```  
  
```Output  
The original deque c1 is: 1 2 3  
After swapping with c2, deque c1 is: 10 20  
After swapping with c3, deque c1 is: 100  
After swapping with c2, deque c1 is: 1 2 3  
```  
  
##  <a name="a-namedequevaluetypea-dequevaluetype"></a><a name="deque__value_type"></a>  deque:: value_type  
 Tipo che rappresenta il tipo di dati archiviati in una classe deque.  
  
```  
typedef typename Allocator::value_type value_type;  
```  
  
### <a name="remarks"></a>Note  
 `value_type` è un sinonimo del parametro di modello **tipo**.  
  
### <a name="example"></a>Esempio  
  
```  
// deque_value_type.cpp  
// compile with: /EHsc  
#include <deque>  
#include <iostream>  
int main( )   
{  
   using namespace std;  
   deque<int>::value_type AnInt;  
   AnInt = 44;  
   cout << AnInt << endl;  
}  
```  
  
```Output  
44  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

