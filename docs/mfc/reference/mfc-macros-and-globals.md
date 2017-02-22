---
title: "Macro e funzioni globali MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.macros"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "convenzione di denominazione Afx"
  - "funzioni globali"
  - "funzioni globali, MFC"
  - "variabili globali, MFC"
  - "macro"
  - "macro, MFC"
  - "MFC, funzioni globali e variabili globali"
  - "MFC, macro"
ms.assetid: add4e33f-0e62-4d27-be14-896cb8675d22
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Macro e funzioni globali MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La libreria di Microsoft Foundation Class può essere suddivisa in due sezioni principali: \(1\) le classi MFC e \(2\) macro e globals.  Se una funzione o una variabile non è un membro di una classe, essa è una funzione o una variabile globale.  
  
 La libreria MFC e ATL \(Active Template Library\) condividono le macro per la conversione delle stringhe.  Per ulteriori informazioni, vedere [String Conversion Macros](../../atl/reference/string-conversion-macros.md) nella documentazione ATL.  
  
 Macro e globals MFC offrono funzionalità nelle seguenti categorie.  
  
## MFC generale  
  
-   [Tipi di dati](../../mfc/reference/data-types-mfc.md)  
  
-   [Cast di tipo degli oggetti classe MFC](../../mfc/reference/type-casting-of-mfc-class-objects.md)  
  
-   [Servizi modelli a oggetti in fase di esecuzione](../../mfc/reference/run-time-object-model-services.md)  
  
-   [Servizi di diagnostica](../../mfc/reference/diagnostic-services.md)  
  
-   [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)  
  
-   [Formattazione CString e visualizzazione finestre di messaggio](../../mfc/reference/cstring-formatting-and-message-box-display.md)  
  
-   [Mappe messaggi](../../mfc/reference/message-map-macros-mfc.md)  
  
-   [Informazioni sull'applicazione e gestione](../../mfc/reference/application-information-and-management.md)  
  
-   [Comando standard e ID finestra](../../mfc/reference/standard-command-and-window-ids.md)  
  
-   [Supporti delle classi di raccolte](../../mfc/reference/collection-class-helpers.md)  
  
-   [Funzioni bitmap grigie e con retinatura](../../mfc/reference/gray-and-dithered-bitmap-functions.md)  
  
-   [Routine di scambio dei dati delle finestre di dialogo \(DDX, Dialog Data Exchange\) standard](../../mfc/reference/standard-dialog-data-exchange-routines.md)  
  
-   [Routine di convalida dei dati delle finestre di dialogo \(DDV, dialog data validation\) standard](../../mfc/reference/standard-dialog-data-validation-routines.md)  
  
-   [Messaggi AFX](../../mfc/reference/afx-messages.md)  
  
-   [Stili dei controlli ToolBar](../../mfc/reference/toolbar-control-styles.md)  
  
-   [Enumerazione CMFCImagePaintArea::IMAGE\_EDIT\_MODE](../../mfc/reference/cmfcimagepaintarea-image-edit-mode-enumeration.md)  
  
## Database  
  
-   [Funzioni di trasferimento di campi di Record \(RFX, Record Field Exchange\)](../../mfc/reference/record-field-exchange-functions.md) e [Funzioni RFX di massa](../../mfc/reference/record-field-exchange-functions.md) per le classi ODBC MFC  
  
-   [Funzioni RFX](../../mfc/reference/record-field-exchange-functions.md) per le classi DAO MFC  
  
-   [Funzioni DDX per CRecordView e CDaoRecordView](../../mfc/reference/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md) \(classi ODBC e DAO MFC\)  
  
-   [Funzioni DDX per controlli OLE](../../mfc/reference/dialog-data-exchange-functions-for-ole-controls.md)  
  
-   [Macro e globals per facilitare le chiamate dirette alle funzioni API ODBC \(Open Database Connectivity\)](../../mfc/reference/database-macros-and-globals.md)  
  
-   [Inizializzazione e terminazione del motore di database DAO](../../mfc/reference/dao-database-engine-initialization-and-termination.md)  
  
## Internet  
  
-   [Globals di analisi degli URL internet](../../mfc/reference/internet-url-parsing-globals.md)  
  
## Mappe eventi DHTML e DHTML  
  
-   [Macro di supporto allo scambio di dati della finestra di dialogo \(DDX\) DHTML](../../mfc/reference/ddx-dhtml-helper-macros.md)  
  
-   [Mappe eventi DHTML](../../mfc/reference/dhtml-event-maps.md)  
  
## OLE  
  
-   [Inizializzazione OLE](../../mfc/reference/ole-initialization.md)  
  
-   [Controllo dell'applicazione](../../mfc/reference/application-control.md)  
  
-   [Mappe di invio](../../mfc/reference/dispatch-maps.md)  
  
 Inoltre, MFC fornisce una funzione chiamata [AfxEnableControlContainer](../Topic/AfxEnableControlContainer.md) che abilita tutti i contenitori OLE sviluppati con MFC 4.0 al supporto completo dei controlli incorporati OLE.  
  
## Controlli OLE  
  
-   [Costanti di tipo parametro Variant](../../mfc/reference/variant-parameter-type-constants.md)  
  
-   [Accesso alla libreria dei tipi](../../mfc/reference/type-library-access.md)  
  
-   [Pagine delle proprietà](../../mfc/reference/property-pages-mfc.md)  
  
-   [Mappe eventi](../../mfc/reference/event-maps.md)  
  
-   [Mappe sink di evento](../../mfc/reference/event-sink-maps.md)  
  
-   [Mappe di connessione](../../mfc/reference/connection-maps.md)  
  
-   [Registrazione di controlli OLE](../../mfc/reference/registering-ole-controls.md)  
  
-   [Class factory e registrazione](../../mfc/reference/class-factories-and-licensing.md)  
  
-   [Persistenza dei controlli OLE](../../mfc/reference/persistence-of-ole-controls.md)  
  
 La prima parte di questa sezione descrive brevemente ciascuna delle categorie precedenti ed elenca i globals e le macro nella categoria, insieme a brevi descrizioni delle funzionalità.  Attenendosi a ciò sono descrizioni delle funzioni globali, delle variabili globali e delle macro globali nella libreria MFC.  
  
> [!NOTE]
>  Numerose funzioni globali iniziano con il prefisso "Afx", ma alcune non seguono tale convenzione, come ad esempio le funzioni DDX e molte delle funzioni di database.  Tutte le variabili globali iniziano con "afx" come prefisso.  Le macro non iniziano con alcun prefisso specifico, ma sono scritte in lettere maiuscole.  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../../mfc/class-library-overview.md)