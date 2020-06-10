---
title: Cenni preliminari sulla libreria di classi
ms.date: 09/17/2019
f1_keywords:
- vc.classes.mfc
helpviewer_keywords:
- grouping MFC classes
- MFC, class library
- classes [MFC], MFC
- class libraries, MFC
- class libraries
ms.assetid: 9b0e3152-ac39-4f52-91b4-f20aa3a674aa
ms.openlocfilehash: bf30f1b0aa83ef002337b76601f04c7103963441
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620738"
---
# <a name="class-library-overview"></a>Cenni preliminari sulla libreria di classi

In questa panoramica vengono categorizzate e descritte le classi nella libreria Microsoft Foundation Class (MFC) versione 9,0. Le classi di MFC, riunite, costituiscono un Framework applicazione, ovvero il Framework di un'applicazione scritta per l'API Windows. L'attività di programmazione consiste nel compilare il codice specifico dell'applicazione.

Le classi della libreria sono presentate nelle categorie seguenti:

- [Classe Root: CObject](root-class-cobject.md)

- [Classi architettura dell'applicazione MFC](mfc-application-architecture-classes.md)

  - [Classi di supporto per applicazioni e thread](application-and-thread-support-classes.md)

  - [Classi di routing dei comandi](command-routing-classes.md)

  - [Classi documento](document-classes.md)

  - [Classi visualizzazione (architettura)](view-classes-architecture.md)

  - [Classi di finestre cornice (architettura)](frame-window-classes-architecture.md)

  - [Classi Document-Template](document-template-classes.md)

- [Classi di finestre, finestre di dialogo e controlli](window-dialog-and-control-classes.md)

  - [Classi di finestre cornice (Windows)](frame-window-classes-windows.md)

  - [Classi visualizzazione (Windows)](view-classes-windows.md)

  - [Classi di finestre di dialogo](dialog-box-classes.md)

  - [Classi dei controlli](control-classes.md)

  - [Classi di barre di controllo](control-bar-classes.md)

- [Disegno e stampa di classi](drawing-and-printing-classes.md)

  - [Classi Output (contesto del dispositivo)](output-device-context-classes.md)

  - [Disegno di classi strumento](drawing-tool-classes.md)

- [Classi del tipo di dati semplice](simple-data-type-classes.md)

- [Classi Array, List e Map](array-list-and-map-classes.md)

  - [Classi modello per matrici, elenchi e mappe](template-classes-for-arrays-lists-and-maps.md)

  - [Classi Array pronte all'uso](ready-to-use-array-classes.md)

  - [Classi List pronte all'uso](ready-to-use-list-classes.md)

  - [Classi Map pronte all'uso](ready-to-use-map-classes.md)

- [Classi File e Database](file-and-database-classes.md)

  - [Classi I/O di file](file-i-o-classes.md)

  - [Classi DAO](dao-classes.md)

  - [Classi ODBC](odbc-classes.md)

  - [Classi OLE DB](ole-db-classes.md)

- [Classi di rete e Internet](internet-and-networking-classes.md)

  - [Classi Windows Sockets](windows-sockets-classes.md)

  - [Classi Internet Win32](win32-internet-classes.md)

- [Classi OLE](ole-classes.md)

  - [Classi di contenitori OLE](ole-container-classes.md)

  - [Classi server OLE](ole-server-classes.md)

  - [Classi di trasferimento dati e trascinamento della selezione OLE](ole-drag-and-drop-and-data-transfer-classes.md)

  - [Classi di finestre di dialogo comuni OLE](ole-common-dialog-classes.md)

  - [Classi di automazione OLE](ole-automation-classes.md)

  - [Classi di controlli OLE](ole-control-classes.md)

  - [Classi documento attivo](active-document-classes.md)

  - [Classi correlate a OLE](ole-related-classes.md)

- [Classi di eccezioni e debug](debugging-and-exception-classes.md)

  - [Debug di classi di supporto](debugging-support-classes.md)

  - [Classi di eccezioni](exception-classes.md)

La sezione [filosofia di progettazione delle classi generali](general-class-design-philosophy.md) spiega come è stata progettata la libreria MFC.

Per una panoramica del Framework, vedere [utilizzo delle classi per scrivere applicazioni per Windows](using-the-classes-to-write-applications-for-windows.md). Alcune delle classi elencate in precedenza sono classi generiche che possono essere usate all'esterno del Framework e forniscono astrazioni utili, ad esempio raccolte, eccezioni, file e stringhe.

Per visualizzare l'ereditarietà di una classe, utilizzare il [grafico della gerarchia di classi](hierarchy-chart.md).

Oltre alle classi elencate in questa panoramica, la libreria MFC contiene una serie di funzioni globali, variabili globali e macro. Sono disponibili una panoramica e un elenco dettagliato di questi elementi nell'argomento [macro e globali MFC](reference/mfc-macros-and-globals.md), che seguono il riferimento alfabetico alle classi MFC.

## <a name="see-also"></a>Vedere anche

[Applicazioni desktop MFC](mfc-desktop-applications.md)
