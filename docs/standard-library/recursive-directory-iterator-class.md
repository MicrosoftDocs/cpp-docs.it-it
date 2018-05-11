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
ms.openlocfilehash: cd876ec21379d59445b88bdc08a1c7b831cb94fa
ms.sourcegitcommit: 96cdc2da0d8c3783cc2ce03bd280a5430e1ac01d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/10/2018
---
# <a name="recursivedirectoryiterator-class"></a>Classe recursive_directory_iterator

Descrive un iteratore di input sequenziato attraverso i nomi file in una directory del file system. L'iteratore può anche accedere alle sottodirectory. Per un iteratore X, l'espressione *X restituisce un oggetto della classe directory_entry che esegue il wrapping di un nome file e tutto ciò che si conosce sul relativo stato.

Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

## <a name="syntax"></a>Sintassi

```cpp
class recursive_directory_iterator;
```

## <a name="remarks"></a>Note

La classe modello archivia:

1. oggetto di tipo stack<pair\<directory_iterator, path>>, denominato mystack in questo esempio a scopo illustrativo, che rappresenta l'annidamento delle directory da ordinare in sequenza

1. un oggetto di tipo directory_entry, denominato myentry in questo esempio, che rappresenta il nome di file corrente nella sequenza di directory

1. un oggetto di tipo bool, denominato no_push in questo esempio, che registra se la discesa ricorsiva nelle sottodirectory è disabilitata

1. un oggetto di tipo directory_options, denominato myoptions in questo esempio, che registra le opzioni stabilite in fase di costruzione

Un oggetto costruito predefinito di tipo recursive_directory_entry ha un iteratore di fine sequenza in corrispondenza di mystack.top().first e rappresenta l'iteratore di fine sequenza. Ad esempio, data la directory abc con le voci def (una directory), def/ghi e jkl, il codice:

```cpp
for (recursive_directory_iterator next(path("abc")), end; next != end; ++next)
    visit(next->path());
```

chiamerà visit con gli argomenti `path("abc/def/ghi") and path("abc/jkl").`È possibile qualificare la sequenziazione attraverso il sottoalbero della directory, in due modi:

1. Un collegamento simbolico alla directory verrà analizzato solo se si costruisce un metodo recursive_directory_iterator con un argomento directory_options il cui valore è directory_options::follow_directory_symlink.

1. Se si chiama disable_recursion_pending, una directory successiva rilevata durante un incremento non verrà analizzata in modo ricorsivo.

## <a name="recursivedirectoryiteratordepth"></a>recursive_directory_iterator::depth

```cpp
int depth() const;
```

Restituisce mystack.size() - 1, quindi vpal è a profondità zero.

## <a name="recursivedirectoryiteratordisablerecursionpending"></a>recursive_directory_iterator::disable_recursion_pending

```cpp
void disable_recursion_pending();
```

La funzione membro archivia true in no_push.

## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator!=

```cpp
bool operator!=(const recursive_directory_iterator& right) const;
```

L'operatore membro restituisce !(*this == right).

## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator=

```cpp
recursive_directory_iterator& operator=(const recursive_directory_iterator&) = default;
recursive_directory_iterator& operator=(recursive_directory_iterator&&) noexcept = default;
```

Gli operatori di assegnazione membro impostati come predefiniti si comportano come previsto.

## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator==

```cpp
bool operator==(const recursive_directory_iterator& right) const;
```

L'operatore membro restituisce true solo se entrambi *this e right sono iteratori di fine sequenza o se entrambi non lo sono.

## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator*

```cpp
const directory_entry& operator*() const;
```

L'operatore membro restituisce myentry.

## <a name="recursivedirectoryiteratoroperator-"></a>recursive_directory_iterator::operator->

```cpp
const directory_entry * operator->() const;
```

Restituisce &**this.

## <a name="recursivedirectoryiteratoroperator"></a>recursive_directory_iterator::operator++

```cpp
recursive_directory_iterator& operator++();

recursive_directory_iterator& operator++(int);
```

La prima funzione membro chiama increment() e quindi restituisce *this. La secondo funzione membro esegue una copia dell'oggetto, chiama increment() e quindi restituisce la copia.

## <a name="recursivedirectoryiteratoroptions"></a>recursive_directory_iterator::options

```cpp
directory_options options() const;
```

Restituisce myoptions.

## <a name="recursivedirectoryiteratorpop"></a>recursive_directory_iterator::pop

```cpp
void pop();
```

Se depth() == 0 l'oggetto diventa un iteratore di fine sequenza. In caso contrario, la funzione membro termina l'analisi della directory corrente (la più profonda) e riprende dalla profondità inferiore successiva.

## <a name="recursivedirectoryiteratorrecursionpending"></a>recursive_directory_iterator::recursion_pending

```cpp
bool recursion_pending() const;
```

Restituisce !no_push.

## <a name="recursivedirectoryiteratorrecursivedirectoryiterator"></a>recursive_directory_iterator::recursive_directory_iterator

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

Il primo costruttore produce un iteratore di fine sequenza. Il secondo e il terzo costruttore archiviano false in no_push e directory_options::none in myoptions, quindi provano ad aprire e leggere pval come una directory. Se l'operazione riesce, i costruttori inizializzano mystack e myentry per designare il primo nome file non nella directory nella sequenza annidata; in caso contrario, producono un iteratore di fine sequenza.

Il quarto e quinto costruttore si comportano esattamente come il secondo e terzo, ad eccezione del fatto che archiviano prima opts in myoptions. I costruttori impostati come predefiniti si comportano come previsto.

## <a name="recursivedirectoryiteratorincrement"></a>recursive_directory_iterator::increment

```cpp
recursive_directory_iterator& increment(error_code& ec) noexcept;
```

La funzione prova ad avanzare al nome file successivo nella sequenza annidata. Se l'esito è positivo, archivia questo nome file in myentry; in caso contrario, produce un iteratore di fine sequenza.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<filesystem >

**Spazio dei nomi:** std::tr2::sys

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<filesystem>](../standard-library/filesystem.md)<br/>
[Esplorazione del file system (C++)](../standard-library/file-system-navigation.md)<br/>
