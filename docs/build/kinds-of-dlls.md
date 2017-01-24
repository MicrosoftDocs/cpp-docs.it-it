---
title: "Tipi di DLL | Microsoft Docs"
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
  - "DLL [C++], MFC"
  - "DLL [C++], tipi"
  - "DLL MFC [C++], tipi"
ms.assetid: f6a30db9-6138-4b2c-90cc-a17855e499a6
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Tipi di DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono fornite informazioni utili per stabilire quale tipo di DLL compilare.  
  
##  <a name="_core_the_different_kinds_of_dlls_available_with_visual_c.2b2b"></a> Tipi di DLL disponibili  
 Con Visual C\+\+ è possibile compilare DLL Win32 scritte in C o C\+\+ che non utilizzano la libreria MFC \(Microsoft Foundation Class\).  È possibile creare un progetto DLL non MFC con la Creazione guidata applicazioni Win32.  
  
 La libreria MFC stessa è disponibile, nelle librerie a collegamento statico o in alcune DLL, con la Creazione guidata DLL MFC.  Se la DLL utilizza MFC, Visual C\+\+ supporta tre diversi scenari di sviluppo delle DLL:  
  
-   Compilazione di una DLL regolare collegata a MFC in modo statico  
  
-   Compilazione di una DLL regolare collegata a MFC in modo dinamico  
  
-   Compilazione di una DLL di estensione MFC, collegata a MFC sempre in modo dinamico  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [DLL non MFC: cenni preliminari](../build/non-mfc-dlls-overview.md)  
  
-   [DLL regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [DLL di estensione: cenni preliminari](../build/extension-dlls-overview.md)  
  
-   [Scelta delle DLL da utilizzare](#_core_which_kind_of_dll_to_use)  
  
##  <a name="_core_which_kind_of_dll_to_use"></a> Scelta delle DLL da utilizzare  
 Se la DLL non utilizza MFC, utilizzare Visual C\+\+ per compilare una DLL Win32 non MFC.  Il collegamento della DLL a MFC, statico o dinamico, richiede una notevole quantità di spazio su disco e di memoria.  Non effettuare questo collegamento, a meno che la DLL non utilizzi realmente MFC.  
  
 Se la DLL si basa sulla libreria MFC e verrà utilizzata da applicazioni MFC e non MFC, è necessario compilare una DLL regolare che si colleghi a MFC in modo dinamico o in modo statico.  Nella maggior parte dei casi, è preferibile utilizzare una DLL regolare collegata a MFC in modo dinamico, poiché le dimensioni della DLL saranno notevolmente inferiori e sarà possibile risparmiare una quantità di memoria significativa grazie all'utilizzo della versione condivisa di MFC.  Se si utilizza il collegamento statico a MFC, le dimensioni della DLL saranno molto maggiori e occorrerà potenzialmente memoria aggiuntiva a causa del caricamento della copia privata del codice della libreria MFC.  
  
 La compilazione di una DLL con collegamento dinamico a MFC è più veloce rispetto a quella di una DLL con collegamento statico poiché non occorre collegare la libreria MFC.  Ciò è particolarmente evidente nelle build di debug in cui il linker deve comprimere le informazioni di debug.  Se si effettua il collegamento a una DLL che contiene già le informazioni di debug, si avranno meno informazioni di debug da comprimere nella DLL.  
  
 Uno svantaggio del collegamento dinamico a MFC è dato dal fatto che è necessario distribuire le DLL condivise Mfcx0.dll e Msvcrt.dll \(o file simili\) con la DLL.  Le DLL MFC possono essere ridistribuite liberamente, ma occorre includerle nel programma di installazione e installarle tramite quest'ultimo.  È inoltre necessario fornire il file Msvcrxx.dll, che contiene la libreria di runtime C utilizzata sia dal programma che dalle DLL MFC.  
  
 Se la DLL verrà utilizzata solo dagli eseguibili MFC, è possibile scegliere se compilare una DLL regolare o di estensione.  Se la DLL implementa classi riutilizzabili derivate dalle classi MFC esistenti o se occorre passare oggetti derivati da MFC tra l'applicazione e la DLL, sarà necessario compilare una DLL di estensione.  
  
 Se la DLL si collega a MFC in modo dinamico, le DLL MFC possono essere ridistribuite con la DLL.  Questa architettura è particolarmente utile per condividere la libreria di classi tra più file eseguibili per risparmiare spazio su disco e ridurre al minimo l'utilizzo della memoria.  
  
 Le versioni di Visual C\+\+ precedenti alla 4.0 supportavano solo due tipi di DLL che utilizzavano MFC denominate USRDLL e AFXDLL.  Le DLL regolari collegate a MFC in modo statico possiedono le stesse caratteristiche di USRDLL.  Le DLL di estensione di MFC hanno le stesse caratteristiche di AFXDLL.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [DLL non MFC: cenni preliminari](../build/non-mfc-dlls-overview.md)  
  
-   [DLL regolari collegate a MFC in modo statico](../build/regular-dlls-statically-linked-to-mfc.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [DLL di estensione: cenni preliminari](../build/extension-dlls-overview.md)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)