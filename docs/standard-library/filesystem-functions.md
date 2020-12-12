---
description: 'Altre informazioni su: &lt; &gt; funzioni filesystem'
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
ms.openlocfilehash: cb171228fe384a8f1269f52ab5905ed564818778
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97324321"
---
# <a name="ltfilesystemgt-functions"></a>Funzioni &lt;filesystem&gt;

Queste funzioni gratuite nell' [\<filesystem>](../standard-library/filesystem.md) intestazione eseguono operazioni di modifica e query su percorsi, file, collegamenti simbolici, directory e volumi. Per altre informazioni ed esempi di codice, vedere [Esplorazione del file system](../standard-library/file-system-navigation.md).

## <a name="absolute"></a><a name="absolute"></a> assoluto

```cpp
path absolute(const path& pval, const path& base = current_path());
```

La funzione restituisce il percorso assoluto corrispondente a *pval* rispetto al percorso `base` :

1. Se `pval.has_root_name() && pval.has_root_directory()` la funzione restituisce *pval*.

1. Se `pval.has_root_name() && !pval.has_root_directory()` la funzione restituisce `pval.root_name()`  /  `absolute(base).root_directory()`  /  `absolute(base).relative_path()`  /  `pval.relative_path()` .

1. Se `!pval.has_root_name() && pval.has_root_directory()` la funzione restituisce `absolute(base).root_name()`  /  *pval*.

1. Se `!pval.has_root_name() && !pval.has_root_directory()` la funzione restituisce `absolute(base)`  /  *pval*.

## <a name="begin"></a><a name="begin"></a> iniziare

```cpp
const directory_iterator& begin(const directory_iterator& iter) noexcept;
const recursive_directory_iterator&
    begin(const recursive_directory_iterator& iter) noexcept;
```

Entrambe le funzioni restituiscono *iter*.

## <a name="canonical"></a><a name="canonical"></a> canonica

```cpp
path canonical(const path& pval, const path& base = current_path());
path canonical(const path& pval, error_code& ec);
path canonical(const path& pval, const path& base, error_code& ec);
```

Tutte le funzioni formano un percorso assoluto `pabs = absolute(pval, base)` (o `pabs = absolute(pval)` per l'overload senza parametri di base), quindi lo riducono a una forma canonica nella sequenza di passaggi seguente:

1. Ogni componente `X` del percorso per il quale `is_symlink(X)` viene **`true`** sostituito da `read_symlink(X)` .

1. Ogni componente `.` del percorso (il punto è la directory corrente stabilita dai componenti del percorso precedenti) viene rimosso.

1. Ogni coppia di componenti del percorso `X` / `..` (punto-punto è la directory padre stabilita dai componenti del percorso precedenti) viene rimossa.

La funzione restituisce quindi `pabs` .

## <a name="copy"></a><a name="copy"></a> copia

```cpp
void copy(const path& from, const path& to);
void copy(const path& from, const path& to, error_code& ec) noexcept;
void copy(const path& from, const path& to, copy_options opts);
void copy(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

Tutte le funzioni eventualmente copiano o collegano uno o più file in *da* *a sotto il controllo di* *opz*, che viene utilizzato come `copy_options::none` per gli overload senza parametro *opz* . gli *opz* devono contenere al massimo uno dei seguenti:

- `skip_existing`, `overwrite_existing`o `update_existing`

- `copy_symlinks` o `skip_symlinks`

- `directories_only`, `create_symlinks`o `create_hard_links`

Le funzioni determinano innanzitutto i valori file_status `f` per *da* e `t` per *a*:

- Se `opts & (copy_options::create_symlinks | copy_options::skip_symlinks)` , chiamando `symlink_status`

- in caso contrario, chiamando `status`

- In caso contrario, segnalare un errore.

Se `!exists(f) || equivalent(f, t) || is_other(f) || is_other(t) || is_directory(f)&& is_regular_file(t)` , segnalano un errore (e non eseguono alcuna operazione).

In caso contrario, se `is_symlink(f)` :

- Se `options & copy_options::skip_symlinks` , non eseguire alcuna operazione.

- In caso contrario, se `!exists(t)&& options & copy_options::copy_symlinks` , quindi `copy_symlink(from, to, opts)` .

- In caso contrario, segnalare un errore.

In caso contrario, se `is_regular_file(f)` , quindi:

- Se `opts & copy_options::directories_only` , non eseguire alcuna operazione.

- In caso contrario, se `opts & copy_options::create_symlinks` , quindi `create_symlink(to, from)` .

- In caso contrario, se `opts & copy_options::create_hard_links` , quindi `create_hard_link(to, from)` .

- In caso contrario, se `is_directory(f)` , quindi `copy_file(from, to`  /  `from.filename(), opts)` .

- In caso contrario, `copy_file(from, to, opts)`.

In caso contrario, se `is_directory(f) && (opts & copy_options::recursive || !opts)` , quindi:

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

## <a name="copy_file"></a><a name="copy_file"></a> copy_file

```cpp
bool copy_file(const path& from, const path& to);
bool copy_file(const path& from, const path& to, error_code& ec) noexcept;
bool copy_file(const path& from, const path& to, copy_options opts);
bool copy_file(const path& from, const path& to, copy_options opts, error_code& ec) noexcept;
```

Tutte le funzioni eventualmente copiano il file  in da *a sotto il controllo di* *opz*, che viene utilizzato come `copy_options::none` per gli overload senza parametro *opz* . gli *opz* devono contenere al massimo uno tra `skip_existing` , `overwrite_existing` o `update_existing` .

Se `exists(to) && !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options::update_existing))` , viene segnalato come un errore che il file esiste già.

In caso contrario, se `!exists(to) || opts & copy_options::overwrite_existing || opts & copy_options::update_existing&& last_write_time(to) < last_write_time(from) || !(opts & (copy_options::skip_existing | copy_options::overwrite_existing | copy_options:update_existing))` , provare a copiare il contenuto e gli attributi del file *da* nel file *a*. Segnalare come errore se il tentativo di copia non riesce.

Le funzioni restituiscono **`true`** se la copia viene tentata e ha esito positivo; in caso contrario, **`false`** .

## <a name="copy_symlink"></a><a name="copy_symlink"></a> copy_symlink

```cpp
void copy_symlink(const path& from, const path& to);
void copy_symlink(const path& from, const path& to, error_code& ec) noexcept;
```

Se `is_directory(from)` , la funzione chiama `create_directory_symlink(from, to)` . In caso contrario, chiama `create_symlink(from, to)` .

## <a name="create_directories"></a><a name="create_directories"></a> create_directories

```cpp
bool create_directories(const path& pval);
bool create_directories(const path& pval, error_code& ec) noexcept;
```

Per un percorso, ad esempio \/ b \/ c, la funzione crea le directory a e \/ b in base alle esigenze, in modo da poter creare la directory a \/ b \/ c in base alle esigenze. Restituisce **`true`** solo se crea effettivamente la directory *pval*.

## <a name="create_directory"></a><a name="create_directory"></a> create_directory

```cpp
bool create_directory(const path& pval);

bool create_directory(const path& pval, error_code& ec) noexcept;
bool create_directory(const path& pval, const path& attr);
bool create_directory(const path& pval, const path& attr, error_code& ec) noexcept;
```

La funzione crea la directory *pval* in base alle esigenze. Restituisce true solo se crea effettivamente la directory *pval*, nel qual caso copia le autorizzazioni dal file *attr* esistente o usa `perms::all` per gli overload senza parametro *attr* .

## <a name="create_directory_symlink"></a><a name="create_directory_symlink"></a> create_directory_symlink

```cpp
void create_directory_symlink(const path& to, const path& link);
void create_directory_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea un collegamento come collegamento simbolico alla directory *di*.

## <a name="create_hard_link"></a><a name="create_hard_link"></a> create_hard_link

```cpp
void create_hard_link(const path& to,  const path& link);
void create_hard_link(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea un collegamento come collegamento reale alla directory o *al* file.

## <a name="create_symlink"></a><a name="create_symlink"></a> create_symlink

```cpp
void create_symlink(const path& to, const path& link);

void create_symlink(const path& to, const path& link, error_code& ec) noexcept;
```

La funzione crea un *collegamento* come collegamento simbolico al *file.*

## <a name="current_path"></a><a name="current_path"></a> current_path

```cpp
path current_path();
path current_path(error_code& ec);
void current_path(const path& pval);
void current_path(const path& pval, error_code& ec) noexcept;
```

Le funzioni senza parametri *pval* restituiscono il percorso della directory corrente. Le funzioni rimanenti impostano la directory corrente su *pval*.

## <a name="end"></a><a name="end"></a> fine

```cpp
directory_iterator& end(const directory_iterator& iter) noexcept;
recursive_directory_iterator& end(const recursive_directory_iterator& iter) noexcept;
```

La prima funzione restituisce `directory_iterator()` e la seconda funzione restituisce `recursive_directory_iterator()`

## <a name="equivalent"></a><a name="equivalent"></a> equivalente

```cpp
bool equivalent(const path& left, const path& right);
bool equivalent(const path& left, const path& right, error_code& ec) noexcept;
```

Le funzioni restituiscono **`true`** solo se *Left* e *right* scelgono la stessa entità filesystem.

## <a name="exists"></a><a name="exists"></a> esiste

```cpp
bool exists(file_status stat) noexcept;
bool exists(const path& pval);
bool exists(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `status_known && stat.type() != file_not_found`. La seconda e la terza funzione restituiscono `exists(status(pval))` .

## <a name="file_size"></a><a name="file_size"></a> file_size

```cpp
uintmax_t file_size(const path& pval);
uintmax_t file_size(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono le dimensioni in byte del file scelto da *pval*, se `exists(pval) && is_regular_file(pval)` e le dimensioni del file possono essere determinate. In caso contrario, segnalano un errore e restituiscono `uintmax_t(-1)` .

## <a name="hard_link_count"></a><a name="hard_link_count"></a> hard_link_count

```cpp
uintmax_t hard_link_count(const path& pval);
uintmax_t hard_link_count(const path& pval, error_code& ec) noexcept;
```

La funzione restituisce il numero di collegamenti reali per *pval* oppure \- 1 se si verifica un errore.

## <a name="hash_value"></a><a name="hash_value"></a> hash_value

```cpp
size_t hash_value(const path& pval) noexcept;
```

La funzione restituisce un valore hash per `pval.native()` .

## <a name="is_block_file"></a><a name="is_block_file"></a> is_block_file

```cpp
bool is_block_file(file_status stat) noexcept;
bool is_block_file(const path& pval);
bool is_block_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::block`. Le funzioni rimanenti restituiscono `is_block_file(status(pval))` .

## <a name="is_character_file"></a><a name="is_character_file"></a> is_character_file

```cpp
bool is_character_file(file_status stat) noexcept;
bool is_character_file(const path& pval);
bool is_character_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::character`. Le funzioni rimanenti restituiscono `is_character_file(status(pval))` .

## <a name="is_directory"></a><a name="is_directory"></a> is_directory

```cpp
bool is_directory(file_status stat) noexcept;
bool is_directory(const path& pval);
bool is_directory(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::directory`. Le funzioni rimanenti restituiscono `is_directory_file(status(pval))` .

## <a name="is_empty"></a><a name="is_empty"></a> is_empty

```cpp
bool is_empty(file_status stat) noexcept;
bool is_empty(const path& pval);
bool is_empty(const path& pval, error_code& ec) noexcept;
```

Se `is_directory(pval)` , la funzione restituisce `directory_iterator(pval) == directory_iterator()` ; in caso contrario, restituisce `file_size(pval) == 0` .

## <a name="is_fifo"></a><a name="is_fifo"></a> is_fifo

```cpp
bool is_fifo(file_status stat) noexcept;
bool is_fifo(const path& pval);
bool is_fifo(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::fifo`. Le funzioni rimanenti restituiscono `is_fifo(status(pval))` .

## <a name="is_other"></a><a name="is_other"></a> is_other

```cpp
bool is_other(file_status stat) noexcept;
bool is_other(const path& pval);
bool is_other(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::other`. Le funzioni rimanenti restituiscono `is_other(status(pval))` .

## <a name="is_regular_file"></a><a name="is_regular_file"></a> is_regular_file

```cpp
bool is_regular_file(file_status stat) noexcept;
bool is_regular_file(const path& pval);
bool is_regular_file(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::regular`. Le funzioni rimanenti restituiscono `is_regular_file(status(pval))` .

## <a name="is_socket"></a><a name="is_socket"></a> is_socket

```cpp
bool is_socket(file_status stat) noexcept;
bool is_socket(const path& pval);
bool is_socket(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::socket`. Le funzioni rimanenti restituiscono `is_socket(status(pval))` .

## <a name="is_symlink"></a><a name="is_symlink"></a> is_symlink

```cpp
bool is_symlink(file_status stat) noexcept;
bool is_symlink(const path& pval);
bool is_symlink(const path& pval, error_code& ec) noexcept;
```

La prima funzione restituisce `stat.type() == file_type::symlink`. Le funzioni rimanenti restituiscono `is_symlink(status(pval))` .

## <a name="last_write_time"></a><a name="last_write_time"></a> last_write_time

```cpp
file_time_type last_write_time(const path& pval);
file_time_type last_write_time(const path& pval, error_code& ec) noexcept;
void last_write_time(const path& pval, file_time_type new_time);
void last_write_time(const path& pval, file_time_type new_time, error_code& ec) noexcept;
```

Le prime due funzioni restituiscono l'ora dell'Ultima modifica dei dati per *pval* o `file_time_type(-1)` se si verifica un errore. Le ultime due funzioni impostano l'ora dell'Ultima modifica dei dati per *pval* in *New_time*.

## <a name="permissions"></a><a name="permissions"></a> autorizzazioni

```cpp
void permissions(const path& pval, perms mask);
void permissions(const path& pval, perms mask, error_code& ec) noexcept;
```

Le funzioni impostano le autorizzazioni per il percorso scelto da *pval* su `mask & perms::mask` sotto il controllo di `perms & (perms::add_perms | perms::remove_perms)` . *mask* deve contenere al massimo uno dei `perms::add_perms` e `perms::remove_perms` .

Se `mask & perms::add_perms` , le funzioni impostano le autorizzazioni su `status(pval).permissions() | mask & perms::mask` . In caso contrario, se `mask & perms::remove_perms` , le funzioni impostano le autorizzazioni su `status(pval).permissions() & ~(mask & perms::mask)` . In caso contrario, le funzioni impostano le autorizzazioni su `mask & perms::mask` .

## <a name="proximate"></a><a name="proximate"></a> prossima

```cpp
path proximate(const path& p, error_code& ec);
path proximate(const path& p, const path& base = current_path());
path proximate(const path& p, const path& base, error_code& ec);
```

## <a name="read_symlink"></a><a name="read_symlink"></a> read_symlink

```cpp
path read_symlink(const path& pval);
path read_symlink(const path& pval, error_code& ec);
```

Le funzioni segnalano un errore e restituiscono `path()` se `!is_symlink(pval)` . In caso contrario, le funzioni restituiscono un oggetto di tipo `path` che contiene il collegamento simbolico.

## <a name="relative"></a><a name="relative"></a> relativa

```cpp
path relative(const path& p, error_code& ec);
path relative(const path& p, const path& base = current_path());
path relative(const path& p, const path& base, error_code& ec);
```

## <a name="remove"></a><a name="remove"></a> rimuovere

```cpp
bool remove(const path& pval);
bool remove(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono **`true`** solo se `exists(symlink_status(pval))` e il file è stato rimosso correttamente. Viene rimosso un collegamento simbolico, non il file scelto.

## <a name="remove_all"></a><a name="remove_all"></a> remove_all

```cpp
uintmax_t remove_all(const path& pval);
uintmax_t remove_all(const path& pval, error_code& ec) noexcept;
```

Se *pval* è una directory, le funzioni rimuovono in modo ricorsivo tutte le voci di directory, quindi la voce stessa. In caso contrario, le funzioni chiamano `remove` . Restituiscono un conteggio di tutti gli elementi rimossi correttamente.

## <a name="rename"></a><a name="rename"></a> rinominare

```cpp
void rename(const path& from, const path& to);
void rename(const path& from, const path& to, error_code& ec) noexcept;
```

Le funzioni rinominano *da* *a.* Viene rinominato un collegamento simbolico, non il file scelto.

## <a name="resize_file"></a><a name="resize_file"></a> resize_file

```cpp
void resize(const path& pval, uintmax_t size);
void resize(const path& pval, uintmax_t size, error_code& ec) noexcept;
```

Le funzioni modificano le dimensioni di un file in modo che `file_size(pval) == size`

## <a name="space"></a><a name="space"></a> spazio

```cpp
space_info space(const path& pval);
space_info space(const path& pval, error_code& ec) noexcept;
```

La funzione restituisce informazioni sul volume scelto da *pval*, in una struttura di tipo `space_info` . La struttura contiene `uintmax_t(-1)` per qualsiasi valore che non può essere determinato.

## <a name="status"></a><a name="status"></a> stato

```cpp
file_status status(const path& pval);
file_status status(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono lo stato del percorso, il tipo di file e le autorizzazioni associate a *pval*. Non viene testato un collegamento simbolico, ma il file scelto.

## <a name="status_known"></a><a name="status_known"></a> status_known

```cpp
bool status_known(file_status stat) noexcept;
```

La funzione restituisce `stat.type() != file_type::none`

## <a name="swap"></a><a name="swap"></a> scambio

```cpp
void swap(path& left, path& right) noexcept;
```

La funzione scambia il contenuto di *Left* e *right*.

## <a name="symlink_status"></a><a name="symlink_status"></a> symlink_status

```cpp
file_status symlink_status(const path& pval);
file_status symlink_status(const path& pval, error_code& ec) noexcept;
```

Le funzioni restituiscono lo stato del collegamento simbolico del percorso, il tipo di file e le autorizzazioni associate a *pval*. Le funzioni si comportano allo stesso modo `status(pval)` , ad eccezione del fatto che viene testato un collegamento simbolico, non il file scelto.

## <a name="system_complete"></a><a name="system_complete"></a> system_complete

```cpp
path system_complete(const path& pval);
path system_complete(const path& pval, error_code& ec);
```

Le funzioni restituiscono un percorso assoluto che tiene conto, se necessario, della directory corrente associata con il nome radice. \(Per POSIX, le funzioni restituiscono `absolute(pval)` .\)

## <a name="temp_directory_path"></a><a name="temp_directory_path"></a> temp_directory_path

```cpp
path temp_directory_path();
path temp_directory_path(error_code& ec);
```

Le funzioni restituiscono un percorso per una directory appropriata per contenere i file temporanei.

## <a name="u8path"></a><a name="u8path"></a> u8path

```cpp
template <class Source>
path u8path(const Source& source);

template <class InIt>
path u8path(InIt first, InIt last);
```

La prima funzione si comporta allo stesso modo di `path(source)` e la seconda funzione si comporta come `path(first, last)` ad eccezione del fatto che l'origine scelta in ogni caso viene considerata come una sequenza di elementi char codificati come UTF-8, indipendentemente dal file System.

## <a name="weakly_canonical"></a><a name="weakly_canonical"></a> weakly_canonical

```cpp
path weakly_canonical(const path& p);
path weakly_canonical(const path& p, error_code& ec);
```
