---
title: Classe recursive_directory_iterator
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::tr2::sys::recursive_directory_iterator
ms.assetid: 79a061bd-5b64-404c-97e8-749c888c2ced
ms.openlocfilehash: a5200c030986ebbcfccb1eba2963e8317c879eb6
ms.sourcegitcommit: 590e488e51389066a4da4aa06d32d4c362c23393
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/21/2019
ms.locfileid: "72686797"
---
# <a name="recursive_directory_iterator-class"></a>Classe recursive_directory_iterator

Descrive un iteratore di input sequenziato attraverso i nomi file in una directory, possibilmente decrescente nelle sottodirectory in modo ricorsivo. Per un iteratore `X`, l'espressione `*X` restituisce un oggetto della classe `directory_entry` che esegue il wrapping del nome del file e qualsiasi elemento noto sullo stato.

Per altre informazioni ed esempi di codice, vedere [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++)).

## <a name="syntax"></a>Sintassi

```cpp
class recursive_directory_iterator;
```

## <a name="remarks"></a>Note

Il modello di classe archivia:

1. oggetto di tipo `stack<pair<directory_iterator, path>>`, denominato `mystack` qui ai fini di Exposition, che rappresenta il annidamento delle directory da sequenziare

1. oggetto di tipo `directory_entry` chiamato `myentry` qui, che rappresenta il nome di file corrente nella sequenza di directory

1. oggetto di tipo **bool**, denominato `no_push` qui, che registra se la discesa ricorsiva nelle sottodirectory è disabilitata

1. oggetto di tipo `directory_options`, denominato `myoptions` qui, che registra le opzioni stabilite in fase di costruzione

Un oggetto costruito predefinito di tipo `recursive_directory_entry` dispone di un iteratore di fine sequenza in `mystack.top().first` e rappresenta l'iteratore di fine sequenza. Ad esempio, data la directory `abc` con le voci `def` (una directory), `def/ghi` e `jkl`, il codice:

```cpp
for (recursive_directory_iterator next(path("abc")), end; next != end; ++next)
    visit(next->path());
```

chiamerà Visit con gli argomenti `path("abc/def/ghi")` e `path("abc/jkl")`. È possibile qualificare la sequenziazione tramite un sottoalbero di directory in due modi:

1. Un collegamento simbolico di directory verrà analizzato solo se si costruisce un `recursive_directory_iterator` con un argomento `directory_options` il cui valore è `directory_options::follow_directory_symlink`.

1. Se si chiama `disable_recursion_pending`, una directory successiva rilevata durante un incremento non verrà analizzata in modo ricorsivo.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[recursive_directory_iterator](#recursive_directory_iterator)|Costruisce un oggetto `recursive_directory_iterator`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[profondità](#depth)|Restituisce `mystack.size() - 1`, quindi `pval` è a profondità zero.|
|[disable_recursion_pending](#disable_recursion_pending)|Archivia **true** in `no_push`.|
|[incremento](#increment)|Passa al nome file successivo in sequenza.|
|[options](#options)|Restituisce `myoptions`.|
|[pop](#pop)|Restituisce l'oggetto successivo.|
|[recursion_pending](#recursion_pending)|Restituisce `!no_push`.|

### <a name="operators"></a>Operatori

|??|Descrizione|
|-|-|
|[operator!=](#op_neq)|Restituisce `!(*this == right)`.|
|[operator=](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|
|[operator==](#op_eq)|Restituisce **true** solo se sia `*this` che *right* sono iteratori di fine sequenza o se entrambi non sono iteratori di fine sequenza.|
|[operator*](#op_multiply)|Restituisce `myentry`.|
|[operator->](#op_cast)|Restituisce `&**this`.|
|[operator++](#op_increment)|Incrementa il `recursive_directory_iterator`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio dei nomi:** std::tr2::sys

## <a name="depth"></a>recursive_directory_iterator::d Epth

Restituisce `mystack.size() - 1`, quindi `pval` è a profondità zero.

```cpp
int depth() const;
```

## <a name="disable_recursion_pending"></a>recursive_directory_iterator::d isable_recursion_pending

Archivia **true** in `no_push`.

```cpp
void disable_recursion_pending();
```

## <a name="increment"></a>recursive_directory_iterator:: Increment

Passa al nome file successivo in sequenza.

```cpp
recursive_directory_iterator& increment(error_code& ec) noexcept;
```

### <a name="parameters"></a>Parametri

\ *EC*
Codice di errore specificato.

### <a name="remarks"></a>Note

La funzione prova ad avanzare al nome file successivo nella sequenza annidata. Se ha esito positivo, archivia il nome file in `myentry`; in caso contrario, produce un iteratore di fine sequenza.

## <a name="op_neq"></a>recursive_directory_iterator:: operator! =

Restituisce `!(*this == right)`.

```cpp
bool operator!=(const recursive_directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

\ a *destra*
[Recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) per il confronto.

## <a name="op_as"></a>recursive_directory_iterator:: operator =

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
recursive_directory_iterator& operator=(const recursive_directory_iterator&) = default;
recursive_directory_iterator& operator=(recursive_directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

\ *recursive_directory_iterator*
[Recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) copiato nell'`recursive_directory_iterator`.

## <a name="op_eq"></a>recursive_directory_iterator:: operator = =

Restituisce **true** solo se sia `*this` che *right* sono iteratori di fine sequenza o se entrambi non sono iteratori di fine sequenza.

```cpp
bool operator==(const recursive_directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

\ a *destra*
[Recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) per il confronto.

## <a name="op_multiply"></a>recursive_directory_iterator:: operator *

Restituisce `myentry`.

```cpp
const directory_entry& operator*() const;
```

## <a name="op_cast"></a>recursive_directory_iterator:: operator->

Restituisce `&**this`.

```cpp
const directory_entry * operator->() const;
```

## <a name="op_increment"></a>recursive_directory_iterator:: operator + +

Incrementa il `recursive_directory_iterator`.

```cpp
recursive_directory_iterator& operator++();

recursive_directory_iterator& operator++(int);
```

### <a name="parameters"></a>Parametri

*int* \
Incremento specificato.

### <a name="remarks"></a>Note

La prima funzione membro chiama `increment()`, quindi restituisce `*this`. La seconda funzione membro esegue una copia dell'oggetto, chiama `increment()`, quindi restituisce la copia.

## <a name="options"></a>recursive_directory_iterator:: Options

Restituisce `myoptions`.

```cpp
directory_options options() const;
```

## <a name="pop"></a>recursive_directory_iterator::p op

Restituisce l'oggetto successivo.

```cpp
void pop();
```

### <a name="remarks"></a>Note

Se `depth() == 0` l'oggetto diventa un iteratore di fine sequenza. In caso contrario, la funzione membro termina l'analisi della directory corrente (la più profonda) e riprende dalla profondità inferiore successiva.

## <a name="recursion_pending"></a>recursive_directory_iterator::recursion_pending

Restituisce `!no_push`.

```cpp
bool recursion_pending() const;
```

## <a name="recursive_directory_iterator"></a>recursive_directory_iterator::recursive_directory_iterator

Costruisce un oggetto `recursive_directory_iterator`.

```cpp
recursive_directory_iterator() noexcept;
explicit recursive_directory_iterator(const path& pval);

recursive_directory_iterator(const path& pval,
    error_code& ec) noexcept;
recursive_directory_iterator(const path& pval,
    directory_options opts);

recursive_directory_iterator(const path& pval,
    directory_options opts,
    error_code& ec) noexcept;
recursive_directory_iterator(const recursive_directory_iterator&) = default;
recursive_directory_iterator(recursive_directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

\ *pval*
Percorso specificato.

\ *error_code*
Codice di errore specificato.

*opta* \
Opzioni di directory specificate.

\ *recursive_directory_iterator*
Oggetto `recursive_directory_iterator` di cui l'oggetto `recursive_directory_iterator` costruito deve essere una copia.

### <a name="remarks"></a>Note

Il primo costruttore produce un iteratore di fine sequenza. Il secondo e il terzo costruttore archiviano **false** in `no_push` e `directory_options::none` in `myoptions`, quindi tentano di aprire e leggere *pval* come una directory. Se hanno esito positivo, inizializzano `mystack` e `myentry` per designare il primo nome file non di directory nella sequenza nidificata; in caso contrario, producono un iteratore di fine sequenza.

Il quarto e il quinto costruttore si comportano come il secondo e il terzo, ad eccezione del fatto che il primo archivio *sceglie* in `myoptions`. I costruttori impostati come predefiniti si comportano come previsto.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++))
