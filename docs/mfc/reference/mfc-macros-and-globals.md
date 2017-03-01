---
title: Macro MFC e funzioni globali | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
- global functions
- global variables, MFC
- Afx naming convention
- macros
ms.assetid: add4e33f-0e62-4d27-be14-896cb8675d22
caps.latest.revision: 18
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: d26b374e233326ac5acc97486edc8d38e6bf5d81
ms.openlocfilehash: 75db28c7be1ab497ba9656136d22b114b488c4ae
ms.lasthandoff: 02/24/2017

---
# <a name="mfc-macros-and-globals"></a>Macro e funzioni globali MFC
La libreria Microsoft Foundation Class può essere suddiviso in due sezioni principali: (1) le classi MFC e (2) macro e funzioni globali. Se una funzione o una variabile non è un membro di una classe, è una funzione globale o una variabile.  
  
 La libreria MFC e la libreria ATL (Active Template) condividono macro di conversione di stringhe. Per ulteriori informazioni, vedere [macro di conversione di stringhe](../../atl/reference/string-conversion-macros.md) nella documentazione ATL.  
  
 La macro MFC e funzioni globali offrono funzionalità nelle categorie seguenti.  
  
## <a name="general-mfc"></a>MFC generale  
  
-   [Tipi di dati](../../mfc/reference/data-types-mfc.md)  
  
-   [Cast dei tipi di oggetti classe MFC](../../mfc/reference/type-casting-of-mfc-class-objects.md)  
  
-   [Servizi modelli a oggetti in fase di esecuzione](../../mfc/reference/run-time-object-model-services.md)  
  
-   [Servizi diagnostici](../../mfc/reference/diagnostic-services.md)  
  
-   [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)  
  
-   [Formattazione CString e visualizzazione della finestra di messaggio](../../mfc/reference/cstring-formatting-and-message-box-display.md)  
  
-   [Mappe messaggi](../../mfc/reference/message-map-macros-mfc.md)  
  
-   [Informazioni sull'applicazione e gestione](../../mfc/reference/application-information-and-management.md)  
  
-   [ID finestra e comando standard](../../mfc/reference/standard-command-and-window-ids.md)  
  
-   [Classi di raccolte](../../mfc/reference/collection-class-helpers.md)  
  
-   [Funzioni bitmap grigie e con dithering](../../mfc/reference/gray-and-dithered-bitmap-functions.md)  
  
-   [Routine di exchange (DDX) dati della finestra di dialogo standard](../../mfc/reference/standard-dialog-data-exchange-routines.md)  
  
-   [Routine di convalida (DDV) di dati di finestra di dialogo standard](../../mfc/reference/standard-dialog-data-validation-routines.md)  
  
-   [Messaggi AFX](../../mfc/reference/afx-messages.md)  
  
-   [Stili del controllo toolBar](../../mfc/reference/toolbar-control-styles.md)  
  
-   [Enumerazione cmfcimagepaintarea:: Image_edit_mode](cmfcimagepaintarea-image-edit-mode-enumeration.md)  

  
## <a name="database"></a>Database  
  
-   [Registrare le funzioni di campi (RFX)](../../mfc/reference/record-field-exchange-functions.md) e [funzioni Bulk Record Field Exchange (RFX di massa)](../../mfc/reference/record-field-exchange-functions.md) per le classi ODBC MFC  
  
-   [Registrare funzioni RFX (DFX)](../../mfc/reference/record-field-exchange-functions.md) per le classi DAO MFC  
  
-   [Le funzioni DDX (DDX) per CRecordView e CDaoRecordView](../../mfc/reference/dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md) (classi ODBC MFC e DAO)  
  
-   [Finestra di dialogo delle funzioni di data exchange (DDX) per controlli OLE](../../mfc/reference/dialog-data-exchange-functions-for-ole-controls.md)  
  
-   [Macro e funzioni globali per facilitare il chiamata diretta delle funzioni Open Database Connectivity (ODBC) API](../../mfc/reference/database-macros-and-globals.md)  
  
-   [Inizializzazione del motore di database DAO e terminazione](../../mfc/reference/dao-database-engine-initialization-and-termination.md)  
  
## <a name="internet"></a>Internet  
  
-   [URL Internet globali di analisi](../../mfc/reference/internet-url-parsing-globals.md)  
  
## <a name="dhtml--dhtml-event-maps"></a>DHTML / mappe eventi DHTML  
  
-   [Macro DHTML dialog data exchange (DDX) helper](../../mfc/reference/ddx-dhtml-helper-macros.md)  
  
-   [Mappe eventi DHTML](../../mfc/reference/dhtml-event-maps.md)  
  
## <a name="ole"></a>OLE  
  
-   [Inizializzazione OLE](../../mfc/reference/ole-initialization.md)  
  
-   [Controllo applicazione](../../mfc/reference/application-control.md)  
  
-   [Mappe di invio](../../mfc/reference/dispatch-maps.md)  
  
 Inoltre, MFC fornisce una funzione denominata [AfxEnableControlContainer](http://msdn.microsoft.com/library/7aa0b9d2-5329-4bc3-9d41-856e30fe2c2b) che consente a qualsiasi contenitore OLE sviluppato con 4.0 di MFC per supportare completamente incorporati OLE (controlli).  
  
## <a name="ole-controls"></a>OLE (controlli)  
  
-   [Costanti di tipi di parametri varianti](../../mfc/reference/variant-parameter-type-constants.md)  
  
-   [Accesso alla libreria dei tipi](../../mfc/reference/type-library-access.md)  
  
-   [Pagine delle proprietà](../../mfc/reference/property-pages-mfc.md)  
  
-   [Mappe eventi](../../mfc/reference/event-maps.md)  
  
-   [Mappe sink di evento](../../mfc/reference/event-sink-maps.md)  
  
-   [Mappe di connessione](../../mfc/reference/connection-maps.md)  
  
-   [Registrazione di controlli OLE](../../mfc/reference/registering-ole-controls.md)  
  
-   [Class factory e licenze](../../mfc/reference/class-factories-and-licensing.md)  
  
-   [Persistenza di controlli OLE](../../mfc/reference/persistence-of-ole-controls.md)  
  
 La prima parte di questa sezione vengono descritte le categorie precedenti brevemente e sono elencate le funzioni globali e macro della categoria, con una breve descrizione delle funzionalità. In questo viene descritte le funzioni globali, variabili globali e macro nella libreria MFC.  
  
> [!NOTE]
>  Molte funzioni globali iniziano con il prefisso "Afx", ma alcuni, ad esempio, le funzioni di dialog data exchange (DDX) e molte delle funzioni di database, non si segue questa convenzione. Tutte le variabili globali iniziano con "afx" come prefisso. Le macro non iniziano con alcun prefisso specifico, ma vengono scritti in lettere maiuscole.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../mfc/class-library-overview.md)




