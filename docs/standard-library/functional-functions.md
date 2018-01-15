---
title: Funzioni &lt;functional&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- functional/std::bind
- xfunctional/std::bind1st
- xfunctional/std::bind2nd
- xfunctional/std::bit_and
- xfunctional/std::bit_not
- xfunctional/std::bit_or
- xfunctional/std::bit_xor
- functional/std::cref
- type_traits/std::cref
- xfunctional/std::mem_fn
- xfunctional/std::mem_fun_ref
- xfunctional/std::not1
- xfunctional/std::not2
- xfunctional/std::ptr_fun
- functional/std::ref
- functional/std::swap
dev_langs: C++
helpviewer_keywords:
- std::bind [C++]
- std::bind1st
- std::bind2nd
- std::bit_and [C++]
- std::bit_not [C++]
- std::bit_or [C++]
- std::bit_xor [C++]
- std::cref [C++]
ms.assetid: c34d0b45-50a7-447a-9368-2210d06339a4
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cce36b764002232f89c5cbcf09e7a6a8e8a8107f
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltfunctionalgt-functions"></a>Funzioni &lt;functional&gt;
||||  
|-|-|-|  
|[bind](#bind)|[bind1st](#bind1st)|[bind2nd](#bind2nd)|  
|[bit_and](#bit_and)|[bit_not](#bit_not)|[bit_or](#bit_or)|  
|[bit_xor](#bit_xor)|[cref](#cref)|[mem_fn](#mem_fn)|  
|[mem_fun](#mem_fun)|[mem_fun_ref](#mem_fun_ref)|[not1](#not1)|  
|[not2](#not2)|[ptr_fun](#ptr_fun)|[ref](#ref)|  
|[swap](#swap)|  
  
##  <a name="bind"></a>  bind  
 Associa gli argomenti a un oggetto richiamabile.  
  
```  
template <class Fty, class T1, class T2, ..., class TN>  
unspecified bind(Fty fn, T1 t1, T2 t2, ..., TN tN);

template <class Ret, class Fty, class T1, class T2, ..., class TN>  
unspecified bind(Fty fn, T1 t1, T2 t2, ..., TN tN);
```  
  
### <a name="parameters"></a>Parametri  
 `Fty`  
 Tipo di oggetto da chiamare.  
  
 `TN`  
 Tipo dell'ennesimo argomento di chiamata.  
  
 `fn`  
 Oggetto da chiamare.  
  
 `tN`  
 Ennesimo argomento di chiamata.  
  
### <a name="remarks"></a>Note  
 I tipi `Fty, T1, T2, ..., TN` devono essere costruibili mediante copia e `INVOKE(fn, t1, ..., tN)` deve essere un'espressione valida per alcuni valori `w1, w2, ..., wN`.  
  
 La prima funzione modello restituisce un wrapper di chiamata di inoltro `g` con un tipo di risultato debole. L'effetto di `g(u1, u2, ..., uM)` è `INVOKE(f, v1, v2, ..., vN, ` [result_of](../standard-library/result-of-class.md)`<Fty cv (V1, V2, ..., VN)>::type)`, dove `cv` è i qualificatori cv di `g` e i valori e tipi di argomenti associati `v1, v2, ..., vN` vengono determinate come specificati di seguito. È possibile usarla per associare argomenti a un oggetto chiamabile in modo da avere un oggetto chiamabile con un elenco di argomenti personalizzato.  
  
 La seconda funzione modello restituisce un wrapper di chiamata di inoltro `g` con un tipo nidificato `result_type` sinonimo di `Ret`. L'effetto di `g(u1, u2, ..., uM)` è `INVOKE(f, v1, v2, ..., vN, Ret)`, dove `cv` corrisponde ai qualificatori CV di `g` e i valori e i tipi degli argomenti associati `v1, v2, ..., vN` vengono determinati come specificato di seguito. È possibile usarla per associare argomenti a un oggetto chiamabile in modo da avere un oggetto chiamabile con un elenco di argomenti personalizzato e con un tipo restituito specificato.  
  
 I valori degli argomenti associati `v1, v2, ..., vN` e i rispettivi tipi corrispondenti `V1, V2, ..., VN` dipendono dal tipo dell'argomento corrispondente `ti` di tipo `Ti` nella chiamata a `bind` e dai qualificatori CV `cv` del wrapper di chiamata `g` come segue:  
  
 se `ti` è di tipo `reference_wrapper<T>`, l'argomento `vi` è `ti.get()` e il relativo tipo `Vi` è `T&`;  
  
 se il valore di `std::is_bind_expression<Ti>::value` è `true`, l'argomento `vi` è `ti(u1, u2, ..., uM)` e il relativo tipo `Vi` è `result_of<Ti` `cv` `(U1&, U2&, ..., UN&>::type`;  
  
 se il valore `j` di `std::is_placeholder<Ti>::value` è diverso da zero, l'argomento `vi` è `uj` e il relativo tipo `Vi` è `Uj&`;  
  
 in caso contrario, l'argomento `vi` è `ti` e il relativo tipo `Vi` è `Ti` `cv` `&`.  
  
 Ad esempio, data una funzione `f(int, int)`, l'espressione `bind(f, _1, 0)` restituisce un wrapper di chiamata di inoltro `cw` in modo che `cw(x)` chiami `f(x, 0)`. L'espressione `bind(f, 0, _1)` restituisce un wrapper di chiamata di inoltro `cw` in modo che `cw(x)` chiami `f(0, x)`.  
  
 Il numero degli argomenti presenti in una chiamata a `bind` in aggiunta all'argomento `fn` deve essere uguale al numero degli argomenti che è possibile passare all'oggetto chiamabile `fn`. Di conseguenza, `bind(cos, 1.0)` è corretto, mentre `bind(cos)` e `bind(cos, _1, 0.0)` sono entrambi errati.  
  
 Il numero degli argomenti presenti nella chiamata di funzione al wrapper di chiamata restituito da `bind` deve essere almeno uguale al valore con numero più alto di `is_placeholder<PH>::value` per tutti gli argomenti segnaposto nella chiamata a `bind`. Di conseguenza, `bind(cos, _2)(0.0, 1.0)` è corretto (e restituisce `cos(1.0)`), mentre `bind(cos, _2)(0.0)` è errato.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__functional__bind.cpp   
// compile with: /EHsc   
#include <functional>   
#include <algorithm>   
#include <iostream>   
  
using namespace std::placeholders;   
  
void square(double x)
{
    std::cout << x << "^2 == " << x * x << std::endl;
}

void product(double x, double y)
{
    std::cout << x << "*" << y << " == " << x * y << std::endl;
}

int main()
{
    double arg[] = { 1, 2, 3 };

    std::for_each(&arg[0], arg + 3, square);
    std::cout << std::endl;

    std::for_each(&arg[0], arg + 3, std::bind(product, _1, 2));
    std::cout << std::endl;

    std::for_each(&arg[0], arg + 3, std::bind(square, _1));

    return (0);
}

```  
  
```Output  
1^2 == 1  
2^2 == 4  
3^2 == 9  
  
1*2 == 2  
2*2 == 4  
3*2 == 6  
  
1^2 == 1  
2^2 == 4  
3^2 == 9  
```  
  
##  <a name="bind1st"></a>  bind1st  
 Funzione di modello helper che crea un adattatore per convertire un oggetto funzione binaria in un oggetto funzione unaria associando il primo argomento della funzione binaria a un valore specificato.  
  
```  
template <class Operation, class Type>  
binder1st <Operation> bind1st (const Operation& func, const Type& left);
```  
  
### <a name="parameters"></a>Parametri  
 `func`  
 Oggetto funzione binaria da convertire in un oggetto funzione unaria.  
  
 `left`  
 Valore a cui deve essere associato il primo argomento dell'oggetto funzione binaria.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto funzione unaria risultante dalla associando il primo argomento dell'oggetto funzione binaria al valore `left`.  
  
### <a name="remarks"></a>Note  
 I binder di funzione sono un tipo di adattatore di funzione e restituiscono oggetti funzione. Pertanto, possono essere usati in determinati tipi di composizione di funzione per costruire espressioni più complicate e potenti.  
  
 Se `func` è un oggetto di tipo `Operation` e `c` è una costante, `bind1st` ( `func`, `c`) equivale al costruttore di classe [binder1st](../standard-library/binder1st-class.md) `binder1st`< `Operation`> ( `func`, `c`) ed è più pratico.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// functional_bind1st.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
// Creation of a user-defined function object  
// that inherits from the unary_function base class  
class greaterthan5: unary_function<int, bool>  
{  
public:  
    result_type operator()(argument_type i)  
    {  
        return (result_type)(i > 5);  
    }  
};  
  
int main()  
{  
    vector<int> v1;  
    vector<int>::iterator Iter;  
  
    int i;  
    for (i = 0; i <= 5; i++)  
    {  
        v1.push_back(5 * i);  
    }  
  
    cout << "The vector v1 = ( " ;  
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)  
        cout << *Iter << " ";  
    cout << ")" << endl;  
  
    // Count the number of integers > 10 in the vector  
    vector<int>::iterator::difference_type result1a;  
    result1a = count_if(v1.begin(), v1.end(), bind1st(less<int>(), 10));  
    cout << "The number of elements in v1 greater than 10 is: "  
         << result1a << "." << endl;  
  
    // Compare: counting the number of integers > 5 in the vector  
    // with a user defined function object  
    vector<int>::iterator::difference_type result1b;  
    result1b = count_if(v1.begin(), v1.end(), greaterthan5());  
    cout << "The number of elements in v1 greater than 5 is: "  
         << result1b << "." << endl;  
  
    // Count the number of integers < 10 in the vector  
    vector<int>::iterator::difference_type result2;  
    result2 = count_if(v1.begin(), v1.end(), bind2nd(less<int>(), 10));  
    cout << "The number of elements in v1 less than 10 is: "  
         << result2 << "." << endl;  
}  
```  
  
```Output  
The vector v1 = ( 0 5 10 15 20 25 )  
The number of elements in v1 greater than 10 is: 3.  
The number of elements in v1 greater than 5 is: 4.  
The number of elements in v1 less than 10 is: 2.  
```  
  
##  <a name="bind2nd"></a>  bind2nd  
 Funzione di modello helper che crea un adattatore per convertire un oggetto funzione binaria in un oggetto funzione unaria associando il secondo argomento della funzione binaria a un valore specificato.  
  
```  
template <class Operation, class Type>  
binder2nd <Operation> bind2nd(const Operation& func, const Type& right);
```  
  
### <a name="parameters"></a>Parametri  
 `func`  
 Oggetto funzione binaria da convertire in un oggetto funzione unaria.  
  
 `right`  
 Valore a cui deve essere associato il secondo argomento dell'oggetto funzione binaria.  
  
### <a name="return-value"></a>Valore restituito  
 L'oggetto funzione unaria risultante dalla associando il secondo argomento dell'oggetto funzione binaria al valore `right`.  
  
### <a name="remarks"></a>Note  
 I binder di funzione sono un tipo di adattatore di funzione e restituiscono oggetti funzione. Pertanto, possono essere usati in determinati tipi di composizione di funzione per costruire espressioni più complicate e potenti.  
  
 Se `func` è un oggetto di tipo **Operation** e `c` è una costante, `bind2nd` ( `func`, `c` ) equivale al costruttore di classe [binder2nd](../standard-library/binder2nd-class.md) **binder2nd\<Operation>** ( `func`, `c` ) ed è più pratico.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// functional_bind2nd.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
// Creation of a user-defined function object  
// that inherits from the unary_function base class  
class greaterthan15: unary_function<int, bool>  
{  
public:  
    result_type operator()(argument_type i)  
    {  
        return (result_type)(i > 15);  
    }  
};  
  
int main()  
{  
    vector<int> v1;  
    vector<int>::iterator Iter;  
  
    int i;  
    for (i = 0; i <= 5; i++)  
    {  
        v1.push_back(5 * i);  
    }  
  
    cout << "The vector v1 = ( ";  
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)  
        cout << *Iter << " ";  
    cout << ")" << endl;  
  
    // Count the number of integers > 10 in the vector  
    vector<int>::iterator::difference_type result1a;  
    result1a = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 10));  
    cout << "The number of elements in v1 greater than 10 is: "  
         << result1a << "." << endl;  
  
    // Compare counting the number of integers > 15 in the vector  
    // with a user-defined function object  
    vector<int>::iterator::difference_type result1b;  
    result1b = count_if(v1.begin(), v1.end(), greaterthan15());  
    cout << "The number of elements in v1 greater than 15 is: "  
         << result1b << "." << endl;  
  
    // Count the number of integers < 10 in the vector  
    vector<int>::iterator::difference_type result2;  
    result2 = count_if(v1.begin(), v1.end(), bind1st(greater<int>(), 10));  
    cout << "The number of elements in v1 less than 10 is: "  
         << result2 << "." << endl;  
}  
```  
  
```Output  
The vector v1 = ( 0 5 10 15 20 25 )  
The number of elements in v1 greater than 10 is: 3.  
The number of elements in v1 greater than 15 is: 2.  
The number of elements in v1 less than 10 is: 2.  
```  
  
##  <a name="bit_and"></a>  bit_and  
 Oggetto funzione predefinito che esegue l'operazione AND bit per bit (`operator&` binario) sui relativi argomenti.  
  
```  
template <class Type = void>  
struct bit_and : public binary_function<Type, Type, Type> {  
    Type operator()(
    const Type& Left,   
    const Type& Right) const; 
 };  
 
// specialized transparent functor for operator& 
template <>
struct bit_and<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const  ->
        decltype(std::forward<T>(Left) & std::forward<U>(Right));
};
```  
  
### <a name="parameters"></a>Parametri  
 `Type`, `T`, `U`  
 Qualsiasi tipo che supporta un `operator&` che accetta gli operandi dei tipi specificati o dedotti.  
  
 `Left`  
 Operando sinistro dell'operazione AND bit per bit. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `T`.  
  
 `Right`  
 Operando destro dell'operazione AND bit per bit. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `U`.  
  
### <a name="return-value"></a>Valore restituito  
 Risultato di `Left & Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator&`.  
  
### <a name="remarks"></a>Note  
 Il funtore `bit_and` è limitato ai tipi integrali per i tipi di dati di base o ai tipi definiti dall'utente che implementano un oggetto `operator&` binario.  
  
##  <a name="bit_not"></a>  bit_not  
 Oggetto funzione predefinito che esegue l'operazione di complemento (NOT) bit per bit (`operator~` unario) sul relativo argomento.  
  
```  
template <class Type = void>  
struct bit_not : public unary_function<Type, Type>   
 {  
    Type operator()(const Type& Right) const; 
 };  
 
// specialized transparent functor for operator~  
template <>  
struct bit_not<void>   
 {  
    template <class Type>  
    auto operator()(Type&& Right) const  ->  decltype(~std::forward<Type>(Right));
 };  
```  
  
### <a name="parameters"></a>Parametri  
 `Type`  
 Tipo che supporta un oggetto `operator~` unario.  
  
 `Right`  
 Operando dell'operazione di complemento bit per bit. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue l'inoltro perfetto di un argomento di riferimento lvalue o rvalue del tipo dedotto `Type`.  
  
### <a name="return-value"></a>Valore restituito  
 Risultato di `~ Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator~`.  
  
### <a name="remarks"></a>Note  
 Il funtore `bit_not` è limitato ai tipi integrali per i tipi di dati di base o ai tipi definiti dall'utente che implementano un oggetto `operator~` binario.  
  
##  <a name="bit_or"></a>  bit_or  
 Oggetto funzione predefinito che esegue l'operazione OR bit per bit (`operator|`) sui relativi argomenti.  
  
```  
template <class Type = void>  
struct bit_or : public binary_function<Type, Type, Type> {  
    Type operator()(
    const Type& Left,   
    const Type& Right) const; 
 };  
 
// specialized transparent functor for operator|  
template <>
struct bit_or<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const
        ->  decltype(std::forward<T>(Left) | std::forward<U>(Right));
};
```  
  
### <a name="parameters"></a>Parametri  
 `Type`, `T`, `U`  
 Qualsiasi tipo che supporta un `operator|` che accetta gli operandi dei tipi specificati o dedotti.  
  
 `Left`  
 Operando sinistro dell'operazione OR bit per bit. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `T`.  
  
 `Right`  
 Operando destro dell'operazione OR bit per bit. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `U`.  
  
### <a name="return-value"></a>Valore restituito  
 Risultato di `Left | Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator|`.  
  
### <a name="remarks"></a>Note  
 Il funtore `bit_or` è limitato ai tipi integrali per i tipi di dati di base o ai tipi definiti dall'utente che implementano `operator|`.  
  
##  <a name="bit_xor"></a>  bit_xor  
 Oggetto funzione predefinito che esegue l'operazione XOR bit per bit (`operator^` binario) sui relativi argomenti.  
  
```  
template <class Type = void>  
struct bit_xor : public binary_function<Type, Type, Type> {  
    Type operator()(
    const Type& Left,   
    const Type& Right) const; 
 };  
 
// specialized transparent functor for operator^  
template <>
struct bit_xor<void>
{
    template <class T, class U>
    auto operator()(T&& Left, U&& Right) const
        -> decltype(std::forward<T>(Left) ^ std::forward<U>(Right));
};
```  
  
### <a name="parameters"></a>Parametri  
 `Type`, `T`, `U`  
 Qualsiasi tipo che supporta un `operator^` che accetta gli operandi dei tipi specificati o dedotti.  
  
 `Left`  
 Operando sinistro dell'operazione XOR bit per bit. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `T`.  
  
 `Right`  
 Operando destro dell'operazione XOR bit per bit. Il modello non specializzato accetta un argomento di riferimento lvalue di tipo `Type`. Il modello specializzato esegue un inoltro perfetto degli argomenti di riferimento lvalue e rvalue del tipo dedotto `U`.  
  
### <a name="return-value"></a>Valore restituito  
 Risultato di `Left ^ Right`. Il modello specializzato esegue un inoltro perfetto del risultato, con il tipo restituito da `operator^`.  
  
### <a name="remarks"></a>Note  
 Il funtore `bit_xor` è limitato ai tipi integrali per i tipi di dati di base o ai tipi definiti dall'utente che implementano un oggetto `operator^` binario.  
  
##  <a name="cref"></a>  cref  
 Costruisce un oggetto `reference_wrapper` di tipo const da un argomento.  
  
```  
template <class Ty>  
reference_wrapper<const Ty> cref(const Ty& arg);

template <class Ty>  
reference_wrapper<const Ty> cref(const reference_wrapper<Ty>& arg);
```  
  
### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo di argomento di cui eseguire il wrapping.  
  
 `arg`  
 Argomento di cui eseguire il wrapping.  
  
### <a name="remarks"></a>Note  
 La prima funzione restituisce `reference_wrapper<const Ty>(arg.get())`. Usarla per eseguire il wrapping di un riferimento const. La seconda funzione restituisce `reference_wrapper<const Ty>(arg)`. Usarla per eseguire nuovamente il wrapping di un riferimento già sottoposto a wrapping come riferimento const.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__functional__cref.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    int i = 1;   
  
    std::cout << "i = " << i << std::endl;   
    std::cout << "cref(i) = " << std::cref(i) << std::endl;   
    std::cout << "cref(neg)(i) = "   
        << std::cref(&neg)(i) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
i = 1  
cref(i) = 1  
cref(neg)(i) = -1  
```  
  
##  <a name="mem_fn"></a>  mem_fn  
 Genera un wrapper di chiamata semplice.  
  
```  
template <class Ret, class Ty>  
unspecified mem_fn(Ret Ty::*pm);
```  
  
### <a name="parameters"></a>Parametri  
 `Ret`  
 Tipo restituito della funzione di cui è stato eseguito il wrapping.  
  
 `Ty`  
 Tipo di puntatore a funzione membro.  
  
### <a name="remarks"></a>Note  
 La funzione modello restituisce un wrapper di chiamata semplice `cw`, con un tipo di risultato debole, in modo che l'espressione `cw(t, a2, ..., aN)` equivalga a `INVOKE(pm, t, a2, ..., aN)`. Non genera eccezioni.  
  
 Il wrapper di chiamata restituito deriva da `std::unary_function<cv Ty*, Ret>` (definendo il tipo nidificato `result_type` come sinonimo di `Ret` e il tipo nidificato `argument_type` come sinonimo di `cv Ty*`) solo se il tipo `Ty` è un puntatore alla funzione membro con qualificatore CV `cv` che non accetta argomenti.  
  
 Il wrapper di chiamata restituito deriva da `std::binary_function<cv Ty*, T2, Ret>` (definendo il tipo nidificato `result_type` come sinonimo di `Ret`, il tipo nidificato `first argument_type` come sinonimo di `cv Ty*` e il tipo nidificato `second argument_type` come sinonimo di `T2`) solo se il tipo `Ty` è un puntatore alla funzione membro con qualificatore CV `cv` che accetta un argomento, di tipo `T2`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__functional__mem_fn.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
class Funs   
    {   
public:   
    void square(double x)   
        {   
        std::cout << x << "^2 == " << x * x << std::endl;   
        }   
  
    void product(double x, double y)   
        {   
        std::cout << x << "*" << y << " == " << x * y << std::endl;   
        }   
    };   
  
int main()   
    {   
    Funs funs;   
  
    std::mem_fn(&Funs::square)(funs, 3.0);   
    std::mem_fn(&Funs::product)(funs, 3.0, 2.0);   
  
    return (0);   
    }  
  
```  
  
```Output  
3^2 == 9  
3*2 == 6  
```  
  
##  <a name="mem_fun"></a>  mem_fun  
 Funzioni di modello helper utilizzate per costruire gli adattatori dell'oggetto funzione per funzioni membro una volta inizializzate con gli argomenti di puntatore.  
  
```  
template <class Result, class Type>  
mem_fun_t<Result, Type> mem_fun (Result(Type::* pmem)());

template <class Result, class Type, class Arg>  
mem_fun1_t<Result, Type, Arg> mem_fun(Result (Type::* pmem)(Arg));

template <class Result, class Type>  
const_mem_fun_t<Result, Type> mem_fun(Result (Type::* pmem)() const);

template <class Result, class Type, class Arg>  
const_mem_fun1_t<Result, Type, Arg> mem_fun(Result (Type::* pmem)(Arg) const);
```  
  
### <a name="parameters"></a>Parametri  
 `pmem`  
 Puntatore alla funzione membro della classe **Type** da convertire in un oggetto funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto funzione **const** o **non_const** di tipo `mem_fun_t` o `mem_fun1_t`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// functional_mem_fun.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
class StoreVals     
{  
    int val;  
public:  
    StoreVals() { val = 0; }  
    StoreVals(int j) { val = j; }  
  
    bool display() { cout << val << " "; return true; }  
    int squareval() { val *= val; return val; }  
    int lessconst(int k) {val -= k; return val; }  
};  
  
int main( )  
{  
    vector<StoreVals *> v1;  
  
    StoreVals sv1(5);  
    v1.push_back(&sv1);  
    StoreVals sv2(10);  
    v1.push_back(&sv2);  
    StoreVals sv3(15);  
    v1.push_back(&sv3);  
    StoreVals sv4(20);  
    v1.push_back(&sv4);  
    StoreVals sv5(25);  
    v1.push_back(&sv5);  
  
    cout << "The original values stored are: " ;  
    for_each(v1.begin(), v1.end(), mem_fun<bool, StoreVals>(&StoreVals::display));  
    cout << endl;  
  
    // Use of mem_fun calling member function through a pointer  
    // square each value in the vector using squareval ()  
    for_each(v1.begin(), v1.end(), mem_fun<int, StoreVals>(&StoreVals::squareval));     
    cout << "The squared values are: " ;  
    for_each(v1.begin(), v1.end(), mem_fun<bool, StoreVals>(&StoreVals::display));  
    cout << endl;  
  
    // Use of mem_fun1 calling member function through a pointer  
    // subtract 5 from each value in the vector using lessconst ()  
    for_each(v1.begin(), v1.end(),   
        bind2nd (mem_fun1<int, StoreVals,int>(&StoreVals::lessconst), 5));     
    cout << "The squared values less 5 are: " ;  
    for_each(v1.begin(), v1.end(), mem_fun<bool, StoreVals>(&StoreVals::display));  
    cout << endl;  
}  
```  
  
##  <a name="mem_fun_ref"></a>  mem_fun_ref  
 Funzioni modello helper usate per costruire gli adattatori dell'oggetto funzione per funzioni membro se inizializzate mediante argomenti di riferimento.  
  
```  
template <class Result, class Type>  
mem_fun_ref_t<Result, Type> mem_fun_ref(Result (Type::* pmem)());

template <class Result, class Type, class Arg>  
mem_fun1_ref_t<Result, Type, Arg> mem_fun_ref(Result (Type::* pmem)(Arg));

template <class Result, class Type>  
const_mem_fun_ref_t<Result, Type> mem_fun_ref(Result Type::* pmem)() const);

template <class Result, class Type, class Arg>  
const_mem_fun1_ref_t<Result, Type, Arg> mem_fun_ref(Result (T::* pmem)(Arg) const);
```  
  
### <a name="parameters"></a>Parametri  
 `pmem`  
 Puntatore alla funzione membro di classe `Type` da convertire in un oggetto funzione.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto funzione `const` o `non_const` di tipo `mem_fun_ref_t` o `mem_fun1_ref_t`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// functional_mem_fun_ref.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
class NumVals  
   {  
   int val;  
   public:  
   NumVals ( ) { val = 0; }  
   NumVals ( int j ) { val = j; }  
  
   bool display ( ) { cout << val << " "; return true; }  
   bool isEven ( ) { return ( bool )  !( val %2 ); }  
   bool isPrime( )  
   {  
      if (val < 2) { return true; }  
      for (int i = 2; i <= val / i; ++i)  
      {  
         if (val % i == 0) { return false; }  
      }  
      return true;  
   }  
};  
  
int main( )  
{  
   vector <NumVals> v1 ( 13 ), v2 ( 13 );  
   vector <NumVals>::iterator v1_Iter, v2_Iter;  
   int i, k;  
  
   for ( i = 0; i < 13; i++ ) v1 [ i ] = NumVals ( i+1 );  
   for ( k = 0; k < 13; k++ ) v2 [ k ] = NumVals ( k+1 );  
  
   cout << "The original values stored in v1 are: " ;  
   for_each( v1.begin( ), v1.end( ),   
   mem_fun_ref ( &NumVals::display ) );  
   cout << endl;  
  
   // Use of mem_fun_ref calling member function through a reference  
   // remove the primes in the vector using isPrime ( )  
   v1_Iter = remove_if ( v1.begin( ),  v1.end( ),   
      mem_fun_ref ( &NumVals::isPrime ) );     
   cout << "With the primes removed, the remaining values in v1 are: " ;  
   for_each( v1.begin( ), v1_Iter,   
   mem_fun_ref ( &NumVals::display ) );  
   cout << endl;  
  
   cout << "The original values stored in v2 are: " ;  
   for_each( v2.begin( ), v2.end( ),   
   mem_fun_ref ( &NumVals::display ) );  
   cout << endl;  
  
   // Use of mem_fun_ref calling member function through a reference  
   // remove the even numbers in the vector v2 using isEven ( )  
   v2_Iter = remove_if ( v2.begin( ),  v2.end( ),   
      mem_fun_ref ( &NumVals::isEven ) );     
   cout << "With the even numbers removed, the remaining values are: " ;  
   for_each( v2.begin( ),  v2_Iter,   
   mem_fun_ref ( &NumVals::display ) );  
   cout << endl;  
}  
```  
  
```Output  
The original values stored in v1 are: 1 2 3 4 5 6 7 8 9 10 11 12 13   
With the primes removed, the remaining values in v1 are: 4 6 8 9 10 12   
The original values stored in v2 are: 1 2 3 4 5 6 7 8 9 10 11 12 13   
With the even numbers removed, the remaining values are: 1 3 5 7 9 11 13   
```  
  
##  <a name="not1"></a>  not1  
 Restituisce il complemento di un predicato unario.  
  
```  
template <class UnaryPredicate>  
unary_negate<UnaryPredicate> not1(const UnaryPredicate& pred);
```  
  
### <a name="parameters"></a>Parametri  
 `pred`  
 Predicato unario da negare.  
  
### <a name="return-value"></a>Valore restituito  
 Predicato unario che è la negazione del predicato unario modificato.  
  
### <a name="remarks"></a>Note  
 Se viene costruito un oggetto `unary_negate` da un predicato unario **Pred**( *x*), restituisce **!Pred**( *x*).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// functional_not1.cpp  
// compile with: /EHsc  
#include <vector>  
#include <functional>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
int main()  
{  
    vector<int> v1;  
    vector<int>::iterator Iter;  
  
    int i;  
    for (i = 0; i <= 7; i++)  
    {  
        v1.push_back(5 * i);  
    }  
  
    cout << "The vector v1 = ( ";  
    for (Iter = v1.begin(); Iter != v1.end(); Iter++)  
        cout << *Iter << " ";  
    cout << ")" << endl;  
  
    vector<int>::iterator::difference_type result1;  
    // Count the elements greater than 10  
    result1 = count_if(v1.begin(), v1.end(), bind2nd(greater<int>(), 10));  
    cout << "The number of elements in v1 greater than 10 is: "  
         << result1 << "." << endl;  
  
    vector<int>::iterator::difference_type result2;  
    // Use the negator to count the elements less than or equal to 10  
    result2 = count_if(v1.begin(), v1.end(),  
        not1(bind2nd(greater<int>(), 10)));  
  
    cout << "The number of elements in v1 not greater than 10 is: "  
         << result2 << "." << endl;  
}  
```  
  
```Output  
The vector v1 = ( 0 5 10 15 20 25 30 35 )  
The number of elements in v1 greater than 10 is: 5.  
The number of elements in v1 not greater than 10 is: 3.  
```  
  
##  <a name="not2"></a>  not2  
 Restituisce il complemento di un predicato binario.  
  
```  
template <class BinaryPredicate>  
binary_negate<BinaryPredicate> not2(const BinaryPredicate& func);
```  
  
### <a name="parameters"></a>Parametri  
 `func`  
 Predicato binario da negare.  
  
### <a name="return-value"></a>Valore restituito  
 Predicato binario che è la negazione del predicato binario modificato.  
  
### <a name="remarks"></a>Note  
 Se viene costruito un oggetto `binary_negate` da un predicato binario **BinPred**( *x*, *y*), restituisce ! **BinPred**( *x*, *y*).  
  
### <a name="example"></a>Esempio  
  
```cpp  
// functional_not2.cpp  
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
   // use the binary_negate helper function not2  
   sort( v1.begin( ), v1.end( ), not2(less<int>( ) ) );  
   cout << "Resorted vector v1 = ( " ;  
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )  
      cout << *Iter1 << " ";  
   cout << ")" << endl;  
}  
```  
  
```Output  
Original vector v1 = ( 6262 6262 41 18467 6334 26500 19169 )  
Sorted vector v1 = ( 41 6262 6262 6334 18467 19169 26500 )  
Resorted vector v1 = ( 26500 19169 18467 6334 6262 6262 41 )  
```  
  
##  <a name="ptr_fun"></a>  ptr_fun  
 Funzioni modello helper usate per convertire i puntatori a funzioni unarie e binarie rispettivamente in funzioni adattabili unarie e binarie.  
  
```  
template <class Arg, class Result>  
pointer_to_unary_function<Arg, Result, Result (*)(Arg)> ptr_fun(Result (*pfunc)(Arg));

template <class Arg1, class Arg2, class Result>  
pointer_to_binary_function<Arg1, Arg2, Result, Result (*)(Arg1, Arg2)> ptr_fun(Result (*pfunc)(Arg1, Arg2));
```  
  
### <a name="parameters"></a>Parametri  
 `pfunc`  
 Puntatore a funzione unaria o binaria da convertire in una funzione adattabile.  
  
### <a name="return-value"></a>Valore restituito  
 La prima funzione modello restituisce la funzione unaria [pointer_to_unary_function](../standard-library/pointer-to-unary-function-class.md) < `Arg`, **Result**>(* `pfunc`).  
  
 La seconda funzione modello restituisce la funzione binaria [pointer_to_binary_function](../standard-library/pointer-to-binary-function-class.md) \< **Arg1**, **Arg2**, **Result**>(* `pfunc`).  
  
### <a name="remarks"></a>Note  
 Un puntatore a funzione è un oggetto funzione e può essere passato a qualsiasi algoritmo della libreria standard C++ che prevede una funzione come parametro, ma non è adattabile. Per usarlo con un adattatore, ad esempio in associazione a un valore o con un negator, deve essere fornito con i tipi nidificati che rendono possibile tale adattamento. La conversione dei puntatori a funzioni unarie e binarie mediante la funzione helper `ptr_fun` consente agli adattatori di funzione di interagire con tali puntatori.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[functional_ptr_fun#1](../standard-library/codesnippet/CPP/functional-functions_1.cpp)]  
  
##  <a name="ref"></a>  ref  
 Costruisce un oggetto `reference_wrapper` da un argomento.  
  
```  
template <class Ty>  
reference_wrapper<Ty> ref(Ty& arg);

template <class Ty>  
reference_wrapper<Ty> ref(reference_wrapper<Ty>& arg);
```  
  
### <a name="return-value"></a>Valore restituito  
 Riferimento a `arg`, in particolare, `reference_wrapper<Ty>(arg)`.  
  
### <a name="example"></a>Esempio  
  L'esempio seguente definisce due funzioni: una associata a una variabile di tipo stringa, l'altra associata a un riferimento della variabile di tipo stringa calcolata in base a una chiamata a `ref`. Quando cambia il valore della variabile, la prima funzione continua a usare il valore precedente, mentre la seconda usa il nuovo valore.  
  
```cpp  
#include <algorithm>  
#include <functional>  
#include <iostream>  
#include <iterator>  
#include <ostream>  
#include <string>  
#include <vector>  
using namespace std;  
using namespace std;  
using namespace std::placeholders;  
  
bool shorter_than(const string& l, const string& r) {  
    return l.size() < r.size();  
}  
  
int main() {  
    vector<string> v_original;  
    v_original.push_back("tiger");  
    v_original.push_back("cat");  
    v_original.push_back("lion");  
    v_original.push_back("cougar");  
  
    copy(v_original.begin(), v_original.end(), ostream_iterator<string>(cout, " "));  
    cout << endl;  
  
    string s("meow");  
  
    function<bool (const string&)> f = bind(shorter_than, _1, s);  
    function<bool (const string&)> f_ref = bind(shorter_than, _1, ref(s));  
  
    vector<string> v;  
  
    // Remove elements that are shorter than s ("meow")  
  
    v = v_original;  
    v.erase(remove_if(v.begin(), v.end(), f), v.end());  
  
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));  
    cout << endl;  
  
    // Now change the value of s.  
    // f_ref, which is bound to ref(s), will use the  
    // new value, while f is still bound to the old value.  
  
    s = "kitty";  
  
    // Remove elements that are shorter than "meow" (f is bound to old value of s)  
  
    v = v_original;  
    v.erase(remove_if(v.begin(), v.end(), f), v.end());  
  
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));  
    cout << endl;  
  
    // Remove elements that are shorter than "kitty" (f_ref is bound to ref(s))  
  
    v = v_original;  
    v.erase(remove_if(v.begin(), v.end(), f_ref), v.end());  
  
    copy(v.begin(), v.end(), ostream_iterator<string>(cout, " "));  
    cout << endl;  
}  
```  
  
```Output  
tiger cat lion cougar  
tiger lion cougar  
tiger lion cougar  
tiger cougar  
```  
  
##  <a name="swap"></a>  swap  
 Scambia due oggetti `function`.  
  
```  
template <class Fty>  
void swap(function<Fty>& f1, function<Fty>& f2);
```  
  
### <a name="parameters"></a>Parametri  
 `Fty`  
 Tipo controllato dagli oggetti funzione.  
  
 `f1`  
 Primo oggetto funzione.  
  
 `f2`  
 Secondo oggetto funzione.  
  
### <a name="remarks"></a>Note  
 La funzione restituisce `f1.swap(f2)`.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__functional__swap.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn0(neg);   
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;   
    std::cout << "val == " << fn0(3) << std::endl;   
  
    std::function<int (int)> fn1;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << std::endl;   
  
    swap(fn0, fn1);   
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;   
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;   
    std::cout << "val == " << fn1(3) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
empty == false  
val == -3  
empty == true  
  
empty == true  
empty == false  
val == -3  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<functional>](../standard-library/functional.md)

