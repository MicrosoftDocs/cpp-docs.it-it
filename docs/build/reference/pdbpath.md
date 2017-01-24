---
title: "/PDBPATH | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/pdbpath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pdb (file), percorso"
  - "/PDBPATH (opzione di dumpbin)"
  - "PDB (file), percorso"
  - "PDBPATH (opzione dumpbin)"
  - "-PDBPATH (opzione dumpbin)"
ms.assetid: ccf67dcd-0b23-4250-ad47-06c48acbe82b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /PDBPATH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/PDBPATH[:VERBOSE] filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Il nome del file dll o exe per il quale si desidera trovare il file PDB corrispondente.  
  
 VERBOSE \(facoltativo\)  
 Indica tutte le directory in cui si è tentato di individuare il file PDB.  
  
## Note  
 Specificando \/PDBPATH la ricerca dei file PDB verrà effettuata sul computer negli stessi percorsi che verrebbero utilizzati dal debugger e verranno indicati quali file PDB, se presenti, corrispondono al file specificato in *filename*.  
  
 Quando si utilizza il debugger di Visual Studio, è possibile che si verifichi un problema dovuto al fatto che nel debugger viene utilizzato un file PDB che non corrisponde alla versione del file di cui si sta effettuando il debug.  
  
 L'opzione \/PDBPATH consentirà di effettuare la ricerca dei file PDB nei seguenti percorsi:  
  
-   Percorso in cui risiede l'eseguibile.  
  
-   Percorso del PDB scritto nell'eseguibile.  Si tratta in genere del percorso del file PDB al momento del collegamento dell'immagine.  
  
-   Percorso di ricerca configurato nel file IDE di Visual Studio.  
  
-   Percorsi di ricerca delle variabili di ambiente \_NT\_SYMBOL\_PATH e \_NT\_ALT\_SYMBOL\_PATH.  
  
-   Directory di Windows.  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)   
 [\/PDBALTPATH \(Usa percorso PDB alternativo\)](../../build/reference/pdbaltpath-use-alternate-pdb-path.md)