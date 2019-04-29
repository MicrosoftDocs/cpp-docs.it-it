---
title: functional (STL/CLR)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- <cliext/functional>
- cliext::binary_delegate
- cliext::binary_delegate_noreturn
- cliext::binary_negate
- cliext::bind1st
- cliext::bind2nd
- cliext::binder1st
- cliext::binder2nd
- cliext::divides
- cliext::equal_to
- cliext::greater
- cliext::greater_equal
- cliext::less
- cliext::less_equal
- cliext::logical_and
- cliext::logical_not
- cliext::logical_or
- cliext::minus
- cliext::modulus
- cliext::multiplies
- cliext::negate
- cliext::not_equal_to
- cliext::not1
- cliext::not2
- cliext::plus
- cliext::unary_delegate
- cliext::unary_delegate_noreturn
- cliext::unary_negate
helpviewer_keywords:
- <functional> header [STL/CLR]
- <cliext/functional> header [STL/CLR]
- functional functions [STL/CLR]
- binary_delegate function [STL/CLR]
- binary_delegate_noreturn function [STL/CLR]
- binary_negate function [STL/CLR]
- bind1st function [STL/CLR]
- bind2nd function [STL/CLR]
- binder1st function [STL/CLR]
- binder2nd function [STL/CLR]
- divides function [STL/CLR]
- equal_to function [STL/CLR]
- greater function [STL/CLR]
- greater_equal function [STL/CLR]
- less function [STL/CLR]
- less_equal function [STL/CLR]
- logical_and function [STL/CLR]
- logical_not function [STL/CLR]
- logical_or function [STL/CLR]
- minus function [STL/CLR]
- modulus function [STL/CLR]
- multiplies function [STL/CLR]
- negate function [STL/CLR]
- not_equal_to function [STL/CLR]
- not1 function [STL/CLR]
- not2 function [STL/CLR]
- plus function [STL/CLR]
- unary_delegate function [STL/CLR]
- unary_delegate_noreturn function [STL/CLR]
- unary_negate function [STL/CLR]
ms.assetid: 88738b8c-5d37-4375-970e-a4442bf5efde
ms.openlocfilehash: f4a99ea972c6d2ea9b9721664cc75dec257fd7b3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62393753"
---
# <a name="functional-stlclr"></a>functional (STL/CLR)

Includere l'intestazione STL/CLR `<cliext/functional>` per definire le numerose funzioni e i delegati modello correlato e classi modello.

## <a name="syntax"></a>Sintassi

```
#include <functional>
```

## <a name="requirements"></a>Requisiti

**Intestazione:** \<cliext/functional >

**Namespace:** cliext

## <a name="declarations"></a>Dichiarazioni

|delegato|Descrizione|
|--------------|-----------------|
|[binary_delegate (STL/CLR)](#binary_delegate)|Delegato di due argomenti.|
|[binary_delegate_noreturn (STL/CLR)](#binary_delegate_noreturn)|Delegato di due argomenti restituisce **void**.|
|[unary_delegate (STL/CLR)](#unary_delegate)|Un solo argomento delegato.|
|[unary_delegate_noreturn (STL/CLR)](#unary_delegate_noreturn)|Delegato di un solo argomento restituisce **void**.|

|Classe|Descrizione|
|-----------|-----------------|
|[binary_negate (STL/CLR)](#binary_negate)|Funtore da negare un funtore due argomenti.|
|[binder1st (STL/CLR)](#binder1st)|Funtore associare primo argomento a un funtore due argomenti.|
|[binder2nd (STL/CLR)](#binder2nd)|Funtore associare secondo argomento a un funtore due argomenti.|
|[divides (STL/CLR)](#divides)|Dividere funtore.|
|[equal_to (STL/CLR)](#equal_to)|Funtore di confronto uguale.|
|[greater (STL/CLR)](#greater)|Maggiore funtore di confronto.|
|[greater_equal (STL/CLR)](#greater_equal)|Funtore di confronto maggiore o uguale.|
|[less (STL/CLR)](#less)|Meno funtore di confronto.|
|[less_equal (STL/CLR)](#less_equal)|Funtore di confronto minore o uguale.|
|[logical_and (STL/CLR)](#logical_and)|Funtore AND logico.|
|[logical_not (STL/CLR)](#logical_not)|Logica non funtore.|
|[logical_or (STL/CLR)](#logical_or)|Funtore OR logico.|
|[minus (STL/CLR)](#minus)|Sottrarre funtore.|
|[modulus (STL/CLR)](#modulus)|Funtore di modulo.|
|[multiplies (STL/CLR)](#multiplies)|Moltiplicare il funtore.|
|[negate (STL/CLR)](#negate)|Funtore per restituire il relativo argomento negata.|
|[not_equal_to (STL/CLR)](#not_equal_to)|Funtore di confronto non è uguale.|
|[plus (STL/CLR)](#plus)|Aggiungere funtore.|
|[unary_negate (STL/CLR)](#unary_negate)|Funtore da negare un funtore solo argomento.|

|Funzione|Descrizione|
|--------------|-----------------|
|[bind1st (STL/CLR)](#bind1st)|Genera un binder1st per un argomento o un funtore.|
|[bind2nd (STL/CLR)](#bind2nd)|Genera un binder2nd per un argomento o un funtore.|
|[not1 (STL/CLR)](#not1)|Genera un unary_negate per un funtore.|
|[not2 (STL/CLR)](#not2)|Genera un binary_negate per un funtore.|

## <a name="members"></a>Membri

## <a name="binary_delegate"></a> binary_delegate (STL/CLR)

La classe genereic descrive un delegato di due argomenti. Usarlo specificare un delegato in termini relativi tipi di argomenti e valori restituiti.

### <a name="syntax"></a>Sintassi

```cpp
generic<typename Arg1,
    typename Arg2,
    typename Result>
    delegate Result binary_delegate(Arg1, Arg2);
```

#### <a name="parameters"></a>Parametri

*Arg1*<br/>
Il tipo del primo argomento.

*Arg2*<br/>
Il tipo del secondo argomento.

*Risultato*<br/>
Tipo restituito.

### <a name="remarks"></a>Note

Il delegato genereic descrive una funzione a due argomenti.

Si noti che per:

`binary_delegate<int, int, int> Fun1;`

`binary_delegate<int, int, int> Fun2;`

i tipi `Fun1` e `Fun2` sono sinonimi, mentre per:

`delegate int Fun1(int, int);`

`delegate int Fun2(int, int);`

non sono dello stesso tipo.

### <a name="example"></a>Esempio

```cpp
// cliext_binary_delegate.cpp
// compile with: /clr
#include <cliext/functional>

bool key_compare(wchar_t left, wchar_t right)
    {
    return (left < right);
    }

typedef cliext::binary_delegate<wchar_t, wchar_t, bool> Mydelegate;
int main()
    {
    Mydelegate^ kcomp = gcnew Mydelegate(&key_compare);

    System::Console::WriteLine("compare(L'a', L'a') = {0}",
        kcomp(L'a', L'a'));
    System::Console::WriteLine("compare(L'a', L'b') = {0}",
        kcomp(L'a', L'b'));
    System::Console::WriteLine("compare(L'b', L'a') = {0}",
        kcomp(L'b', L'a'));
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(L'a', L'a') = False
compare(L'a', L'b') = True
compare(L'b', L'a') = False
```

## <a name="binary_delegate_noreturn"></a> binary_delegate_noreturn (STL/CLR)

La classe genereic descrive un delegato di due argomenti che restituisce **void**. Usarlo specificare un delegato in termini di relativo argomento.

### <a name="syntax"></a>Sintassi

```cpp
generic<typename Arg1,
    typename Arg2>
    delegate void binary_delegate(Arg1, Arg2);
```

#### <a name="parameters"></a>Parametri

*Arg1*<br/>
Il tipo del primo argomento.

*Arg2*<br/>
Il tipo del secondo argomento.

### <a name="remarks"></a>Note

Il delegato genereic descrive una funzione di due argomenti che restituisca **void**.

Si noti che per:

`binary_delegate_noreturn<int, int> Fun1;`

`binary_delegate_noreturn<int, int> Fun2;`

i tipi `Fun1` e `Fun2` sono sinonimi, mentre per:

`delegate void Fun1(int, int);`

`delegate void Fun2(int, int);`

non sono dello stesso tipo.

### <a name="example"></a>Esempio

```cpp
// cliext_binary_delegate_noreturn.cpp
// compile with: /clr
#include <cliext/functional>

void key_compare(wchar_t left, wchar_t right)
    {
    System::Console::WriteLine("compare({0}, {1}) = {2}",
        left, right, left < right);
    }

typedef cliext::binary_delegate_noreturn<wchar_t, wchar_t> Mydelegate;
int main()
    {
    Mydelegate^ kcomp = gcnew Mydelegate(&key_compare);

    kcomp(L'a', L'a');
    kcomp(L'a', L'b');
    kcomp(L'b', L'a');
    System::Console::WriteLine();
    return (0);
    }
```

```Output
compare(a, a) = False
compare(a, b) = True
compare(b, a) = False
```

## <a name="binary_negate"></a> binary_negate (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce l'operatore logico non del relativo stored funtore di due argomenti. Usarlo specificare un oggetto funzione in termini del funtore stored.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun>
    ref class binary_negate
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::first_argument_type first_argument_type;
    typedef typename Fun::second_argument_type second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    explicit binary_negate(Fun% functor);
    binary_negate(binary_negate<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Fun*<br/>
Il tipo del funtore stored.

## <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|
|stored_function_type|Il tipo del funtore.|

|Member|Descrizione|
|------------|-----------------|
|binary_negate|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operator delegate_type^()|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore di due argomenti che archivia un altro funtore di due argomenti. Definisce l'operatore membro `operator()` restituisce in modo che, quando l'oggetto viene chiamato come una funzione, la logica non del funtore stored chiamato con due argomenti.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_binary_negate.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::less<int> less_op;

    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(),
        cliext::binary_negate<cliext::less<int> >(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::not2(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
1 0
```

## <a name="bind1st"></a> bind1st (STL/CLR)

Genera un `binder1st` per un argomento o un funtore.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun,
    typename Arg>
    binder1st<Fun> bind1st(Fun% functor,
        Arg left);
```

#### <a name="template-parameters"></a>Parametri di template

*Arg*<br/>
Il tipo di argomento.

*Fun*<br/>
Il tipo del funtore.

#### <a name="function-parameters"></a>Parametri di funzione

*functor*<br/>
Il funtore per eseguire il wrapping.

*left*<br/>
Il primo argomento per eseguire il wrapping.

### <a name="remarks"></a>Note

La funzione modello restituisce [binder1st (STL/CLR)](../dotnet/binder1st-stl-clr.md)`<Fun>(functor, left)`. Usarlo come un modo pratico per eseguire il wrapping di un funtore due argomenti e il relativo primo argomento in un funtore solo argomento da cui viene chiamato con un secondo argomento.

### <a name="example"></a>Esempio

```cpp
// cliext_bind1st.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder1st<cliext::minus<int> > subfrom3(sub_op, 3);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        subfrom3);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind1st(sub_op, 3));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
-1 0
-1 0
```

## <a name="bind2nd"></a> bind2nd (STL/CLR)

Genera un `binder2nd` per un argomento o un funtore.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun,
    typename Arg>
    binder2nd<Fun> bind2nd(Fun% functor,
        Arg right);
```

#### <a name="template-parameters"></a>Parametri di template

*Arg*<br/>
Il tipo di argomento.

*Fun*<br/>
Il tipo del funtore.

#### <a name="function-parameters"></a>Parametri di funzione

*functor*<br/>
Il funtore per eseguire il wrapping.

*right*<br/>
Il secondo argomento per eseguire il wrapping.

### <a name="remarks"></a>Note

La funzione modello restituisce [binder2nd (STL/CLR)](../dotnet/binder2nd-stl-clr.md)`<Fun>(functor, right)`. Usarlo come un modo pratico per eseguire il wrapping di un funtore due argomenti e il relativo argomento di secondo in un funtore solo argomento da cui viene chiamato con un primo argomento.

### <a name="example"></a>Esempio

```cpp
// cliext_bind2nd.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder2nd<cliext::minus<int> > sub4(sub_op, 4);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        sub4);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind2nd(sub_op, 4));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
0 -1
0 -1
```

## <a name="binder1st"></a> binder1st (STL/CLR)

La classe modello descrive un solo argomento functor che, quando viene chiamato, restituisce il funtore due argomenti stored chiamato con il primo argomento archiviato e il secondo argomento specificato. Usarlo specificare un oggetto funzione in termini del funtore stored.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun>
    ref class binder1st
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::first_argument_type first_argument_type;
    typedef typename Fun::second_argument_type second_argument_type;
    typedef typename Fun:result_type result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        second_argument_type, result_type>
        delegate_type;

    binder1st(Fun% functor, first_argument_type left);
    binder1st(binder1st<Arg>% right);

    result_type operator()(second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Fun*<br/>
Il tipo del funtore stored.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|
|stored_function_type|Il tipo del funtore.|

|Member|Descrizione|
|------------|-----------------|
|binder1st|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operator delegate_type^()|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore solo argomento che archivia un funtore due argomenti e un primo argomento. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il risultato della chiamata al metodo il funtore archiviato con il primo argomento archiviato e il secondo argomento specificato.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_binder1st.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder1st<cliext::minus<int> > subfrom3(sub_op, 3);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        subfrom3);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind1st(sub_op, 3));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
-1 0
-1 0
```

## <a name="binder2nd"></a> binder2nd (STL/CLR)

La classe modello descrive un solo argomento functor che, quando viene chiamato, restituisce il funtore due argomenti stored chiamato con il primo argomento specificato e il relativo argomento secondo stored. Usarlo specificare un oggetto funzione in termini del funtore stored.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun>
    ref class binder2nd
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::first_argument_type first_argument_type;
    typedef typename Fun::second_argument_type second_argument_type;
    typedef typename Fun:result_type result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        first_argument_type, result_type>
        delegate_type;

    binder2nd(Fun% functor, second_argument_type left);
    binder2nd(binder2nd<Arg>% right);

    result_type operator()(first_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Fun*<br/>
Il tipo del funtore stored.

## <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|
|stored_function_type|Il tipo del funtore.|

|Member|Descrizione|
|------------|-----------------|
|binder2nd|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operator delegate_type^()|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore solo argomento che archivia un funtore due argomenti e un secondo argomento. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il risultato della chiamata al metodo il funtore archiviato con il primo argomento specificato e il secondo argomento stored.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_binder2nd.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::minus<int> sub_op;
    cliext::binder2nd<cliext::minus<int> > sub4(sub_op, 4);

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        sub4);
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        bind2nd(sub_op, 4));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
0 -1
0 -1
```

## <a name="divides"></a> Divide (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce il primo argomento diviso per il secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class divides
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    divides();
    divides(divides<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Tipo di argomenti e il valore restituito.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|divides|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operator delegate_type^()|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il primo argomento diviso per il secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_divides.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::divides<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
2 3
```

## <a name="equal_to"></a> equal_to (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento è uguale al secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class equal_to
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    equal_to();
    equal_to(equal_to<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|equal_to|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operator delegate_type^()|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce true solo se il primo argomento è uguale al secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_equal_to.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::equal_to<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
```

## <a name="greater"></a> greater (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento è maggiore del secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class greater
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    greater();
    greater(greater<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|greater|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce true solo se il primo argomento è maggiore del secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_greater.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 3 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::greater<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
3 3
1 0
```

## <a name="greater_equal"></a> greater_equal (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento è maggiore o uguale al secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class greater_equal
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    greater_equal();
    greater_equal(greater_equal<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|greater_equal|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce true solo se il primo argomento è maggiore o uguale al secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_greater_equal.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::greater_equal<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
```

## <a name="less"></a> less (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento è minore del secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class less
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    less();
    less(less<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|meno|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce true solo se il primo argomento è minore del secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_less.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::less<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
0 1
```

## <a name="less_equal"></a> less_equal (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento è minore o uguale al secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class less_equal
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    less_equal();
    less_equal(less_equal<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|less_equal|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce true solo se il primo argomento è minore o uguale al secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_less_equal.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(3);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 3 3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::less_equal<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
3 3
0 1
```

## <a name="logical_and"></a> logical_and (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento sia il secondo test come true. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class logical_and
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    logical_and();
    logical_and(logical_and<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|logical_and|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, viene restituito true solo se il primo argomento sia il secondo test come true.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_logical_and.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(2);
    c1.push_back(0);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 1 0" and " 1 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::logical_and<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
2 0
3 0
1 0
```

## <a name="logical_not"></a> logical_not (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il relativo argomento testa come false. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class logical_not
    { // wrap operator()
public:
    typedef Arg argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        argument_type, result_type>
        delegate_type;

    logical_not();
    logical_not(logical_not<Arg> %right);

    result_type operator()(argument_type left);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|argument_type|Il tipo dell'argomento funtore.|
|delegate_type|Il tipo del delegato generico.|
|result_type|Il tipo del risultato funtore.|

|Member|Descrizione|
|------------|-----------------|
|logical_not|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore solo argomento. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, viene restituito true solo se il relativo argomento testa come false.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_logical_not.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 4 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c3.begin(), cliext::logical_not<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 0
0 1
```

## <a name="logical_or"></a> logical_or (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento o il secondo test come true. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class logical_or
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    logical_or();
    logical_or(logical_or<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|logical_or|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, viene restituito true solo se il primo argomento o il secondo test come true.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_logical_or.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(2);
    c1.push_back(0);
    Myvector c2;
    c2.push_back(0);
    c2.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 2 0" and " 0 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::logical_or<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
2 0
0 0
1 0
```

## <a name="minus"></a> minus (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce il primo argomento meno la seconda. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class minus
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    minus();
    minus(minus<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Tipo di argomenti e il valore restituito.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|minus|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il primo argomento meno la seconda.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_minus.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::minus<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
2 2
```

## <a name="modulus"></a> modulo (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce il primo argomento modulo del secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class modulus
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    modulus();
    modulus(modulus<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Tipo di argomenti e il valore restituito.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|modulo|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il primo argomento modulo del secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_modulus.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(2);
    Myvector c2;
    c2.push_back(3);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 2" and " 3 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::modulus<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 2
3 1
1 0
```

## <a name="multiplies"></a> multiplies (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce il primo argomento volte il secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class multiplies
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    multiplies();
    multiplies(multiplies<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Tipo di argomenti e il valore restituito.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|multiplies|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il primo argomento volte il secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_multiplies.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::multiplies<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
8 3
```

## <a name="negate"></a> negate (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce il relativo argomento negata. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class negate
    { // wrap operator()
public:
    typedef Arg argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        argument_type, result_type>
        delegate_type;

    negate();
    negate(negate<Arg>% right);

    result_type operator()(argument_type left);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|argument_type|Il tipo dell'argomento funtore.|
|delegate_type|Il tipo del delegato generico.|
|result_type|Il tipo del risultato funtore.|

|Member|Descrizione|
|------------|-----------------|
|negate|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore solo argomento. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce il relativo argomento negata.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_negate.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(-3);
    Myvector c3(2, 0);

// display initial contents " 4 -3"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c3.begin(), cliext::negate<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 -3
-4 3
```

## <a name="not_equal_to"></a> not_equal_to (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce true solo se il primo argomento non è uguale al secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class not_equal_to
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    not_equal_to();
    not_equal_to(not_equal_to<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomenti.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|not_equal_to|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, restituisce true solo se il primo argomento non è uguale al secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_not_equal_to.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::not_equal_to<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
0 1
```

## <a name="not1"></a> not1 (STL/CLR)

Genera un `unary_negate` per un funtore.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun>
    unary_negate<Fun> not1(Fun% functor);
```

#### <a name="template-parameters"></a>Parametri di template

*Fun*<br/>
Il tipo del funtore.

#### <a name="function-parameters"></a>Parametri di funzione

*functor*<br/>
Il funtore per eseguire il wrapping.

### <a name="remarks"></a>Note

La funzione modello restituisce [unary_negate (STL/CLR)](../dotnet/unary-negate-stl-clr.md)`<Fun>(functor)`. Usarlo come un modo pratico per eseguire il wrapping di un solo argomento funtore in un funtore che offre il NOT logico.

### <a name="example"></a>Esempio

```cpp
// cliext_not1.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 4 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::logical_not<int> not_op;

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::unary_negate<cliext::logical_not<int> >(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::not1(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 0
1 0
1 0
```

## <a name="not2"></a> not2 (STL/CLR)

Genera un `binary_negate` per un funtore.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun>
    binary_negate<Fun> not2(Fun% functor);
```

#### <a name="template-parameters"></a>Parametri di template

*Fun*<br/>
Il tipo del funtore.

#### <a name="function-parameters"></a>Parametri di funzione

*functor*<br/>
Il funtore per eseguire il wrapping.

### <a name="remarks"></a>Note

La funzione modello restituisce [binary_negate (STL/CLR)](../dotnet/binary-negate-stl-clr.md)`<Fun>(functor)`. Usarlo come un modo pratico per eseguire il wrapping di un funtore due argomenti in un funtore che offre il NOT logico.

### <a name="example"></a>Esempio

```cpp
// cliext_not2.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(4);
    c2.push_back(4);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 4 4"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::less<int> less_op;

    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(),
        cliext::binary_negate<cliext::less<int> >(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::not2(less_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
4 4
1 0
1 0
```

## <a name="plus"></a> plus (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce il primo argomento e il secondo. Usarlo specificare un oggetto funzione in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Arg>
    ref class plus
    { // wrap operator()
public:
    typedef Arg first_argument_type;
    typedef Arg second_argument_type;
    typedef Arg result_type;
    typedef Microsoft::VisualC::StlClr::BinaryDelegate<
        first_argument_type, second_argument_type, result_type>
        delegate_type;

    plus();
    plus(plus<Arg>% right);

    result_type operator()(first_argument_type left,
        second_argument_type right);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Tipo di argomenti e il valore restituito.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|delegate_type|Il tipo del delegato generico.|
|first_argument_type|Il tipo del primo argomento funtore.|
|result_type|Il tipo del risultato funtore.|
|second_argument_type|Il tipo del secondo argomento funtore.|

|Member|Descrizione|
|------------|-----------------|
|plus|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|operatore delegate_type ^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore due argomenti. Definisce l'operatore membro `operator()` in modo che, quando l'oggetto viene chiamato come una funzione, viene restituito il primo argomento e il secondo.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_plus.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(3);
    Myvector c2;
    c2.push_back(2);
    c2.push_back(1);
    Myvector c3(2, 0);

// display initial contents " 4 3" and " 2 1"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

    for each (int elem in c2)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::transform(c1.begin(), c1.begin() + 2,
        c2.begin(), c3.begin(), cliext::plus<int>());
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 3
2 1
6 4
```

## <a name="unary_delegate"></a> unary_delegate (STL/CLR)

La classe genereic descrive un delegato di un solo argomento. Usarlo specificare un delegato in termini relativi tipi di argomenti e valori restituiti.

### <a name="syntax"></a>Sintassi

```cpp
generic<typename Arg,
    typename Result>
    delegate Result unary_delegate(Arg);
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomento.

*Risultato*<br/>
Tipo restituito.

### <a name="remarks"></a>Note

Il delegato genereic descrive una funzione di un solo argomento.

Si noti che per:

`unary_delegare<int, int> Fun1;`

`unary_delegare<int, int> Fun2;`

i tipi `Fun1` e `Fun2` sono sinonimi, mentre per:

`delegate int Fun1(int);`

`delegate int Fun2(int);`

non sono dello stesso tipo.

### <a name="example"></a>Esempio

```cpp
// cliext_unary_delegate.cpp
// compile with: /clr
#include <cliext/functional>

int hash_val(wchar_t val)
    {
    return ((val * 17 + 31) % 67);
    }

typedef cliext::unary_delegate<wchar_t, int> Mydelegate;
int main()
    {
    Mydelegate^ myhash = gcnew Mydelegate(&hash_val);

    System::Console::WriteLine("hash(L'a') = {0}", myhash(L'a'));
    System::Console::WriteLine("hash(L'b') = {0}", myhash(L'b'));
    return (0);
    }
```

```Output
hash(L'a') = 5
hash(L'b') = 22
```

## <a name="unary_delegate_noreturn"></a> unary_delegate_noreturn (STL/CLR)

La classe genereic descrive un solo argomento di delegato che restituisce **void**. Usarlo specificare un delegato in base al relativo tipo di argomento.

### <a name="syntax"></a>Sintassi

```cpp
generic<typename Arg>
    delegate void unary_delegate_noreturn(Arg);
```

#### <a name="parameters"></a>Parametri

*Arg*<br/>
Il tipo di argomento.

### <a name="remarks"></a>Note

Il delegato genereic descrive una solo argomento funzione che restituisce **void**.

Si noti che per:

`unary_delegare_noreturn<int> Fun1;`

`unary_delegare_noreturn<int> Fun2;`

i tipi `Fun1` e `Fun2` sono sinonimi, mentre per:

`delegate void Fun1(int);`

`delegate void Fun2(int);`

non sono dello stesso tipo.

### <a name="example"></a>Esempio

```cpp
// cliext_unary_delegate_noreturn.cpp
// compile with: /clr
#include <cliext/functional>

void hash_val(wchar_t val)
    {
    System::Console::WriteLine("hash({0}) = {1}",
       val, (val * 17 + 31) % 67);
    }

typedef cliext::unary_delegate_noreturn<wchar_t> Mydelegate;
int main()
    {
    Mydelegate^ myhash = gcnew Mydelegate(&hash_val);

    myhash(L'a');
    myhash(L'b');
    return (0);
    }
```

```Output
hash(a) = 5
hash(b) = 22
```

## <a name="unary_negate"></a> unary_negate (STL/CLR)

La classe modello descrive un funtore che, quando viene chiamato, restituisce l'operatore logico non del relativo stored funtore di un solo argomento. Usarlo specificare un oggetto funzione in termini del funtore stored.

### <a name="syntax"></a>Sintassi

```cpp
template<typename Fun>
    ref class unary_negate
    { // wrap operator()
public:
    typedef Fun stored_function_type;
    typedef typename Fun::argument_type argument_type;
    typedef bool result_type;
    typedef Microsoft::VisualC::StlClr::UnaryDelegate<
        argument_type, result_type>
        delegate_type;

    unary_negate(Fun% functor);
    unary_negate(unary_negate<Fun>% right);

    result_type operator()(argument_type left);
    operator delegate_type^();
    };
```

#### <a name="parameters"></a>Parametri

*Fun*<br/>
Il tipo del funtore stored.

### <a name="member-functions"></a>Funzioni membro

|Definizione dei tipi|Descrizione|
|---------------------|-----------------|
|argument_type|Il tipo dell'argomento funtore.|
|delegate_type|Il tipo del delegato generico.|
|result_type|Il tipo del risultato funtore.|

|Member|Descrizione|
|------------|-----------------|
|unary_negate|Costruisce il funtore.|

|Operatore|Descrizione|
|--------------|-----------------|
|operator()|Calcola la funzione desiderata.|
|delegate_type^|Il funtore a un delegato viene eseguito il cast.|

### <a name="remarks"></a>Note

La classe modello descrive un funtore solo argomento che archivia un altro funtore solo argomento. Definisce l'operatore membro `operator()` restituisce in modo che, quando l'oggetto viene chiamato come una funzione, la logica non del funtore stored chiamato con l'argomento.

È anche possibile passare l'oggetto come argomento di funzione il cui tipo è `delegate_type^` e verrà convertito in modo appropriato.

### <a name="example"></a>Esempio

```cpp
// cliext_unary_negate.cpp
// compile with: /clr
#include <cliext/algorithm>
#include <cliext/functional>
#include <cliext/vector>

typedef cliext::vector<int> Myvector;
int main()
    {
    Myvector c1;
    c1.push_back(4);
    c1.push_back(0);
    Myvector c3(2, 0);

// display initial contents " 4 0"
    for each (int elem in c1)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display
    cliext::logical_not<int> not_op;

    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::unary_negate<cliext::logical_not<int> >(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();

// transform and display with function
    cliext::transform(c1.begin(), c1.begin() + 2, c3.begin(),
        cliext::not1(not_op));
    for each (int elem in c3)
        System::Console::Write(" {0}", elem);
    System::Console::WriteLine();
    return (0);
    }
```

```Output
4 0
1 0
1 0
```