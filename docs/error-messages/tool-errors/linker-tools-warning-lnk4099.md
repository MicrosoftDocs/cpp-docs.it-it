---
title: "Avviso degli strumenti del linker LNK4099 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "LNK4099"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK4099"
ms.assetid: 358170a4-07cd-43fe-918f-82c32757ffc5
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso degli strumenti del linker LNK4099
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile trovare il PDB 'nomefile' con 'oggetto\/libreria' o in 'percorso'; oggetto collegato senza informazioni di debug  
  
 Il file PDB non è stato trovato dal linker.  Copiarlo nella directory contenente `object/library`.  
  
 Per individuare il nome del file pdb associato al file oggetto:  
  
1.  Estrarre un file oggetto dalla libreria con [lib](../../build/reference/lib-reference.md) **\/extract:**`objectname`**.obj** `xyz`**.lib**.  
  
2.  Verificare il percorso del file pdb con **dumpbin \/section:.debug$T \/rawdata** `objectname`**.obj**.  
  
 È inoltre possibile eseguire la compilazione con [\/Z7](../../build/reference/z7-zi-zi-debug-information-format.md), in modo che non sia necessario utilizzare il file pdb, oppure rimuovere l'opzione del linker [\/DEBUG](../../build/reference/debug-generate-debug-info.md), se non sono disponibili file pdb per gli oggetti sottoposti a collegamento.