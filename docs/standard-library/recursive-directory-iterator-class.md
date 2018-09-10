---
title: Classe recursive_directory_iterator | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- filesystem/std::tr2::sys::recursive_directory_iterator
dev_langs:
- C++
ms.assetid: 79a061bd-5b64-404c-97e8-749c888c2ced
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 82df045c5a41767093e690ec35ffeb3d81032474
ms.sourcegitcommit: 761c5f7c506915f5a62ef3847714f43e9b815352
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/07/2018
ms.locfileid: "44110656"
---
# <a name="recursivedirectoryiterator-class"></a>Classe recursive_directory_iterator

Descrive un iteratore di input sequenziato attraverso i nomi di file in una directory, possibilmente decrescente in modo ricorsivo le sottodirectory. Per un iteratore `X`, l'espressione `*X` restituisce un oggetto della classe `directory_entry` che include il nome del file e qualsiasi valore conosce sul relativo stato.

Per altre informazioni ed esempi di codice, vedere [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++)).

## <a name="syntax"></a>Sintassi

```cpp
class recursive_directory_iterator;
```

## <a name="remarks"></a>Note

La classe modello archivia:

1. un oggetto di tipo `stack<pair<directory_iterator, path>>`, denominato `mystack` qui ai fini dell'esempio a scopo illustrativo, che rappresenta l'annidamento delle directory da sequenziare

1. un oggetto di tipo `directory_entry` chiamato `myentry` qui, che rappresenta il nome del file corrente nella sequenza di directory

1. un oggetto di tipo `bool`, denominato `no_push` qui, che registra se la discesa ricorsiva nelle sottodirectory è disabilitata

1. un oggetto di tipo `directory_options`, denominato `myoptions` qui, che registra le opzioni stabilite in fase di costruzione

Un oggetto costruito predefinito di tipo `recursive_directory_entry` dispone di un iteratore di fine sequenza in `mystack.top().first` e rappresenta l'iteratore di fine sequenza. Si consideri ad esempio la directory `abc` con le voci `def` (directory), `def/ghi`, e `jkl`, il codice:

```cpp
for (recursive_directory_iterator next(path("abc")), end; next != end; ++next)
    visit(next->path());
```

chiamerà visit con gli argomenti `path("abc/def/ghi")` e `path("abc/jkl")`. È possibile qualificare la sequenziazione attraverso il sottoalbero della directory in due modi:

1. Un collegamento simbolico alla directory verrà analizzato solo se si crea una `recursive_directory_iterator` con un `directory_options` argomento il cui valore è `directory_options::follow_directory_symlink`.

1. Se si chiama `disable_recursion_pending` una directory successiva rilevata durante un incremento non verrà analizzata in modo ricorsivo.

### <a name="constructors"></a>Costruttori

|Costruttore|Descrizione|
|-|-|
|[recursive_directory_iterator](#recursive_directory_iterator)|Costruisce un oggetto `recursive_directory_iterator`.|

### <a name="member-functions"></a>Funzioni membro

|Funzione membro|Descrizione|
|-|-|
|[profondità](#depth)|Restituisce `mystack.size() - 1`, quindi `pval` è a profondità zero.|
|[disable_recursion_pending](#disable_recursion_pending)|Gli archivi **true** in `no_push`.|
|[Incremento](#increment)|Passa al nome del file successivo nella sequenza.|
|[options](#options)|Restituisce `myoptions`.|
|[pop](#pop)|Restituisce l'oggetto successivo.|
|[recursion_pending](#recursion_pending)|Restituisce `!no_push`.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator!=](#op_neq)|Restituisce `!(*this == right)`.|
|[operator=](#op_as)|Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.|
|[operator==](#op_eq)|Restituisce **true** solo se entrambi `*this` e *a destra* sono iteratori di fine sequenza o entrambi sono non fine-di--iteratori di sequenza.|
|[operator*](#op_multiply)|Restituisce `myentry`.|
|[operator->](#op_cast)|Restituisce `&**this`.|
|[operator++](#op_increment)|Incrementa la `recursive_directory_iterator`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio dei nomi:** std::tr2::sys

## <a name="depth"></a> recursive_directory_iterator:: Depth

Restituisce `mystack.size() - 1`, quindi `pval` è a profondità zero.

```cpp
int depth() const;
```

## <a name="disable_recursion_pending"></a> recursive_directory_iterator:: disable_recursion_pending

Gli archivi **true** in `no_push`.

```cpp
void disable_recursion_pending();
```

## <a name="increment"></a> recursive_directory_iterator:: Increment

Passa al nome del file successivo nella sequenza.

```cpp
recursive_directory_iterator& increment(error_code& ec) noexcept;
```

### <a name="parameters"></a>Parametri

*CE*<br/>
Codice di errore specificato.

### <a name="remarks"></a>Note

La funzione prova ad avanzare al nome file successivo nella sequenza annidata. Se ha esito positivo, archivia il nome del file in `myentry`; in caso contrario, produce un iteratore di fine sequenza.

## <a name="op_neq"></a> recursive_directory_iterator:: operator! =

Restituisce `!(*this == right)`.

```cpp
bool operator!=(const recursive_directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) per il confronto.

## <a name="op_as"></a> recursive_directory_iterator:: operator =

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

```cpp
recursive_directory_iterator& operator=(const recursive_directory_iterator&) = default;
recursive_directory_iterator& operator=(recursive_directory_iterator&&) noexcept = default;
```

### <a name="parameters"></a>Parametri

*recursive_directory_iterator*<br/>
Il [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) copiata nel `recursive_directory_iterator`.

## <a name="op_eq"></a> recursive_directory_iterator:: operator = =

Restituisce **true** solo se entrambi `*this` e *a destra* sono iteratori di fine sequenza o entrambi sono non fine-di--iteratori di sequenza.

```cpp
bool operator==(const recursive_directory_iterator& right) const;
```

### <a name="parameters"></a>Parametri

*right*<br/>
Il [recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md) per il confronto.

## <a name="op_multiply"></a> recursive_directory_iterator:: operator *

Restituisce `myentry`.

```cpp
const directory_entry& operator*() const;
```

## <a name="op_cast"></a> recursive_directory_iterator:: operator ->

Restituisce `&**this`.

```cpp
const directory_entry * operator->() const;
```

## <a name="op_increment"></a> recursive_directory_iterator:: operator + +

Incrementa la `recursive_directory_iterator`.

```cpp
recursive_directory_iterator& operator++();

recursive_directory_iterator& operator++(int);
```

### <a name="parameters"></a>Parametri

*int*<br/>
L'incremento specificato.

### <a name="remarks"></a>Note

La prima funzione membro chiama `increment()`, quindi restituisce `*this`. La seconda funzione membro esegue una copia dell'oggetto, le chiamate `increment()`, quindi restituisce la copia.

## <a name="options"></a> recursive_directory_iterator:: Options

Restituisce `myoptions`.

```cpp
directory_options options() const;
```

## <a name="pop"></a> recursive_directory_iterator:: POP

Restituisce l'oggetto successivo.

```cpp
void pop();
```

### <a name="remarks"></a>Note

Se `depth() == 0` l'oggetto diventa un iteratore di fine sequenza. In caso contrario, la funzione membro termina l'analisi della directory corrente (la più profonda) e riprende dalla profondità inferiore successiva.

## <a name="recursion_pending"></a> recursive_directory_iterator:: recursion_pending

Restituisce `!no_push`.

```cpp
bool recursion_pending() const;
```

## <a name="recursive_directory_iterator"></a> recursive_directory_iterator:: recursive_directory_iterator

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

*PVal*<br/>
Percorso specificato.

*error_code*<br/>
Il codice di errore specificato.

*OPTS*<br/>
Le opzioni di directory specificato.

*recursive_directory_iterator*<br/>
Oggetto `recursive_directory_iterator` di cui l'oggetto `recursive_directory_iterator` costruito deve essere una copia.

### <a name="remarks"></a>Note

Il primo costruttore produce un iteratore di fine sequenza. L'archivio di secondo e terzo costruttore **false** nelle `no_push` e `directory_options::none` nel `myoptions`, quindi provano ad aprire e leggere *pval* come una directory. Se ha esito positivo, i costruttori inizializzano `mystack` e `myentry` per designare il primo nome file non directory nella sequenza annidata; in caso contrario, producono un iteratore di fine sequenza.

Il quarto e quinto costruttore si comportano allo stesso come il secondo e terzo, ad eccezione del fatto che archiviano prima *opts* in `myoptions`. I costruttori impostati come predefiniti si comportano come previsto.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
[Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)<br/>
