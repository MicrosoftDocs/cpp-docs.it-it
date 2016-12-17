---
title: "DLL di estensione: cenni preliminari | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AFXDLL (libreria)"
  - "DLL [C++], estensione"
  - "DLL di estensione [C++], informazioni"
  - "DLL MFC [C++], DLL di estensione"
  - "versioni DLL condivise [C++]"
ms.assetid: eb5e10b7-d615-4bc7-908d-e3e99b7b1d5f
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# DLL di estensione: cenni preliminari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una DLL di estensione di MFC implementa generalmente delle classi riutilizzabili derivate dalle classi esistenti della libreria MFC.  Questo tipo di DLL viene compilato mediante la versione a collegamento dinamico della libreria MFC, anche detta versione condivisa di MFC.  Solo gli eseguibili MFC, applicazioni o DLL regolari, compilati con la versione condivisa di MFC possono utilizzare una DLL di estensione.  Questa DLL consente di derivare nuove classi personalizzate da MFC e di fornire quindi questa versione estesa di MFC alle applicazioni che chiamano la DLL.  
  
 Le DLL di estensione possono anche essere utilizzate per passare oggetti derivati da MFC tra l'applicazione e la DLL.  Le funzioni membro associate all'oggetto passato sono presenti nel modulo in cui è stato creato l'oggetto.  Poiché queste funzioni vengono esportate correttamente quando si utilizza la versione della DLL condivisa di MFC, è possibile passare liberamente puntatori a oggetti MFC o derivati da MFC tra un'applicazione e le relative DLL di estensione caricate.  
  
 Per un esempio di DLL di estensione che risponde ai requisiti di base, vedere l'esempio MFC [DLLHUSK](http://msdn.microsoft.com/it-it/dfcaa6ff-b8e2-4efd-8100-ee3650071f90).  In particolare, osservare i file Testdll1.cpp e Testdll2.cpp.  
  
 Tenere presente che il termine AFXDLL non è più utilizzato nella documentazione di Visual C\+\+.  Una DLL di estensione ha le stesse caratteristiche di AFXDLL.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL di estensione](../build/initializing-extension-dlls.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [DLL di estensione](../build/extension-dlls.md)  
  
-   [Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [DLL non MFC: cenni preliminari](../build/non-mfc-dlls-overview.md)  
  
-   [DLL regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)  
  
## Vedere anche  
 [Tipi di DLL](../build/kinds-of-dlls.md)