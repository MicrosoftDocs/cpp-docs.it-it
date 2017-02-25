---
title: "Cenni preliminari sulla libreria di classi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.classes.mfc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "librerie di classi"
  - "librerie di classi, MFC"
  - "classi [C++], MFC"
  - "raggruppamento di classi MFC"
  - "MFC, libreria di classi"
ms.assetid: 9b0e3152-ac39-4f52-91b4-f20aa3a674aa
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Cenni preliminari sulla libreria di classi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa panoramica viene presentata la suddivisione in categorie e vengono descritte le classi della libreria MFC versione 9.0.  Le classi in MFC, nell'insieme, costituiscono un framework di applicazione, il framework di un'applicazione scritta per l'API di Windows.  L'attività di programmazione consiste nel compilare il codice specifico all'applicazione.  
  
 Le classi di libreria sono riportate qui nelle seguenti categorie:  
  
-   [Classe radice: CObject](../mfc/root-class-cobject.md)  
  
-   [Classi di architettura delle applicazioni MFC](../mfc/mfc-application-architecture-classes.md)  
  
    -   [Classi di supporto dell'applicazione e del thread](../mfc/application-and-thread-support-classes.md)  
  
    -   [Classi di routing dei comandi](../mfc/command-routing-classes.md)  
  
    -   [Classi documento](../mfc/document-classes.md)  
  
    -   [Classi di visualizzazione \(architettura\)](../mfc/view-classes-architecture.md)  
  
    -   [Classi della finestra cornice \(architettura\)](../mfc/frame-window-classes-architecture.md)  
  
    -   [Documento \- Classi modello](../mfc/document-template-classes.md)  
  
-   [Classi di finestra, di finestra di dialogo e di controllo](../mfc/window-dialog-and-control-classes.md)  
  
    -   [Classi della finestra cornice \(finestre\)](../mfc/frame-window-classes-windows.md)  
  
    -   [Classi di visualizzazione \(Windows\)](../mfc/view-classes-windows.md)  
  
    -   [Classi della finestra di dialogo](../mfc/dialog-box-classes.md)  
  
    -   [Classi del controllo](../mfc/control-classes.md)  
  
    -   [Classi della barra di controllo](../mfc/control-bar-classes.md)  
  
-   [Classi di disegno e di stampa](../mfc/drawing-and-printing-classes.md)  
  
    -   [Classi di output \(contesto di dispositivo\)](../mfc/output-device-context-classes.md)  
  
    -   [Classi dello strumento di disegno](../mfc/drawing-tool-classes.md)  
  
-   [Classi tipo di dati semplice](../mfc/simple-data-type-classes.md)  
  
-   [Matrice, elenco e classi della mappa](../mfc/array-list-and-map-classes.md)  
  
    -   [Classi di modello per matrici, elenchi e mappe](../mfc/template-classes-for-arrays-lists-and-maps.md)  
  
    -   [Classi di matrice pronte all'uso](../mfc/ready-to-use-array-classes.md)  
  
    -   [Classi di elenco pronte all'uso](../mfc/ready-to-use-list-classes.md)  
  
    -   [Classi di mappa pronte all'uso](../mfc/ready-to-use-map-classes.md)  
  
-   [Classi di file e di database](../mfc/file-and-database-classes.md)  
  
    -   [Classi di I\/O del file](../mfc/file-i-o-classes.md)  
  
    -   [Classi DAO](../mfc/dao-classes.md)  
  
    -   [Classi ODBC](../mfc/odbc-classes.md)  
  
    -   [Classi OLE DB](../mfc/ole-db-classes.md)  
  
-   [Classi internet e di rete](../mfc/internet-and-networking-classes.md)  
  
    -   [Classi Windows Sockets](../mfc/windows-sockets-classes.md)  
  
    -   [Classi Internet Win32](../mfc/win32-internet-classes.md)  
  
-   [Classi OLE](../mfc/ole-classes.md)  
  
    -   [Classe dei contenitori OLE](../mfc/ole-container-classes.md)  
  
    -   [Classi del server OLE](../mfc/ole-server-classes.md)  
  
    -   [Classi di trascinamento della selezione di trasferimento dei dati OLE](../mfc/ole-drag-and-drop-and-data-transfer-classes.md)  
  
    -   [Classi di finestre di dialogo comuni OLE](../mfc/ole-common-dialog-classes.md)  
  
    -   [Classi di automazione OLE](../mfc/ole-automation-classes.md)  
  
    -   [Classi del controllo OLE](../mfc/ole-control-classes.md)  
  
    -   [Classi di documenti attivi](../mfc/active-document-classes.md)  
  
    -   [Classi correlate a OLE](../mfc/ole-related-classes.md)  
  
-   [Debug e classi di eccezioni](../mfc/debugging-and-exception-classes.md)  
  
    -   [Classi di supporto per il debug](../mfc/debugging-support-classes.md)  
  
    -   [Classi eccezione](../mfc/exception-classes.md)  
  
 Nella sezione [Concetti fondamentali di progettazione di classi generale](../mfc/general-class-design-philosophy.md) viene illustrato come è stata progettata la libreria MFC.  
  
 Per una panoramica del framework, vedere [Utilizzo delle classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).  Alcune classi elencate in precedenza sono classi di utilizzo generale che possono essere utilizzate all'esterno del framework e garantiscono astrazioni utili come le raccolte, le eccezioni, i file e le stringhe.  
  
 Per comprendere l'ereditarietà di una classe, utilizzare il [Grafico della gerarchia di classi](../mfc/hierarchy-chart.md).  
  
 Oltre alle classi elencate in questi cenni preliminari, la libreria MFC contiene alcune funzioni globali, variabili globali e macro.  Una panoramica e un elenco dettagliato di questi sono disponibili nell'argomento [Funzioni globali e macro MFC](../mfc/reference/mfc-macros-and-globals.md), che segue il riferimento alfabetico alle classi MFC.  
  
## Vedere anche  
 [Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md)