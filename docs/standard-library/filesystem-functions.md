---
title: Funzioni &lt;filesystem&gt;
ms.date: 03/27/2019
f1_keywords:
- FILESYSTEM/std::experimental::filesystem::absolute
- FILESYSTEM/std::experimental::filesystem::canonical
- FILESYSTEM/std::experimental::filesystem::copy
- FILESYSTEM/std::experimental::filesystem::copy_file
- FILESYSTEM/std::experimental::filesystem::copy_symlink
- FILESYSTEM/std::experimental::filesystem::create_directories
- FILESYSTEM/std::experimental::filesystem::create_directory
- FILESYSTEM/std::experimental::filesystem::create_directory_symlink
- FILESYSTEM/std::experimental::filesystem::create_hard_link
- FILESYSTEM/std::experimental::filesystem::create_symlink
- FILESYSTEM/std::experimental::filesystem::current_path
- FILESYSTEM/std::experimental::filesystem::equivalent
- FILESYSTEM/std::experimental::filesystem::exists
- FILESYSTEM/std::experimental::filesystem::file_size
- FILESYSTEM/std::experimental::filesystem::hard_link_count
- FILESYSTEM/std::experimental::filesystem::hash_value
- FILESYSTEM/std::experimental::filesystem::is_block_file
- FILESYSTEM/std::experimental::filesystem::is_character_file
- FILESYSTEM/std::experimental::filesystem::is_directory
- FILESYSTEM/std::experimental::filesystem::is_empty
- FILESYSTEM/std::experimental::filesystem::is_fifo
- FILESYSTEM/std::experimental::filesystem::is_other
- FILESYSTEM/std::experimental::filesystem::is_regular_file
- FILESYSTEM/std::experimental::filesystem::is_socket
- FILESYSTEM/std::experimental::filesystem::is_symlink
- FILESYSTEM/std::experimental::filesystem::last_write_time
- FILESYSTEM/std::experimental::filesystem::permissions
- FILESYSTEM/std::experimental::filesystem::read_symlink
- FILESYSTEM/std::experimental::filesystem::remove
- FILESYSTEM/std::experimental::filesystem::remove_all
- FILESYSTEM/std::experimental::filesystem::rename
- FILESYSTEM/std::experimental::filesystem::resize_file
- FILESYSTEM/std::experimental::filesystem::space
- FILESYSTEM/std::experimental::filesystem::status
- FILESYSTEM/std::experimental::filesystem::status_known
- FILESYSTEM/std::experimental::filesystem::swap
- FILESYSTEM/std::experimental::filesystem::symlink_status
- FILESYSTEM/std::experimental::filesystem::system_complete
- FILESYSTEM/std::experimental::filesystem::temp_directory_path
- FILESYSTEM/std::experimental::filesystem::u8path
ms.assetid: be3cb821-4728-4d47-ab78-858fa8aa5045
helpviewer_keywords:
- std::experimental::filesystem::absolute
- std::experimental::filesystem::canonical
- std::experimental::filesystem::copy
- std::experimental::filesystem::copy_file
- std::experimental::filesystem::copy_symlink
- std::experimental::filesystem::create_directories
- std::experimental::filesystem::create_directory
- std::experimental::filesystem::create_directory_symlink
- std::experimental::filesystem::create_hard_link
- std::experimental::filesystem::create_symlink
- std::experimental::filesystem::current_path
- std::experimental::filesystem::equivalent
- std::experimental::filesystem::exists
- std::experimental::filesystem::file_size
- std::experimental::filesystem::hard_link_count
- std::experimental::filesystem::hash_value
- std::experimental::filesystem::is_block_file
- std::experimental::filesystem::is_character_file
- std::experimental::filesystem::is_directory
- std::experimental::filesystem::is_empty
- std::experimental::filesystem::is_fifo
- std::experimental::filesystem::is_other
- std::experimental::filesystem::is_regular_file
- std::experimental::filesystem::is_socket
- std::experimental::filesystem::is_symlink
- std::experimental::filesystem::last_write_time
- std::experimental::filesystem::permissions
- std::experimental::filesystem::read_symlink
- std::experimental::filesystem::remove
- std::experimental::filesystem::remove_all
- std::experimental::filesystem::rename
- std::experimental::filesystem::resize_file
- std::experimental::filesystem::space
- std::experimental::filesystem::status
- std::experimental::filesystem::status_known
- std::experimental::filesystem::swap
- std::experimental::filesystem::symlink_status
- std::experimental::filesystem::system_complete
- std::experimental::filesystem::temp_directory_path
- std::experimental::filesystem::u8path
ms.openlocfilehash: f1b48ed6f533d4ccb5f9ef5e6dbcbd6e5cc4f7a1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81332046"
---
# <a name="ltfilesystemgt-functions"></a>Funzioni &lt;filesystem&gt;

Queste funzioni libere nel [ \<file system](../standard-library/filesystem.md)>'intestazione eseguono operazioni di modifica e query su percorsi, file, collegamenti simbolici, directory e volumi. Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

## <a name="absolute"></a><a name="absolute"></a>Assoluto

```cpp
path absolute(const path& pval, const path& base = current_path());
```

La funzione restituisce il nome di percorso assoluto `base`corrispondente a *pval* rispetto al nome percorso :

1. Se `pval.has_root_name() && pval.has_root_directory()` la funzione restituisce *pval*.

1. Se `pval.has_root_name() && !pval.has_root_directory()` la `pval.root_name()`  /  `absolute(base).root_directory()`  /  `absolute(base).relative_path()`  /  `pval.relative_path()`funzione restituisce .

1. Se `!pval.has_root_name() && pval.has_root_directory()` la `absolute(base).root_name()`  / funzione restituisce *pval*.

1. Se `!pval.has_root_name() && !pval.has_root_directory()` la `absolute(base)`  / funzione restituisce *pval*.

## <a name="begin"></a><a name="begin"></a>Iniziare

```cpp
const directory_iterator& begin(const directory_iterator& iter) noexcept;
const recursive_directory_iterator&
    begin(const recursive_directory_iterator& iter) noexcept;
```

Entrambe le funzioni restituiscono *iter*.

## <a name="canonical"></a><a name="canonical"></a>Canonico

```cpp
path canonical(const path& pval, const path& base = current_path());
path canonical(const path& pval, error_code& ec);
path canonical(const path& pval, const path& base, error_code& ec);
```

Tutte le funzioni formano `pabs = absolute(pval, base)` un `pabs = absolute(pval)` nome di percorso assoluto (o per l'overload senza parametro di base), quindi ridurlo a una forma canonica nella seguente sequenza di passaggi:

1. Ogni componente `X` di `is_symlink(X)` tracciato per `read_symlink(X)`il quale è **true** viene sostituito da .

1. Ogni componente `.` di percorso (punto è la directory corrente stabilita dai componenti di percorso precedenti) viene rimosso.

1. Ogni coppia di `X` / `..` componenti di percorso (dot-dot è la directory padre stabilita dai componenti di percorso precedenti) viene rimossa.

La funzione `pabs`restituisce quindi .

## <a name="copy"></a><a name="copy"></a>Copia

```cpp
void copy(const path& from, const path& to);
void copy(const path& from, const path& to, error_code& ec) noexcept;
void copy(const path& from, const path& to, copy_options opts);
void copy(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

Tutte le funzioni eventualmente copiano o collegano uno o più file `copy_options::none` *da* a *sotto* il controllo di *opts*, che viene preso come per gli overload senza parametro *opts* . *opts* deve contenere al massimo uno dei:

- `skip_existing`, `overwrite_existing` o `update_existing`

- `copy_symlinks` o `skip_symlinks`

- `directories_only`, `create_symlinks` o `create_hard_links`

Le funzioni determinano `f` innanzitutto `t` i valori file_status per *from* e for *to*:

- se `opts & (copy_options::create_symlinks | copy_options::skip_symlinks)`, chiamando`symlink_status`

- in caso contrario, chiamando`status`

- In caso contrario, segnalare un errore.

Se `!exists(f) || equivalent(f, t) || is_other(f) || is_other(t) || is_directory(f)&& is_regular_file(t)`, quindi segnalano un errore (e non fanno altro).

In caso `is_symlink(f)` contrario, se:

- Se `options & copy_options::skip_symlinks`, quindi non fare nulla.

- In caso `!exists(t)&& options & copy_options::copy_symlinks`contrario, if , quindi `copy_symlink(from, to, opts)`.

- In caso contrario, segnalare un errore.

In caso `is_regular_file(f)`contrario, se , quindi:

- Se `opts & copy_options::directories_only`, quindi non fare nulla.

- In caso `opts & copy_options::create_symlinks`contrario, if , quindi `create_symlink(to, from)`.

- In caso `opts & copy_options::create_hard_links`contrario, if , quindi `create_hard_link(to, from)`.

- In caso `is_directory(f)`contrario, if , quindi `copy_file(from, to`  /  `from.filename(), opts)`.

- In caso contrario, `copy_file(from, to, opts)`.

In caso `is_directory(f) && (opts & copy_options::recursive || !opts)`contrario, se , quindi:

```cpp
if (!exists(t))
{  // copy directory contents recursively
    create_directory(to, from, ec);

    for (directory_iterator next(from), end; ec == error_code() && next != end; ++next)
    {
        copy(next->path(), to / next->path().filename(), opts, ec);
    }
}
```

In caso contrario, non eseguire alcuna azione.

## <a name="copy_file"></a><a name="copy_file"></a>copy_file

```cpp
bool copy_file(const path& from, const path& to);
bool copy_file(const path& from, const path& to, error_code& ec) noexcept;
bool copy_file(const path& from, const path& to, copy_options opts);
bool copy_file(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

Tutte le funzioni eventualmente copiare il file *da* *a a* sotto il controllo di *opts*, che viene preso come `copy_options::none` per gli overload senza *opts* parametro. *opts* deve contenere `skip_existing`al `overwrite_existing`massimo `update_existing`uno dei , , o .

Se `exists(to) && !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options::update_existing))`, segnala come errore che indica che il file esiste già.

In caso `!exists(to) || opts & copy_options::overwrite_existing || opts & copy_options::update_existing&& last_write_time(to) < last_write_time(from) || !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options:update_existing))`contrario, se , provare a copiare il contenuto e gli attributi del file *dal* file *in*. Segnalare come errore se il tentativo di copia non riesce.

Le funzioni restituiscono **true** se la copia viene tentata e ha esito positivo, in caso contrario **false**.

## <a name="copy_symlink"></a><a name="copy_symlink"></a>copy_symlink

```cpp
void copy_symlink(const path& from, const path& to);
void copy_symlink(const path& from, const path& to, error_code& ec) noexcept;
```

Se `is_directory(from)`, la `create_directory_symlink(from, to)`funzione chiama . In caso `create_symlink(from, to)`contrario, chiama .

## <a name="create_directories"></a><a name="create_directories"></a>create_directories

```cpp
bool create_directories(const path& pval);
bool create_directories(const path& pval, error_code& ec) noexcept;
```

Per un nome di\/\/percorso, ad esempio b\/c, la funzione crea le\/directory\/a e b in base alle esigenze in modo da poter creare la directory a b c in base alle esigenze. Restituisce **true** solo se crea effettivamente la directory *pval*.

## <a name="create_directory"></a><a name="create_directory"></a>create_directory

```cpp
bool create_directory(const path& pval);

bool create_directory(const path& pval, error_code& ec) noexcept;
bool create_directory(const path& pval, const path& attr);
bool create_directory(const path& pval, const path& attr, error_code& ec) noexcept;
```

La funzione crea la directory *pval* in base alle esigenze. Restituisce true solo se crea effettivamente la directory *pval*, nel qual caso `perms::all` copia le autorizzazioni dal file esistente *attr*o utilizza per gli overload senza parametro *attr* .

## <a name="create_directory_symlink"></a><a name="create_directory_symlink"></a>create_directory_symlink

```cpp
void create_directory_symlink(const path& to, const path& link);
void create_directory_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea un collegamento come collegamento simbolico alla directory *a*.

## <a name="create_hard_link"></a><a name="create_hard_link"></a>create_hard_link

```cpp
void create_hard_link(const path& to,  const path& link);
void create_hard_link(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea un collegamento come collegamento rigido alla directory o al file *di*.

## <a name="create_symlink"></a><a name="create_symlink"></a>create_symlink

```cpp
void create_symlink(const path& to, const path& link);

void create_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea *un collegamento* come collegamento simbolico al file *a*.

## <a name="current_path"></a><a name="current_path"></a>current_path

```cpp
path current_path();
path current_path(error_code& ec);
void current_path(const path& pval);
void current_path(const path& pval, error_code& ec) noexcept;
```

Le funzioni senza parametro *pval* restituiscono il percorso della directory corrente. Le funzioni rimanenti impostano la directory corrente su *pval*.

## <a name="end"></a><a name="end"></a>Fine

```cpp
directory_iterator& end(const directory_iterator& iter) noexcept;
recursive_directory_iterator& end(const recursive_directory_iterator& iter) noexcept;
```

La prima `directory_iterator()` funzione restituisce e la seconda la funzione restituisce`recursive_directory_iterator()`

## <a name="equivalent"></a><a name="equivalent"></a>Equivalente

```cpp
bool equivalent(const path& left, const path& right);
bool equivalent(const path& left, const path& right, error_code& ec) noexcept;
```

Le funzioni restituiscono **true** solo se *left* e *right* scelgono la stessa entità del file system.

## <a name="exists"></a><a name="exists"></a>Esiste

```cpp
bool exists(file_status stat) noexcept;
bool exists(const path& pval);
bool exists(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `status_known && stat.type() != file_not_found`. La seconda e `exists(status(pval))`la terza funzione restituiscono .

## <a name="file_size"></a><a name="file_size"></a>file_size

```cpp
uintmax_t file_size(const path& pval);
uintmax_t file_size(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono la dimensione in byte del `exists(pval) && is_regular_file(pval)` file scelto da *pval*, se e la dimensione del file può essere determinata. In caso contrario, `uintmax_t(-1)`segnalano un errore e restituiscono .

## <a name="hard_link_count"></a><a name="hard_link_count"></a>hard_link_count

```cpp
uintmax_t hard_link_count(const path& pval);
uintmax_t hard_link_count(const path& pval, error_code& ec) noexcept;
```

La funzione restituisce il numero di \-collegamenti fissi per *pval*o 1 se si verifica un errore.

## <a name="hash_value"></a><a name="hash_value"></a>hash_value

```cpp
size_t hash_value(const path& pval) noexcept;
```

La funzione restituisce `pval.native()`un valore hash per .

## <a name="is_block_file"></a><a name="is_block_file"></a>is_block_file

```cpp
bool is_block_file(file_status stat) noexcept;
bool is_block_file(const path& pval);
bool is_block_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::block`. Le funzioni `is_block_file(status(pval))`rimanenti restituiscono .

## <a name="is_character_file"></a><a name="is_character_file"></a>is_character_file

```cpp
bool is_character_file(file_status stat) noexcept;
bool is_character_file(const path& pval);
bool is_character_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::character`. Le funzioni `is_character_file(status(pval))`rimanenti restituiscono .

## <a name="is_directory"></a><a name="is_directory"></a>is_directory

```cpp
bool is_directory(file_status stat) noexcept;
bool is_directory(const path& pval);
bool is_directory(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::directory`. Le funzioni `is_directory_file(status(pval))`rimanenti restituiscono .

## <a name="is_empty"></a><a name="is_empty"></a>is_empty

```cpp
bool is_empty(file_status stat) noexcept;
bool is_empty(const path& pval);
bool is_empty(const path& pval, error_code& ec) noexcept;
```

Se `is_directory(pval)`, la `directory_iterator(pval) == directory_iterator()`funzione restituisce ; in caso `file_size(pval) == 0`contrario restituisce .

## <a name="is_fifo"></a><a name="is_fifo"></a>is_fifo

```cpp
bool is_fifo(file_status stat) noexcept;
bool is_fifo(const path& pval);
bool is_fifo(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::fifo`. Le funzioni `is_fifo(status(pval))`rimanenti restituiscono .

## <a name="is_other"></a><a name="is_other"></a>is_other

```cpp
bool is_other(file_status stat) noexcept;
bool is_other(const path& pval);
bool is_other(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::other`. Le funzioni `is_other(status(pval))`rimanenti restituiscono .

## <a name="is_regular_file"></a><a name="is_regular_file"></a>is_regular_file

```cpp
bool is_regular_file(file_status stat) noexcept;
bool is_regular_file(const path& pval);
bool is_regular_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::regular`. Le funzioni `is_regular_file(status(pval))`rimanenti restituiscono .

## <a name="is_socket"></a><a name="is_socket"></a>is_socket

```cpp
bool is_socket(file_status stat) noexcept;
bool is_socket(const path& pval);
bool is_socket(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::socket`. Le funzioni `is_socket(status(pval))`rimanenti restituiscono .

## <a name="is_symlink"></a><a name="is_symlink"></a>is_symlink

```cpp
bool is_symlink(file_status stat) noexcept;
bool is_symlink(const path& pval);
bool is_symlink(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::symlink`. Le funzioni `is_symlink(status(pval))`rimanenti restituiscono .

## <a name="last_write_time"></a><a name="last_write_time"></a>last_write_time

```cpp
file_time_type last_write_time(const path& pval);
file_time_type last_write_time(const path& pval, error_code& ec) noexcept;
void last_write_time(const path& pval, file_time_type new_time);
void last_write_time(const path& pval, file_time_type new_time, error_code& ec) noexcept;
```

Le prime due funzioni restituiscono l'ora dell'ultima modifica dei dati per *pval*o `file_time_type(-1)` se si verifica un errore. Le ultime due funzioni impostano l'ora dell'ultima modifica dei dati per *pval* su *new_time*.

## <a name="permissions"></a><a name="permissions"></a>Autorizzazioni

```cpp
void permissions(const path& pval, perms mask);
void permissions(const path& pval, perms mask, error_code& ec) noexcept;
```

Le funzioni impostano le autorizzazioni per il `mask & perms::mask` percorso `perms & (perms::add_perms | perms::remove_perms)`scelto da *pval* su sotto il controllo di . *maschera* deve contenere `perms::add_perms` al `perms::remove_perms`massimo uno di e .

Se `mask & perms::add_perms`, le funzioni `status(pval).permissions() | mask & perms::mask`impostano le autorizzazioni su . In caso `mask & perms::remove_perms`contrario, se `status(pval).permissions() & ~(mask & perms::mask)`, le funzioni impostano le autorizzazioni su . In caso contrario, `mask & perms::mask`le funzioni impostano le autorizzazioni su .

## <a name="proximate"></a><a name="proximate"></a>Prossima

```cpp
path proximate(const path& p, error_code& ec);
path proximate(const path& p, const path& base = current_path());
path proximate(const path& p, const path& base, error_code& ec);
```

## <a name="read_symlink"></a><a name="read_symlink"></a>read_symlink

```cpp
path read_symlink(const path& pval);
path read_symlink(const path& pval, error_code& ec);
```

Le funzioni segnalano `path()` un `!is_symlink(pval)`errore e restituiscono se . In caso contrario, le funzioni restituiscono un oggetto di tipo `path` che contiene il collegamento simbolico.

## <a name="relative"></a><a name="relative"></a>Relativo

```cpp
path relative(const path& p, error_code& ec);
path relative(const path& p, const path& base = current_path());
path relative(const path& p, const path& base, error_code& ec);
```

## <a name="remove"></a><a name="remove"></a>Rimuovere

```cpp
bool remove(const path& pval);
bool remove(const path& pval, error_code& ec) noexcept;
```

Le funzioni **true** restituiscono `exists(symlink_status(pval))` true solo se e il file viene rimosso correttamente. Un collegamento simbolico viene rimosso, non il file scelto.

## <a name="remove_all"></a><a name="remove_all"></a>remove_all

```cpp
uintmax_t remove_all(const path& pval);
uintmax_t remove_all(const path& pval, error_code& ec) noexcept;
```

Se *pval* è una directory, le funzioni ricorrono in modo ricorsivo rimuovono tutte le voci di directory, quindi la voce stessa. In caso contrario, le funzioni chiamano `remove`. Restituiscono un conteggio di tutti gli elementi rimossi correttamente.

## <a name="rename"></a><a name="rename"></a>Rinominare

```cpp
void rename(const path& from, const path& to);
void rename(const path& from, const path& to, error_code& ec) noexcept;
```

Le funzioni rinominano *da* a *in .* Un collegamento simbolico viene rinominato, non il file che sceglie.

## <a name="resize_file"></a><a name="resize_file"></a>resize_file

```cpp
void resize(const path& pval, uintmax_t size);
void resize(const path& pval, uintmax_t size, error_code& ec) noexcept;
```

Le funzioni alterano la dimensione di un file in modo tale che`file_size(pval) == size`

## <a name="space"></a><a name="space"></a>Spazio

```cpp
space_info space(const path& pval);
space_info space(const path& pval, error_code& ec) noexcept;
```

La funzione restituisce informazioni sul volume scelto da `space_info` *pval*, in una struttura di tipo . La struttura `uintmax_t(-1)` contiene per qualsiasi valore che non può essere determinato.

## <a name="status"></a><a name="status"></a>Stato

```cpp
file_status status(const path& pval);
file_status status(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono lo stato del nome del percorso, il tipo di file e le autorizzazioni, associati a *pval*. Un collegamento simbolico non è di per sé testato, ma il file che sceglie.

## <a name="status_known"></a><a name="status_known"></a>status_known

```cpp
bool status_known(file_status stat) noexcept;
```

La funzione restituisce`stat.type() != file_type::none`

## <a name="swap"></a><a name="swap"></a>Swap

```cpp
void swap(path& left, path& right) noexcept;
```

La funzione scambia il contenuto di *left* e *right*.

## <a name="symlink_status"></a><a name="symlink_status"></a>symlink_status

```cpp
file_status symlink_status(const path& pval);
file_status symlink_status(const path& pval, erroxr_code& ec) noexcept;
```

Le funzioni restituiscono lo stato del collegamento simbolico nomepercorso, il tipo di file e le autorizzazioni, associati a *pval*. Le funzioni si comportano allo stesso `status(pval)` modo, ad eccezione del fatto che un collegamento simbolico viene testato di per sé, non il file scelto.

## <a name="system_complete"></a><a name="system_complete"></a>system_complete

```cpp
path system_complete(const path& pval);
path system_complete(const path& pval, error_code& ec);
```

Le funzioni restituiscono un percorso assoluto che tiene conto, se necessario, della directory corrente associata con il nome radice. \(Per POSIX, le `absolute(pval)`funzioni restituiscono .\)

## <a name="temp_directory_path"></a><a name="temp_directory_path"></a>temp_directory_path

```cpp
path temp_directory_path();
path temp_directory_path(error_code& ec);
```

Le funzioni restituiscono un percorso per una directory appropriata per contenere i file temporanei.

## <a name="u8path"></a><a name="u8path"></a>u8path

```cpp
template <class Source>
path u8path(const Source& source);

template <class InIt>
path u8path(InIt first, InIt last);
```

La prima funzione si comporta `path(source)` allo stesso modo e la `path(first, last)` seconda funzione si comporta allo stesso modo, ad eccezione del fatto che l'origine scelta in ogni caso viene considerata come una sequenza di elementi char codificati come UTF-8, qualunque sia il file system.

## <a name="weakly_canonical"></a><a name="weakly_canonical"></a>weakly_canonical

```cpp
path weakly_canonical(const path& p);
path weakly_canonical(const path& p, error_code& ec);
```
