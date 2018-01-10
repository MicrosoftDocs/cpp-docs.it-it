---
title: Variabili di ambiente LINK | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: link
dev_langs: C++
helpviewer_keywords:
- variables, environment
- LINK tool [C++], environment variables
- LIB environment variable
- environment variables [C++], LINK
ms.assetid: 9a3d3291-0cc4-4a7d-9d50-80e351b90708
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 67b36afce92140c4f205f8e5a4a46dfc7ac2d300
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="link-environment-variables"></a>Variabili di ambiente LINK

Lo strumento LINK usa le seguenti variabili di ambiente:  
  
-   COLLEGAMENTO e \_collegamento\_, se definito. Lo strumento LINK antepone le opzioni e gli argomenti definiti nella variabile di ambiente LINK e accoda le opzioni e gli argomenti definiti nel \_collegamento\_ variabile di ambiente per gli argomenti della riga di comando prima dell'elaborazione.  
  
-   LIB, se definito. Lo strumento LINK Usa il percorso LIB durante la ricerca di un oggetto, raccolta o un altro file specificato nella riga di comando o tramite il [/base](../../build/reference/base-base-address.md) opzione. Usa il percorso LIB anche per trovare un file PDB denominato in un oggetto. La variabile LIB può contenere uno o più specifiche di percorso, separate da punti e virgola. Un percorso deve puntare alla sottodirectory \lib dell'installazione di Visual C++.  
  
-   PATH, se lo strumento deve eseguire CVTRES e non riesce a trovare il file nella stessa directory di LINK. CVTRES è necessario a LINK per collegare un file res. PATH deve puntare alla sottodirectory \bin dell'installazione di Visual C++.  
  
-   TMP, per specificare una directory quando si collegano file OMF o res.  
  
## <a name="see-also"></a>Vedere anche  

[Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
[Opzioni del linker](../../build/reference/linker-options.md)   
[Compilare codice C/C++ nella riga di comando](../../build/building-on-the-command-line.md)  
[Impostare le variabili di percorso e di ambiente per le compilazioni da riga di comando](../../build/setting-the-path-and-environment-variables-for-command-line-builds.md)
