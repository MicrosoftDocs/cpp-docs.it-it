---
title: "Variabili di ambiente LINK | Microsoft Docs"
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
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "variabili di ambiente [C++], LINK"
  - "variabile di ambiente LIB"
  - "LINK (strumento) [C++], variabili di ambiente"
  - "variabili, ambiente"
ms.assetid: 9a3d3291-0cc4-4a7d-9d50-80e351b90708
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Variabili di ambiente LINK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Lo strumento LINK usa le seguenti variabili di ambiente:  
  
-   LINK e \_LINK\_, se definite.  Lo strumento LINK antepone le opzioni e gli argomenti definiti nella variabile di ambiente LINK e accoda le opzioni e gli argomenti definiti nella variabile di ambiente \_LINK\_ agli argomenti della riga di comando prima di elaborarli.  
  
-   LIB, se definito.  Lo strumento LINK usa il percorso LIB durante la ricerca di un oggetto, una libreria o un altro file specificato nella riga di comando o tramite l'opzione [\/BASE](../../build/reference/base-base-address.md).  Usa il percorso LIB anche per trovare un file PDB denominato in un oggetto.  La variabile LIB può contenere uno o più specifiche di percorso, separate da punti e virgola.  Un percorso deve puntare alla sottodirectory \\lib dell'installazione di Visual C\+\+.  
  
-   PATH, se lo strumento deve eseguire CVTRES e non riesce a trovare il file nella stessa directory di LINK.  CVTRES è necessario a LINK per collegare un file res. PATH deve puntare alla sottodirectory \\bin dell'installazione di Visual C\+\+.  
  
-   TMP, per specificare una directory quando si collegano file OMF o res.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [Impostazione delle variabili di percorso e di ambiente per la compilazione dalla riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md)