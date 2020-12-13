---
description: 'Altre informazioni su: recursive_directory_iterator Class'
title: Classe recursive_directory_iterator
ms.date: 09/10/2018
f1_keywords:
- filesystem/std::tr2::sys::recursive_directory_iterator
ms.assetid: 79a061bd-5b64-404c-97e8-749c888c2ced
ms.openlocfilehash: b9b5909c62a745233362eeac1adb879c1585098c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97337905"
---
# <a name="recursive_directory_iterator-class"></a>Classe recursive_directory_iterator

Descrive un iteratore di input sequenziato attraverso i nomi file in una directory, possibilmente decrescente nelle sottodirectory in modo ricorsivo. Per un iteratore `X` , l'espressione `*X` restituisce un oggetto della classe `directory_entry` che esegue il wrapping del nome del file e qualsiasi elemento noto sullo stato.

Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

## <a name="syntax"></a>Sintassi

```cpp
class recursive_directory_iterator;
```

## <a name="remarks"></a>Osservazioni

Il modello di classe archivia:

1. oggetto di tipo `stack<pair<directory_iterator, path>>` , chiamato `mystack` qui per gli scopi di Exposition, che rappresenta il nidificato delle directory da sequenziare

1. oggetto di tipo `directory_entry` chiamato `myentry` qui, che rappresenta il nome di file corrente nella sequenza di directory

1. oggetto di tipo **`bool`** , chiamato `no_push` qui, che registra se la discesa ricorsiva nelle sottodirectory è disabilitata

1. oggetto di tipo `directory_options` , chiamato `myoptions` qui, che registra le opzioni stabilite in fase di costruzione

Un oggetto costruito predefinito di tipo `recursive_directory_entry` ha un iteratore di fine sequenza in corrispondenza di `mystack.top().first` e rappresenta l'iteratore di fine sequenza. Ad esempio, data la directory `abc` con le voci `def` (una directory), `def/ghi` e `jkl` , il codice:

```cpp
for (recursive_directory_iterator next(path("abc")), end; next != end; ++next)
    visit(next->path());
```

chiamerà Visit con gli argomenti `path("abc/def/ghi")` e `path("abc/jkl")` . È possibile qualificare la sequenziazione tramite un sottoalbero di directory in due modi:

1. Un collegamento simbolico di directory verrà analizzato solo se si costruisce un `recursive_directory_iterator` con un `directory_options` argomento il cui valore è `directory_options::follow_directory_symlink` .

1. Se si chiama `disable_recursion_pending` , una directory successiva rilevata durante un incremento non verrà analizzata in modo ricorsivo.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[recursive_directory_iterator](#recursive_directory_iterator)|Costruisce un oggetto `recursive_directory_iterator`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[profondità](#depth)|Restituisce `mystack.size() - 1` , quindi `pval` è a profondità zero.|
|[disable_recursion_pending](#disable_recursion_pending)|Archivia **`true`** in `no_push` .|
|[increment](#increment)|Passa al nome file successivo in sequenza.|
|[options](#options)|Restituisce `myoptions`.|
|[pop](#pop)|Restituisce l'oggetto successivo.|
|[recursion_pending](#recursion_pending)|Restituisce `!no_push`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operatore! =](#op_neq)|Restituisce `!(*this == right)`.|
|[operatore =](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|
|[operatore = =](#op_eq)|Restituisce **`true`** solo se sia **`*this`** che *right* sono iteratori di fine sequenza oppure non sono iteratori di fine sequenza.|
|[operatore](#op_multiply)|Restituisce `myentry`.|
|[operatore->](#op_cast)|Restituisce `&**this`.|
|[operatore + +](#op_increment)|Incrementa la `recursive_directory_iterator` .|

## <a name="requirements"></a>Requisiti

**Intestazione:**\<filesystem>

**Spazio dei nomi:** std::tr2::sys

## <a name="recursive_directory_iteratordepth"></a><a name="depth"></a> recursive_directory_iterator::d Epth

Restituisce `mystack.size() - 1` , quindi `pval` è a profondità zero.

```cpp
int depth() const;
```

## <a name="recursive_directory_iteratordisable_recursion_pending"></a><a name="disable_recursion_pending"></a> recursive_directory_iterator::d isable_recursion_pending

Archivia **`true`** in `no_push` .

```cpp
void disable_recursion_pending();
```

## <a name="recursive_directory_iteratorincrement"></a><a name="increment"></a> recursive_directory_iterator:: Increment

Passa al nome file successivo in sequenza.

```cpp
recursive_directory_iterator& increment(error_code& ec) noexcept;
```

### <a name="parameters"></a>Parametri

*EC*\
Codice di errore specificato.

### <a name="remarks"></a>Commenti

La funzione prova ad avanzare al nome file successivo nella sequenza annidata. Se ha esito positivo, archivia il nome del file in `myentry` ; in caso contrario, produce un iteratore di fine sequenza.

## <a name="recursive_directory_iteratoroperator"></a><a name="op_neq"></a> recursive_directory_iterator:: operator! =

Restituisce `!(*this == right)`.

```cpp
bool operator!=(const recursive_directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) per il confronto.

## <a name="recursive_directory_iteratoroperator"></a><a name="op_as"></a> recursive_directory_iterator:: operator =

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
recursive_directory_iterator& operator=(const recursive_directory_iterator&) = default;
recursive_directory_iterator& operator=(recursive_directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*recursive_directory_iterator*\
[Recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) copiato nell'oggetto `recursive_directory_iterator` .

## <a name="recursive_directory_iteratoroperator"></a><a name="op_eq"></a> recursive_directory_iterator:: operator = =

Restituisce **`true`** solo se sia **`*this`** che *right* sono iteratori di fine sequenza oppure non sono iteratori di fine sequenza.

```cpp
bool operator==(const recursive_directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*Ok*\
[Recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) per il confronto.

## <a name="recursive_directory_iteratoroperator"></a><a name="op_multiply"></a> recursive_directory_iterator:: operator *

Restituisce `myentry`.

```cpp
const directory_entry& operator*() const;
```

## <a name="recursive_directory_iteratoroperator-"></a><a name="op_cast"></a> recursive_directory_iterator:: operator->

Restituisce `&**this`.

```cpp
const directory_entry * operator->() const;
```

## <a name="recursive_directory_iteratoroperator"></a><a name="op_increment"></a> recursive_directory_iterator:: operator + +

Incrementa la `recursive_directory_iterator` .

```cpp
recursive_directory_iterator& operator++();

recursive_directory_iterator& operator++(int);
```

### <a name="parameters"></a>Parametri

*int*\
Incremento specificato.

### <a name="remarks"></a>Commenti

La prima funzione membro chiama `increment()` , quindi restituisce **`*this`** . La seconda funzione membro esegue una copia dell'oggetto, chiama `increment()` e quindi restituisce la copia.

## <a name="recursive_directory_iteratoroptions"></a><a name="options"></a> recursive_directory_iterator:: Options

Restituisce `myoptions`.

```cpp
directory_options options() const;
```

## <a name="recursive_directory_iteratorpop"></a><a name="pop"></a> recursive_directory_iterator::p op

Restituisce l'oggetto successivo.

```cpp
void pop();
```

### <a name="remarks"></a>Commenti

Se `depth() == 0` l'oggetto diventa un iteratore di fine sequenza. In caso contrario, la funzione membro termina l'analisi della directory corrente (la più profonda) e riprende dalla profondità inferiore successiva.

## <a name="recursive_directory_iteratorrecursion_pending"></a><a name="recursion_pending"></a> recursive_directory_iterator:: recursion_pending

Restituisce `!no_push`.

```cpp
bool recursion_pending() const;
```

## <a name="recursive_directory_iteratorrecursive_directory_iterator"></a><a name="recursive_directory_iterator"></a> recursive_directory_iterator:: recursive_directory_iterator

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

*Pval*\
Percorso specificato.

*error_code*\
Codice di errore specificato.

*opts*\
Opzioni di directory specificate.

*recursive_directory_iterator*\
Oggetto `recursive_directory_iterator` di cui l'oggetto `recursive_directory_iterator` costruito deve essere una copia.

### <a name="remarks"></a>Commenti

Il primo costruttore produce un iteratore di fine sequenza. Il secondo e il terzo costruttore archiviano **`false`** in `no_push` e `directory_options::none` in `myoptions` , quindi tentano di aprire e leggere *pval* come una directory. Se hanno esito positivo, inizializzano `mystack` e `myentry` per designare il primo nome file non di directory nella sequenza annidata; in caso contrario, producono un iteratore di fine sequenza.

Il quarto e il quinto costruttore si comportano allo stesso modo della seconda e della terza, ad eccezione del fatto che il primo archivio *opta* in `myoptions` . I costruttori impostati come predefiniti si comportano come previsto.

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)\
[File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++))
