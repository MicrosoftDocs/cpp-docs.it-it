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
ms.openlocfilehash: 11a1857052dd7c242993e8a19afe26aae3c97c06
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405105"
---
# <a name="ltfilesystemgt-functions"></a>Funzioni &lt;filesystem&gt;

Queste funzioni disponibili nell'intestazione [\<filesystem>](../standard-library/filesystem.md) eseguono operazioni di modifica e query su percorsi, file, collegamenti simbolici, directory e volumi. Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system (C++)](../standard-library/file-system-navigation.md).

||||
|-|-|-|
|[absolute](#absolute)|[begin](#begin)|[canonical](#canonical)|
|[copy](#copy)|[copy_file](#copy_file)|[copy_symlink](#copy_symlink)|
|[create_directories](#create_directories)|[create_directory](#create_directory)|[create_directory_symlink](#create_directory_symlink)|
|[create_hard_link](#create_hard_link)|[create_symlink](#create_symlink)|[current_path](#current_path)|
|[end](#end)|[equivalent](#equivalent)|[exists](#exists)|
|[file_size](#file_size)|[hard_link_count](#hard_link_count)|[hash_value](#hash_value)|
|[is_block_file](#is_block_file)|[is_character_file](#is_character_file)|[is_directory](#is_directory)|
|[is_empty](#is_empty)|[is_fifo](#is_fifo)|[is_other](#is_other)|
|[is_regular_file](#is_regular_file)|[is_socket](#is_socket)|[is_symlink](#is_symlink)|
|[last_write_time](#last_write_time)|[permissions](#permissions)|[read_symlink](#read_symlink)|
|[remove](#remove)|[remove_all](#remove_all)|[rename](#rename)|
|[resize_file](#resize_file)|[space](#space)|[status](#status)|
|[status_known](#status_known)|[swap](#swap)|[symlink_status](#symlink_status)|
|[system_complete](#system_complete)|[temp_directory_path](#temp_directory_path)|[u8path](#u8path)|

## <a name="absolute"></a> assoluto

```cpp
path absolute(const path& pval, const path& base = current_path());
```

La funzione restituisce il percorso assoluto corrispondente a *pval* relativo al percorso `base`:

1. Se `pval.has_root_name() && pval.has_root_directory()` la funzione restituisce *pval*.

1. Se `pval.has_root_name() && !pval.has_root_directory()` la funzione restituisce `pval.root_name()`  /  `absolute(base).root_directory()`  /  `absolute(base).relative_path()`  /  `pval.relative_path()`.

1. Se `!pval.has_root_name() && pval.has_root_directory()` la funzione restituisce `absolute(base).root_name()`  /  *pval*.

1. Se `!pval.has_root_name() && !pval.has_root_directory()` la funzione restituisce `absolute(base)`  /  *pval*.

## <a name="begin"></a>  begin

```cpp
const directory_iterator& begin(const directory_iterator& iter) noexcept;
const recursive_directory_iterator&
    begin(const recursive_directory_iterator& iter) noexcept;
```

Entrambe le funzioni restituiscono *iter*.

## <a name="canonical"></a>  canonical

```cpp
path canonical(const path& pval, const path& base = current_path());
path canonical(const path& pval, error_code& ec);
path canonical(const path& pval, const path& base, error_code& ec);
```

Tutte le funzioni formano un percorso assoluto `pabs = absolute(pval, base)` (o `pabs = absolute(pval)` per eseguire l'overload senza parametro base), quindi ridurlo a una forma canonica nella sequenza seguente di passaggi:

1. Ogni componente del percorso `X` per il quale `is_symlink(X)` viene **true** viene sostituito da `read_symlink(X)`.

1. Ogni componente del percorso `.` (punto rappresenta la directory corrente stabilita dai precedenti componenti del percorso) viene rimosso.

1. Ogni coppia di componenti del percorso `X` / `..` (punto-punto rappresenta la directory padre stabilita dai precedenti componenti del percorso) viene rimosso.

La funzione restituisce quindi `pabs`.

## <a name="copy"></a>  copy

```cpp
void copy(const path& from, const path& to);
void copy(const path& from, const path& to, error_code& ec) noexcept;
void copy(const path& from, const path& to, copy_options opts);
void copy(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

Le funzioni copiano o collegano uno o più file in tutti i eventualmente *da* a *al* sotto il controllo di *opts*, che viene utilizzato come `copy_options::none` per gli overload con nessun *opts* parametro. *OPTS* conterrà al massimo uno di:

- `skip_existing`, `overwrite_existing`o `update_existing`

- `copy_symlinks` o `skip_symlinks`

- `directories_only`, `create_symlinks`o `create_hard_links`

Le funzioni determinano prima i valori di file_status `f` per *dalla* e `t` per *a*:

- Se `opts & (copy_options::create_symlinks | copy_options::skip_symlinks)`, chiamando `symlink_status`

- in caso contrario, chiamando `status`

- In caso contrario, segnalare un errore.

Se `!exists(f) || equivalent(f, t) || is_other(f) || is_other(t) || is_directory(f)&& is_regular_file(t)`, quindi segnalare un errore (e non eseguire alcuna azione else).

In caso contrario, se `is_symlink(f)` quindi:

- Se `options & copy_options::skip_symlinks` quindi non fare nulla.

- In caso contrario, se `!exists(t)&& options & copy_options::copy_symlinks` quindi `copy_symlink(from, to, opts)`.

- In caso contrario, segnalare un errore.

In caso contrario, se `is_regular_file(f)` quindi:

- Se `opts & copy_options::directories_only` quindi non fare nulla.

- In caso contrario, se `opts & copy_options::create_symlinks` quindi `create_symlink(to, from)`.

- In caso contrario, se `opts & copy_options::create_hard_links` quindi `create_hard_link(to, from)`.

- In caso contrario, se `is_directory(f)` quindi `copy_file(from, to`  /  `from.filename(), opts)`.

- In caso contrario, `copy_file(from, to, opts)`.

In caso contrario, se `is_directory(f) && (opts & copy_options::recursive || !opts)` quindi:

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

## <a name="copy_file"></a>  copy_file

```cpp
bool copy_file(const path& from, const path& to);
bool copy_file(const path& from, const path& to, error_code& ec) noexcept;
bool copy_file(const path& from, const path& to, copy_options opts);
bool copy_file(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

Le funzioni di tutte le copiano eventualmente il file in *da* al *al* sotto il controllo di *opts*, che viene utilizzato come `copy_options::none` per gli overload senza *opts*  parametro. *OPTS* deve contenere al massimo uno tra `skip_existing`, `overwrite_existing`, o `update_existing`.

Se `exists(to) && !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options::update_existing))` quindi segnala un errore che il file esiste già.

In caso contrario, se `!exists(to) || opts & copy_options::overwrite_existing || opts & copy_options::update_existing&& last_write_time(to) < last_write_time(from) || !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options:update_existing))` quindi prova a copiare il contenuto e gli attributi del file *dalla* nel file *a*. Segnalare come errore se il tentativo di copia non riesce.

Le funzioni restituiscono **true** se la copia viene eseguita e ha esito positivo, in caso contrario **false**.

## <a name="copy_symlink"></a>  copy_symlink

```cpp
void copy_symlink(const path& from, const path& to);
void copy_symlink(const path& from, const path& to, error_code& ec) noexcept;
```

Se `is_directory(from)` le chiamate di funzione `create_directory_symlink(from, to)`. In caso contrario, chiama `create_symlink(from, to)`.

## <a name="create_directories"></a>  create_directories

```cpp
bool create_directories(const path& pval);
bool create_directories(const path& pval, error_code& ec) noexcept;
```

Per un percorso, ad esempio a\/b\/c, la funzione crea le directory a e a\/b come necessario per poter creare la directory a\/b\/c come richiesto. Viene restituito **true** solo se effettivamente crea la directory *pval*.

## <a name="create_directory"></a>  create_directory

```cpp
bool create_directory(const path& pval);

bool create_directory(const path& pval, error_code& ec) noexcept;
bool create_directory(const path& pval, const path& attr);
bool create_directory(const path& pval, const path& attr, error_code& ec) noexcept;
```

La funzione crea la directory *pval* in base alle esigenze. Restituisce true solo se effettivamente crea la directory *pval*, nel qual caso copia le autorizzazioni da un file esistente *attr*, o Usa `perms::all` per gli overload senza *attr*  parametro.

## <a name="create_directory_symlink"></a>  create_directory_symlink

```cpp
void create_directory_symlink(const path& to, const path& link);
void create_directory_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea un collegamento come collegamento simbolico alla directory *a*.

## <a name="create_hard_link"></a>  create_hard_link

```cpp
void create_hard_link(const path& to,  const path& link);
void create_hard_link(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea un collegamento come collegamento reale alla directory o al file *a*.

## <a name="create_symlink"></a>  create_symlink

```cpp
void create_symlink(const path& to,  const path& link);

void create_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

Crea la funzione *link* come collegamento simbolico al file *a*.

## <a name="current_path"></a>  current_path

```cpp
path current_path();
path current_path(error_code& ec);
void current_path(const path& pval);
void current_path(const path& pval, error_code& ec) noexcept;
```

Le funzioni senza il parametro *pval* restituiscono il percorso della directory corrente. Le funzioni rimanenti impostano la directory corrente su *pval*.

## <a name="end"></a>  end

```cpp
directory_iterator& end(const directory_iterator& iter) noexcept;
recursive_directory_iterator& end(const recursive_directory_iterator& iter) noexcept;
```

La prima funzione restituisce `directory_iterator()` e la seconda funzione restituisce `recursive_directory_iterator()`

## <a name="equivalent"></a>  equivalent

```cpp
bool equivalent(const path& left, const path& right);
bool equivalent(const path& left, const path& right, error_code& ec) noexcept;
```

Le funzioni restituiscono **true** solo se *a sinistra* e *destro* designano la stessa entità di file System.

## <a name="exists"></a>  exists

```cpp
bool exists(file_status stat) noexcept;
bool exists(const path& pval);
bool exists(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `status_known && stat.type() != file_not_found`. La seconda e terza funzione restituiscono `exists(status(pval))`.

## <a name="file_size"></a>  file_size

```cpp
uintmax_t file_size(const path& pval);
uintmax_t file_size(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono le dimensioni in byte del file designato da *pval*, se `exists(pval) && is_regular_file(pval)` ed è possono determinare le dimensioni del file. In caso contrario si segnala un errore e restituiscono `uintmax_t(-1)`.

## <a name="hard_link_count"></a>  hard_link_count

```cpp
uintmax_t hard_link_count(const path& pval);
uintmax_t hard_link_count(const path& pval, error_code& ec) noexcept;
```

La funzione restituisce il numero di collegamenti reali per *pval*, o \-1 se si verifica un errore.

## <a name="hash_value"></a>  hash_value

```cpp
size_t hash_value(const path& pval) noexcept;
```

La funzione restituisce un valore hash per `pval.native()`.

## <a name="is_block_file"></a>  is_block_file

```cpp
bool is_block_file(file_status stat) noexcept;
bool is_block_file(const path& pval);
bool is_block_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::block`. Le funzioni rimanenti restituiscono `is_block_file(status(pval))`.

## <a name="is_character_file"></a>  is_character_file

```cpp
bool is_character_file(file_status stat) noexcept;
bool is_character_file(const path& pval);
bool is_character_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::character`. Le funzioni rimanenti restituiscono `is_character_file(status(pval))`.

## <a name="is_directory"></a>  is_directory

```cpp
bool is_directory(file_status stat) noexcept;
bool is_directory(const path& pval);
bool is_directory(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::directory`. Le funzioni rimanenti restituiscono `is_directory_file(status(pval))`.

## <a name="is_empty"></a>  is_empty

```cpp
bool is_empty(file_status stat) noexcept;
bool is_empty(const path& pval);
bool is_empty(const path& pval, error_code& ec) noexcept;
```

Se `is_directory(pval)` quindi la funzione restituisce `directory_iterator(pval) == directory_iterator()`; in caso contrario, restituisce `file_size(pval) == 0`.

## <a name="is_fifo"></a>  is_fifo

```cpp
bool is_fifo(file_status stat) noexcept;
bool is_fifo(const path& pval);
bool is_fifo(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::fifo`. Le funzioni rimanenti restituiscono `is_fifo(status(pval))`.

## <a name="is_other"></a>  is_other

```cpp
bool is_other(file_status stat) noexcept;
bool is_other(const path& pval);
bool is_other(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::other`. Le funzioni rimanenti restituiscono `is_other(status(pval))`.

## <a name="is_regular_file"></a>  is_regular_file

```cpp
bool is_regular_file(file_status stat) noexcept;
bool is_regular_file(const path& pval);
bool is_regular_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::regular`. Le funzioni rimanenti restituiscono `is_regular_file(status(pval))`.

## <a name="is_socket"></a>  is_socket

```cpp
bool is_socket(file_status stat) noexcept;
bool is_socket(const path& pval);
bool is_socket(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::socket`. Le funzioni rimanenti restituiscono `is_socket(status(pval))`.

## <a name="is_symlink"></a>  is_symlink

```cpp
bool is_symlink(file_status stat) noexcept;
bool is_symlink(const path& pval);
bool is_symlink(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::symlink`. Le funzioni rimanenti restituiscono `is_symlink(status(pval))`.

## <a name="last_write_time"></a>  last_write_time

```cpp
file_time_type last_write_time(const path& pval);
file_time_type last_write_time(const path& pval, error_code& ec) noexcept;
void last_write_time(const path& pval, file_time_type new_time);
void last_write_time(const path& pval, file_time_type new_time, error_code& ec) noexcept;
```

Le prime due funzioni restituiscono l'ora dell'ultima modifica dei dati per *pval*, o `file_time_type(-1)` se si verifica un errore. Le ultime due funzioni impostano l'ora dell'ultima modifica dei dati per *pval* al *new_time*.

## <a name="permissions"></a>  permissions

```cpp
void permissions(const path& pval, perms mask);
void permissions(const path& pval, perms mask, error_code& ec) noexcept;
```

Le funzioni impostano le autorizzazioni per il percorso designato da *pval* al `mask & perms::mask` sotto il controllo di `perms & (perms::add_perms | perms::remove_perms)`. *maschera* deve contenere al massimo uno tra `perms::add_perms` e `perms::remove_perms`.

Se `mask & perms::add_perms` le funzioni impostano le autorizzazioni su `status(pval).permissions() | mask & perms::mask`. In caso contrario, se `mask & perms::remove_perms` le funzioni impostano le autorizzazioni su `status(pval).permissions() & ~(mask & perms::mask)`. In caso contrario, le funzioni impostano le autorizzazioni su `mask & perms::mask`.

## <a name="read_symlink"></a>  read_symlink

```cpp
path read_symlink(const path& pval);
path read_symlink(const path& pval, error_code& ec);
```

Le funzioni segnalano un errore e restituiscono `path()` se `!is_symlink(pval)`. In caso contrario, le funzioni restituiscono un oggetto di tipo `path` che contiene il collegamento simbolico.

## <a name="remove"></a>  remove

```cpp
bool remove(const path& pval);
bool remove(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono **true** solo se `exists(symlink_status(pval))` e il file è stato rimosso correttamente. Viene rimosso anche il collegamento simbolico stesso, non il file che definisce.

## <a name="remove_all"></a>  remove_all

```cpp
uintmax_t remove_all(const path& pval);
uintmax_t remove_all(const path& pval, error_code& ec) noexcept;
```

Se *pval* è una directory, le funzioni in modo ricorsivo rimuovere tutte le voci di directory, quindi la voce stessa. In caso contrario, le funzioni chiamano `remove`. Restituiscono un conteggio di tutti gli elementi rimossi correttamente.

## <a name="rename"></a>  rename

```cpp
void rename(const path& from,  const path& to);
void rename(const path& from,  const path& to, error_code& ec) noexcept;
```

Le funzioni rinominano *dal* al *a*. Viene rinominato anche un collegamento simbolico, non il file che definisce.

## <a name="resize_file"></a>  resize_file

```cpp
void resize(const path& pval, uintmax_t size);
void resize(const path& pval, uintmax_t size, error_code& ec) noexcept;
```

Le funzioni modificano le dimensioni di un file in modo che `file_size(pval) == size`

## <a name="space"></a>  space

```cpp
space_info space(const path& pval);
space_info space(const path& pval, error_code& ec) noexcept;
```

La funzione restituisce informazioni sul volume designato da *pval*, in una struttura di tipo `space_info`. La struttura contiene `uintmax_t(-1)` per qualsiasi valore che non può essere determinato.

## <a name="status"></a>  status

```cpp
file_status status(const path& pval);
file_status status(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono lo stato del percorso, il tipo di file e le autorizzazioni, associati *pval*. Un collegamento simbolico non viene testato, ma solo il file designato.

## <a name="status_known"></a>  status_known

```cpp
bool status_known(file_status stat) noexcept;
```

La funzione restituisce `stat.type() != file_type::none`

## <a name="swap"></a>  swap

```cpp
void swap(path& left, path& right) noexcept;
```

La funzione Scambia il contenuto del *a sinistra* e *a destra*.

## <a name="symlink_status"></a>  symlink_status

```cpp
file_status symlink_status(const path& pval);
file_status symlink_status(const path& pval, erroxr_code& ec) noexcept;
```

Le funzioni restituiscono lo stato del collegamento simbolico percorso, il tipo di file e le autorizzazioni, associati *pval*. Le funzioni si comportano allo stesso come `status(pval)` ad eccezione del fatto che viene testato un collegamento simbolico, non il file designato.

## <a name="system_complete"></a>  system_complete

```cpp
path system_complete(const path& pval);
path system_complete(const path& pval, error_code& ec);
```

Le funzioni restituiscono un percorso assoluto che tiene conto, se necessario, della directory corrente associata con il nome radice. \(Per Posix, le funzioni restituiscono `absolute(pval)`.\)

## <a name="temp_directory_path"></a>  temp_directory_path

```cpp
path temp_directory_path();
path temp_directory_path(error_code& ec);
```

Le funzioni restituiscono un percorso per una directory appropriata per contenere i file temporanei.

## <a name="u8path"></a>  u8path

```cpp
template <class Source>
path u8path(const Source& source);

template <class InIt>
path u8path(InIt first, InIt last);
```

La prima funzione si comporta come `path(source)` e la seconda funzione si comporta come `path(first, last)` ad eccezione del fatto che l'origine designata in ogni caso viene considerata come una sequenza di elementi char codificata come UTF-8, indipendentemente dal file System.
