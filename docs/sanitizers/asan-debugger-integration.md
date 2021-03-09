---
title: Libreria di funzionalità estese di Visual Studio AddressSanitizer (VCASan)
description: Descrizione tecnica di vcasan. lib.
ms.date: 03/02/2021
f1_keywords:
- vcasan
helpviewer_keywords:
- vcasan.lib
- vcasan
- vcasand.lib
- libvcasan.lib
- libvcasand.lib
ms.openlocfilehash: 8728fead94b5d2b4827b34f1a5461c08c821f2e7
ms.sourcegitcommit: 6ed44d9c3fb32e965e363b9c69686739a90a2117
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/08/2021
ms.locfileid: "102470466"
---
# <a name="visual-studio-addresssanitizer-extended-functionality-library-vcasan"></a>Libreria di funzionalità estese di Visual Studio AddressSanitizer (VCAsan)

Le *`VCAsan*.lib`* librerie implementano le funzionalità IDE del debugger esteso in Visual Studio. Queste funzionalità consentono all'IDE di visualizzare gli errori AddressSanitizer nelle sessioni di debug attive oppure offline salvando un file di dump di arresto anomalo del sistema con i metadati. La libreria è collegata ogni volta che AddressSanitizer è abilitato dal compilatore MSVC.

## <a name="vcasan-library-inventory"></a>Inventario della libreria VCAsan

| Opzione Runtime | Libreria di collegamento VCAsan  |
|---------------|----------------------|
| **`/MT`**           | *`libvcasan.lib`*        |
| **`/MD`**           | *`vcasan.lib`*           |
| **`/MTd`**          | *`libvcasand.lib`*       |
| **`/MDd`**          | *`vcasand.lib`*          |

## <a name="vcasan-library-features"></a>Funzionalità della libreria VCAsan

### <a name="rich-addresssanitizer-error-report-window-in-visual-studio-ide"></a>Finestra di report degli errori Rich AddressSanitizer nell'IDE di Visual Studio

La libreria VCAsan registra un callback nel runtime AddressSanitizer usando la funzione di interfaccia [`__asan_set_error_report_callback`](https://github.com/llvm/llvm-project/blob/1ba5ea67a30170053964a28f2f47aea4bb7f5ff1/compiler-rt/include/sanitizer/asan_interface.h#L256) . Se viene generato un report AddressSanitizer, questo callback viene usato per generare un'eccezione intercettata da Visual Studio. Visual Studio USA i dati dell'eccezione per generare il messaggio che viene visualizzato all'utente nell'IDE.

> [!NOTE]
> La libreria VCAsan registra una funzione di callback nel runtime di AddressSanitizer. Se il codice chiama questa funzione di registrazione una seconda volta, sovrascrive la registrazione del callback della libreria VCAsan. Ciò comporta la perdita di tutte le integrazioni dell'IDE di Visual Studio. Si tornerà all'esperienza utente IDE predefinita. È anche possibile che la chiamata di un utente registri il callback in modo che vada persa. Se si verificano problemi, archiviare un [bug](https://aka.ms/feedback/report?space=62).

### <a name="save-addresssanitizer-errors-in-a-new-type-of-crash-dump-file"></a>Salva gli errori di AddressSanitizer in un nuovo tipo di file di dump di arresto anomalo

Quando si collega la libreria VCAsan al file eseguibile, gli utenti possono abilitarla per generare un dump di arresto anomalo del sistema in fase di esecuzione. Il runtime di AddressSanitizer genera quindi un file di dump quando si verifica un errore di diagnostica. Per abilitare questa funzionalità, l'utente imposta la `ASAN_SAVE_DUMPS` variabile di ambiente utilizzando un comando come il seguente:

`set ASAN_SAVE_DUMPS=MyFileName.dmp`

Il file deve avere un suffisso. dmp per seguire le convenzioni dell'IDE di Visual Studio.

Ecco cosa accade quando viene specificato un file dump per `ASAN_SAVE_DUMPS` : se viene rilevato un errore dal runtime AddressSanitizer, viene salvato un file di dump di arresto anomalo del sistema con i metadati associati all'errore. Il debugger in Visual Studio versione 16,9 e successive è in grado di analizzare i metadati salvati nel file dump. È possibile impostare `ASAN_SAVE_DUMPS` in base ai singoli test, archiviare questi elementi binari e quindi visualizzarli nell'IDE con l'indicizzazione dell'origine appropriata.

## <a name="see-also"></a>Vedi anche

[Panoramica di AddressSanitizer](./asan.md)\
[Problemi noti di AddressSanitizer](./asan-known-issues.md)\
[Riferimenti per il linguaggio e la compilazione AddressSanitizer](./asan-building.md)\
[Riferimento runtime AddressSanitizer](./asan-runtime.md)\
[AddressSanitizer Shadow byte](./asan-shadow-bytes.md)\
[AddressSanitizer cloud o test distribuiti](./asan-offline-crash-dumps.md)\
[Esempi di errore AddressSanitizer](./asan-error-examples.md)
