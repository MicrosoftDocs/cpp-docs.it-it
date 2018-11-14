---
title: Classe function
ms.date: 11/04/2016
f1_keywords:
- functional/std::function
- functional/std::function::result_type
- functional/std::function::assign
- functional/std::function::swap
- functional/std::function::target
- functional/std::function::target_type
- functional/std::function::operator unspecified
- functional/std::function::operator()
helpviewer_keywords:
- std::function [C++]
- std::function [C++], result_type
- std::function [C++], assign
- std::function [C++], swap
- std::function [C++], target
- std::function [C++], target_type
ms.assetid: 7b5ca76b-9ca3-4d89-8fcf-cad70a4aeae6
ms.openlocfilehash: 44c7691cc967b13b4fa94a7c51da57b7bf4d511f
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51518723"
---
# <a name="function-class"></a>Classe function

Wrapper per un oggetto chiamabile.

## <a name="syntax"></a>Sintassi

```cpp
template <class Fty>
class function  // Fty of type Ret(T1, T2, ..., TN)
    : public unary_function<T1, Ret>       // when Fty is Ret(T1)
    : public binary_function<T1, T2, Ret>  // when Fty is Ret(T1, T2)
{
public:
    typedef Ret result_type;

    function();
    function(nullptr_t);
    function(const function& right);
    template <class Fty2>
        function(Fty2 fn);
    template <class Fty2, class Alloc>
        function(reference_wrapper<Fty2>, const Alloc& Ax);

    template <class Fty2, class Alloc>
        void assign(Fty2, const Alloc& Ax);
    template <class Fty2, class Alloc>
        void assign(reference_wrapper<Fty2>, const Alloc& Ax);
    function& operator=(nullptr_t);
    function& operator=(const function&);
    template <class Fty2>
        function& operator=(Fty2);
    template <class Fty2>
        function& operator=(reference_wrapper<Fty2>);

    void swap(function&);
    explicit operator bool() const;

    result_type operator()(T1, T2, ....., TN) const;
    const std::type_info& target_type() const;
    template <class Fty2>
        Fty2 *target();

    template <class Fty2>
        const Fty2 *target() const;

    template <class Fty2>
        void operator==(const Fty2&) const = delete;
    template <class Fty2>
        void operator!=(const Fty2&) const = delete;
};
```

### <a name="parameters"></a>Parametri

*Fty*<br/>
Tipo di funzione di cui eseguire il wrapping.

*AX*<br/>
Funzione allocatore.

## <a name="remarks"></a>Note

La classe modello è un wrapper di chiamata con firma di chiamata `Ret(T1, T2, ..., TN)`. Usarla per racchiudere una vasta gamma di oggetti chiamabili in un wrapper uniforme.

Alcune funzioni membro accettano un operando che specifica l'oggetto di destinazione desiderato. È possibile specificare tale operando in diversi modi:

`fn` -- oggetto chiamabile `fn`; dopo la chiamata l'oggetto `function` include una copia di `fn`

`fnref` -- oggetto chiamabile specificato da `fnref.get()`; dopo la chiamata l'oggetto `function` include un riferimento a `fnref.get()`

`right` -- eventuale oggetto chiamabile incluso nell'oggetto `function` `right`

`npc` -- puntatore Null; dopo la chiamata l'oggetto `function` è vuoto

In tutti i casi, `INVOKE(f, t1, t2, ..., tN)`, dove `f` è l'oggetto chiamabile e `t1, t2, ..., tN` sono lvalue rispettivamente dei tipi `T1, T2, ..., TN`, deve essere nel formato corretto e, se `Ret` non è void, convertibile in `Ret`.

Un oggetto `function` vuoto non include un oggetto chiamabile o un riferimento a un oggetto chiamabile.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[function](#function)|Costruisce un wrapper vuoto o in cui è archiviato un oggetto chiamabile di tipo arbitrario con una firma fissa.|

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[result_type](#result_type)|Tipo restituito dell'oggetto chiamabile archiviato.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[assign](#assign)|Assegna un oggetto chiamabile a questo oggetto funzione.|
|[swap](#swap)|Scambia due oggetti chiamabili.|
|[target](#target)|Verifica se l'oggetto chiamabile archiviato è chiamabile come specificato.|
|[target_type](#target_type)|Ottiene le informazioni sui tipi per l'oggetto chiamabile.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[function::operator unspecified](#op_unspecified)|Verifica se è presente un oggetto chiamabile archiviato.|
|[function::operator()](#op_call)|Chiama un oggetto chiamabile.|
|[function::operator=](#op_eq)|Sostituisce l'oggetto chiamabile archiviato.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<functional>

**Spazio dei nomi:** std

## <a name="assign"></a>  function::assign

Assegna un oggetto chiamabile a questo oggetto funzione.

```cpp
template <class Fx, class Alloc>
    void assign(
        Fx _Func,
        const Alloc& Ax);

template <class Fx, class Alloc>
    void assign(
        reference_wrapper<Fx> _Fnref,
        const Alloc& Ax);
```

### <a name="parameters"></a>Parametri

*Func*<br/>
Oggetto chiamabile.

*_Fnref*<br/>
Wrapper di riferimento che contiene un oggetto chiamabile.

*AX*<br/>
Un oggetto allocatore.

### <a name="remarks"></a>Note

Ogni funzione membro sostituisce l'oggetto `callable object` incluso in `*this` con l'oggetto chiamabile passato come `operand`. Entrambe allocano memoria con l'oggetto allocatore *Ax*.

## <a name="function"></a>  function::function

Costruisce un wrapper vuoto o in cui è archiviato un oggetto chiamabile di tipo arbitrario con una firma fissa.

```cpp
function();
function(nullptr_t npc);
function(const function& right);
template <class Fx>
    function(Fx _Func);
template <class Fx>
    function(reference_wrapper<Fx> _Fnref);
template <class Fx, class Alloc>
    function(
        Fx _Func,
        const Alloc& Ax);

template <class Fx, class Alloc>
    function(
        reference_wrapper<Fx> _Fnref,
        const Alloc& Ax);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Oggetto funzione da copiare.

*Fx*<br/>
Tipo di oggetto chiamabile.

*Func*<br/>
Oggetto chiamabile di cui eseguire il wrapping.

*Alloc*<br/>
Tipo di allocatore.

*AX*<br/>
Allocatore.

*_Fnref*<br/>
Riferimento all'oggetto chiamabile di cui eseguire il wrapping.

### <a name="remarks"></a>Note

I primi due costruttori costruiscono un oggetto `function` vuoto. I tre costruttori successivi costruiscono un oggetto `function` che include l'oggetto chiamabile passato come operando. Gli ultimi due costruttori allocano memoria con l'oggetto allocatore Ax.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_function.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>
#include <vector>

int square(int val)
{
    return val * val;
}

class multiply_by
{
public:
    explicit multiply_by(const int n) : m_n(n) { }

    int operator()(const int x) const
    {
        return m_n * x;
    }

private:
    int m_n;
};

int main()
{

    typedef std::vector< std::function<int (int)> > vf_t;

    vf_t v;
    v.push_back(square);
    v.push_back(std::negate<int>());
    v.push_back(multiply_by(3));

    for (vf_t::const_iterator i = v.begin(); i != v.end(); ++i)
    {
        std::cout << (*i)(10) << std::endl;
    }

    std::function<int (int)> f = v[0];
    std::function<int (int)> g;

    if (f) {
        std::cout << "f is non-empty (correct)." << std::endl;
    } else {
        std::cout << "f is empty (can't happen)." << std::endl;
    }

    if (g) {
        std::cout << "g is non-empty (can't happen)." << std::endl;
    } else {
        std::cout << "g is empty (correct)." << std::endl;
    }

    return 0;
}
```

```Output
100
-10
30
f is non-empty (correct).
g is empty (correct).
```

## <a name="op_unspecified"></a>  function::operator unspecified

Verifica se è presente un oggetto chiamabile archiviato.

```cpp
operator unspecified();
```

### <a name="remarks"></a>Note

L'operatore restituisce un valore che è convertibile in **bool** con un valore true solo se l'oggetto non è vuoto. Può essere usato per verificare se l'oggetto è vuoto.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_operator_bool.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
    {
    return (-val);
    }

int main()
    {
    std::function<int (int)> fn0;
    std::cout << std::boolalpha << "not empty == " << (bool)fn0 << std::endl;

    std::function<int (int)> fn1(neg);
    std::cout << std::boolalpha << "not empty == " << (bool)fn1 << std::endl;

    return (0);
    }
```

```Output
not empty == false
not empty == true
```

## <a name="op_call"></a>  function::operator()

Chiama un oggetto chiamabile.

```cpp
result_type operator()(
    T1 t1,
    T2 t2, ...,
    TN tN);
```

### <a name="parameters"></a>Parametri

*TN*<br/>
Tipo dell'ennesimo argomento di chiamata.

*TN*<br/>
Ennesimo argomento di chiamata.

### <a name="remarks"></a>Note

La funzione membro restituisce `INVOKE(fn, t1, t2, ..., tN, Ret)`, dove `fn` è l'oggetto di destinazione archiviato in `*this`. Usarla per chiamare l'oggetto chiamabile di cui è stato eseguito il wrapping.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_operator_call.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
    {
    return (-val);
    }

int main()
    {
    std::function<int (int)> fn1(neg);
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;
    std::cout << "val == " << fn1(3) << std::endl;

    return (0);
    }
```

```Output
empty == false
val == -3
```

## <a name="op_eq"></a>  function::operator=

Sostituisce l'oggetto chiamabile archiviato.

```cpp
function& operator=(null_ptr_type npc);
function& operator=(const function& right);
template <class Fty>
    function& operator=(Fty fn);
template <class Fty>
    function& operator=(reference_wrapper<Fty> fnref);
```

### <a name="parameters"></a>Parametri

*NPC*<br/>
Costante puntatore Null.

*right*<br/>
Oggetto funzione da copiare.

*Fn*<br/>
Oggetto chiamabile di cui eseguire il wrapping.

*fnref*<br/>
Riferimento all'oggetto chiamabile di cui eseguire il wrapping.

### <a name="remarks"></a>Note

Ogni operatore sostituisce l'oggetto chiamabile incluso in `*this` con l'oggetto chiamabile passato come operando.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_operator_as.cpp
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
    fn1 = 0;
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;

    fn1 = neg;
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;
    std::cout << "val == " << fn1(3) << std::endl;

    fn1 = fn0;
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;
    std::cout << "val == " << fn1(3) << std::endl;

    fn1 = std::cref(fn1);
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;
    std::cout << "val == " << fn1(3) << std::endl;

    return (0);
    }
```

```Output
empty == false
val == -3
empty == true
empty == false
val == -3
empty == false
val == -3
empty == false
val == -3
```

## <a name="result_type"></a>  function::result_type

Tipo restituito dell'oggetto chiamabile archiviato.

```cpp
typedef Ret result_type;
```

### <a name="remarks"></a>Note

Il typedef è un sinonimo del tipo `Ret` nella firma di chiamata del modello. Usarlo per determinare il tipo restituito dell'oggetto chiamabile di cui è stato eseguito il wrapping.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_result_type.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
    {
    return (-val);
    }

int main()
    {
    std::function<int (int)> fn1(neg);
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;

    std::function<int (int)>::result_type val = fn1(3);
    std::cout << "val == " << val << std::endl;

    return (0);
    }
```

```Output
empty == false
val == -3
```

## <a name="swap"></a>  function::swap

Scambia due oggetti chiamabili.

```cpp
void swap(function& right);
```

### <a name="parameters"></a>Parametri

*right*<br/>
Oggetto funzione con cui eseguire lo scambio.

### <a name="remarks"></a>Note

La funzione membro Scambia gli oggetti di destinazione tra `*this` e *destro*. Esegue tale operazione in un tempo costante e non genera eccezioni.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_swap.cpp
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

    fn0.swap(fn1);
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

## <a name="target"></a>  function::target

Verifica se l'oggetto chiamabile archiviato è chiamabile come specificato.

```cpp
template <class Fty2>
    Fty2 *target();
template <class Fty2>
    const Fty2 *target() const;
```

### <a name="parameters"></a>Parametri

*Fty2*<br/>
Tipo di oggetto chiamabile di destinazione da verificare.

### <a name="remarks"></a>Note

Il tipo *Fty2* deve essere chiamabile per i tipi di argomento `T1, T2, ..., TN` e il tipo restituito `Ret`. Se `target_type() == typeid(Fty2)`, la funzione modello membro restituisce l'indirizzo dell'oggetto di destinazione; in caso contrario, restituisce 0.

Un tipo *Fty2* chiamabile per i tipi di argomento `T1, T2, ..., TN` e il tipo restituito `Ret` se, per lvalue `fn, t1, t2, ..., tN` dei tipi `Fty2, T1, T2, ..., TN`, rispettivamente, `INVOKE(fn, t1, t2, ..., tN)` è ben formata e, se `Ret`non è **void**, convertibile in `Ret`.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_target.cpp
// compile with: /EHsc
#include <functional>
#include <iostream>

int neg(int val)
    {
    return (-val);
    }

int main()
    {
    typedef int (*Myfun)(int);
    std::function<int (int)> fn0(neg);
    std::cout << std::boolalpha << "empty == " << !fn0 << std::endl;
    std::cout << "no target == " << (fn0.target<Myfun>() == 0) << std::endl;

    Myfun *fptr = fn0.target<Myfun>();
    std::cout << "val == " << (*fptr)(3) << std::endl;

    std::function<int (int)> fn1;
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;
    std::cout << "no target == " << (fn1.target<Myfun>() == 0) << std::endl;

    return (0);
    }
```

```Output
empty == false
no target == false
val == -3
empty == true
no target == true
```

## <a name="target_type"></a>  function::target_type

Ottiene le informazioni sui tipi per l'oggetto chiamabile.

```cpp
const std::type_info& target_type() const;
```

### <a name="remarks"></a>Note

La funzione membro restituisce `typeid(void)` se `*this` è vuoto, in caso contrario restituisce `typeid(T)`, dove `T` è il tipo dell'oggetto di destinazione.

### <a name="example"></a>Esempio

```cpp
// std__functional__function_target_type.cpp
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
    std::cout << "type == " << fn0.target_type().name() << std::endl;

    std::function<int (int)> fn1;
    std::cout << std::boolalpha << "empty == " << !fn1 << std::endl;
    std::cout << "type == " << fn1.target_type().name() << std::endl;

    return (0);
    }
```

```Output
empty == false
type == int (__cdecl*)(int)
empty == true
type == void
```

## <a name="see-also"></a>Vedere anche

[mem_fn](../standard-library/functional-functions.md#mem_fn)<br/>
[Classe reference_wrapper](../standard-library/reference-wrapper-class.md)<br/>
