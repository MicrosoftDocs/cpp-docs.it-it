---
title: "Classe vector&lt;bool&gt; | Microsoft Docs"
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
  - "vector<bool>"
  - "std.vector<bool>"
  - "std::vector<bool>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "classe Vector < bool >"
ms.assetid: 8028c8ed-ac9c-4f06-aba1-5de45c00aafb
caps.latest.revision: 29
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Classe vector&lt;bool&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La `vector<bool>` classe è una specializzazione parziale di [vettore](vector%20Class.md) per gli elementi di tipo `bool`. Dispone di un allocatore per il tipo sottostante utilizzato dalla specializzazione, che offre l'ottimizzazione dello spazio mediante l'archiviazione di un valore `bool` per bit.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Allocator = allocator<bool>>  
class vector<bool, Allocator>  
```  
  
## <a name="remarks"></a>Note  
 Specializzazione del modello di classe si comporta come vettore, ad eccezione delle differenze descritte in questo articolo.  
  
 Le operazioni che riguardano il tipo `bool` corrispondono ai valori in nello spazio di archiviazione del contenitore. `allocator_traits::construct` non viene utilizzato per la costruzione di tali valori.  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[const_pointer](#vector_lt_bool_gt___const_pointer)|typedef di un `const_iterator` che può essere utilizzato come puntatore costante a un elemento Boolean di `vector<bool>`.|  
|[const_reference](#vector_lt_bool_gt___const_reference)|Typedef per `bool`. Dopo l'inizializzazione, non rileva gli aggiornamenti al valore originale.|  
|[puntatore](#vector_lt_bool_gt___pointer)|typedef di un `iterator` che può essere utilizzato come puntatore a un elemento Boolean di `vector<bool>`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[capovolgere](#vector_lt_bool_gt___flip)|Inverte tutti i bit del `vector<bool>`.|  
|[swap](#vector_lt_bool_gt___swap)|Scambia gli elementi di due `vector<bool>`.|  
|[operatore &#91; &#93;](#vector_lt_bool_gt___operator_at)|Restituisce un riferimento simulato all'elemento `vector<bool>` in corrispondenza di una posizione specificata.|  
|`at`|Equivale a utilizzare la funzione [vettore](vector%20Class.md):: funzione, ad eccezione del fatto che utilizza la classe proxy [vector \< bool>:: riferimento](#vector_lt_bool_gt___reference_class). Vedere anche [operatore &#91; &#93;](#vector_lt_bool_gt___operator_at).|  
|`front`|Equivale a utilizzare la funzione [vettore](vector%20Class.md):: front (funzione), ad eccezione del fatto che utilizza la classe proxy [vector \< bool>:: riferimento](#vector_lt_bool_gt___reference_class). Vedere anche [operatore &#91; &#93;](#vector_lt_bool_gt___operator_at).|  
|`back`|Equivale a utilizzare la funzione [vettore](vector%20Class.md):: eseguire il backup di funzione, ad eccezione del fatto che utilizza la classe proxy [vector \< bool>:: riferimento](#vector_lt_bool_gt___reference_class). Vedere anche [operatore &#91; &#93;](#vector_lt_bool_gt___operator_at).|  
  
### <a name="proxy-class"></a>Classe proxy  
  
|||  
|-|-|  
|[Vector \< bool> classe di riferimento](#vector_lt_bool_gt___reference_class)|Classe che funge da proxy per simulare il comportamento di `bool&` e i cui oggetti possono fornire riferimenti agli elementi (singoli bit) all'interno di un oggetto `vector<bool>`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione**: \< vector>  
  
 **Spazio dei nomi:** std  
  
##  <a name="a-namevectorltboolgtconstpointera-vectorboolconstpointer"></a><a name="vector_lt_bool_gt___const_pointer"></a>  Vector \< bool>:: const_pointer  
 Tipo che descrive un oggetto che può essere utilizzato come puntatore costante a un elemento Boolean della sequenza contenuta dall'oggetto `vector<bool>`.  
  
```  
typedef const_iterator const_pointer;  
```  
  
##  <a name="a-namevectorltboolgtconstreferencea-vectorboolconstreference"></a><a name="vector_lt_bool_gt___const_reference"></a>  Vector \< bool>:: const_reference  
 Tipo che descrive un oggetto che può essere utilizzato come riferimento costante a un elemento Boolean della sequenza contenuta dall'oggetto `vector<bool>`.  
  
```  
typedef bool const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni ed esempi di codice, vedere [vettore&lt;bool&gt;:: operator =](#vector_lt_bool_gt___reference_operator_eq).  
  
##  <a name="a-namevectorltboolgtflipa-vectorboolflip"></a><a name="vector_lt_bool_gt___flip"></a>  Vector \< bool>:: capovolgere  
 Inverte tutti i bit di un `vector<bool>`.  
  
```  
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
  
##  <a name="a-namevectorltboolgtoperatorata-vectorbooloperator"></a><a name="vector_lt_bool_gt___operator_at"></a>  Vector \< bool>:: operator]  
 Restituisce un riferimento simulato all'elemento `vector<bool>` in corrispondenza di una posizione specificata.  
  
```  
vector<bool>::reference operator[](size_type Pos);

vector&<bool&>::const_reference operator[](size_type Pos) const;
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Pos`|Posizione dell'elemento `vector<bool>`.|  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [vector \< bool>:: riferimento](#vector_lt_bool_gt___reference_class) o [vector \< bool>:: const_reference](#vector_lt_bool_gt___const_reference) oggetto che contiene il valore dell'elemento indicizzato.  
  
 Se la posizione specificata è maggiore o uguale alla dimensione del contenitore, il risultato sarà non definito.  
  
### <a name="remarks"></a>Note  
 Se si esegue la compilazione con il set `_ITERATOR_DEBUG_LEVEL`, se si tenta di accedere a un elemento all'esterno dei limiti del vettore, si verifica un errore di runtime.  Per altre informazioni, vedere [Checked Iterators](../standard-library/checked-iterators.md).  
  
### <a name="example"></a>Esempio  
  In questo esempio di codice viene illustrato l'utilizzo corretto di `vector<bool>::operator[]` e due dei più comuni errori di codifica che vengono impostati come commento. Questi errori possono causare errori in quanto l'indirizzo dell'oggetto `vector<bool>::reference` che restituisce `vector<bool>::operator[]` non può essere accettato.  
  
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
  
    //    bool* pb = &vb[1]; // conversion error -                         do not use  
    //    bool& refb = vb[1];   // conversion error -                         do not use  
    bool hold = vb[1];  
    cout << "The second element of vb is " << vb[1] << endl;  
    cout << "The held value from the second element of vb is " << hold << endl;  
  
    // Note this doesn't modify hold.  
    vb[1] = true;  
    cout << "The second element of vb is " << vb[1] << endl;  
    cout << "The held value from the second element of vb is " << hold << endl;  
}  
  
```  
  
##  <a name="a-namevectorltboolgtpointera-vectorboolpointer"></a><a name="vector_lt_bool_gt___pointer"></a>  Vector \< bool>:: puntatore  
 Tipo che descrive un oggetto che può essere utilizzato come puntatore a un elemento Boolean della sequenza contenuta dall'oggetto `vector<bool>`.  
  
```  
typedef iterator pointer;  
```  
  
##  <a name="a-namevectorltboolgtreferenceclassa-vectorboolreference-class"></a><a name="vector_lt_bool_gt___reference_class"></a>  Vector \< bool>:: classe di riferimento  
 La `vector<bool>::reference` classe è una classe proxy fornita dal [vector \< bool> classe](../standard-library/vector-bool-class.md) per simulare `bool&`.  
  
### <a name="remarks"></a>Note  
 È necessario un riferimento simulato perché C++ non consente riferimenti diretti ai bit a livello nativo. `vector<bool>` utilizza un solo bit per elemento, a cui è possibile fare riferimento tramite questa classe proxy. Tuttavia, la simulazione dei riferimenti non è completata perché alcune assegnazioni non sono valide. Ad esempio, poiché l'indirizzo del `vector<bool>::reference` oggetto non può essere portato, il codice seguente che utilizza [vector \< bool>:: operatore &#91; &#93;](#vector_lt_bool_gt___operator_at) non è corretto:  
  
```cpp  
    vector<bool> vb;  
...  
    bool* pb = &vb[1]; // conversion error -         do not use  
    bool& refb = vb[1];   // conversion error -         do not use  
```  
  
###  <a name="a-namevectorltboolgtreferenceflipa-vectorboolreferenceflip"></a><a name="vector_lt_bool_gt___reference_flip"></a>  Vector \< bool>:: Reference:: Flip  
 Inverte il valore booleano di un riferimento [vector \< bool>](../standard-library/vector-bool-class.md) elemento.  
  
```  
void flip();
```  
  
#### <a name="remarks"></a>Note  
  
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
/* Output:  
The vector is:  
    true false false true true  
The vector with first element flipped is:  
    false false false true true  
    */  
  
```  
  
###  <a name="a-namevectorltboolgtreferenceoperatorboola-vectorboolreferenceoperator-bool"></a><a name="vector_lt_bool_gt___reference_operator_bool"></a>  Vector \< bool>:: operator bool  
 Fornisce una conversione implicita da `vector<bool>::reference` a `bool`.  
  
' ' operatore bool() const.
```  
  
#### Return Value  
 The Boolean value of the element of the vector<bool\> object.  
  
#### Remarks  
 The `vector<bool>` object cannot be modified by this operator.  
  
###  <a name="vector_lt_bool_gt___reference_operator_eq"></a>  vector<bool\>::reference::operator=  
 Assigns a Boolean value to a bit, or the value held by a referenced element to a bit.  
  
```  
operatore di riferimento & = (riferimento const e destra);

operatore & riferimento =(bool Val);
```  
  
#### Parameters  
 `Right`  
 The element reference whose value is to be assigned to the bit.  
  
 `Val`  
 The Boolean value to be assigned to the bit.  
  
#### Example  
  
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
/* Output:  
The vector is: true false false true true  
The original value of the 1st element stored in a bool: true  
The original value of the 2nd element stored in a bool: false  
The original value of the 3rd element stored in a bool: false  
  
The vector after assigning refelem1 to refelem2 is now: true true false true true  
The vector after assigning false to refelem1 is now: true true true true true  
The original value of the 1st element still stored in a bool: true  
The original value of the 2nd element still stored in a bool: false  
The original value of the 3rd element still stored in a bool: false  
*/  
  
```  
  
##  <a name="a-namevectorltboolgtswapa-vectorboolswap"></a><a name="vector_lt_bool_gt___swap"></a>  Vector \< bool>:: swap  
 Funzione membro statica che scambia due elementi di vettori booleani ( `vector<bool>`) utilizzando la classe proxy [vector \< bool>:: riferimento](#vector_lt_bool_gt___reference_class).  
  
```  
 
static void swap(
    reference Left,  
    reference Right);
```  
  
### <a name="parameters"></a>Parametri  
 `Left`  
 Elemento da scambiare con l'elemento `Right`.  
  
 `Right`  
 Elemento da scambiare con l'elemento `Left`.  
  
### <a name="remarks"></a>Note  
 Tale overload supporta i requisiti di proxy speciali di `vector<bool>`. [vettore](vector%20Class.md):: swap ha la stessa funzionalità come l'overload del metodo singolo argomento `vector<bool>::swap()`.  
  
## <a name="see-also"></a>Vedere anche  
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)

