---
title: Macro MFC e funzioni globali | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- MFC, global functions and variables
- MFC, macros
- global functions, MFC
- macros, MFC
- global functions [MFC]
- global variables, MFC
- Afx naming convention
- macros
ms.assetid: add4e33f-0e62-4d27-be14-896cb8675d22
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: eeb53dea24ccd4d34ef90045e3254915135e70c2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-macros-and-globals"></a>Macro e funzioni globali MFC
La libreria Microsoft Foundation Class possono essere suddivisi in due sezioni principali: (1) le classi MFC e (2) le macro e funzioni globali. Se una funzione o una variabile non è un membro di una classe, è una funzione globale o una variabile.  
  
 La libreria MFC e la libreria ATL (Active Template) condividono macro di conversione di stringhe. Per ulteriori informazioni, vedere [macro di conversione di stringhe](../../atl/reference/string-conversion-macros.md) nella documentazione ATL.  
  
 La macro MFC e funzioni globali offrono funzionalità nelle categorie seguenti.  
  
## <a name="general-mfc"></a>MFC generale  
  
-   [Tipi di dati](data-types-mfc.md)  
  
-   [Cast dei tipi di oggetti classe MFC](type-casting-of-mfc-class-objects.md)  
  
-   [Servizi modelli a oggetti in fase di esecuzione](run-time-object-model-services.md)  
  
-   [Servizi di diagnostica](diagnostic-services.md)  
  
-   [Eccezione durante l'elaborazione](exception-processing.md)  
  
-   [Formattazione CString e visualizzazione della finestra di messaggio](cstring-formatting-and-message-box-display.md)  
  
-   [Mappe messaggi](message-map-macros-mfc.md)  

-   [Delegato e mappe dell'interfaccia](delegate-and-interface-maps.md)

-   [Moduli e DLL](extension-dll-macros.md)
  
-   [Informazioni sull'applicazione e gestione](application-information-and-management.md)  
  
-   [ID finestra e comando standard](standard-command-and-window-ids.md)  
  
-   [Classi Collection](collection-class-helpers.md)  
  
-   [Funzioni di bitmap grige e retinate](gray-and-dithered-bitmap-functions.md)  
  
-   [Routine di exchange (DDX) dati della finestra di dialogo standard](standard-dialog-data-exchange-routines.md)  
  
-   [Routine di convalida (DDV) di dati di finestra di dialogo standard](standard-dialog-data-validation-routines.md)  
  
-   [Messaggi AFX](afx-messages.md)  
  
-   [Stili dei controlli ToolBar](toolbar-control-styles.md)  
  
-   [Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md)  

  
## <a name="database"></a>Database  
  
-   [Registrare le funzioni di campi (RFX)](record-field-exchange-functions.md) e [funzioni Bulk Record Field Exchange (RFX di massa)](record-field-exchange-functions.md) per le classi ODBC MFC  
  
-   [Funzioni RFX (DFX) registrare](record-field-exchange-functions.md) per le classi DAO MFC  
  
-   [Funzioni DDX (DDX) per CRecordView e CDaoRecordView](dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md) (classi ODBC MFC e DAO)  
  
-   [Finestra di dialogo delle funzioni di data exchange (DDX) per i controlli OLE](dialog-data-exchange-functions-for-ole-controls.md)  
  
-   [Macro e funzioni globali per facilitare la chiamata diretta delle funzioni Open Database Connectivity (ODBC) API](database-macros-and-globals.md)  
  
-   [Terminazione e l'inizializzazione del motore di database DAO](dao-database-engine-initialization-and-termination.md)  
  
## <a name="internet"></a>Internet  
  
-   [URL Internet globali di analisi](internet-url-parsing-globals.md)  
  
## <a name="dhtml--dhtml-event-maps"></a>DHTML / mappe eventi DHTML  
  
-   [Macro di supporto di (DDX) di scambio di dati di finestra di dialogo DHTML](ddx-dhtml-helper-macros.md)  
  
-   [Mappe eventi DHTML](dhtml-event-maps.md)  
  
## <a name="ole"></a>OLE  
  
-   [Inizializzazione OLE](ole-initialization.md)  
  
-   [Controllo applicazione](application-control.md)  
  
-   [Mappe di invio](dispatch-maps.md)  
  
 Inoltre, MFC fornisce una funzione denominata [AfxEnableControlContainer](ole-initialization.md#afxenablecontrolcontainer) che consente a qualsiasi contenitore OLE sviluppato con 4.0 di MFC per supportare completamente incorporati OLE (controlli).  
  
## <a name="ole-controls"></a>OLE (controlli)  
  
-   [Costanti di tipi di parametri varianti](variant-parameter-type-constants.md)  
  
-   [Accesso alla libreria dei tipi](type-library-access.md)  
  
-   [Pagine delle proprietà](property-pages-mfc.md)  
  
-   [Mappe eventi](event-maps.md)  
  
-   [Mappe sink di evento](event-sink-maps.md)  
  
-   [Mappe di connessione](connection-maps.md)  
  
-   [Registrazione di controlli OLE](registering-ole-controls.md)  
  
-   [Class factory e licenze](class-factories-and-licensing.md)  
  
-   [Persistenza di controlli OLE](persistence-of-ole-controls.md)  
  
 La prima parte di questa sezione viene brevemente vengono discusse le varie categorie precedenti e sono elencate le variabili globali e macro nella categoria, insieme a brevi descrizioni di funzionalità. In questo viene descritte le funzioni globali, variabili globali e macro nella libreria MFC.  
  
> [!NOTE]
>  Molte funzioni globali iniziano con il prefisso "Afx", ma non altri, ad esempio, le funzioni di dialog data exchange (DDX) e molte delle funzioni di database seguono questa convenzione. Tutte le variabili globali iniziano con "afx" come prefisso. Le macro non iniziano con alcun prefisso specifico, ma in cui sono scritti in lettere maiuscole.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../mfc/class-library-overview.md)



