---
title: -SYMBOLS | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: /symbols
dev_langs: C++
helpviewer_keywords:
- symbols, dumping
- public symbols
- symbols, displaying COFF symbol table
- symbol tables
- SYMBOLS dumpbin option
- /SYMBOLS dumpbin option
- -SYMBOLS dumpbin option
ms.assetid: 34bcae90-4561-4c77-a80c-065508dec39a
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: fb8a1a42bf0bbb3b0bf9b907f93e1c9d0e69cf5b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="symbols"></a>/SYMBOLS
```  
/SYMBOLS  
```  
  
 Questa opzione consente di visualizzare la tabella di simboli COFF. Tabelle di simboli presenti in tutti i file oggetto. Solo se è collegato con /DEBUG, in un file di immagine viene visualizzata una tabella di simboli COFF.  
  
 Di seguito è una descrizione dell'output per /SYMBOLS. Ulteriori informazioni sul significato dell'output /SYMBOLS sono reperibile cercando in Winnt. h (IMAGE_SYMBOL e IMAGE_AUX_SYMBOL) o la documentazione di COFF.  
  
 Si consideri il seguente esempio di dump:  
  
```  
Dump of file main.obj  
File Type: COFF OBJECT  
  
COFF    SYMBOL    TABLE  
000    00000000   DEBUG      notype      Filename      | .file  
      main.cpp  
002   000B1FDB   ABS      notype      Static      | @comp.id  
003   00000000   SECT1      notype      Static      | .drectve  
      Section length       26, #relocs   0, #linenums    0, checksum 722C964F  
005   00000000   SECT2      notype      Static      | .text  
      Section length      23, #relocs      1, #linenums    0, checksum 459FF65F, selection    1 (pick no duplicates)  
007   00000000   SECT2      notype ()   External      | _main  
008   00000000   UNDEF      notype ()   External      | ?MyDump@@YAXXZ (void __cdecl MyDump(void))  
  
String Table Size = 0x10 bytes  
  
Summary  
  
      26 .drectve  
      23 .text  
```  
  
## <a name="remarks"></a>Note  
 La descrizione seguente, per le righe che iniziano con un numero di simboli, vengono descritte le colonne contenenti informazioni rilevanti per gli utenti:  
  
-   Il primo numero di tre cifre è il simbolo/numero di indice.  
  
-   Se la terza colonna contiene SECT*x*, il simbolo è definito in questa sezione del file oggetto. Ma se viene visualizzato UNDEF, non è definito in tale oggetto e deve essere risolto in un' posizione.  
  
-   La quinta colonna (Static, External) indica se il simbolo è visibile solo all'interno di tale oggetto, o se è pubblico (visibile esternamente). Un simbolo statico, sym, non è collegato a un sym simboli pubblici; potrebbe trattarsi di due istanze diverse di funzioni denominate sym.  
  
 L'ultima colonna in una riga di codice è il nome del simbolo sia decorato non decorati.  
  
 Solo il [/HEADERS](../../build/reference/headers.md) (opzione DUMPBIN) è disponibile per l'utilizzo con i file generati con la [/GL](../../build/reference/gl-whole-program-optimization.md) l'opzione del compilatore.  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)