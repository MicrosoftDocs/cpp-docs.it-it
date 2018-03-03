---
title: Impostazione delle opzioni del compilatore | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- compiler options, setting
- cl.exe compiler, setting options
ms.assetid: 4b079f5b-0017-4124-aad6-0d2b58e427e0
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dbbc7111ceae2353e8bc9820ead319556ce0016b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="setting-compiler-options"></a>Impostazione delle opzioni del compilatore
Le opzioni del compilatore C e C++ possono essere impostate nell'ambiente di sviluppo o sulla riga di comando.  
  
## <a name="in-the-development-environment"></a>Nell'ambiente di sviluppo  
 È possibile impostare le opzioni del compilatore per ogni progetto nella relativa **pagine delle proprietà** la finestra di dialogo. Nel riquadro a sinistra, selezionare **le proprietà di configurazione**, **C/C++** e quindi scegliere la categoria di opzioni del compilatore. Nell'argomento relativo a ciascuna opzione del compilatore viene descritto come impostarla e dove reperirla nell'ambiente di sviluppo. Vedere [opzioni del compilatore](../../build/reference/compiler-options.md) per un elenco completo.  
  
## <a name="outside-the-development-environment"></a>Al di fuori dell'ambiente di sviluppo  
 È possibile impostare le opzioni del compilatore (CL.exe):  
  
-   [Nella riga di comando](../../build/reference/compiler-command-line-syntax.md)  
  
-   [Nei file di comando](../../build/reference/cl-command-files.md)  
  
-   [Nella variabile di ambiente CL](../../build/reference/cl-environment-variables.md)  
  
 Le opzioni specificate nella variabile di ambiente CL vengono utilizzate ogni volta che viene richiamato CL. Se un file di comando viene denominato nella variabile di ambiente CL o sulla riga di comando, vengono utilizzate le opzioni specificate nel file di comando. A differenza della riga di comando o della variabile di ambiente CL, un file di comando consente di utilizzare più righe di opzioni e nomi file.  
  
 Le opzioni del compilatore vengono elaborate "da sinistra a destra" e quando viene rilevato un conflitto, prevale l'ultima opzione, ovvero quella all'estrema destra. La variabile di ambiente CL viene elaborata prima della riga di comando in modo che al verificarsi di un conflitto tra CL e la riga di comando, quest'ultima abbia la precedenza.  
  
## <a name="additional-compiler-topics"></a>Ulteriori argomenti relativi al compilatore  
  
-   [Compilazione veloce](../../build/reference/fast-compilation.md)  
  
-   [CL richiama il linker](../../build/reference/cl-invokes-the-linker.md)  
  
## <a name="see-also"></a>Vedere anche  
 [C/C++ Building Reference](../../build/reference/c-cpp-building-reference.md)  (Informazioni di riferimento per la compilazione in C/C++)  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)