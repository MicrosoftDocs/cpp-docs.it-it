---
title: Cenni preliminari sulla libreria di classi | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.mfc
dev_langs: C++
helpviewer_keywords:
- grouping MFC classes
- MFC, class library
- classes [MFC], MFC
- class libraries, MFC
- class libraries
ms.assetid: 9b0e3152-ac39-4f52-91b4-f20aa3a674aa
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ce5a658c86611c9fdd0663145ae3c09ef6544aa0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="class-library-overview"></a>Cenni preliminari sulla libreria di classi
Questa panoramica vengono suddivisi in categorie e descrive le classi in Microsoft Foundation classe libreria (MFC) versione 9.0. Le classi MFC, complessivamente, costituiscano un framework applicazione, il framework di un'applicazione scritta per l'API di Windows. Attività di programmazione consiste nel compilare il codice specifico per l'applicazione.  
  
 Classi della libreria sono riportate di seguito nelle categorie seguenti:  
  
-   [Classe Root: CObject](../mfc/root-class-cobject.md)  
  
-   [Classi architettura dell'applicazione MFC](../mfc/mfc-application-architecture-classes.md)  
  
    -   [Classi di supporto per applicazioni e thread](../mfc/application-and-thread-support-classes.md)  
  
    -   [Classi di routing dei comandi](../mfc/command-routing-classes.md)  
  
    -   [Classi documento](../mfc/document-classes.md)  
  
    -   [Classi visualizzazione (architettura)](../mfc/view-classes-architecture.md)  
  
    -   [Classi di finestre cornice (architettura)](../mfc/frame-window-classes-architecture.md)  
  
    -   [Classi di modelli di documento](../mfc/document-template-classes.md)  
  
-   [Classi di finestre, finestre di dialogo e controlli](../mfc/window-dialog-and-control-classes.md)  
  
    -   [Classi di finestre cornice (Windows)](../mfc/frame-window-classes-windows.md)  
  
    -   [Classi di visualizzazioni (Windows)](../mfc/view-classes-windows.md)  
  
    -   [Classi di finestre di dialogo](../mfc/dialog-box-classes.md)  
  
    -   [Classi di controlli](../mfc/control-classes.md)  
  
    -   [Classi di barre di controllo](../mfc/control-bar-classes.md)  
  
-   [Disegno e stampa di classi](../mfc/drawing-and-printing-classes.md)  
  
    -   [Classi Output (contesto del dispositivo)](../mfc/output-device-context-classes.md)  
  
    -   [Classi di strumenti di disegno](../mfc/drawing-tool-classes.md)  
  
-   [Classi del tipo di dati semplice](../mfc/simple-data-type-classes.md)  
  
-   [Classi di matrici, elenchi e mappe](../mfc/array-list-and-map-classes.md)  
  
    -   [Classi modello per matrici, elenchi e mappe](../mfc/template-classes-for-arrays-lists-and-maps.md)  
  
    -   [Classi di matrici pronte all'uso](../mfc/ready-to-use-array-classes.md)  
  
    -   [Classi di elenchi pronte all'uso](../mfc/ready-to-use-list-classes.md)  
  
    -   [Classi di mappe pronte all'uso](../mfc/ready-to-use-map-classes.md)  
  
-   [Classi di file e database](../mfc/file-and-database-classes.md)  
  
    -   [Classi dei / o file](../mfc/file-i-o-classes.md)  
  
    -   [Classi DAO](../mfc/dao-classes.md)  
  
    -   [Classi ODBC](../mfc/odbc-classes.md)  
  
    -   [Classi OLE DB](../mfc/ole-db-classes.md)  
  
-   [Classi di rete e Internet](../mfc/internet-and-networking-classes.md)  
  
    -   [Classi Windows Sockets](../mfc/windows-sockets-classes.md)  
  
    -   [Classi Internet Win32](../mfc/win32-internet-classes.md)  
  
-   [Classi OLE](../mfc/ole-classes.md)  
  
    -   [Classi di contenitori OLE](../mfc/ole-container-classes.md)  
  
    -   [Classi server OLE](../mfc/ole-server-classes.md)  
  
    -   [Classi di trasferimento dati e trascinamento della selezione OLE](../mfc/ole-drag-and-drop-and-data-transfer-classes.md)  
  
    -   [Classi di finestre di dialogo comuni OLE](../mfc/ole-common-dialog-classes.md)  
  
    -   [Classi di automazione OLE](../mfc/ole-automation-classes.md)  
  
    -   [Classi di controlli OLE](../mfc/ole-control-classes.md)  
  
    -   [Classi documento attivo](../mfc/active-document-classes.md)  
  
    -   [Classi correlate a OLE](../mfc/ole-related-classes.md)  
  
-   [Classi di eccezioni e debug](../mfc/debugging-and-exception-classes.md)  
  
    -   [Debug di classi di supporto](../mfc/debugging-support-classes.md)  
  
    -   [Classi di eccezioni](../mfc/exception-classes.md)  
  
 La sezione [filosofia di progettazione classe generale](../mfc/general-class-design-philosophy.md) viene illustrato come è stata progettata la libreria MFC.  
  
 Per una panoramica del framework, vedere [utilizzando le classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md). Alcune delle classi elencate sopra sono classi di uso generale che possono essere utilizzate all'esterno di framework e forniscono astrazioni utile, ad esempio raccolte, eccezioni, i file e stringhe.  
  
 Per visualizzare l'ereditarietà di una classe, utilizzare il [grafico delle gerarchie di classe](../mfc/hierarchy-chart.md).  
  
 Oltre alle classi elencate in questa panoramica, la libreria MFC contiene un numero di funzioni globali, variabili globali e macro. È una panoramica e un elenco dettagliato di questi nell'argomento [macro MFC e funzioni globali](../mfc/reference/mfc-macros-and-globals.md), che segue il riferimento alfabetico alle classi MFC.  
  
## <a name="see-also"></a>Vedere anche  
 [Applicazioni desktop MFC](../mfc/mfc-desktop-applications.md)

