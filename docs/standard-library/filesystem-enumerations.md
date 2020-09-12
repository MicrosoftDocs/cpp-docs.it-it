---
title: Enumerazioni &lt;filesystem&gt;
ms.date: 11/04/2016
f1_keywords:
- filesystem/std::filesystem::copy_options
- filesystem/std::experimental::filesystem::copy_options
- filesystem/std::filesystem::directory_options
- filesystem/std::experimental::filesystem::directory_options
- filesystem/std::filesystem::file_type
- filesystem/std::experimental::filesystem::file_type
- filesystem/std::filesystem::perms
- filesystem/std::experimental::filesystem::perms
ms.assetid: 0096c046-d101-464c-8259-b878a48280b0
ms.openlocfilehash: 3c94ec899f0ea7abf71530f6aca44638fdb216c9
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041939"
---
# <a name="ltfilesystemgt-enumerations"></a>Enumerazioni &lt;filesystem&gt;

Questo argomento illustra le enumerazioni nell'intestazione del file system.

## <a name="requirements"></a>Requisiti

**Intestazione:**\<experimental/filesystem>

**Spazio dei nomi:** std::experimental::filesystem

## <a name="copy_options"></a><a name="copy_options"></a> copy_options

Enumerazione dei valori di maschera di bit che viene usata con le funzioni [copy](filesystem-functions.md#copy) e [copy_file](filesystem-functions.md#copy_file) per specificare comportamenti.

### <a name="syntax"></a>Sintassi

```cpp
enum class copy_options {
   none = 0,
   skip_existing = 1,
   overwrite_existing = 2,
   update_existing = 4,
   recursive = 8,
   copy_symlinks = 16,
   skip_symlinks = 32,
   directories_only = 64,
   create_symlinks = 128,
   create_hard_links = 256
};
```

### <a name="values"></a>Valori

| Nome | Descrizione |
|------------|-----------------|
|`none`|Eseguire il comportamento predefinito per l'operazione.|
|`skip_existing`|Non copiare se il file esiste già, non segnalare un errore.|
|`overwrite_existing`|Sovrascrivere il file se esiste già.|
|`update_existing`|Sovrascrivere il file se già esiste ed è meno recente del file di sostituzione.|
|`recursive`|Copiare in modo ricorsivo le sottodirectory e il relativo contenuto.|
|`copy_symlinks`|Copiare i collegamenti simbolici come collegamenti simbolici, anziché copiare i file ai cui puntano i collegamenti.|
|`skip_symlinks`|Ignorare i collegamenti simbolici.|
|`directories_only`|Eseguire solo l'iterazione delle directory, ignorare i file.|
|`create_symlinks`|Creare collegamenti simbolici, anziché copiare i file. Deve essere usato un percorso assoluto come percorso di origine, a meno che la destinazione non sia la directory corrente.|
|`create_hard_links`|Creare collegamenti reali, anziché copiare file.|

## <a name="directory_options"></a><a name="directory_options"></a> directory_options

Specifica se seguire i collegamenti simbolici alle directory o ignorarli.

### <a name="syntax"></a>Sintassi

```cpp
enum class directory_options {
   none = 0,
   follow_directory_symlink
};
```

### <a name="values"></a>Valori

|Nome|Descrizione|
|----------|-----------------|
|`none`|Comportamento predefinito: ignorare i collegamenti simbolici a directory. L'autorizzazione negata è un errore.|
|`follow_directory_symlink`|Considerare i collegamenti simbolici a directory come directory effettive.|

## <a name="file_type"></a><a name="file_type"></a> file_type

Enumerazione di tipi di file. I valori supportati sono regular, directory, not_found e Unknown.

### <a name="syntax"></a>Sintassi

```cpp
enum class file_type {
    not_found = -1,
    none,
    regular,
    directory,
    symlink,
    block,
    character,
    fifo,
    socket,
    unknown
};
```

### <a name="values"></a>Valori

|Nome|Valore|Descrizione|
|----------|-----------|-----------------|
|`not_found`|-1|Rappresenta un file che non esiste.|
|`none`|0|Rappresenta un file che non ha alcun attributo di tipo. (non supportato).|
|`regular`|1|Rappresenta un file su disco convenzionale.|
|`directory`|2|Rappresenta una directory.|
|`symlink`|3|Rappresenta un collegamento simbolico. (non supportato).|
|`block`|4|Rappresenta un file di blocchi speciali nei sistemi basati su UNIX. (non supportato).|
|`character`|5|Rappresenta un file di caratteri speciali nei sistemi basati su UNIX. (non supportato).|
|`fifo`|6|Rappresenta un file FIFO nei sistemi basati su UNIX. (non supportato).|
|`socket`|7|Rappresenta un socket nei sistemi basati su UNIX. (non supportato).|
|`unknown`|8|Rappresenta un file il cui stato non può essere determinato.|

## <a name="perm_options"></a><a name="perm_options"></a> perm_options

Include i valori `replace` ,, `add` `remove` e `nofollow` .

```cpp
enum class perm_options;
```

## <a name="perms"></a><a name="perms"></a> perms

Flag per le autorizzazioni del file. I valori supportati sono essenzialmente "ReadOnly" e all. Per un file readonly non è impostato alcun bit *_write. In caso contrario, è impostato il bit `all` (0x0777).

### <a name="syntax"></a>Sintassi

```cpp
enum class perms {// names for permissions
   none = 0,
   owner_read = 0400,  // S_IRUSR
   owner_write = 0200, // S_IWUSR
   owner_exec = 0100,  // S_IXUSR
   owner_all = 0700,   // S_IRWXU
   group_read = 040,   // S_IRGRP
   group_write = 020,  // S_IWGRP
   group_exec = 010,   // S_IXGRP
   group_all = 070,    // S_IRWXG
   others_read = 04,   // S_IROTH
   others_write = 02,  // S_IWOTH
   others_exec = 01,   // S_IXOTH
   others_all = 07,    // S_IRWXO
   all = 0777,
   set_uid = 04000,    // S_ISUID
   set_gid = 02000,    // S_ISGID
   sticky_bit = 01000, // S_ISVTX
   mask = 07777,
   unknown = 0xFFFF,
   add_perms = 0x10000,
   remove_perms = 0x20000,
   resolve_symlinks = 0x40000
};
```

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[\<filesystem>](../standard-library/filesystem.md)
