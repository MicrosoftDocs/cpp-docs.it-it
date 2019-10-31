---
title: Opzioni di DUMPBIN
ms.date: 10/24/2019
f1_keywords:
- dumpbin
helpviewer_keywords:
- DUMPBIN program, options
ms.assetid: 563b696e-7599-4480-94b9-014776289ec8
ms.openlocfilehash: 81c66f1971294531a2904a0b681819476bcc1eb2
ms.sourcegitcommit: 6ed1bc5b26dc60a780c1fc5f2f19d57ba1dc47d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/30/2019
ms.locfileid: "73144551"
---
# <a name="dumpbin-options"></a>Opzioni di DUMPBIN

Un'opzione è costituita da un *identificatore di opzione*, che può essere un trattino (`-`) o una barra (`/`), seguita dal nome dell'opzione. I nomi di opzione non possono essere abbreviati. Alcune opzioni accettano argomenti, specificati dopo i due punti (`:`). Non sono consentiti spazi o tabulazioni all'interno di una specifica Option. Usare uno o più spazi o schede per separare le specifiche delle opzioni nella riga di comando. I nomi delle opzioni e la relativa parola chiave o gli argomenti del nome di file non fanno distinzione tra maiuscole La maggior parte delle opzioni si applica a tutti i file binari, ma alcune sono valide solo per determinati tipi di file. Per impostazione predefinita, DUMPBIN Invia le informazioni all'output standard. Usare l'opzione [/out](out-dumpbin.md) per inviare l'output a un file.

## <a name="options-list"></a>Elenco di opzioni

In DUMPBIN sono disponibili le opzioni seguenti:

- [/ALL](all.md)

- [/ARCHIVEMEMBERS](archivemembers.md)

- [/CLRHEADER](clrheader.md)

- [/DEPENDENTS](dependents.md)

- [/DIRECTIVES](directives.md)

- [\[/DISASM: {BYTEs\|nobytes}\]](disasm.md)

- [/ERRORREPORT: {NONE | Messaggio di richiesta | CODA | INVIARE](errorreport-dumpbin-exe.md)

- [/EXPORTS](dash-exports.md)

- [/FPO](fpo.md)

- [/HEADERS](headers.md)

- [\[/IMPORTS: filename\]](imports-dumpbin.md)

- [/LINENUMBERS](linenumbers.md)

- [\[/LINKERMEMBER: {1 | 2}\]](linkermember.md)

- [/LOADCONFIG](loadconfig.md)

- [/NOPDB](nopdb.md)

- [/OUT: nomefile](out-dumpbin.md)

- [/PDATA](pdata.md)

- [Specificando/PDBPATH\[: VERBOse\]](pdbpath.md)

- [/RANGEE: vaMin\[, vaMax\]](range.md)

- [/RAWDATA\[: {NONE\|1\|2\|4\|8}\[, #\]\]](rawdata.md)

- [/RELOCATIONS](relocations.md)

- [/SECTION: nome](section-dumpbin.md)

- [/SUMMARY](summary.md)

- [/SYMBOLS](symbols.md)

- [/TLS](tls.md)

Per elencare le opzioni supportate da DUMPBIN nella riga di comando, usare il comando **/?** opzione.

## <a name="see-also"></a>Vedere anche

[Ulteriori strumenti di compilazione MSVC](c-cpp-build-tools.md)\
\ della [riga di comando DUMPBIN](dumpbin-command-line.md)
[Riferimento a DUMPBIN](dumpbin-reference.md)
