---
title: Output di LINK
ms.date: 11/04/2016
helpviewer_keywords:
- mapfiles [C++]
- ILK files
- output files [C++], linker
- files [C++], LINK
- .ilk files
- LINK tool [C++], output
- import libraries [C++], creating
- executable files [C++], as linker output
- mapfiles [C++], LINK output
- linker [C++], output files
- DLLs [C++], as linker output
- LINK tool [C++], mapfile
ms.assetid: a98b557c-1947-447a-be1f-616fb45a9580
ms.openlocfilehash: 253f88ed50b9f064edf976277a4618e4f101ec7e
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81331783"
---
# <a name="link-output"></a>Output di LINK

L'output dei collegamenti include file con estensione exe, DLL, file di mappa e messaggi.

## <a name="output-files"></a><a name="_core_output_files"></a>File di output

Il file di output predefinito da LINK è un file con estensione exe. Se viene specificata l'opzione [/DLL,](dll-build-a-dll.md) LINK compila un file DLL. È possibile controllare il nome del file di output con l'opzione Nome file di [output (/OUT).](out-output-file-name.md)

In modalità incrementale, LINK crea un file con estensione ilk per contenere le informazioni sullo stato per le compilazioni incrementali successive del programma. Per informazioni dettagliate sui file con estensione ilk, vedere [File con estensione ilk](dot-ilk-files-as-linker-input.md). Per ulteriori informazioni sul collegamento incrementale, vedere l'opzione [Collegamento incrementale (/INCREMENTAL).](incremental-link-incrementally.md)

Quando IN TALE tabella viene creato un programma che contiene esportazioni (in genere una DLL), viene compilato anche un file LIB, a meno che nella compilazione non sia stato utilizzato un file exp. È possibile controllare il nome del file della libreria di importazione con l'opzione [/IMPLIB.](implib-name-import-library.md)

Se viene specificata l'opzione [Genera file mappa (/MAP),](map-generate-mapfile.md) LINK crea un file di mappa.

Se viene specificata l'opzione Genera informazioni di [debug (/DEBUG),](debug-generate-debug-info.md) in LINK viene creato un file PDB che contiene le informazioni di debug per il programma.

## <a name="other-output"></a><a name="_core_other_output"></a>Altro Output

Quando si `link` digita senza altri input della riga di comando, LINK visualizza un'istruzione di utilizzo che riepiloga le opzioni.

IN LINK viene visualizzato un messaggio relativo al copyright e alla versione e viene eseguito l'input del file di comando, a meno che non venga utilizzata l'opzione [Suppress Startup Banner (/NOLOGO).](nologo-suppress-startup-banner-linker.md)

È possibile utilizzare l'opzione Stampa messaggi di [stato (/VERBOSE)](verbose-print-progress-messages.md) per visualizzare ulteriori dettagli sulla compilazione.

LINK genera messaggi di errore e di avviso nel formato LNK*nnnn*. Questo prefisso di errore e l'intervallo di numeri vengono utilizzati anche da LIB, DUMPBIN e EDITBIN.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
