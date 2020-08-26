---
title: '&lt;filesystem&gt;'
description: Vengono descritti le classi, le funzioni e i tipi nell' filesystem intestazione della libreria C++ standard.
ms.date: 01/22/2020
f1_keywords:
- <filesystem>
ms.assetid: 5005753b-46fa-43e1-8d4e-1b38617d3cfd
no-loc:
- filesystem
- experimental
- char
- wchar_t
- char16_t
- char32_t
ms.openlocfilehash: 0cf5e16eb21c02cfb96577c1dada873f087a71cf
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88835831"
---
# &lt;filesystem&gt;

Includere l'intestazione &lt; filesystem> per l'accesso alle classi e alle funzioni che modificano e recuperano informazioni su percorsi, file e directory.

## <a name="syntax"></a>Sintassi

```cpp
#include <filesystem> // C++17 standard header file name
#include <experimental/filesystem> // Header file for pre-standard implementation
using namespace std::experimental::filesystem::v1;
```

> [!IMPORTANT]
> Al rilascio di Visual Studio 2017, l' \<filesystem> intestazione non era ancora uno standard C++. C++ in Visual Studio 2017 RTW implementa lo standard Draft finale, disponibile in [ISO/IEC JTC 1/SC 22/WG 21 N4100](https://wg21.link/n4100). Visual Studio 2017 versione 15,7 e successive supporta il nuovo standard C++ 17 \<filesystem> .
> Si tratta di un'implementazione completamente nuova, incompatibile con la `std::experimental` versione precedente. È stato reso necessario dal supporto di collegamento simbolico, correzioni di bug e modifiche nel comportamento standard-required. Attualmente, incluso \<filesystem> fornisce il nuovo `std::filesystem` e l'oggetto precedente `std::experimental::filesystem` . L'inclusione \<experimental/filesystem> fornisce solo l' experimental implementazione precedente. L' experimental implementazione verrà rimossa nella prossima versione di divisione Abi delle librerie.

Questa intestazione supporta file System per una delle due classi generali di sistemi operativi host: Microsoft Windows e POSIX.

Mentre la maggior parte delle funzionalità sono comuni a entrambi i sistemi operativi, questo documento ne identifica le differenze. Ad esempio:

- Windows supporta più nomi radice, ad esempio `c:` o `\\network_name` . Un file system è costituito da una foresta di alberi, ognuno con una propria directory radice, ad esempio `c:\` o `\\network_name\` , e ognuno con la propria directory corrente, per il completamento di un percorso relativo (uno che non è un percorso assoluto).

- POSIX supporta un singolo albero, senza nome radice, la singola directory radice `/` e una singola directory corrente.

Un'altra differenza significativa è la rappresentazione nativa dei nomi di percorso:

- Windows usa una sequenza con terminazione null di **`wchar_t`** , codificata come UTF-16 (uno o più elementi per ogni char acter).

- POSIX usa una sequenza con terminazione null di **`char`** , codificata come UTF-8 (uno o più elementi per ogni char acter).

- Un oggetto della classe `path` archivia il percorso in formato nativo, ma supporta una semplice conversione tra questo modulo archiviato e diversi moduli esterni:

  - Sequenza con terminazione null di **`char`** , codificata come preferita dal sistema operativo.

  - Sequenza con terminazione null di **`char`** , codificata come UTF-8.

  - Sequenza con terminazione null di **`wchar_t`** , codificata come preferita dal sistema operativo.

  - Sequenza con terminazione null di **`char16_t`** , codificata come UTF-16.

  - Sequenza con terminazione null di **`char32_t`** , codificata come UTF-32.

  Le conversioni reciproche tra queste rappresentazioni vengono mediate, come necessario, dall'uso di uno o più facet `codecvt`. Se non viene specificato alcun oggetto impostazioni locali specifico, questi facet vengono ottenuti dalle impostazioni locali globali.

Un'altra differenza sta nel dettaglio con cui ogni sistema operativo consente di specificare le autorizzazioni di accesso a file o directory:

- Windows registra se un file è di sola lettura o scrivibile, un attributo che non ha significato per le directory.

- POSIX registra se un file può essere letto, scritto o eseguito (analizzato, se una directory). E, se ogni operazione è consentita per il proprietario, il gruppo del proprietario o per tutti, più alcune altre autorizzazioni.

Comuni a entrambi i sistemi è la struttura imposta a un percorso dopo aver ignorato il nome radice. Per il percorso `c:/abc/xyz/def.ext` :

- Il nome radice è `c:` .

- La directory radice è `/` .

- Il percorso radice è `c:/` .

- Il percorso relativo è `abc/xyz/def.ext` .

- Il percorso padre è `c:/abc/xyz` .

- Il nome file è `def.ext` .

- Il gambo è `def` .

- L'estensione è `.ext` .

Una differenza minore è il separatore preferito tra la sequenza di directory in un percorso. Entrambi i sistemi operativi consentono di scrivere una barra `/` , ma in alcuni contesti Windows preferisce una barra rovesciata `\` . L'implementazione archivia il separatore preferito nel membro dati `preferred_separator` in `path` .

Infine, `path` gli oggetti hanno una funzionalità importante: è possibile usarli ovunque sia necessario un argomento filename nelle classi definite nell'intestazione [\<fstream>](fstream.md) .

Per ulteriori informazioni ed esempi di codice, vedere [esplorazione del file System (C++)](../standard-library/file-system-navigation.md).

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Descrizione|
|-|-|
|[Classe directory_entry](../standard-library/directory-entry-class.md)|Descrive un oggetto restituito da un oggetto `directory_iterator` o `recursive_directory_iterator` e contiene un oggetto `path` .|
|[Classe directory_iterator](../standard-library/directory-iterator-class.md)|Descrive un iteratore di input sequenziato attraverso i nomi file in una directory del file system.|
|[filesystemClasse _error](../standard-library/filesystem-error-class.md)|Classe di base per le eccezioni generate per segnalare un overflow del sistema di basso livello.|
|[Classe path](../standard-library/path-class.md)|Definisce una classe che archivia un oggetto di tipo modello `String` che può essere usato come nome file.|
|[Classe recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md)|Descrive un iteratore di input sequenziato attraverso i nomi file in una directory del file system. L'iteratore può anche accedere alle sottodirectory.|
|[Classe file_status](../standard-library/file-status-class.md)|Esegue il wrapping di un `file_type`.|

### <a name="structs"></a>Struct

|Nome|Descrizione|
|-|-|
|[struttura space_info](../standard-library/space-info-structure.md)|Contiene informazioni su un volume.|

## <a name="functions"></a>Funzioni

[\<filesystem> funzioni](../standard-library/filesystem-functions.md)

## <a name="operators"></a>Operatori

[\<filesystem> operatori](../standard-library/filesystem-operators.md)

## <a name="enumerations"></a>Enumerazioni

|Nome|Descrizione|
|-|-|
|[copy_options](../standard-library/filesystem-enumerations.md#copy_options)|Enumerazione usata con [copy_file](../standard-library/filesystem-functions.md#copy_file) che determina il comportamento nel caso in cui un file di destinazione esista già.|
|[directory_options](../standard-library/filesystem-enumerations.md#directory_options)|Enumerazione che specifica le opzioni per gli iteratori di directory.|
|[file_type](../standard-library/filesystem-enumerations.md#file_type)|Enumerazione di tipi di file.|
|[perm_options](../standard-library/filesystem-enumerations.md#perm_options)| Enumera le opzioni per la `permissions` funzione. |
|[perms](../standard-library/filesystem-enumerations.md#perms)|Un tipo di maschera di bit usato per trasferire le autorizzazioni e le opzioni per le autorizzazioni|

## <a name="see-also"></a>Vedere anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)
