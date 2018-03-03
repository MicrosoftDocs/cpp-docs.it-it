---
title: 'DLL di estensione: Panoramica | Documenti Microsoft'
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
- AFXDLL library
- MFC DLLs [C++], MFC extension DLLs
- DLLs [C++], extension
- shared DLL versions [C++]
- extension DLLs [C++], about MFC extension DLLs
ms.assetid: eb5e10b7-d615-4bc7-908d-e3e99b7b1d5f
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 407ed0c63dce8e350c24ac5f260876fb6ab47576
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-extension-dlls-overview"></a>DLL di estensione MFC: Cenni preliminari
Un'estensione MFC DLL è una DLL che implementa generalmente classi riutilizzabili derivate dalle classi esistenti di libreria Microsoft Foundation Class. DLL di estensione MFC vengono compilate utilizzando la versione di libreria a collegamento dinamico di MFC (noto anche come la versione di MFC condivisa). Solo gli eseguibili MFC (applicazioni o le DLL regolari MFC) che vengono compilati con la versione condivisa di MFC è possono utilizzare una DLL di estensione MFC. Con una DLL di estensione MFC, è possibile derivare nuove classi personalizzate da MFC e quindi fornire questa versione estesa di MFC per le applicazioni che chiamano la DLL.  
  
 DLL di estensione utilizzabili per il passaggio di oggetti derivati da MFC tra l'applicazione e la DLL. Le funzioni membro associate all'oggetto passato esistono nel modulo in cui è stato creato l'oggetto. Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione DLL condivisa di MFC, è possibile passare liberamente MFC o puntatori a oggetti derivati da MFC tra un'applicazione e le DLL il caricamento di estensione MFC.  
  
 Per un esempio di una DLL che soddisfa i requisiti di base di una DLL di estensione MFC, vedere l'esempio MFC [DLLHUSK](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/dllhusk). In particolare, esaminare i file Testdll1.cpp e Testdll2.  
  
 Si noti che il termine AFXDLL non sono più utilizzato nella documentazione di Visual C++. Una DLL di estensione MFC ha le stesse caratteristiche di AFXDLL.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Inizializzazione di DLL estensione MFC](../build/run-time-library-behavior.md#initializing-extension-dlls)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [MFC (DLL di estensione)](../build/extension-dlls.md)  
  
-   [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Panoramica delle DLL non MFC](../build/non-mfc-dlls-overview.md)  
  
-   [DLL MFC regolari collegate in modo statico a MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL MFC regolari collegate in modo dinamico a MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di DLL](../build/kinds-of-dlls.md)