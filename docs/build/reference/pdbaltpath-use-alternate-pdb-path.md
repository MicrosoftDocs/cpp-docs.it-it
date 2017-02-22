---
title: "/PDBALTPATH (Usa percorso PDB alternativo) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/pdbaltpath"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "pdb (file), percorso"
  - "/PDBALTPATH (opzione dumpbin)"
  - "PDB (file), percorso"
  - "PDBALTPATH (opzione dumpbin)"
  - "-PDBALTPATH (opzione dumpbin)"
ms.assetid: 72e200aa-e2c3-4ad8-b687-25528da1aaaf
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /PDBALTPATH (Usa percorso PDB alternativo)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/PDBALTPATH:pdb_file_name  
```  
  
## Note  
 dove:  
  
 *pdb\_file\_name*  
 Percorso e nome del file con estensione pdb.  
  
## Note  
 Usare questa opzione per fornire un percorso alternativo per il file del database di programma \(con estensione pdb\) in un file binario compilato.  Di norma, il linker registra il percorso del file con estensione pdb nei file binari che produce.  È possibile usare questa opzione per fornire un percorso e un nome diversi per il file con estensione pdb.  Le informazioni fornite con \/PDBALTPATH non modificano il percorso o il nome del file con estensione pdb effettivo, ma solo le informazioni scritte dal linker nel file binario.  In questo modo è possibile fornire un percorso che sia indipendente dalla struttura di file del computer di compilazione.  Due usi comuni per questa opzione consistono nel fornire un percorso di rete o un file senza informazioni sul percorso.  
  
 Il valore di *pdb\_file\_name* può essere una stringa arbitraria, una variabile di ambiente o **%\_PDB%**.  Il linker espanderà una variabile di ambiente, ad esempio **%SystemRoot%**, nel valore corrispondente.  Il linker definisce le variabili di ambiente **%\_PDB%** e **%\_EXT%**.  **%\_PDB%** determina l'espansione nel nome del file pdb effettivo senza alcuna informazione sul percorso e **%\_EXT%** rappresenta l'estensione del file eseguibile generato.  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)   
 [\/PDBPATH](../../build/reference/pdbpath.md)