---
description: Altre informazioni su:/SYMBOLS
title: /SYMBOLS
ms.date: 09/05/2018
f1_keywords:
- /symbols
helpviewer_keywords:
- symbols, dumping
- public symbols
- symbols, displaying COFF symbol table
- symbol tables
- SYMBOLS dumpbin option
- /SYMBOLS dumpbin option
- -SYMBOLS dumpbin option
ms.assetid: 34bcae90-4561-4c77-a80c-065508dec39a
ms.openlocfilehash: f0cc213a8b37f99e0cb80f6df88967e4eb5204b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97230146"
---
# <a name="symbols"></a>/SYMBOLS

```
/SYMBOLS
```

Questa opzione consente di visualizzare la tabella dei simboli COFF. Le tabelle dei simboli sono presenti in tutti i file oggetto. Una tabella dei simboli COFF viene visualizzata in un file di immagine solo se è collegata a/DEBUG.

Di seguito è riportata una descrizione dell'output per/SYMBOLS. Per informazioni aggiuntive sul significato dell'output di/SYMBOLS, vedere la documentazione relativa a Winnt. h (IMAGE_SYMBOL e IMAGE_AUX_SYMBOL) o COFF.

Dato il dump di esempio seguente:

```
Dump of file main.obj
File Type: COFF OBJECT

COFF SYMBOL TABLE
000 00000000 DEBUG    notype       Filename     | .file
    main.cpp
002 000B1FDB ABS      notype       Static       | @comp.id
003 00000000 SECT1    notype       Static       | .drectve
    Section length     26, #relocs    0, #linenums    0, checksum 722C964F
005 00000000 SECT2    notype       Static       | .text
    Section length     23, #relocs    1, #linenums    0, checksum 459FF65F, selection    1 (pick no duplicates)
007 00000000 SECT2    notype ()    External     | _main
008 00000000 UNDEF    notype ()    External     | ?MyDump@@YAXXZ (void __cdecl MyDump(void))

String Table Size = 0x10 bytes

  Summary

         26 .drectve
         23 .text
```

## <a name="remarks"></a>Commenti

La descrizione seguente, per le righe che iniziano con un numero di simboli, descrive le colonne con informazioni rilevanti per gli utenti:

- Il primo numero a tre cifre è l'indice/numero di simboli.

- Se la terza colonna contiene la sezione *x*, il simbolo viene definito in tale sezione del file oggetto. Tuttavia, se UNDEF viene visualizzato, non è definito in tale oggetto e deve essere risolto altrove.

- La Quinta colonna (statica, esterna) indica se il simbolo è visibile solo all'interno di tale oggetto o se è pubblico (visibile esternamente). Un simbolo statico, _sym, non sarebbe collegato a un simbolo pubblico _sym; si tratta di due istanze diverse di funzioni denominate _sym.

L'ultima colonna in una linea numerata è il nome del simbolo, decorato e non decorato.

Solo l'opzione [/HEADERS](headers.md) DUMPBIN può essere usata nei file generati con l'opzione del compilatore [/GL](gl-whole-program-optimization.md).

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
