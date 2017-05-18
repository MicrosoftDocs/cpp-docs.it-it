---
title: Iteratori verificati | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _SECURE_SCL_THROWS
dev_langs:
- C++
helpviewer_keywords:
- Safe Libraries
- Safe Libraries, C++ Standard Library
- Safe C++ Standard Library
- iterators, checked
- checked iterators
ms.assetid: cfc87df8-e3d9-403b-ab78-e9483247d940
caps.latest.revision: 30
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
ms.openlocfilehash: 72fae545c992eb8b9bcaf7145702b7f92a7307d1
ms.contentlocale: it-it
ms.lasthandoff: 04/29/2017

---
# <a name="checked-iterators"></a>Checked Iterators
Gli iteratori verificati garantiscono che i limiti del contenitore non vengano sovrascritti. Gli iteratori verificati si applicano sia alle build di rilascio che alle build di debug. Per altre informazioni sull'uso degli iteratori di debug quando si esegue la compilazione in modalità di debug, vedere [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md).  
  
## <a name="remarks"></a>Note  
Per informazioni sulla disabilitazione degli avvisi generati dagli iteratori verificati, vedere [_SCL_SECURE_NO_WARNINGS](../standard-library/scl-secure-no-warnings.md).  
  
È possibile usare la macro [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md) del preprocessore per abilitare o disabilitare la funzionalità degli iteratori verificati. Se il valore di `_ITERATOR_DEBUG_LEVEL` viene definito come 1 o 2, l'uso non sicuro degli iteratori causa un errore di runtime e il programma viene terminato. Se definito come 0, gli iteratori verificati vengono disabilitati. Per impostazione predefinita, il valore di `_ITERATOR_DEBUG_LEVEL` è 0 per le build di rilascio e 2 per le build di debug.  
  
> [!IMPORTANT]
> La documentazione e il codice sorgente più datati possono fare riferimento alla macro [SECURE_SCL](../standard-library/secure-scl.md). Utilizzare `_ITERATOR_DEBUG_LEVEL` per controllare `_SECURE_SCL`. Per altre informazioni, vedere [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md).  
  
Quando `_ITERATOR_DEBUG_LEVEL` viene definita come 1 o 2, vengono eseguite le seguenti verifiche degli iteratori:  
  
-   Vengono verificati tutti gli iteratori standard (ad esempio, [vector::iterator](../standard-library/vector-class.md#iterator)).  
  
-   Se un iteratore di output è un iteratore verificato, le chiamate alle funzioni della libreria standard, ad esempio [std::copy](../standard-library/algorithm-functions.md#copy), determinano un comportamento di verifica.  
  
-   Se un iteratore di output è un iteratore non verificato, le chiamate alla funzione della libreria standard generano avvisi del compilatore.  
  
-   Le funzioni seguenti generano un errore di runtime quando è presente un accesso che non rientra nei limiti del contenitore:  
  
|||||  
|-|-|-|-|  
|[basic_string::operator\[\]](../standard-library/basic-string-class.md#op_at)|[bitset::operator\[\]](../standard-library/bitset-class.md#op_at)|[back](../standard-library/deque-class.md#back)|[front](../standard-library/deque-class.md#front)|  
|[deque::operator\[\]](../standard-library/deque-class.md#op_at)|[back](../standard-library/list-class.md#back)|[front](../standard-library/list-class.md#front)|[back](../standard-library/queue-class.md#back)|  
|[front](../standard-library/queue-class.md#front)|[vector::operator\[\]](../standard-library/vector-class.md#op_at)|[back](../standard-library/vector-class.md#back)|[front](../standard-library/vector-class.md#front)|  
  
Quando `_ITERATOR_DEBUG_LEVEL` viene definita come 0:  
  
-   Tutti gli iteratori standard sono non verificati. Gli iteratori possono spostarsi oltre i limiti del contenitore, provocando un comportamento non definito.  
  
-   Se un iteratore di output è un iteratore verificato, le chiamate alle funzioni della libreria standard, ad esempio `std::copy`, determinano un comportamento di verifica.  
  
-   Se un iteratore di output è un iteratore non verificato, le chiamate alle funzioni della libreria standard determinano un comportamento senza verifica.  
  
Un iteratore verificato fa riferimento a un iteratore che chiama `invalid_parameter_handler` se si tenta di superare i limiti del contenitore. Per altre informazioni su `invalid_parameter_handler`, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).  
  
Gli adattatori degli iteratori che supportano gli iteratori verificati sono la [classe checked_array_iterator](../standard-library/checked-array-iterator-class.md) e la [classe unchecked_array_iterator](../standard-library/unchecked-array-iterator-class.md).  
  
## <a name="example"></a>Esempio  
  
Quando si esegue la compilazione con `_ITERATOR_DEBUG_LEVEL` impostata su 1 o 2, viene visualizzato un errore di runtime se si tenta di accedere a un elemento che non rientra nei limiti del contenitore usando l'operatore di indicizzazione di determinate classi.  
  
```cpp  
// checked_iterators_1.cpp  
// cl.exe /Zi /MDd /EHsc /W4  
  
#define _ITERATOR_DEBUG_LEVEL 1  
  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
   vector<int> v;  
   v.push_back(67);  
  
   int i = v[0];  
   cout << i << endl;  
  
   i = v[1]; //triggers invalid parameter handler  
}  
```  
  
Il programma stampa "67" e quindi visualizza una finestra di dialogo di errore di asserzione contenente informazioni aggiuntive sull'errore.  
  
## <a name="example"></a>Esempio  
  
Analogamente, quando si esegue la compilazione impostando `_ITERATOR_DEBUG_LEVEL` su 1 o 2 viene visualizzato un errore di runtime se si tenta di accedere a un elemento usando `front` o `back` nelle classi del contenitore quando il contenitore è vuoto.  
  
```cpp  
// checked_iterators_2.cpp  
// cl.exe /Zi /MDd /EHsc /W4  
#define _ITERATOR_DEBUG_LEVEL 1  
  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
   vector<int> v;  
  
   int& i = v.front(); // triggers invalid parameter handler  
}  
```  
  
Il programma visualizza una finestra di dialogo di errore di asserzione contenente informazioni aggiuntive sull'errore.  
  
## <a name="example"></a>Esempio  
  
I vari scenari relativi ai casi di utilizzo degli iteratori con commenti su ciascuno di essi vengono illustrati nel codice seguente. Per impostazione predefinita, `_ITERATOR_DEBUG_LEVEL` è impostata su 2 nelle build di debug e su 0 nelle versioni complete.  
  
```cpp  
// checked_iterators_3.cpp  
// cl.exe /MTd /EHsc /W4  
  
#include <algorithm>  
#include <array>  
#include <iostream>  
#include <iterator>  
#include <numeric>  
#include <string>  
#include <vector>  
  
using namespace std;  
  
template <typename C> 
void print(const string& s, const C& c)  
{  
    cout << s;  
  
    for (const auto& e : c) {  
        cout << e << " ";  
    }  
  
    cout << endl;  
}  
  
int main()  
{  
    vector<int> v(16);  
    iota(v.begin(), v.end(), 0);  
    print("v: ", v);  
  
    // OK: vector::iterator is checked in debug mode  
    // (i.e. an overrun causes a debug assertion)  
    vector<int> v2(16);  
    transform(v.begin(), v.end(), v2.begin(), [](int n) { return n * 2; });  
    print("v2: ", v2);  
  
    // OK: back_insert_iterator is marked as checked in debug mode  
    // (i.e. an overrun is impossible)  
    vector<int> v3;  
    transform(v.begin(), v.end(), back_inserter(v3), [](int n) { return n * 3; });  
    print("v3: ", v3);  
  
    // OK: array::iterator is checked in debug mode  
    // (i.e. an overrun causes a debug assertion)  
    array<int, 16> a4;  
    transform(v.begin(), v.end(), a4.begin(), [](int n) { return n * 4; });  
    print("a4: ", a4);  
  
    // OK: Raw arrays are checked in debug mode  
    // (an overrun causes a debug assertion)  
    // NOTE: This applies only when raw arrays are given to C++ Standard Library algorithms!  
    int a5[16];  
    transform(v.begin(), v.end(), a5, [](int n) { return n * 5; });  
    print("a5: ", a5);  
  
    // WARNING C4996: Pointers cannot be checked in debug mode  
    // (an overrun causes undefined behavior)  
    int a6[16];  
    int * p6 = a6;  
    transform(v.begin(), v.end(), p6, [](int n) { return n * 6; });  
    print("a6: ", a6);  
  
    // OK: stdext::checked_array_iterator is checked in debug mode  
    // (an overrun causes a debug assertion)  
    int a7[16];  
    int * p7 = a7;  
    transform(v.begin(), v.end(), stdext::make_checked_array_iterator(p7, 16), [](int n) { return n * 7; });  
    print("a7: ", a7);  
  
    // WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode  
    // (it performs no checking, so an overrun causes undefined behavior)  
    int a8[16];  
    int * p8 = a8;  
    transform(v.begin(), v.end(), stdext::make_unchecked_array_iterator(p8), [](int n) { return n * 8; });  
    print("a8: ", a8);  
}  
  
```  
  
Se si compila questo codice usando `cl.exe /EHsc /W4 /MTd checked_iterators_3.cpp` il compilatore genera un avviso, ma esegue la compilazione senza errori in un file eseguibile:  
  
```Output  
algorithm(1026) : warning C4996: 'std::_Transform1': Function call with parameters 
that may be unsafe - this call relies on the caller to check that the passed values 
are correct. To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation 
on how to use Visual C++ 'Checked Iterators'  
```  
  
Quando viene eseguito dalla riga di comando il file eseguibile genera questo output:  
  
```Output  
v: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15  
v2: 0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30  
v3: 0 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45  
a4: 0 4 8 12 16 20 24 28 32 36 40 44 48 52 56 60  
a5: 0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75  
a6: 0 6 12 18 24 30 36 42 48 54 60 66 72 78 84 90  
a7: 0 7 14 21 28 35 42 49 56 63 70 77 84 91 98 105  
a8: 0 8 16 24 32 40 48 56 64 72 80 88 96 104 112 120  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)   
 [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)


