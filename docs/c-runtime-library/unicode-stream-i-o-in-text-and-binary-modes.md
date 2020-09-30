---
title: I/O flusso Unicode in modalità testo e binaria
description: Descrizione delle conversioni di caratteri con I/O del flusso Unicode.
ms.topic: conceptual
ms.date: 11/04/2016
helpviewer_keywords:
- stream I/O routines
- I/O [CRT], unicode stream
- Unicode, stream I/O routines
- Unicode stream I/O
ms.assetid: 68be0c3e-a9e6-4fd5-b34a-1b5207f0e7d6
ms.openlocfilehash: 9c4ef7da54463021f9487849df0235ae289e38fa
ms.sourcegitcommit: 9451db8480992017c46f9d2df23fb17b503bbe74
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2020
ms.locfileid: "91590238"
---
# <a name="unicode-stream-io-in-text-and-binary-modes"></a>I/O flusso Unicode in modalità testo e binaria

Quando una routine di I/O del flusso Unicode (come **fwprintf**, **fwscanf**, **fgetwc**, **fputwc**, **fgetws**, or **fputws**) opera su un file aperto in modalità testo (impostazione predefinita), vengono eseguiti due tipi di conversioni di caratteri:

- Conversione Unicode in MBCS o MBCS in Unicode. Quando una funzione di I/O del flusso Unicode viene eseguita in modalità testo, si presuppone che il flusso di origine o di destinazione sia una sequenza di caratteri multibyte. Di conseguenza, le funzioni Unicode di input flusso convertono i caratteri multibyte in caratteri "wide", come se fosse una chiamata alla funzione **mbtowc**. Per lo stesso motivo, le funzioni Unicode di output flusso convertono i caratteri wide in caratteri multibyte, come se fosse stata chiamata la funzione **wctomb**.

- Conversione di ritorno a capo-avanzamento riga. Questa conversione si verifica prima della conversione MBCS - Unicode (per le funzioni di input del flusso Unicode) e dopo la conversione Unicode - MBCS (per le funzioni di output del flusso Unicode). Durante l'input, ogni combinazione di ritorno a capo-avanzamento riga viene convertita in un singolo carattere di avanzamento riga. Durante l'output, ogni carattere di avanzamento riga viene convertito in una combinazione di ritorno a capo-avanzamento riga.

Tuttavia, quando una funzione di I/O del flusso Unicode viene eseguita in modalità binaria, il file viene considerato come Unicode e nessuna conversione CR-LF o conversione di caratteri si verifica durante l'input o l'output. Usare l'istruzione `_setmode( _fileno( stdin ), _O_BINARY );` per usare correttamente `wcin` in un file di testo Unicode.

## <a name="see-also"></a>Vedi anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
[Input e output](../c-runtime-library/input-and-output.md)<br/>
