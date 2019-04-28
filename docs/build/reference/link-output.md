---
title: Output di LINK
ms.date: 11/04/2016
f1_keywords:
- link
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
ms.openlocfilehash: 183f83501d930188032ec4209623ef7cf1a30efa
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62269176"
---
# <a name="link-output"></a>Output di LINK

Output di link include file .exe, DLL, file map e i messaggi.

##  <a name="_core_output_files"></a> File di output

Il file di output predefinito dal collegamento è un file .exe. Se il [/DLL](dll-build-a-dll.md) opzione viene specificata, viene generato un file con estensione dll. È possibile controllare il nome del file di output con il [nome File di Output (/out)](out-output-file-name.md) opzione.

Nella modalità incrementale, collegamento Crea un file ilk per contenere le informazioni di stato per le compilazioni incrementali sono in un secondo momento del programma. Per informazioni dettagliate sui file ilk, vedere [file ilk](dot-ilk-files-as-linker-input.md). Per altre informazioni sul collegamento incrementale, vedere la [collegamento incrementale (/Incremental)](incremental-link-incrementally.md) opzione.

Quando viene creato un programma che contiene esportazioni (in genere una DLL), ma genera anche un file con estensione LIB, a meno che non è stato usato un file. exp nella compilazione. È possibile controllare il nome di file di libreria di importazione con il [/IMPLIB](implib-name-import-library.md) opzione.

Se il [genera file MAP (/Map)](map-generate-mapfile.md) opzione viene specificata, viene creato un file di mapping.

Se il [genera informazioni di Debug (/debug)](debug-generate-debug-info.md) opzione è specificata, viene creato un file PDB per contenere le informazioni di debug per il programma.

##  <a name="_core_other_output"></a> Altri Output

Quando si digita `link` senza altri input della riga di comando, collegamento, viene visualizzata un'istruzione di utilizzo che riepiloga le opzioni.

COLLEGAMENTO viene visualizzato un messaggio di copyright e versione e restituisce i file di comando di input, a meno che il [eliminare il messaggio di avvio (/ NOLOGO)](nologo-suppress-startup-banner-linker.md) opzione viene utilizzata.

È possibile usare la [Stampa messaggi di stato (/verbose)](verbose-print-progress-messages.md) opzione per visualizzare dettagli aggiuntivi relativi alla compilazione.

COLLEGAMENTO genera messaggi di errore e di avviso nel formato LNK*nnnn*. Questo prefisso di errore e l'intervallo di numeri sono usate anche dai LIB e DUMPBIN EDITBIN.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)
