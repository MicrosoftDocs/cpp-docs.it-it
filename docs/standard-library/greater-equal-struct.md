---
title: Struct greater_equal | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: xfunctional/std::greater_equal
dev_langs: C++
helpviewer_keywords:
- greater_equal struct
- greater_equal function
ms.assetid: a8ba911b-7af8-4653-b972-d8618f4df7d5
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e6fbffd75fedd267f8034e919bedefd79a63838e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="greaterequal-struct"></a>Struct greater_equal
Predicato binario che esegue l'operazione di maggiore o uguale a (`operator>=`) sui relativi argomenti.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Type = void>
struct greater_equal : public binary_function <Type, Type, bool>  
{
    bool operator()(const Type& Left, const Type& Right) const;
};

// specialized transparent functor for operator>=
template <>
struct greater_equal<void>  
{
  template <class T, class U>
  auto operator()(T&& Left, U&& Right) const`
    -> decltype(std::forward<T>(Left)>= std::forward<U>(Right));
 };
```  
  
#### <a name="parameters"></a>Parametri  
 `Type`, `T`, `U`  
 Qualsiasi tipo che supporta un `operator>=` che accetta gli operandi dei tipi specificati o dedotti.  
  
 `Left`  
 Operando sinistro dell'operazione di maggiore o uguale a. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `T`.  
  
 `Right`  
 Operando destro dell'operazione di maggiore o uguale a. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `U`.  
  
## <a name="return-value"></a>Valore restituito  
 Risultato di `Left >= Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator>=`.  
  
## <a name="remarks"></a>Note  
 Il predicato binario `greater_equal`< `Type`> fornisce un rigido ordinamento debole di un set di valori di elemento di tipo `Type` in classi di equivalenza esclusivamente se il tipo soddisfa i requisiti matematici standard per questo tipo di ordinamento. Le specializzazioni per qualsiasi tipo di puntatore producono un ordinamento totale degli elementi, in quanto tutti gli elementi di valori distinti vengono ordinati l'uno rispetto all'altro.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// functional_greater_equal.cpp  
// compile with: /EHsc  
#include <vector>  
#include <algorithm>  
#include <functional>  
#include <cstdlib>  
#include <iostream>  
  
int main( )  
{  
   using namespace std;  
   vector <int> v1;  
   vector <int>::iterator Iter1;  
  
   int i;  
   v1.push_back( 6262 );  
   v1.push_back( 6262 );  
   for ( i = 0 ; i < 5 ; i++ )  
   {  
      v1.push_back( rand( ) );  
   }  
  
   cout << "Original vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in ascending order,  
   // use default binary predicate less<int>( )  
   sort( v1.begin( ), v1.end( ) );  
   cout << "Sorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
  
   // To sort in descending order,   
   // specify binary predicate greater_equal<int>( )  
   sort( v1.begin( ), v1.end( ), greater_equal<int>( ) );  
   cout << "Resorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
}  
```  
  
## <a name="output"></a>Output  
  
```
Original vector v1 = (6262 6262 41 18467 6334 26500 19169)
Sorted vector v1 = (41 6262 6262 6334 18467 19169 26500)
Resorted vector v1 = (26500 19169 18467 6334 6262 6262 41)
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<functional>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)



