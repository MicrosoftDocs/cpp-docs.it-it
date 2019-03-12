---
title: I/O flusso Unicode in modalità testo e binaria
ms.date: 11/04/2016
f1_keywords:
- c.io
helpviewer_keywords:
- stream I/O routines
- I/O [CRT], unicode stream
- Unicode, stream I/O routines
- Unicode stream I/O
ms.assetid: 68be0c3e-a9e6-4fd5-b34a-1b5207f0e7d6
ms.openlocfilehash: c16d2f74856bb42dfd6ffc4e1af7306f6edd97fb
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57746003"
---
# <a name="unicode-stream-io-in-text-and-binary-modes"></a>I/O flusso Unicode in modalità testo e binaria

Quando una routine di I/O del flusso Unicode (come **fwprintf**, **fwscanf**, **fgetwc**, **fputwc**, **fgetws**, or **fputws**) opera su un file aperto in modalità testo (impostazione predefinita), vengono eseguiti due tipi di conversioni di caratteri:

- Conversione Unicode in MBCS o MBCS in Unicode. Quando una funzione di I/O del flusso Unicode viene eseguita in modalità testo, si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione **mbtowc**. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse stata chiamata la funzione **wctomb**.

- Conversione di ritorno a capo - segno di avanzamento riga (CR-LF). Questa conversione si verifica prima della conversione MBCS - Unicode (per le funzioni di input del flusso Unicode) e dopo la conversione Unicode - MBCS (per le funzioni di output del flusso Unicode). Durante l'input, ogni combinazione di ritorno a capo - segno di avanzamento riga viene convertita in un singolo carattere di avanzamento riga. Durante l'output, ogni carattere di avanzamento riga viene convertito in una combinazione di ritorno a capo - segno di avanzamento riga.

Tuttavia, quando una funzione di I/O del flusso Unicode viene eseguita in modalità binaria, il file viene considerato come Unicode e nessuna conversione CR-LF o conversione di caratteri si verifica durante l'input o l'output. Utilizzare _setmode (_fileno (stdin), _O_BINARY); istruzione per poter utilizzare correttamente wcin in un file di testo Unicode.

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Input e output](../c-runtime-library/input-and-output.md)<br/>
