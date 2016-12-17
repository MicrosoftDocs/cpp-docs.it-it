---
title: "Iteratori verificati | Microsoft Docs"
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
  - "_SECURE_SCL"
  - "_SECURE_SCL_THROWS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "iteratori verificati"
  - "iteratori, checked"
  - "librerie protette"
  - "librerie protette, libreria C++ standard"
  - "libreria C++ standard protetta"
ms.assetid: cfc87df8-e3d9-403b-ab78-e9483247d940
caps.latest.revision: 30
caps.handback.revision: 29
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Iteratori verificati
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli iteratori verificati garantiscono che i limiti del contenitore non vengano sovrascritti.  
  
 Gli iteratori verificati si applicano alle build di rilascio e alle build di debug.  Per ulteriori informazioni sull'utilizzo degli iteratori quando si esegue la compilazione in modalità di debug, vedere [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md).  
  
## Note  
 Per informazioni sulla disabilitazione degli avvisi generati dagli iteratori verificati, vedere [\_SCL\_SECURE\_NO\_WARNINGS](../standard-library/scl-secure-no-warnings.md).  
  
 È possibile utilizzare il seguente simbolo con la funzionalità relativa agli iteratori verificati.  
  
 `_SECURE_SCL`  
 Se `_SECURE_SCL` viene definito come 1, utilizzare non affidabile degli iteratori causa un errore di runtime e il programma verrà terminato.  Se definito come 0, gli iteratori verificati vengono disabilitati.  Per impostazione predefinita, il valore di `_SECURE_SCL` è 0 per le build di rilascio e 1 per le build di debug.  
  
> [!IMPORTANT]
>  Utilizzare `_ITERATOR_DEBUG_LEVEL` per controllare [\_SECURE\_SCL](../standard-library/secure-scl.md).  Per ulteriori informazioni, vedere [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md).  
  
 Quando `_SECURE_SCL` viene definito come 1, vengono eseguiti i seguenti controlli SCL:  
  
-   Vengono verificati tutti gli iteratori standard \(ad esempio, [vector::iterator](../Topic/vector::iterator.md)\).  
  
-   Se un iteratore di output è un iteratore verificato, il comportamento nelle chiamate alla funzione standard \(ad esempio, [std::copy](../Topic/copy.md)\) sarà controllato.  
  
-   Se l'iteratore di output è un iteratore non verificato, le chiamate alla funzione standard genereranno gli avvisi del compilatore.  
  
-   Le funzioni seguenti genereranno un errore di runtime quando è presente un accesso che non rientra nei limiti del contenitore:  
  
|||||  
|-|-|-|-|  
|[basic\_string::operator](../Topic/basic_string::operator.md)|[bitset::operator](../Topic/bitset::operator.md)|[deque::back](../Topic/deque::back.md)|[deque::front](../Topic/deque::front.md)|  
|[deque::operator](../Topic/deque::operator.md)|[list::back](../Topic/list::back.md)|[list::front](../Topic/list::front.md)|[queue::back](../Topic/queue::back.md)|  
|[queue::front](../Topic/queue::front.md)|[vector::operator](../Topic/vector::operator.md)|[vector::back](../Topic/vector::back.md)|[vector::front](../Topic/vector::front.md)|  
  
 Quando `_SECURE_SCL` viene definita come 0:  
  
-   Tutti gli iteratori standard sono non verificati, ovvero possono spostarsi oltre i limiti del contenitore, provocando un comportamento non definito.  
  
-   Se un iteratore di output è un iteratore verificato, il comportamento nelle chiamate alla funzione standard \(ad esempio, `std::copy`\) sarà controllato.  
  
-   Se un iteratore di output è un iteratore non verificato, il comportamento nelle chiamate alla funzione standard, ad esempio, `std::copy`, sarà non controllato.  
  
 Un iteratore verificato fa riferimento a un iteratore che chiamerà `invalid_parameter_handler` se si tenta di superare i limiti del contenitore.  Per ulteriori informazioni su `invalid_parameter_handler`, vedere [Convalida dei parametri](../c-runtime-library/parameter-validation.md).  
  
 [Classe checked\_array\_iterator](../standard-library/checked-array-iterator-class.md) e [Classe unchecked\_array\_iterator](../standard-library/unchecked-array-iterator-class.md) sono gli adattatori degli iteratori che supportano gli iteratori verificati.  
  
## Esempio  
 Quando si esegue la compilazione utilizzando `_SECURE_SCL 1`, viene visualizzato un errore di runtime se si tenta di accedere a un elemento che non rientra nei limiti del contenitore utilizzando l'operatore di indicizzazione di determinate classi.  
  
```cpp  
// checked_iterators_1.cpp  
// cl.exe /Zi /MDd /EHsc /W4  
  
#define _ITERATOR_DEBUG_LEVEL 1  
// implies #define _SECURE_SCL 1  
  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
int main()   
{  
    vector<int> v;  
    v.push_back(67);  
  
    int i = v[0];  
    cout << i << endl;  
  
    i = v[1]; // triggers invalid parameter handler  
};  
  
```  
  
 In questo programma verrà stampato "67" e verrà quindi estratta una finestra di dialogo dell'errore di asserzione contenente informazioni aggiuntive sull'errore.  
  
## Esempio  
 Analogamente, quando si esegue la compilazione utilizzando `_SECURE_SCL 1`, viene visualizzato un errore di runtime se si tenta di accedere a un elemento utilizzando la parte iniziale o finale di determinate classi quando il contenitore è vuoto.  
  
```cpp  
// checked_iterators_2.cpp  
// cl.exe /Zi /MDd /EHsc /W4  
  
#define _ITERATOR_DEBUG_LEVEL 1  
// implies #define _SECURE_SCL 1  
  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
int main()   
{  
    vector<int> v;  
  
    int& i = v.front(); // triggers invalid parameter handler  
};  
  
```  
  
 Il programma consentirà di visualizzare una finestra di dialogo di errore di asserzione contenente informazioni aggiuntive sull'errore.  
  
 I vari scenari relativi ai casi di utilizzo degli iteratori con commenti su ciascuno di essi vengono illustrati nel codice seguente.  
  
```cpp  
// cl.exe /MTd /EHsc /W4  
#include <algorithm>  
#include <array>  
#include <iostream>  
#include <iterator>  
#include <numeric>  
#include <string>  
#include <vector>  
  
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
    vector<int> v(16);  
    iota(v.begin(), v.end(), 0);  
    print("v: ", v);  
  
    // OK: vector::iterator is checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    vector<int> v2(16);  
    transform(v.begin(), v.end(), v2.begin(), [](int n) { return n * 2; });  
    print("v2: ", v2);  
  
    // OK: back_insert_iterator is marked as checked in debug mode  
    // (i.e. an overrun is impossible)  
    vector<int> v3;  
    transform(v.begin(), v.end(), back_inserter(v3), [](int n) { return n * 3; });  
    print("v3: ", v3);  
  
    // OK: array::iterator is checked in debug mode  
    // (i.e. an overrun will trigger a debug assertion)  
    array<int, 16> a4;  
    transform(v.begin(), v.end(), a4.begin(), [](int n) { return n * 4; });  
    print("a4: ", a4);  
  
    // OK: Raw arrays are checked in debug mode  
    // (an overrun will trigger a debug assertion)  
    // NOTE: This applies only when raw arrays are given to STL algorithms!  
    int a5[16];  
    transform(v.begin(), v.end(), a5, [](int n) { return n * 5; });  
    print("a5: ", a5);  
  
    // WARNING C4996: Pointers cannot be checked in debug mode  
    // (an overrun will trigger undefined behavior)  
    int a6[16];  
    int * p6 = a6;  
    transform(v.begin(), v.end(), p6, [](int n) { return n * 6; });  
    print("a6: ", a6);  
  
    // OK: stdext::checked_array_iterator is checked in debug mode  
    // (an overrun will trigger a debug assertion)  
    int a7[16];  
    int * p7 = a7;  
    transform(v.begin(), v.end(), stdext::make_checked_array_iterator(p7, 16), [](int n) { return n * 7; });  
    print("a7: ", a7);  
  
    // WARNING SILENCED: stdext::unchecked_array_iterator is marked as checked in debug mode  
    // (it performs no checking, so an overrun will trigger undefined behavior)  
    int a8[16];  
    int * p8 = a8;  
    transform(v.begin(), v.end(), stdext::make_unchecked_array_iterator(p8), [](int n) { return n * 8; });  
    print("a8: ", a8);  
}  
  
```  
  
## Output  
 La compilazione del codice illustrata nella sezione precedente con `cl.exe /EHsc /W4 /MTd` determinerà il seguente avviso del compilatore, ma verrà eseguita senza errori in un eseguibile:  
  
```  
algorithm(1026) : warning C4996: 'std::_Transform1': Function call with parameters that may be unsafe - this call rel  
ies on the caller to check that the passed values are correct. To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'  
```  
  
 L'esecuzione dell'eseguibile dell'applicazione console produce il seguente output:  
  
```  
v: 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15  
v2: 0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30  
v3: 0 3 6 9 12 15 18 21 24 27 30 33 36 39 42 45  
a4: 0 4 8 12 16 20 24 28 32 36 40 44 48 52 56 60  
a5: 0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75  
a6: 0 6 12 18 24 30 36 42 48 54 60 66 72 78 84 90  
a7: 0 7 14 21 28 35 42 49 56 63 70 77 84 91 98 105  
a8: 0 8 16 24 32 40 48 56 64 72 80 88 96 104 112 120  
```  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)   
 [Supporto degli iteratori di debug](../standard-library/debug-iterator-support.md)