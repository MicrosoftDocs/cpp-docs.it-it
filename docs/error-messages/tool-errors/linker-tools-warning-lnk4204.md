---
title: "Avviso degli strumenti del linker LNK4204 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4204"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4204"
ms.assetid: 14adda20-0cbe-407b-90f6-9f81c93530e2
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso degli strumenti del linker LNK4204
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

in 'nomefile' mancano informazioni di debug per il modulo di riferimento; oggetto collegato senza informazioni di debug  
  
 Il file PDB contiene una firma errata.  Il collegamento dell'oggetto continuerà senza informazioni di debug.  Può essere utile ricompilare il file oggetto con l'opzione [\/Zi](../../build/reference/z7-zi-zi-debug-information-format.md).  
  
 L'avviso LNK4204 può verificarsi se alcuni oggetti nella libreria fanno riferimento a un file inesistente.  Ciò può avvenire ad esempio quando si genera nuovamente la soluzione. Un file oggetto potrebbe essere eliminato e non ricompilato a causa di un errore di compilazione.  In questo caso, eseguire la compilazione con **\/Z7** o **\/Fd** per aggiornare gli oggetti in modo che facciano riferimento a un singolo file per libreria, con nome diverso da quello del file pdb predefinito.  Per ulteriori informazioni, vedere [\/Fd \(Nome file database di programma\)](../../build/reference/fd-program-database-file-name.md).  Accertarsi che il file pdb venga salvato con la libreria ad ogni aggiornamento eseguito nel sistema di controllo del codice sorgente.