---
title: Ricerca percorso usato da Windows per individuare una DLL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- searching [C++], DLLs
- DLLs [C++], Windows search path
- Windows [C++], DLL search path
- known DLL searches [C++]
- locating DLLs
- finding DLLs
- search paths [C++]
ms.assetid: 84bfb380-ad7b-4962-b2d0-51b19a45f1bb
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 53350ed473226c86dd4fefa93cff376a371dedf7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="search-path-used-by-windows-to-locate-a-dll"></a>Percorso di ricerca usato da Windows per l'individuazione di una DLL
Con il collegamento sia impliciti che espliciti, Windows cerca innanzitutto "DLL nota", ad esempio Kernel32 e User32. dll. Windows esegue quindi la ricerca per le DLL nella sequenza seguente:  
  
1.  La directory in cui si trova il modulo eseguibile per il processo corrente.  
  
2.  La directory corrente.  
  
3.  La directory di sistema di Windows. Il **GetSystemDirectory** funzione recupera il percorso della directory.  
  
4.  La directory di Windows. Il **GetWindowsDirectory** funzione recupera il percorso della directory.  
  
5.  Le directory elencate nella variabile di ambiente PATH.  
  
    > [!NOTE]
    >  La variabile d'ambiente LIBPATH non viene utilizzata.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Come collegare in modo implicito a una DLL](../build/linking-an-executable-to-a-dll.md#linking-implicitly)  
  
-   [Come collegare in modo esplicito a una DLL](../build/linking-an-executable-to-a-dll.md#linking-explicitly)  
  
-   [Determinare quale metodo di collegamento](../build/linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)