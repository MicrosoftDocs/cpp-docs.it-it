---
title: Struct less | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- less
- xfunctional/std::less
dev_langs:
- C++
helpviewer_keywords:
- less struct
- less function
ms.assetid: 39349da3-11cd-4774-b2cc-b46af5aae5d7
caps.latest.revision: 24
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: ff9530d08066cf0cf9b9421ac8b1b72d1a229bbe
ms.lasthandoff: 02/24/2017

---
# <a name="less-struct"></a>Struct less
Predicato binario che esegue l'operazione di minore di (`operator<`) sui relativi argomenti.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Type = void>
struct less : public binary_function <Type, Type, bool>  
{
    bool operator()(const Type& Left, const Type& Right) const;
 };

// specialized transparent functor for operator<
template <>
struct less<void>  
{
  template <class T, class U>
  auto operator()(T&& Left, U&& Right) const`
    -> decltype(std::forward<T>(Left) <std::forward<U>(Right));
 };
```  
  
#### <a name="parameters"></a>Parametri  
 `Type`, `T`, `U`  
 Qualsiasi tipo che supporta un `operator<` che accetta gli operandi dei tipi specificati o dedotti.  
  
 `Left`  
 Operando sinistro dell'operazione di minore di. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `T`.  
  
 `Right`  
 Operando destro dell'operazione di minore di. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `U`.  
  
## <a name="return-value"></a>Valore restituito  
 Risultato di `Left``<``Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator<`.  
  
## <a name="remarks"></a>Note  
 Il predicato binario `less`< `Type`> fornisce un rigido ordinamento debole di un set di valori di elemento di tipo `Type` in classi di equivalenza esclusivamente se il tipo soddisfa i requisiti matematici standard per questo tipo di ordinamento. Le specializzazioni per qualsiasi tipo di puntatore producono un ordinamento totale degli elementi, in quanto tutti gli elementi di valori distinti vengono ordinati l'uno rispetto all'altro.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// functional_less.cpp  
// compile with: /EHsc  
#include <vector>  
#include <algorithm>  
#include <functional>  
#include <iostream>  
  
struct MyStruct {  
   MyStruct(int i) : m_i(i){}  
  
   bool operator < (const MyStruct & rhs) const {  
      return m_i < rhs.m_i;  
   }     
  
   int m_i;  
};  
  
int main() {  
   using namespace std;  
   vector <MyStruct> v1;  
   vector <MyStruct>::iterator Iter1;  
   vector <MyStruct>::reverse_iterator rIter1;  
  
   int i;  
   for ( i = 0 ; i < 7 ; i++ )       
       v1.push_back( MyStruct(rand()));  
  
   cout << "Original vector v1 = ( " ;  
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )   
cout << Iter1->m_i << " ";  
   cout << ")" << endl;  
  
   // To sort in ascending order,  
   sort( v1.begin( ), v1.end( ), less<MyStruct>());  
  
   cout << "Sorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin() ; Iter1 != v1.end() ; Iter1++ )   
cout << Iter1->m_i << " ";  
   cout << ")" << endl;  
 }  
```  
  
## <a name="output"></a>Output  
  
```
Original vector v1 = (41 18467 6334 26500 19169 15724 11478)
Sorted vector v1 = (41 6334 11478 15724 18467 19169 26500)
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<functional>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)




