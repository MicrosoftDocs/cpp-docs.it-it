---
title: Classe array (libreria standard C++)| Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- array
- array/std::array
- array/std::array::const_iterator
- array/std::array::const_pointer
- array/std::array::const_reference
- array/std::array::const_reverse_iterator
- array/std::array::difference_type
- array/std::array::iterator
- array/std::array::pointer
- array/std::array::reference
- array/std::array::reverse_iterator
- array/std::array::size_type
- array/std::array::value_type
- array/std::array::assign
- array/std::array::at
- array/std::array::back
- array/std::array::begin
- array/std::array::cbegin
- array/std::array::cend
- array/std::array::crbegin
- array/std::array::crend
- array/std::array::data
- array/std::array::empty
- array/std::array::end
- array/std::array::fill
- array/std::array::front
- array/std::array::max_size
- array/std::array::rbegin
- array/std::array::rend
- array/std::array::size
- array/std::array::swap
- array/std::array::operator=
- array/std::array::operator[]
- array/std::array::const_iterator
- array/std::array::const_pointer
- array/std::array::const_reference
- array/std::array::const_reverse_iterator
- array/std::array::difference_type
- array/std::array::iterator
- array/std::array::pointer
- array/std::array::reference
- array/std::array::reverse_iterator
- array/std::array::size_type
- array/std::array::value_type
- array/std::array::assign
- array/std::array::at
- array/std::array::back
- array/std::array::begin
- array/std::array::cbegin
- array/std::array::cend
- array/std::array::crbegin
- array/std::array::crend
- array/std::array::data
- array/std::array::empty
- array/std::array::end
- array/std::array::fill
- array/std::array::front
- array/std::array::max_size
- array/std::array::rbegin
- array/std::array::rend
- array/std::array::size
- array/std::array::swap
dev_langs:
- C++
helpviewer_keywords:
- array class
ms.assetid: fdfd43a5-b2b5-4b9e-991f-93bf10fb4293
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 66798adc96121837b4ac2dd238b9887d3c5b7eef
ms.openlocfilehash: 9ac4c0becd32ca50e4f56fb38218b4c69cc4d0bd
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="array-class-c-standard-library"></a>Classe array (libreria standard C++)
Descrive un oggetto che controlla una sequenza di elementi di tipo `Ty` lunghezza `N`. La sequenza viene archiviata come matrice di `Ty`, contenuta nell'oggetto `array<Ty, N>`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty, std::size_t N>  
class array;  
```  
  
#### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`Ty`|Tipo di un elemento.|  
|`N`|Numero di elementi.|  
  
## <a name="members"></a>Membri  
  
|||  
|-|-|  
|Definizione dei tipi|Descrizione|  
|[const_iterator](#const_iterator)|Tipo di un iteratore costante per la sequenza controllata.|  
|[const_pointer](#const_pointer)|Tipo di un puntatore costante a un elemento.|  
|[const_reference](#const_reference)|Tipo di un riferimento costante a un elemento.|  
|[const_reverse_iterator](#const_reverse_iterator)|Tipo di un iteratore inverso costante per la sequenza controllata.|  
|[difference_type](#difference_type)|Tipo di una distanza Signed tra due elementi.|  
|[iterator](#iterator)|Tipo di un iteratore per la sequenza controllata.|  
|[pointer](#pointer)|Tipo di un puntatore a un elemento.|  
|[reference](#reference)|Tipo di un riferimento a un elemento.|  
|[reverse_iterator](#reverse_iterator)|Tipo di un iteratore inverso della sequenza controllata.|  
|[size_type](#size_type)|Tipo di una distanza Unsigned tra due elementi.|  
|[value_type](#value_type)|Tipo di un elemento.|  
  
|||  
|-|-|  
|Funzione membro|Descrizione|  
|[array](#array)|Costruisce un oggetto di matrice.|  
|[assign](#assign)|Sostituisce tutti gli elementi.|  
|[at](#at)|Accede a un elemento in una posizione specificata.|  
|[back](#back)|Accede all'ultimo elemento.|  
|[begin](#begin)|Indica l'inizio della sequenza controllata.|  
|[cbegin](#cbegin)|Restituisce un iteratore const ad accesso casuale al primo elemento nella matrice.|  
|[cend](#cend)|Restituisce un iteratore const ad accesso casuale che punta appena oltre la fine della matrice.|  
|[crbegin](#crbegin)|Restituisce un iteratore const che punta al primo elemento di una matrice invertita.|  
|[crend](#crend)|Restituisce un iteratore const alla fine di una matrice invertita.|  
|[data](#data)|Ottiene l'indirizzo del primo elemento.|  
|[empty](#empty)|Verifica se sono presenti elementi.|  
|[end](#end)|Designa la fine della sequenza controllata.|  
|[fill](#fill)|Sostituisce tutti gli elementi con un valore specificato.|  
|[front](#front)|Accede al primo elemento.|  
|[max_size](#max_size)|Conta il numero di elementi.|  
|[rbegin](#rbegin)|Indica l'inizio della sequenza controllata inversa.|  
|[rend](#rend)|Indica la fine della sequenza controllata inversa.|  
|[size](#size)|Conta il numero di elementi.|  
|[swap](#swap)|Scambia il contenuto di due contenitori.|  
  
|||  
|-|-|  
|Operatore|Descrizione|  
|[array::operator=](#op_eq)|Sostituisce la sequenza controllata.|  
|[array::operator[]](#op_at)|Accede a un elemento in una posizione specificata.|  
  
## <a name="remarks"></a>Note  
 Il tipo ha un costruttore predefinito `array()` e un operatore di assegnazione predefinito `operator=` e soddisfa i requisiti per un `aggregate`. Pertanto, gli oggetti di tipo `array<Ty, N>` possono essere inizializzati usando un inizializzatore di aggregazione. Ad esempio,  
  
```  
array<int, 4> ai = { 1, 2, 3 };  
```  
  
 crea l'oggetto `ai` contenente quattro valori interi, inizializza i primi tre elementi sui valori 1, 2 e 3 rispettivamente e inizializza il quarto elemento su 0.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<array>  
  
 **Spazio dei nomi:** std  
  
##  <a name="array"></a>  array::array  
 Costruisce un oggetto di matrice.  
  
```  
array();

array(const array& right);
```  
  
### <a name="parameters"></a>Parametri  
*right*  
 Oggetto o un intervallo da inserire.  
  
### <a name="remarks"></a>Note  
Il costruttore predefinito `array()` lascia la sequenza controllata non inizializzata (o inizializzata per impostazione predefinita). Viene usato per specificare una sequenza controllata non inizializzata.  
  
Il costruttore di copia `array(const array& right)` inizializza la sequenza controllata con la sequenza [*right*`.begin()`, *right*`.end()`). Viene usato per specificare una sequenza controllata iniziale che è una copia della sequenza controllata dall'oggetto matrice *right*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_array.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1(c0);   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
```  
  
##  <a name="assign"></a>  array::assign  
Obsoleto in C++ 11, sostituito da [fill](#fill). Sostituisce tutti gli elementi.  
  
```  
void assign(const Ty& val);
```  
  
### <a name="parameters"></a>Parametri  
 `val`  
 Il valore da assegnare.  
  
### <a name="remarks"></a>Note  
 La funzione membro sostituisce la sequenza controllata da `*this` con una ripetizione di `N` elementi con valore `val`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_assign.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1;   
    c1.assign(4);   
  
// display contents " 4 4 4 4"   
    for (Myarray::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4 4 4 4  
```  
  
##  <a name="at"></a>  array::at  
 Accede a un elemento in una posizione specificata.  
  
```  
reference at(size_type off);

constexpr const_reference at(size_type off) const;
```  
  
### <a name="parameters"></a>Parametri  
 `off`  
 Posizione dell'elemento a cui accedere.  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un riferimento all'elemento della sequenza controllata nella posizione `off`. Se tale posizione non è valida, la funzione genera un oggetto della classe `out_of_range`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_at.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display odd elements " 1 3"   
    std::cout << " " << c0.at(1);   
    std::cout << " " << c0.at(3);   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
##  <a name="back"></a>  array::back  
 Accede all'ultimo elemento.  
  
```  
reference back();

constexpr const_reference back() const;
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un riferimento all'ultimo elemento della sequenza controllata, che non deve essere vuoto.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_back.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    std::cout << " " << c0.back();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="begin"></a>  array::begin  
 Indica l'inizio della sequenza controllata.  
  
```  
iterator begin() noexcept;  
const_iterator begin() const noexcept;  
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un iteratore di accesso casuale che punta al primo elemento della sequenza (o appena oltre la fine di una sequenza vuota).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_begin.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::iterator it2 = c0.begin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="cbegin"></a>  array::cbegin  
 Restituisce un iteratore `const` che punta al primo elemento dell'intervallo.  
  
```  
const_iterator cbegin() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale `const` che punta al primo elemento dell'intervallo o alla posizione oltre la fine di un intervallo vuoto (per un intervallo vuoto, `cbegin() == cend()`).  
  
### <a name="remarks"></a>Note  
 Con il valore restituito di `cbegin`, gli elementi dell'intervallo non possono essere modificati.  
  
 È possibile usare questa funzione membro anziché la funzione membro `begin()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio si consideri `Container` come un contenitore (non `const`) modificabile di qualsiasi tipo che supporta `begin()` e `cbegin()`.  
  
```cpp  
auto i1 = Container.begin();
// i1 is Container<T>::iterator   
auto i2 = Container.cbegin();

// i2 is Container<T>::const_iterator  
```  
  
##  <a name="cend"></a>  array::cend  
 Restituisce un iteratore `const` che punta alla posizione oltre l'ultimo elemento di un intervallo.  
  
```  
const_iterator cend() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale che punta oltre la fine dell'intervallo.  
  
### <a name="remarks"></a>Note  
 `cend` viene utilizzato per verificare se un iteratore ha superato la fine del relativo intervallo.  
  
 È possibile usare questa funzione membro anziché la funzione membro `end()` per garantire che il valore restituito sia `const_iterator`. In genere, viene usata insieme alla parola chiave di deduzione di tipo [auto](../cpp/auto-cpp.md), come illustrato nell'esempio seguente. Nell'esempio, si consideri `Container` come un contenitore (non `const`) modificabile di qualsiasi tipo che supporta `end()` e `cend()`.  
  
```cpp  
auto i1 = Container.end();
// i1 is Container<T>::iterator   
auto i2 = Container.cend();

// i2 is Container<T>::const_iterator  
```  
  
 Non è consigliabile dereferenziare il valore restituito da `cend`.  
  
##  <a name="const_iterator"></a>  array::const_iterator  
 Tipo di un iteratore costante per la sequenza controllata.  
  
```  
typedef implementation-defined const_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come iteratore ad accesso casuale costante per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_const_iterator.cpp  
// compile with: /EHsc /W4  
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> MyArray;   
  
int main()   
{   
    MyArray c0 = {0, 1, 2, 3};   
  
    // display contents " 0 1 2 3"   
    std::cout << "it1:";  
    for ( MyArray::const_iterator it1 = c0.begin();   
          it1 != c0.end();   
          ++it1 ) {  
       std::cout << " " << *it1;   
    }  
    std::cout << std::endl;   
  
    // display first element " 0"   
    MyArray::const_iterator it2 = c0.begin();   
    std::cout << "it2:";  
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
}  
  
```  
  
```Output  
it1: 0 1 2 3                                  
  
it2: 0  
  
```  
  
##  <a name="const_pointer"></a>  array::const_pointer  
 Tipo di un puntatore costante a un elemento.  
  
```  
typedef const Ty *const_pointer;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come puntatore costante a elementi della sequenza.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_const_pointer.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::const_pointer ptr = &*c0.begin();   
    std::cout << " " << *ptr;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="const_reference"></a>  array::const_reference  
 Tipo di un riferimento costante a un elemento.  
  
```  
typedef const Ty& const_reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come riferimento costante a un elemento della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_const_reference.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::const_reference ref = *c0.begin();   
    std::cout << " " << ref;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="const_reverse_iterator"></a>  array::const_reverse_iterator  
 Tipo di un iteratore inverso costante per la sequenza controllata.  
  
```  
typedef std::reverse_iterator<const_iterator> const_reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come iteratore inverso costante per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_const_reverse_iterator.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::const_reverse_iterator it2 = c0.rbegin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="crbegin"></a>  array::crbegin  
 Restituisce un iteratore const che punta al primo elemento di una matrice invertita.  
  
```  
const_reverse_iterator crbegin() const;
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore inverso const ad accesso casuale che punta al primo elemento di una matrice invertita (o che punta a quello che era stato l'ultimo elemento nella matrice non invertita).  
  
### <a name="remarks"></a>Note  
 Con il valore restituito di `crbegin`, l'oggetto matrice non può essere modificato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// array_crbegin.cpp  
// compile with: /EHsc  
#include <array>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   array<int, 2> v1 = {1, 2};  
   array<int, 2>::iterator v1_Iter;  
   array<int, 2>::const_reverse_iterator v1_rIter;  
  
   v1_Iter = v1.begin( );  
   cout << "The first element of array is "  
        << *v1_Iter << "." << endl;  
  
   v1_rIter = v1.crbegin( );  
   cout << "The first element of the reversed array is "  
        << *v1_rIter << "." << endl;  
}  
```  
  
```Output  
The first element of array is 1.  
The first element of the reversed array is 2.  
```  
  
##  <a name="crend"></a>  array::crend  
 Restituisce un iteratore const che punta alla posizione successiva all'ultimo elemento di una matrice invertita.  
  
```  
const_reverse_iterator crend() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Iteratore ad accesso casuale const inverso che punta alla posizione successiva all'ultimo elemento in una matrice invertita, ossia la posizione che precedeva il primo elemento nella matrice non invertita.  
  
### <a name="remarks"></a>Note  
 `crend` viene usato con una matrice inversa proprio come [array::cend](#cend) viene usato con una matrice.  
  
 Con il valore restituito di `crend` (opportunamente diminuito), l'oggetto matrice non può essere modificato.  
  
 `crend` può essere usato per verificare se un iteratore inverso ha raggiunto la fine della relativa matrice.  
  
 Non è consigliabile dereferenziare il valore restituito da `crend`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// array_crend.cpp  
// compile with: /EHsc  
#include <array>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;     
   array<int, 2> v1 = {1, 2};  
   array<int, 2>::const_reverse_iterator v1_rIter;  
  
   for ( v1_rIter = v1.rbegin( ) ; v1_rIter != v1.rend( ) ; v1_rIter++ )  
      cout << *v1_rIter << endl;  
}  
```  
  
```Output  
2  
1  
```  
  
##  <a name="data"></a>  array::data  
 Ottiene l'indirizzo del primo elemento.  
  
```  
Ty *data();

const Ty *data() const;
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono l'indirizzo del primo elemento nella sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_data.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::pointer ptr = c0.data();   
    std::cout << " " << *ptr;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="difference_type"></a>  array::difference_type  
 Tipo di una distanza Signed tra due elementi.  
  
```  
typedef std::ptrdiff_t difference_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo di valore integer con segno descrive un oggetto che può rappresentare la differenza tra gli indirizzi di due elementi qualsiasi della sequenza controllata. È un sinonimo del tipo `std::ptrdiff_t`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_difference_type.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display distance first-last " -4"   
    Myarray::difference_type diff = c0.begin() - c0.end();   
    std::cout << " " << diff;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
-4  
```  
  
##  <a name="empty"></a>  array::empty  
 Verifica se sono presenti o meno degli elementi.  
  
```  
constexpr bool empty() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce true solo se `N == 0`  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_empty.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display whether c0 is empty " false"   
    std::cout << std::boolalpha << " " << c0.empty();   
    std::cout << std::endl;   
  
    std::array<int, 0> c1;   
  
// display whether c1 is empty " true"   
    std::cout << std::boolalpha << " " << c1.empty();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
false  
true  
```  
  
##  <a name="end"></a>  array::end  
 Designa la fine della sequenza controllata.  
  
```  
reference end();

const_reference end() const;
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un iteratore di accesso casuale che punta appena oltre la fine della sequenza.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_end.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::iterator it2 = c0.end();   
    std::cout << " " << *--it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="fill"></a>  array::fill  
 Cancella una matrice e copia gli elementi specificati nella matrice vuota.  
  
```  
void fill(const Type& val);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|`val`|Valore dell'elemento inserito nella matrice.|  
  
### <a name="remarks"></a>Note  
 `fill` sostituisce ogni elemento della matrice con il valore specificato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// array_fill.cpp  
// compile with: /EHsc  
#include <array>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   array<int, 2> v1 = {1, 2};  
   array<int, 2>::iterator iter;  
  
   cout << "v1 = " ;  
   for (iter = v1.begin(); iter != v1.end(); iter++)  
      cout << *iter << " ";  
   cout << endl;  
  
   v1.fill(3);  
   cout << "v1 = " ;  
   for (iter = v1.begin(); iter != v1.end(); iter++)  
      cout << *iter << " ";  
   cout << endl;  
}  
```  
  
##  <a name="front"></a>  array::front  
 Accede al primo elemento.  
  
```  
reference front();

constexpr const_reference front() const;
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un riferimento al primo elemento della sequenza controllata, che non deve essere vuoto.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_front.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    std::cout << " " << c0.front();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="iterator"></a>  array::iterator  
 Tipo di un iteratore per la sequenza controllata.  
  
```  
typedef implementation-defined iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come iteratore ad accesso casuale per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_iterator.cpp   
// compile with: /EHsc /W4  
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> MyArray;   
  
int main()   
{   
    MyArray c0 = {0, 1, 2, 3};   
  
    // display contents " 0 1 2 3"   
    std::cout << "it1:";  
    for ( MyArray::iterator it1 = c0.begin();   
          it1 != c0.end();   
          ++it1 ) {  
       std::cout << " " << *it1;   
    }  
    std::cout << std::endl;   
  
    // display first element " 0"   
    MyArray::iterator it2 = c0.begin();   
    std::cout << "it2:";  
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
}  
  
```  
  
```Output  
it1: 0 1 2 3                                  
  
it2: 0  
  
```  
  
##  <a name="max_size"></a>  array::max_size  
 Conta il numero di elementi.  
  
```  
constexpr size_type max_size() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `N`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_max_size.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display (maximum) size " 4"   
    std::cout << " " << c0.max_size();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4  
```  
  
##  <a name="op_at"></a>  array::operator[]  
 Accede a un elemento in una posizione specificata.  
  
```  
reference operator[](size_type off);

constexpr const_reference operator[](size_type off) const;
```  
  
### <a name="parameters"></a>Parametri  
 `off`  
 Posizione dell'elemento a cui accedere.  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un riferimento all'elemento della sequenza controllata nella posizione `off`. Se tale posizione non è valida, il comportamento è indefinito.  
  
È inoltre disponibile una funzione non membro [get](array-functions.md#get) per ottenere un riferimento a un elemento di `array`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_operator_sub.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display odd elements " 1 3"   
    std::cout << " " << c0[1];   
    std::cout << " " << c0[3];   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
1 3  
```  
  
##  <a name="op_eq"></a>  array::operator=  
 Sostituisce la sequenza controllata.  
  
```  
array <Value>%  operator=(array <Value>% right);
```  
  
### <a name="parameters"></a>Parametri  
 right  
 Contenitore da copiare.  
  
### <a name="remarks"></a>Note  
 L'operatore membro assegna ogni elemento di `right` all'elemento corrispondente della sequenza controllata, quindi restituisce `*this`. Viene usato per sostituire la sequenza controllata con una copia della sequenza controllata in `right`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_operator_as.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1;   
    c1 = c0;   
  
// display copied contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c1.begin();   
        it != c1.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
```  
  
##  <a name="pointer"></a>  array::pointer  
 Tipo di un puntatore a un elemento.  
  
```  
typedef Ty *pointer;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come puntatore a elementi della sequenza.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_pointer.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::pointer ptr = &*c0.begin();   
    std::cout << " " << *ptr;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="rbegin"></a>  array::rbegin  
 Indica l'inizio della sequenza controllata inversa.  
  
```  
reverse_iterator rbegin()noexcept;  
const_reverse_iterator rbegin() const noexcept;  
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un iteratore inverso che punta poco oltre la fine della sequenza controllata. Di conseguenza, indica l'inizio della sequenza inversa.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_rbegin.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::const_reverse_iterator it2 = c0.rbegin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="reference"></a>  array::reference  
 Tipo di un riferimento a un elemento.  
  
```  
typedef Ty& reference;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come riferimento a un elemento della sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_reference.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::reference ref = *c0.begin();   
    std::cout << " " << ref;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="rend"></a>  array::rend  
 Indica la fine della sequenza controllata inversa.  
  
```  
reverse_iterator rend()noexcept;  
const_reverse_iterator rend() const noexcept;  
```  
  
### <a name="remarks"></a>Note  
 Le funzioni membro restituiscono un iteratore inverso che punta al primo elemento della sequenza (o oltre la fine di una sequenza vuota). Di conseguenza, indica la fine della sequenza inversa.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_rend.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display first element " 0"   
    Myarray::const_reverse_iterator it2 = c0.rend();   
    std::cout << " " << *--it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0  
```  
  
##  <a name="reverse_iterator"></a>  array::reverse_iterator  
 Tipo di un iteratore inverso della sequenza controllata.  
  
```  
typedef std::reverse_iterator<iterator> reverse_iterator;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo descrive un oggetto che può essere usato come iteratore inverso per la sequenza controllata.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_reverse_iterator.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display last element " 3"   
    Myarray::reverse_iterator it2 = c0.rbegin();   
    std::cout << " " << *it2;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
3  
```  
  
##  <a name="size"></a>  array::size  
 Conta il numero di elementi.  
  
```  
constexpr size_type size() const;
```  
  
### <a name="remarks"></a>Note  
 La funzione membro restituisce `N`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_size.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display size " 4"   
    std::cout << " " << c0.size();   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4  
```  
  
##  <a name="size_type"></a>  array::size_type  
 Tipo di distanza senza segno tra due elementi.  
  
```  
typedef std::size_t size_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo Unsigned Integer descrive un oggetto che può rappresentare la lunghezza di una sequenza controllata. È un sinonimo del tipo `std::size_t`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_size_type.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display distance last-first " 4"   
    Myarray::size_type diff = c0.end() - c0.begin();   
    std::cout << " " << diff;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4  
```  
  
##  <a name="swap"></a>  array::swap  
Scambia il contenuto di questa matrice con un'altra matrice.  
  
```  
void swap(array& right);
```  
  
### <a name="parameters"></a>Parametri  
 `right`  
 Matrice con cui scambiare il contenuto.  
  
### <a name="remarks"></a>Note  
La funzione membro scambia le sequenze controllate tra `*this` e `right`. Esegue una serie di assegnazioni di elementi e chiamate ai costruttori proporzionale a `N`.  

È anche disponibile una funzione non membro [swap](array-functions.md#swap) per lo scambio di due istanze `array`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_swap.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    Myarray c1 = {4, 5, 6, 7};   
    c0.swap(c1);   
  
// display swapped contents " 4 5 6 7"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    swap(c0, c1);   
  
// display swapped contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
4 5 6 7  
0 1 2 3  
```  
  
##  <a name="value_type"></a>  array::value_type  
 Tipo di un elemento.  
  
```  
typedef Ty value_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello `Ty`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__array__array_value_type.cpp   
// compile with: /EHsc   
#include <array>   
#include <iostream>   
  
typedef std::array<int, 4> Myarray;   
int main()   
    {   
    Myarray c0 = {0, 1, 2, 3};   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        std::cout << " " << *it;   
    std::cout << std::endl;   
  
// display contents " 0 1 2 3"   
    for (Myarray::const_iterator it = c0.begin();   
        it != c0.end(); ++it)   
        {   
        Myarray::value_type val = *it;   
        std::cout << " " << val;   
        }   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
0 1 2 3  
0 1 2 3  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<array>](../standard-library/array.md)


