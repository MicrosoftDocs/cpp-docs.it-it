---
title: Utilità (STL/CLR) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-cli
ms.topic: reference
f1_keywords:
- <cliext/utility>
- cliext::pair
- cliext::pair::pair
- cliext::pair::first
- cliext::pair::first_type
- cliext::pair::second
- cliext::pair::second_type
- cliext::pair::swap
- cliext::make_pair
- cliext::pair::operator=
- cliext::pair::operator==
- cliext::pair::operator>=
- cliext::pair::operator>
- cliext::pair::operator!=
- cliext::pair::operator<=
- cliext::pair::operator<
dev_langs:
- C++
helpviewer_keywords:
- <utility> header [STL/CLR]
- utility header [STL/CLR]
- <cliext/utility> header [STL/CLR]
- first member [STL/CLR]
- first_type member [STL/CLR]
- second member [STL/CLR]
- second_type member [STL/CLR]
- swap member [STL/CLR]
- make_pair function [STL/CLR]
- pair class [STL/CLR]
- pair member [STL/CLR]
- operator== member [STL/CLR]
- operator= member [STL/CLR]
- operator>= member [STL/CLR]
- operator> member [STL/CLR]
- operator!= member [STL/CLR]
- operator<= member [STL/CLR]
- operator< member [STL/CLR]
ms.assetid: fb48cb75-d5ef-47ce-b526-bf60dc86c552
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: e1150fb6d3df325fd9d5d9b4180318fa029102c3
ms.sourcegitcommit: bad2441d1930275ff506d44759d283d94cccd1c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/31/2018
ms.locfileid: "39375916"
---
# <a name="utility-stlclr"></a>utility (STL/CLR)
Includere l'intestazione STL/CLR `<cliext/utility>` per definire la classe modello `pair` e diverse funzioni del modello di supporto.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#include <utility>  
```

## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<cliext/utility >  
  
 **Namespace:** cliext  
  
## <a name="declarations"></a>Dichiarazioni  
  
|Classe|Descrizione|  
|-----------|-----------------|  
|[pair (STL/CLR)](#pair)|Eseguire il wrapping di una coppia di elementi.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[operator== (pair) (STL/CLR)](#op_eq)|Confronto uguale coppia.|  
|[operator!= (pair) (STL/CLR)](#op_neq)|Coppia di confronto non uguale.|  
|[operator< (pair) (STL/CLR)](#op_lt)|Coppia di minore di confronto.|  
|[operatore\<= (coppia) (STL/CLR)](#op_lteq)|Associare minore o uguale confronto.|  
|[operator> (pair) (STL/CLR)](#op_gt)|Coppia di confronto maggiore.|  
|[operator>= (pair) (STL/CLR)](#op_gteq)|Confronto uguale o maggiore di coppia.|  
  
|Funzione|Descrizione|  
|--------------|-----------------|  
|[make_pair (STL/CLR)](#make_pair)|Creare una coppia da una coppia di valori.|  

## <a name="members"></a>Membri

##<a name="pair"></a> coppia (STL/CLR)
La classe modello descrive un oggetto che esegue il wrapping di una coppia di valori.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    ref class pair;  
```  
  
#### <a name="parameters"></a>Parametri  
 *Value1*  
 Il tipo del primo valore sottoposto a wrapping.  
  
 *Value2*  
 Il tipo del secondo valore sottoposto a wrapping.  
  
## <a name="members"></a>Membri  
  
|Definizione dei tipi|Descrizione|  
|---------------------|-----------------|  
|[pair::first_type (STL/CLR)](#first_type)|Il tipo del primo valore sottoposto a wrapping.|  
|[pair::second_type (STL/CLR)](#second_type)|Il tipo del secondo valore sottoposto a wrapping.|  
  
|Oggetto membro|Descrizione|  
|-------------------|-----------------|  
|[pair::first (STL/CLR)](#first)|Il primo valore archiviato.|  
|[pair::second (STL/CLR)](#second)|Il secondo valore archiviato.|  
  
|Funzione membro|Descrizione|  
|---------------------|-----------------|  
|[pair::pair (STL/CLR)](#pair_pair)|Costruisce un oggetto della coppia.|  
|[pair::swap (STL/CLR)](#swap)|Scambia il contenuto di due coppie.|  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|[pair::operator= (STL/CLR)](#op_as)|Sostituisce la coppia di valori archiviata.|  
  
## <a name="remarks"></a>Note  
 L'oggetto archivia una coppia di valori. Utilizzare questa classe modello per combinare due valori in un singolo oggetto. Inoltre, l'oggetto `cliext::pair` (descritta di seguito) archivia solo i tipi gestiti; per archiviare una coppia di non gestite è utilizzare tipi `std::pair`, dichiarato in `<utility>`.  


## <a name="first"></a> Pair:: First (STL/CLR)
Il primo valore sottoposto a wrapping.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Value1 first;  
```  
  
### <a name="remarks"></a>Note  
 L'oggetto archivia il primo valore sottoposto a wrapping.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_first.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    cliext::pair<wchar_t, int>::first_type first_val = c1.first;   
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;   
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);   
    return (0);   
    }  
```  
  
```Output  
[x, 3]  
```  

## <a name="first_type"></a> Pair::first_type (STL/CLR)
Il tipo del primo valore sottoposto a wrapping.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef Value1 first_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello *Value1*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_first_type.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    cliext::pair<wchar_t, int>::first_type first_val = c1.first;   
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;   
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
```  

## <a name="op_as"></a> Pair:: operator = (STL/CLR)
Sostituisce la coppia di valori archiviata.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
pair<Value1, Value2>% operator=(pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *right*  
 Coppia da copiare.  
  
### <a name="remarks"></a>Note  
 Le copie di operatore membro *a destra* all'oggetto, quindi restituisce `*this`. Usarlo per sostituire la coppia di valori archiviata una copia della coppia di valori in stored *a destra*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_operator_as.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
// assign to a new pair   
    cliext::pair<wchar_t, int> c2;   
    c2 = c1;   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
[x, 3]  
```  

## <a name="pair_pair"></a> Pair:: Pair (STL/CLR)
Costruisce un oggetto della coppia.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
pair();  
pair(pair<Coll>% right);  
pair(pair<Coll>^ right);  
pair(Value1 val1, Value2 val2);  
```  
  
#### <a name="parameters"></a>Parametri  
 *right*  
 Coppia da archiviare.  
  
 *Val1*  
 Primo valore da archiviare.  
  
 *Val2*  
 Secondo valore da archiviare.  
  
### <a name="remarks"></a>Note  
 Il costruttore:  
  
 `pair();`  
  
 Inizializza la coppia archiviata con i valori predefiniti costruito.  
  
 Il costruttore:  
  
 `pair(pair<Value1, Value2>% right);`  
  
 Inizializza la coppia con stored `right.` [Pair:: First (STL/CLR)](../dotnet/pair-first-stl-clr.md) e `right.` [Pair:: Second (STL/CLR)](../dotnet/pair-second-stl-clr.md).  
  
 `pair(pair<Value1, Value2>^ right);`  
  
 Inizializza la coppia con stored `right->` [Pair:: First (STL/CLR)](../dotnet/pair-first-stl-clr.md) e `right>` [Pair:: Second (STL/CLR)](../dotnet/pair-second-stl-clr.md).  
  
 Il costruttore:  
  
 `pair(Value1 val1, Value2 val2);`  
  
 Inizializza la coppia archiviata con con *val1* e *val2*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_construct.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
// construct an empty container   
    cliext::pair<wchar_t, int> c1;   
    System::Console::WriteLine("[{0}, {1}]",   
        c1.first == L'\0' ? "\\0" : "??", c1.second);   
  
// construct with a pair of values   
    cliext::pair<wchar_t, int> c2(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
// construct by copying another pair   
    cliext::pair<wchar_t, int> c3(c2);   
    System::Console::WriteLine("[{0}, {1}]", c3.first, c3.second);   
  
// construct by copying a pair handle   
    cliext::pair<wchar_t, int> c4(%c3);   
    System::Console::WriteLine("[{0}, {1}]", c4.first, c4.second);   
  
    return (0);   
    }   
```  
  
```Output  
[\0, 0]  
[x, 3]  
[x, 3]  
[x, 3]  
```  

## <a name="second"></a> Pair:: Second (STL/CLR)
Il secondo stato eseguito il wrapping di valore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
Value2 second;  
```  
  
### <a name="remarks"></a>Note  
 L'oggetto archivia il secondo valore sottoposto a wrapping.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_second.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    cliext::pair<wchar_t, int>::first_type first_val = c1.first;   
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;   
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);   
    return (0);   
    }  
```  
  
```Output  
[x, 3]  
```  

## <a name="second_type"></a> Pair::second_type (STL/CLR)
Il tipo del secondo valore sottoposto a wrapping.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
typedef Value2 second_type;  
```  
  
### <a name="remarks"></a>Note  
 Il tipo è un sinonimo del parametro di modello *Value2*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_second_type.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    cliext::pair<wchar_t, int>::first_type first_val = c1.first;   
    cliext::pair<wchar_t, int>::second_type second_val = c1.second;   
    System::Console::WriteLine("[{0}, {1}]", first_val, second_val);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
```    

## <a name="swap"></a> Pair:: swap (STL/CLR)
Scambia il contenuto di due coppie.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
void swap(pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *right*  
 Coppia di cui scambiare il contenuto con.  
  
### <a name="remarks"></a>Note  
 La funzione membro scambia la coppia di valori compresi tra archiviata `*this` e *destro*.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_swap.cpp   
// compile with: /clr   
#include <cliext/adapter>   
#include <cliext/deque>   
  
typedef cliext::collection_adapter<   
    System::Collections::ICollection> Mycoll;   
int main()   
    {   
    cliext::deque<wchar_t> d1;   
    d1.push_back(L'a');   
    d1.push_back(L'b');   
    d1.push_back(L'c');   
    Mycoll c1(%d1);   
  
// display initial contents " a b c"   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// construct another container with repetition of values   
    cliext::deque<wchar_t> d2(5, L'x');   
    Mycoll c2(%d2);   
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
// swap and redisplay   
    c1.swap(c2);   
    for each (wchar_t elem in c1)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
  
    for each (wchar_t elem in c2)   
        System::Console::Write(" {0}", elem);   
    System::Console::WriteLine();   
    return (0);   
    }   
```  
  
```Output  
a b c  
x x x x x  
x x x x x  
a b c  
```  

## <a name="make_pair"></a> make_pair (STL/CLR)
Rendere un `pair` da una coppia di valori.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    pair<Value1, Value2> make_pair(Value1 first, Value2 second);  
```  
  
#### <a name="parameters"></a>Parametri  
 *Value1*  
 Il tipo del primo valore sottoposto a wrapping.  
  
 *Value2*  
 Il tipo del secondo valore sottoposto a wrapping.  
  
 *first*  
 Primo valore per eseguire il wrapping.  
  
 *second*  
 Secondo valore per eseguire il wrapping.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce `pair<Value1, Value2>(first, second)`. Utilizzarlo per creare un `pair<Value1, Value2>` oggetto da una coppia di valori.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_make_pair.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
  
    c1 = cliext::make_pair(L'y', 4);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    return (0);   
    }  
```  
  
```Output  
[x, 3]  
[y, 4]  
```  

## <a name="op_neq"></a> operatore! = (coppia) (STL/CLR)
Coppia di confronto non uguale.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    bool operator!=(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *left*  
 Coppia di sinistra da confrontare.  
  
 *right*  
 Coppia di destra da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(left == right)`. Utilizzarla per testare se *a sinistra* non viene ordinato identico *a destra* quando due coppie vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp
// cliext_pair_operator_ne.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] != [x 3] is {0}",   
        c1 != c1);   
    System::Console::WriteLine("[x 3] != [x 4] is {0}",   
        c1 != c2);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] != [x 3] is False  
[x 3] != [x 4] is True  
```  
  
## <a name="op_lt"></a> operatore&lt; (coppia) (STL/CLR)
Coppia di minore di confronto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    bool operator<(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *left*  
 Coppia di sinistra da confrontare.  
  
 *right*  
 Coppia di destra da confrontare.  
  
### <a name="remarks"></a>Note  
 Restituisce la funzione dell'operatore `left.first <` `right.first || !(right.first <` `left.first &&` `left.second <` `right.second`. Utilizzarla per testare se *a sinistra* è ordinata la prima *a destra* quando due coppie vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_operator_lt.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] < [x 3] is {0}",   
        c1 < c1);   
    System::Console::WriteLine("[x 3] < [x 4] is {0}",   
        c1 < c2);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] < [x 3] is False  
[x 3] < [x 4] is True  
```  

## <a name="op_lteq"></a> operatore&lt;= (coppia) (STL/CLR)
Associare minore o uguale confronto.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    bool operator<=(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *left*  
 Coppia di sinistra da confrontare.  
  
 *right*  
 Coppia di destra da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(right < left)`. Utilizzarla per testare se *a sinistra* non viene ordinato dopo *a destra* quando due coppie vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_operator_le.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] <= [x 3] is {0}",   
        c1 <= c1);   
    System::Console::WriteLine("[x 4] <= [x 3] is {0}",   
        c2 <= c1);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] <= [x 3] is True  
[x 4] <= [x 3] is False  
```  
  
## <a name="op_eq"></a> operatore = = (coppia) (STL/CLR)
Confronto uguale coppia.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    bool operator==(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *left*  
 Coppia di sinistra da confrontare.  
  
 *right*  
 Coppia di destra da confrontare.  
  
### <a name="remarks"></a>Note  
 Restituisce la funzione dell'operatore `left.first ==` `right.first &&` `left.second ==` `right.second`. Utilizzarla per testare se *a sinistra* viene ordinata quella *a destra* quando due coppie vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_operator_eq.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] == [x 3] is {0}",   
        c1 == c1);   
    System::Console::WriteLine("[x 3] == [x 4] is {0}",   
        c1 == c2);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] == [x 3] is True  
[x 3] == [x 4] is False  
```  

## <a name="op_gt"></a> operatore&gt; (coppia) (STL/CLR)
Coppia di confronto maggiore.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    bool operator>(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *left*  
 Coppia di sinistra da confrontare.  
  
 *right*  
 Coppia di destra da confrontare.  
  
### <a name="remarks"></a>Note  
 Restituisce la funzione dell'operatore `right` `<` `left`. Utilizzarla per testare se *a sinistra* viene ordinata dopo *a destra* quando due coppie vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_operator_gt.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] > [x 3] is {0}",   
        c1 > c1);   
    System::Console::WriteLine("[x 4] > [x 3] is {0}",   
        c2 > c1);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] > [x 3] is False  
[x 4] > [x 3] is True  
```  

## <a name="op_gteq"></a> operatore&gt;= (coppia) (STL/CLR)
Confronto uguale o maggiore di coppia.  
  
### <a name="syntax"></a>Sintassi  
  
```cpp  
template<typename Value1,  
    typename Value2>  
    bool operator>=(pair<Value1, Value2>% left,  
        pair<Value1, Value2>% right);  
```  
  
#### <a name="parameters"></a>Parametri  
 *left*  
 Coppia di sinistra da confrontare.  
  
 *right*  
 Coppia di destra da confrontare.  
  
### <a name="remarks"></a>Note  
 La funzione di operatore restituisce `!(left < right)`. Utilizzarla per testare se *a sinistra* non viene ordinato prima *a destra* quando due coppie vengono confrontato elemento per elemento.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// cliext_pair_operator_ge.cpp   
// compile with: /clr   
#include <cliext/utility>   
  
int main()   
    {   
    cliext::pair<wchar_t, int> c1(L'x', 3);   
    System::Console::WriteLine("[{0}, {1}]", c1.first, c1.second);   
    cliext::pair<wchar_t, int> c2(L'x', 4);   
    System::Console::WriteLine("[{0}, {1}]", c2.first, c2.second);   
  
    System::Console::WriteLine("[x 3] >= [x 3] is {0}",   
        c1 >= c1);   
    System::Console::WriteLine("[x 3] >= [x 4] is {0}",   
        c1 >= c2);   
    return (0);   
    }   
```  
  
```Output  
[x, 3]  
[x, 4]  
[x 3] >= [x 3] is True  
[x 3] >= [x 4] is False  
``` 