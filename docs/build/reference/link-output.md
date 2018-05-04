---
title: Output di LINK | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- link
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ae68de707ece35825a32a404ce14032d4bbd3141
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="link-output"></a>Output di LINK
Output di link include file .exe, DLL, file map e messaggi.  
  
##  <a name="_core_output_files"></a> File di output  
 Il file di output predefinito di collegamento è un file .exe. Se il [/DLL](../../build/reference/dll-build-a-dll.md) opzione, viene generato un file DLL. È possibile controllare il nome del file di output con il [nome File di Output (/out)](../../build/reference/out-output-file-name.md) opzione.  
  
 In modalità incrementale, viene creato un file ilk per contenere informazioni sullo stato per compilazioni incrementali successive del programma. Per ulteriori informazioni sui file ilk, vedere [file ilk](../../build/reference/dot-ilk-files-as-linker-input.md). Per ulteriori informazioni sul collegamento incrementale, vedere il [collegamento incrementale (/Incremental)](../../build/reference/incremental-link-incrementally.md) opzione.  
  
 Quando viene creato un programma che contiene esportazioni, in genere una DLL, viene generato anche un file con estensione LIB, a meno che non è stato utilizzato un file EXP nella compilazione. È possibile controllare il nome di file di libreria di importazione con le [/IMPLIB](../../build/reference/implib-name-import-library.md) opzione.  
  
 Se il [genera file MAP (/Map)](../../build/reference/map-generate-mapfile.md) è specificata l'opzione, viene creato un file MAP.  
  
 Se il [genera informazioni di Debug (/debug)](../../build/reference/debug-generate-debug-info.md) è specificata l'opzione, viene creato un file PDB per contenere le informazioni di debug per il programma.  
  
##  <a name="_core_other_output"></a> Altri Output  
 Quando si digita `link` senza altro input della riga di comando, collegamento, viene visualizzata un'istruzione di utilizzo che riepiloga le opzioni.  
  
 COLLEGAMENTO viene visualizzato un messaggio di copyright e la versione e restituisce i file di comando di input, a meno che il [sopprimere il messaggio di avvio (/ NOLOGO)](../../build/reference/nologo-suppress-startup-banner-linker.md) viene utilizzata l'opzione.  
  
 È possibile utilizzare il [Stampa messaggi sullo stato (/verbose)](../../build/reference/verbose-print-progress-messages.md) opzione per visualizzare ulteriori dettagli sulla build.  
  
 COLLEGAMENTO genera messaggi di errore e avviso nel formato LNK*nnnn*. Questo prefisso degli errori e l'intervallo di numeri sono utilizzati anche da LIB, DUMPBIN ed EDITBIN.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)