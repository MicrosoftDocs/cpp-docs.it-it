---
title: Tipi di DLL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC DLLs [C++], types
- DLLs [C++], types
- DLLs [C++], MFC
ms.assetid: f6a30db9-6138-4b2c-90cc-a17855e499a6
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 605d60535df8d0a94d58e120df89f975402b8a22
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369942"
---
# <a name="kinds-of-dlls"></a>Tipi di DLL
In questo argomento vengono fornite informazioni che consentono di determinare il tipo delle DLL da compilare.  
  
##  <a name="_core_the_different_kinds_of_dlls_available_with_visual_c.2b2b"></a> Diversi tipi di DLL disponibili  
 Utilizzo di Visual C++, è possibile compilare le DLL Win32 in C o C++ che non utilizzano la libreria di classe MFC (Microsoft Foundation). È possibile creare un progetto di DLL non MFC con la creazione guidata applicazione Win32.  
  
 La libreria MFC stessa è disponibile in librerie a collegamento statico o in un numero di DLL, con la creazione guidata DLL MFC. Se la DLL utilizza MFC, Visual C++ supporta tre diversi scenari di sviluppo di DLL:  
  
-   Creazione di una DLL MFC normale che staticamente collegata a MFC  
  
-   Creazione di una DLL MFC normale che dinamicamente collegata a MFC  
  
-   La creazione di una DLL di estensione MFC, collegata a MFC sempre in modo dinamico  
  
### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Panoramica delle DLL non MFC](../build/non-mfc-dlls-overview.md)  
  
-   [DLL MFC regolari collegate in modo statico a MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL MFC regolari collegate in modo dinamico a MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Panoramica delle DLL MFC di estensione](../build/extension-dlls-overview.md)  
  
-   [Delle DLL da utilizzare](#_core_which_kind_of_dll_to_use)  
  
##  <a name="_core_which_kind_of_dll_to_use"></a> La scelta delle DLL da utilizzare  
 Se la DLL non utilizza MFC, è possibile utilizzare Visual C++ per compilare una DLL Win32 non MFC. Il collegamento della DLL di MFC (statico o dinamico) richiede memoria e spazio su disco significativo. Non dovrebbe essere collegata a MFC, a meno che la DLL utilizza MFC.  
  
 Se la DLL verrà MFC e verrà utilizzata da applicazioni MFC o non MFC, è necessario compilare una DLL MFC regolare collegata a MFC in modo dinamico o una DLL MFC regolare collegata a MFC in modo statico. Nella maggior parte dei casi, consigliabile utilizzare MFC DLL regolare collegata a MFC in modo dinamico perché le dimensioni del file della DLL saranno molto più piccola e il risparmio di spazio in memoria, utilizzo della versione di MFC condivisa può essere significativo. Collegamento statico a MFC, le dimensioni del file della DLL verranno più grande e potenzialmente occupano memoria aggiuntiva perché carica la propria copia privata del codice della libreria MFC.  
  
 La creazione di una DLL collegata in modo dinamico a MFC è più veloce rispetto alla creazione di una DLL collegata a MFC in modo statico perché non è necessario collegare MFC. Ciò vale soprattutto nelle build di debug in cui il linker deve comprimere le informazioni di debug. Il collegamento a una DLL che già contiene le informazioni di debug, è meno informazioni di debug da comprimere nella DLL.  
  
 Uno svantaggio del collegamento dinamico a MFC consiste nel fatto che è necessario distribuire la DLL condivise MFCx0. dll e MSVCRT. dll (o file simili) con la DLL. Le DLL di MFC sono può essere ridistribuite gratuitamente, ma è comunque necessario installare le DLL nel programma di installazione. Inoltre, è necessario spedire Msvcrt. dll, che contiene la libreria di runtime C che viene utilizzata sia per il programma e DLL MFC.  
  
 Se la DLL verrà utilizzata solo dagli eseguibili MFC, è possibile scegliere tra la creazione di una DLL MFC regolare o una DLL di estensione MFC. Se la DLL implementa classi riutilizzabili derivate dalle classi MFC esistenti o è necessario passare oggetti derivati da MFC tra l'applicazione e il file DLL, è necessario compilare una DLL di estensione MFC.  
  
 Se la DLL collegata in modo dinamico a MFC, le DLL MFC può essere ridistribuite con la DLL. Questa architettura è particolarmente utile per la condivisione di libreria di classi tra più file eseguibili per risparmiare spazio su disco e ridurre l'utilizzo della memoria.  
  
 Prima della versione 4.0, tipi di Visual C++ supportavano solo due delle DLL che utilizzavano MFC: USRDLL e AFXDLL. DLL MFC regolari collegate in modo statico a MFC hanno le stesse caratteristiche di USRDLL. DLL di estensione MFC hanno le stesse caratteristiche di AFXDLL.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Panoramica delle DLL non MFC](../build/non-mfc-dlls-overview.md)  
  
-   [DLL MFC regolari collegate in modo statico a MFC](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL MFC regolari collegate in modo dinamico a MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Panoramica delle DLL MFC di estensione](../build/extension-dlls-overview.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)