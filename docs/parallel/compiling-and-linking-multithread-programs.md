---
title: La compilazione e collegamento di programmi Multithread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- compiling multithreaded programs
- multithreading [C++], linking programs
- threading [C++], linking programs
- multithreading [C++], compiled programs
- threading [C++], compiled programs
- compiling source code [C++], multithread programs
- linking [C++], multithread programs
ms.assetid: 27589afc-daf2-4f26-b868-a99de5c9dfec
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0145c480d74cb1978c1b6caef65489eae96501c2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiling-and-linking-multithread-programs"></a>Compilazione e collegamento di programmi multithread
Il programma Bounce è stato introdotto in [Sample Multithread C Program](../parallel/sample-multithread-c-program.md).  
  
 Vengono compilati i programmi con multithreading per impostazione predefinita.  
  
#### <a name="to-compile-and-link-the-multithread-program-bouncec-from-within-the-development-environment"></a>Per compilare e collegare il programma multithread Bounce dall'ambiente di sviluppo  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.  
  
2.  Nel **tipi di progetto** riquadro, fare clic su **Win32**.  
  
3.  Nel **modelli** riquadro, fare clic su **applicazione Console Win32**e quindi denominare il progetto.  
  
4.  Aggiungere il file contenente il codice sorgente C per il progetto.  
  
5.  Nel **compilare** dal menu Compila il progetto, fare clic su di **compilare** comando.  
  
#### <a name="to-compile-and-link-the-multithread-program-bouncec-from-the-command-line"></a>Per compilare e collegare il programma multithread Bounce. c dalla riga di comando  
  
1.  Compilare e collegare il programma:  
  
    ```  
    CL BOUNCE.C  
    ```  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C e Win32](../parallel/multithreading-with-c-and-win32.md)