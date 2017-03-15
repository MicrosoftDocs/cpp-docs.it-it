---
title: "/SYMBOLS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/symbols"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/SYMBOLS (opzione dumpbin)"
  - "simboli pubblici"
  - "tabelle dei simboli"
  - "SYMBOLS (opzione dumpbin)"
  - "-SYMBOLS (opzione dumpbin)"
  - "simboli, visualizzazione della tabella dei simboli COFF"
  - "simboli, dump"
ms.assetid: 34bcae90-4561-4c77-a80c-065508dec39a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /SYMBOLS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/SYMBOLS  
```  
  
 Questa opzione consente di visualizzare la tabella dei simboli COFF.  In tutti i file oggetto sono presenti tabelle dei simboli.  Una tabella dei simboli COFF viene visualizzata in un file di immagine solo se è stata collegata con l'opzione \/DEBUG.  
  
 Di seguito è illustrato l'output di \/SYMBOLS.  Per ulteriori informazioni sul significato dell'output dell'opzione \/SYMBOLS, vedere il file winnt.h \(IMAGE\_SYMBOL e IMAGE\_AUX\_SYMBOL\) o la documentazione di COFF.  
  
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
  
## Note  
 Nella descrizione che segue sono illustrate, per le righe del codice che iniziano con un numero di simbolo, le colonne contenenti informazioni rilevanti per gli utenti:  
  
-   Il primo numero di tre cifre è l'indice\/numero del simbolo.  
  
-   Se nella terza colonna è contenuto SECT*x*, il simbolo è definito in tale sezione del file oggetto.  Se invece è presente UNDEF, non è definito in tale oggetto e dovrà essere risolto altrove.  
  
-   La quinta colonna \(Static, External\) indica se il simbolo è visibile solo all'interno di tale oggetto o se è invece pubblico, ovvero visibile anche esternamente.  Un simbolo Static, \_sym, non è collegato a un simbolo Public \_sym in quanto rappresentano due istanze differenti di funzioni denominate \_sym.  
  
 Nell'ultima colonna delle righe numerate è contenuto il nome del simbolo, sia decorato che non decorato.  
  
 L'unica opzione di DUMPBIN utilizzabile sui file generati con l'opzione del compilatore [\/GL](../../build/reference/gl-whole-program-optimization.md) è [\/HEADERS](../../build/reference/headers.md).  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)