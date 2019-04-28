---
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
ms.openlocfilehash: a47b7da9f0b01353ef15e8b5c070c19e7c521c37
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317705"
---
# <a name="symbols"></a>/SYMBOLS

```
/SYMBOLS
```

Questa opzione consente di visualizzare la tabella di simboli COFF. Tabelle di simboli presenti in tutti i file oggetto. Solo se è collegato con l'opzione /DEBUG, verrà visualizzata una tabella di simboli COFF in un file di immagine.

Di seguito è una descrizione dell'output per /SYMBOLS. Ulteriori informazioni sul significato dell'output /SYMBOLS sono reperibile visualizzando in Winnt. h (IMAGE_SYMBOL e IMAGE_AUX_SYMBOL) o la documentazione di COFF.

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

## <a name="remarks"></a>Note

La descrizione seguente, per le righe che iniziano con un numero di simboli, vengono descritte le colonne contenenti informazioni rilevanti per gli utenti:

- Il primo numero di tre cifre è il simbolo/numero di indice.

- Se la terza colonna contiene una sezione del*x*, il simbolo è definito in tale sezione del file oggetto. Ma se viene visualizzato UNDEF, non è definito in quell'oggetto e deve essere risolto in un' posizione.

- La quinta colonna (di statica, esterno) indica se il simbolo è visibile solo all'interno di tale oggetto, o se è pubblico (visibile esternamente). Un simbolo statico, sym, non è collegato a un sym simboli pubblici; potrebbe trattarsi di due istanze diverse di funzioni denominate sym.

L'ultima colonna in una riga di codice è il nome del simbolo, entrambi decorati e non decorati.

Solo le [/HEADERS](headers.md) (opzione dumpbin) è disponibile per l'uso con i file generati con la [/GL](gl-whole-program-optimization.md) opzione del compilatore.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
