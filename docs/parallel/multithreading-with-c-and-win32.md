---
title: Multithreading con C e Win32 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Windows API [C++], multithreading
- multithreading [C++], C and Win32
- Visual C, multithreading
- Win32 applications [C++], multithreading
- threading [C++], C and Win32
- Win32 [C++], multithreading
- threading [C]
ms.assetid: 67cdc99e-1ad9-452b-a042-ed246b70040e
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 30c7833a4df80669b6223f1fe6b1ccceed0257cc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="multithreading-with-c-and-win32"></a>Multithreading con C e Win32
Microsoft Visual C++ fornisce il supporto per la creazione di applicazioni multithread con Microsoft Windows: Windows XP, Windows 2000, Windows NT, Windows Me e Windows 98. Considerare l'utilizzo di più di un thread se l'applicazione deve gestire più attività, ad esempio simultanea input di tastiera e mouse. Un thread può elaborare input da tastiera, mentre un secondo thread consente di filtrare le attività del mouse. Un terzo thread è possibile aggiornare la schermata di visualizzazione in base ai dati dai thread di mouse e tastiera. Allo stesso tempo, altri thread può accedere ai file di disco o ottenere dati da una porta di comunicazione.  
  
 Con Visual C++, esistono due modi per programma a thread multipli: utilizzare la libreria Microsoft Foundation classe (MFC) o la libreria di run-time C e l'API Win32. Per informazioni sulla creazione di applicazioni multithread con MFC, vedere [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md) dopo aver letto i seguenti argomenti relativi al multithreading in C.  
  
 Questi argomenti vengono illustrano le funzionalità disponibili in Visual C++ che supportano la creazione di programmi multithread.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Cosa multithreading sta](../parallel/multithread-programs.md)  
  
-   [Supporto della libreria per il multithreading](../parallel/library-support-for-multithreading.md)  
  
-   [File di inclusione per il multithreading](../parallel/include-files-for-multithreading.md)  
  
-   [Funzioni della libreria di runtime C per il controllo di thread](../parallel/c-run-time-library-functions-for-thread-control.md)  
  
-   [Programma multithread di esempio in C](../parallel/sample-multithread-c-program.md)  
  
-   [Scrittura di un programma Multithread Win32](../parallel/writing-a-multithreaded-win32-program.md)  
  
-   [La compilazione e collegamento di programmi multithread](../parallel/compiling-and-linking-multithread-programs.md)  
  
-   [Suggerimenti per evitare problemi relativi ai programmi multithread](../parallel/avoiding-problem-areas-with-multithread-programs.md)  
  
-   [Archiviazione thread-local (TLS)](../parallel/thread-local-storage-tls.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Supporto del multithreading per il codice precedente (Visual C++)](../parallel/multithreading-support-for-older-code-visual-cpp.md)