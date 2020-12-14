---
description: 'Altre informazioni su: output del collegamento'
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
ms.openlocfilehash: 18d14fda2702e588f69c8a613783087895827826
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97190991"
---
# <a name="link-output"></a>Output di LINK

L'output del collegamento include file con estensione exe, dll, file map e messaggi.

## <a name="output-files"></a><a name="_core_output_files"></a> File di output

Il file di output predefinito dal collegamento è un file exe. Se viene specificata l'opzione [/dll](dll-build-a-dll.md) , il collegamento compila un file con estensione dll. È possibile controllare il nome del file di output con l'opzione [nome file di output (/out)](out-output-file-name.md) .

In modalità incrementale, collegamento crea un file. ilk per mantenere le informazioni sullo stato per le successive compilazioni incrementali del programma. Per informazioni dettagliate sui file ilk, vedere [file ilk](dot-ilk-files-as-linker-input.md). Per ulteriori informazioni sul collegamento incrementale, vedere l'opzione [collegamento incrementale (/Incremental)](incremental-link-incrementally.md) .

Quando il collegamento crea un programma che contiene esportazioni (in genere una DLL), compila anche un file con estensione LIB, a meno che non sia stato usato un file con estensione exp nella compilazione. È possibile controllare il nome del file della libreria di importazione con l'opzione [/IMPLIB](implib-name-import-library.md) .

Se viene specificata l'opzione [genera file map (/Map)](map-generate-mapfile.md) , il collegamento crea un file map.

Se viene specificata l'opzione [genera informazioni di debug (/debug)](debug-generate-debug-info.md) , il collegamento crea un PDB per contenere le informazioni di debug per il programma.

## <a name="other-output"></a><a name="_core_other_output"></a> Altro output

Quando si digita `link` senza altri input della riga di comando, link Visualizza un'istruzione Usage che riepiloga le opzioni.

LINK Visualizza un messaggio di copyright e di versione e restituisce l'input del file di comando, a meno che non venga utilizzata l'opzione non [visualizzare il banner di avvio (/nologo)](nologo-suppress-startup-banner-linker.md) .

È possibile utilizzare l'opzione [Print Progress Messages (/verbose)](verbose-print-progress-messages.md) per visualizzare ulteriori dettagli sulla compilazione.

Il collegamento genera messaggi di errore e di avviso nel formato LNK *nnnn*. Il prefisso e l'intervallo di numeri di errore vengono utilizzati anche da LIB, DUMPBIN e EDITBIN).

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
