---
title: Struttura pair | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- utility/std::pair
- pair
- std::pair
- std.pair
dev_langs:
- C++
helpviewer_keywords:
- pair class
ms.assetid: 539d3d67-80a2-4170-b347-783495d42109
caps.latest.revision: 20
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
ms.sourcegitcommit: 85c900f2263ae1c1089478badc85388e3b5e8548
ms.openlocfilehash: f9f6574029dd40d0c8c2a2ff2a5f73f4744f5ffe
ms.lasthandoff: 02/24/2017

---
# <a name="pair-structure"></a>Struttura pair
Struct che permette di considerare due oggetti come un singolo oggetto.  
  
## <a name="syntax"></a>Sintassi  
```  
struct pair
{
    typedef T1 first_type;
    typedef T2 second_type;
    T1 first;
    T2 second;
    constexpr pair();
    constexpr pair(
        const T1& Val1,
        const T2& Val2);

    template <class Other1, class Other2>
    constexpr pair(const pair<Other1, Other2>& Right);

    template <class Other1, class Other2>
    constexpr pair(const pair <Other1 Val1, Other2 Val2>&& Right);

    template <class Other1, class Other2>
    constexpr pair(Other1&& Val1, Other2&& Val2);
};
```  
#### <a name="parameters"></a>Parametri  
 `Val1`  
 Valore che inizializza il primo elemento di `pair`.  
  
 `Val2`  
 Valore che inizializza il secondo elemento di `pair`.  
  
 `Right`  
 Coppia i cui valori devono essere usati per inizializzare gli elementi di un'altra coppia.  
  
## <a name="return-value"></a>Valore restituito  
 Il primo costruttore (predefinito) inizializza il primo elemento della coppia sul valore predefinito di tipo **T1** e il secondo elemento sul valore predefinito di tipo **T2**.  
  
 Il secondo costruttore inizializza il primo elemento della coppia su `Val1` e il secondo su *Val2.*  
  
 Il terzo costruttore (modello) inizializza il primo elemento della coppia su `Right`. **first** e il secondo su `Right`. **second**.  
  
 Il quarto costruttore inizializza il primo elemento della coppia su `Val1` e il secondo su *Val2* usando i [Riferimenti Rvalue Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## <a name="remarks"></a>Note  
 Lo struct del modello archivia una coppia di oggetti, rispettivamente di tipo **T1** e **T2**. Il tipo **first_type** è uguale al parametro di modello **T1**, mentre il tipo **second_type** è uguale al parametro di modello **T2**. Sia **T1** che **T2** devono fornire solo un costruttore predefinito, un costruttore ad argomento singolo e un distruttore. Tutti i membri del tipo `pair` sono pubblici, in quanto il tipo è dichiarato come `struct` anziché come **class**. Una coppia viene usata in genere in due modi: come tipo restituito per le funzioni che restituiscono due valori e come elemento per le classi contenitore associative [map](../standard-library/map-class.md) e [multimap](../standard-library/multimap-class.md), entrambe con una chiave e un tipo di valore associati a ciascun elemento. La seconda soddisfa i requisiti relativi ai contenitori associativi di coppie e ha un tipo di valore con formato `pair`< **const**`key_type`, `mapped_type`>.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// utility_pair.cpp  
// compile with: /EHsc  
#include <utility>  
#include <map>  
#include <iomanip>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
  
   // Using the constructor to declare and initialize a pair  
   pair <int, double> p1 ( 10, 1.1e-2 );  
  
   // Compare using the helper function to declare and initialize a pair  
   pair <int, double> p2;  
   p2 = make_pair ( 10, 2.22e-1 );  
  
   // Making a copy of a pair  
   pair <int, double> p3 ( p1 );  
  
   cout.precision ( 3 );  
   cout << "The pair p1 is: ( " << p1.first << ", "   
        << p1.second << " )." << endl;  
   cout << "The pair p2 is: ( " << p2.first << ", "   
        << p2.second << " )." << endl;  
   cout << "The pair p3 is: ( " << p3.first << ", "   
        << p3.second << " )." << endl;  
  
   // Using a pair for a map element  
   map <int, int> m1;  
   map <int, int>::iterator m1_Iter;  
  
   typedef pair <int, int> Map_Int_Pair;  
  
   m1.insert ( Map_Int_Pair ( 1, 10 ) );  
   m1.insert ( Map_Int_Pair ( 2, 20 ) );  
   m1.insert ( Map_Int_Pair ( 3, 30 ) );  
  
   cout << "The element pairs of the map m1 are:";  
   for ( m1_Iter = m1.begin( ); m1_Iter != m1.end( ); m1_Iter++ )  
      cout << " ( " << m1_Iter -> first << ", "  
           << m1_Iter -> second << " )";  
   cout   << "." << endl;  
  
   // Using pair as a return type for a function  
   pair< map<int,int>::iterator, bool > pr1, pr2;  
   pr1 = m1.insert ( Map_Int_Pair ( 4, 40 ) );  
   pr2 = m1.insert ( Map_Int_Pair (1, 10 ) );  
  
   if( pr1.second == true )  
   {  
      cout << "The element (4,40) was inserted successfully in m1."  
           << endl;  
   }  
   else     
   {  
      cout << "The element with a key value of\n"  
           << " ( (pr1.first) -> first ) = " << ( pr1.first ) -> first   
           << " is already in m1,\n so the insertion failed." << endl;  
   }  
  
   if( pr2.second == true )  
   {  
      cout << "The element (1,10) was inserted successfully in m1."  
           << endl;  
   }  
   else     
   {  
      cout << "The element with a key value of\n"  
           << " ( (pr2.first) -> first ) = " << ( pr2.first ) -> first   
           << " is already in m1,\n so the insertion failed." << endl;  
   }  
}  
\* Output:   
The pair p1 is: ( 10, 0.011 ).  
The pair p2 is: ( 10, 0.222 ).  
The pair p3 is: ( 10, 0.011 ).  
The element pairs of the map m1 are: ( 1, 10 ) ( 2, 20 ) ( 3, 30 ).  
The element (4,40) was inserted successfully in m1.  
The element with a key value of  
 ( (pr2.first) -> first ) = 1 is already in m1,  
 so the insertion failed.  
*\  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<utility>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)




