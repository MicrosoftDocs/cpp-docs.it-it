---
title: Impostazione delle opzioni del Linker | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- files [C++], LINK
- input files [C++], linker
- linker [C++], ways to set options
- linker [C++], switches
- input files [C++]
- object/library modules
ms.assetid: e08fb487-0f2e-4f24-87db-232dbc8bd2e2
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: b64b1dfd342598735124940d01b1bb4939242e10
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="setting-linker-options"></a>Impostazione delle opzioni del linker
All'interno o all'esterno dell'ambiente di sviluppo, è possono impostare le opzioni del linker. Questo argomento per ogni opzione del linker illustra come è possibile impostare nell'ambiente di sviluppo. Vedere [opzioni del Linker](../../build/reference/linker-options.md) per un elenco completo.  
  
 Quando si esegue collegamento all'esterno dell'ambiente di sviluppo, è possibile specificare l'input in uno o più modi:  
  
-   Nel [della riga di comando](../../build/reference/linker-command-line-syntax.md)  
  
-   Utilizzando [file di comando](../../build/reference/link-command-files.md)  
  
-   In [le variabili di ambiente](../../build/reference/link-environment-variables.md)  
  
 COLLEGAMENTO elaborate prima le opzioni specificate nella variabile di ambiente LINK, seguito dalle opzioni nell'ordine in cui vengono specificati nella riga di comando e nei file di comando. Se un'opzione è ripetuta con argomenti diversi, l'ultima elaborata ha la precedenza.  
  
 Opzioni si applicano all'intera compilazione; Nessun opzioni possono essere applicate ai file di input specifici.  
  
## <a name="see-also"></a>Vedere anche  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)  (Informazioni di riferimento per la compilazione in C/C++)  
 [Opzioni del linker](../../build/reference/linker-options.md)