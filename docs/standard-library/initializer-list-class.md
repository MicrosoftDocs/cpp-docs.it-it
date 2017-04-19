---
title: Classe initializer_list | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
f1_keywords:
- initializer_list/std::initializer_list::initializer_list
- initializer_list/std::initializer_list::begin
- initializer_list/std::initializer_list::end
- initializer_list/std::initializer_list::size
ms.assetid: 1f2c0ff4-5636-4f79-b008-e75426e3d2ab
caps.latest.revision: 17
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
translationtype: Machine Translation
ms.sourcegitcommit: 51fbd09793071631985720550007dddbe16f598f
ms.openlocfilehash: 2ac3e7fa456e5d3ff04bc5d974c87a9cbb055fea
ms.lasthandoff: 02/24/2017

---
# <a name="initializerlist-class"></a>Classe initializer_list
Fornisce l'accesso a una matrice di elementi in cui ogni membro è del tipo specificato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Type>  
class initializer_list
```  
  
#### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`Type`|Tipo di dati degli elementi da archiviare in `initializer_list`.|  

  
## <a name="remarks"></a>Note  
 Un oggetto `initializer_list` può essere costruito utilizzando un elenco di inizializzatori tra parentesi:  
  
```cpp  
initializer_list<int> i1{ 1, 2, 3, 4 };  
```  
  
 Il compilatore trasforma gli elenchi di inizializzatori tra parentesi graffe con elementi omogenei in un oggetto `initializer_list` ogni volta che la firma della funzione richiede un oggetto `initializer_list`. Per altre informazioni sull'uso di `initializer_list`, vedere [Inizializzazione uniforme e costruttori deleganti](../cpp/uniform-initialization-and-delegating-constructors.md).  
  
### <a name="constructors"></a>Costruttori  
  
|||  
|-|-|  
|[initializer_list](../standard-library/forward-list-class.md#forward_list__forward_list)|Costruisce un oggetto di tipo `initializer_list`.|  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|value_type|Tipo degli elementi contenuti nell'oggetto `initializer_list`.|  
|riferimento|Tipo che fornisce un riferimento a un elemento archiviato in `initializer_list`.|  
|const_reference|Tipo che fornisce un riferimento costante a un elemento in `initializer_list`.|  
|size_type|Tipo che rappresenta il numero di elementi in `initializer_list`.|  
|iteratore|Tipo che fornisce un iteratore per `initializer_list`.|  
|const_iterator|Tipo che fornisce un iteratore costante per `initializer_list`.|  
  
### <a name="member-functions"></a>Funzioni membro  
  
|||  
|-|-|  
|[begin](#initializer_list__begin)|Restituisce un puntatore al primo elemento in `initializer_list`.|  
|[end](#initializer_list__end)|Restituisce un puntatore nella posizione successiva dopo l'ultimo elemento in `initializer_list`.|  
|[size](#initializer_list__size)|Restituisce il numero di elementi nel `initializer_list`.|  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<initializer_list>  
  
 **Spazio dei nomi:** std  
  
##  <a name="initializer_list__begin"></a>  initializer_list::begin  
 Restituisce un puntatore al primo elemento in `initializer_list`.  
  
```  
constexpr const InputIterator* begin() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al primo elemento di `initializer_list`. Se l'elenco è vuoto, il puntatore sarà lo stesso per l'inizio e la fine dell'elenco.  
  
### <a name="remarks"></a>Note  
  
##  <a name="initializer_list__end"></a>  initializer_list::end  
 Restituisce un puntatore nella posizione successiva dopo l'ultimo elemento in `initializer list`.  
  
```  
constexpr const InputIterator* end() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore nella posizione successiva dopo l'ultimo elemento nell'elenco. Se l'elenco è vuoto, sarà uguale al puntatore per il primo elemento nell'elenco.  
  
##  <a name="initializer_list__initializer_list"></a>  initializer_list::initializer_list  
 Costruisce un oggetto di tipo `initializer_list`.  
  
```  
constexpr initializer_list() noexcept;
initializer_list(const InputIterator First, const InputIterator Last);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`First`|Posizione del primo elemento nell'intervallo di elementi da copiare.|  
|`Last`|Posizione del primo elemento oltre l'intervallo di elementi da copiare.|  
  
### <a name="remarks"></a>Note  
 Un oggetto `initializer_list` è basato su una matrice di oggetti del tipo specificato. La copia di un oggetto `initializer_list` crea una seconda istanza di un elenco che punta agli stessi oggetti; gli oggetti sottostanti non vengono copiati.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// initializer_list_class.cpp  
// compile with: /EHsc  
#include <initializer_list>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
    // Create an empty initializer_list c0  
    initializer_list <int> c0;  
  
    // Create an initializer_list c1 with 1 element  
    initializer_list <int> c1{ 3 };  
  
    // Create an initializer_list c2 with 5 elements   
    initializer_list <int> c2{ 5, 4, 3, 2, 1 };  
  
    // Create a copy, initializer_list c3, of initializer_list c2  
    initializer_list <int> c3(c2);  
  
    // Create a initializer_list c4 by copying the range c3[ first,  last)  
    const int* c3_ptr = c3.begin();  
    c3_ptr++;  
    c3_ptr++;  
    initializer_list <int> c4(c3.begin(), c3_ptr);  
  
    // Move initializer_list c4 to initializer_list c5  
    initializer_list <int> c5(move(c4));  
  
    cout << "c1 =";  
    for (auto c : c1)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c2 =";  
    for (auto c : c2)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c3 =";  
    for (auto c : c3)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c4 =";  
    for (auto c : c4)  
        cout << " " << c;  
    cout << endl;  
  
    cout << "c5 =";  
    for (auto c : c5)  
        cout << " " << c;  
    cout << endl;  
}  
```  
  
```Output  
c1 = 3c2 = 5 4 3 2 1c3 = 5 4 3 2 1c4 = 5 4c5 = 5 4  
```  
  
##  <a name="initializer_list__size"></a>  initializer_list::size  
 Restituisce il numero di elementi nell'elenco.  
  
```  
constexpr size_t size() const noexcept;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Numero di elementi contenuti nell'elenco.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [<forward_list>](../standard-library/forward-list.md)


