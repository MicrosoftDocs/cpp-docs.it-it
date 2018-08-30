---
title: '&lt;filesystem&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- filesystem/std::experimental::filesystem::directory_entry
- filesystem/std::experimental::filesystem::recursive_directory_iterator
- filesystem/std::experimental::filesystem::path
- filesystem/std::experimental::filesystem::filesystem_error
- filesystem/std::experimental::filesystem::directory_iterator
- <filesystem>
dev_langs:
- C++
ms.assetid: 5005753b-46fa-43e1-8d4e-1b38617d3cfd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 81046c8472a2a741d5e59622986326ab4b399871
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43207923"
---
# <a name="ltfilesystemgt"></a>&lt;filesystem&gt;

Includere l'intestazione &lt;filesystem> per accedere alle classi e funzioni che modificano e recuperano informazioni su percorsi, file e directory.

## <a name="syntax"></a>Sintassi

```cpp
#include <experimental/filesystem> // C++-standard header file name
#include <filesystem> // Microsoft-specific implementation header file name
using namespace std::experimental::filesystem::v1;
```

> [!IMPORTANT]
> A partire dalla versione di Visual Studio 2017, il \<filesystem > dell'intestazione non era ancora uno standard di C++. Visual C++ 2017 implementa gli standard della bozza finale, disponibile in [ISO/IEC JTC 1/SC 22/WG 21 N4100](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2014/n4100.pdf).

Questa intestazione supporta file system per uno di due ampie classi di sistemi operativi host: Microsoft Windows e Posix.

Mentre la maggior parte delle funzionalità sono comuni a entrambi i sistemi operativi, questo documento ne identifica le differenze. Ad esempio:

- Windows supporta più nomi radice, ad esempio c: o \\\nome_rete. Un file system è costituito da una foresta di alberi, ognuno con una propria directory radice, ad esempio c:\ o \\\nome_rete\\ e con una propria directory corrente, per il completamento di un percorso relativo (non un percorso assoluto).

- Posix supporta un singolo albero, senza nome radice, la singola directory radice / e una singola directory corrente.

Un'altra differenza significativa è la rappresentazione nativa dei nomi di percorso:

- Windows usa una sequenza con terminazione Null di wchar_t, codificata come UTF-16 (uno o due elementi per ogni carattere).

- Posix usa una sequenza con terminazione Null di char, codificata come UTF-8 (uno o più elementi per ogni carattere).

- Un oggetto di classe path archivia il percorso nel modulo nativo, ma supporta la semplice conversione tra questo modulo archiviato e diversi moduli esterni.

- Una sequenza con terminazione Null di char, codificata come preferita dal sistema operativo.

- Una sequenza con terminazione Null di char, codificata come UTF-8.

- Una sequenza con terminazione Null di wchar_t, codificata come preferita dal sistema operativo.

- Una sequenza con terminazione Null di char16_t, codificata come UTF-16.

- Una sequenza con terminazione Null di char32_t, codificata come UTF-32.

Le conversioni reciproche tra queste rappresentazioni vengono mediate, come necessario, dall'uso di uno o più facet `codecvt`. Se non viene definito un oggetto specifico delle impostazioni locali, questi facet vengono ottenuti dalle impostazioni locali globali.

Un'altra differenza sta nel dettaglio con cui ogni sistema operativo consente di specificare le autorizzazioni di accesso a file o directory:

1. Windows registra se un file è in sola lettura o scrivibile, un attributo che non ha significato per le directory.

1. Posix registra se un file può essere letto, scritto o eseguito (analizzato nel caso di una directory), dal proprietario, dal gruppo del proprietario o da tutti gli utenti, più alcune altre autorizzazioni.

Comuni a entrambi i sistemi è la struttura imposta a un percorso dopo aver ignorato il nome radice. Per il percorso c:/abc/xyz/def.ext:

- Il nome radice è c:.

- La directory radice è /.

- Il percorso radice è c:/.

- Il percorso relativo è abc/xyz/def.ext.

- Il percorso padre è c:/abc/xyz.

- Il nome file è def.ext.

- L'origine è def.

- L'estensione è .ext.

Una differenza minore è il **separatore preferito**, tra la sequenza di directory in un percorso. Entrambi i sistemi operativi consentono di scrivere la barra /, ma in alcuni contesti Windows preferisce una barra rovesciata \\.

Infine, una caratteristica importante degli oggetti percorso è che è possibile usarli ogni volta che è necessario un argomento filename nelle classi definite dell'intestazione \<fstream>.

Per altre informazioni ed esempi di codice, vedere [File System Navigation (C++)](../standard-library/file-system-navigation.md) (Esplorazione del file system (C++)).

## <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe directory_entry](../standard-library/directory-entry-class.md)|Descrive un oggetto restituito da `directory_iterator` o `recursive_directory_iterator` e contiene un percorso.|
|[Classe directory_iterator](../standard-library/directory-iterator-class.md)|Descrive un iteratore di input sequenziato attraverso i nomi file in una directory del file system.|
|[Classe filesystem_error](../standard-library/filesystem-error-class.md)|Classe di base per le eccezioni generate per segnalare un overflow del sistema di basso livello.|
|[Classe path](../standard-library/path-class.md)|Definisce una classe che archivia un oggetto di tipo modello `String` che può essere usato come nome file.|
|[Classe recursive_directory_iterator](../standard-library/recursive-directory-iterator-class.md)|Descrive un iteratore di input sequenziato attraverso i nomi file in una directory del file system. L'iteratore può anche accedere alle sottodirectory.|
|[Classe file_status](../standard-library/file-status-class.md)|Esegue il wrapping di un `file_type`.|

## <a name="structs"></a>Struct

|nome|Descrizione|
|----------|-----------------|
|[Struttura space_info Structure](../standard-library/space-info-structure.md)|Contiene informazioni su un volume.|

## <a name="functions"></a>Funzioni

[\<filesystem> funzioni](../standard-library/filesystem-functions.md)

## <a name="operators"></a>Operatori

[\<filesystem> operatori](../standard-library/filesystem-operators.md)

## <a name="enumerations"></a>Enumerazioni

|nome|Descrizione|
|----------|-----------------|
|[copy_options](../standard-library/filesystem-enumerations.md#copy_options)|Enumerazione usata con [copy_file](https://msdn.microsoft.com/4af7a9b0-8861-45ed-b84e-0307f0669d60) che determina il comportamento nel caso in cui un file di destinazione esista già.|
|[directory_options](../standard-library/filesystem-enumerations.md#directory_options)|Enumerazione che specifica le opzioni per gli iteratori di directory.|
|[file_type](../standard-library/filesystem-enumerations.md#file_type)|Enumerazione di tipi di file.|
|[perms](../standard-library/filesystem-enumerations.md#perms)|Un tipo di maschera di bit usato per trasferire le autorizzazioni e le opzioni per le autorizzazioni|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
