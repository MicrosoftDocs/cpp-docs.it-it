---
description: 'Altre informazioni su: macro e globali MFC'
title: Macro e funzioni globali MFC
ms.date: 11/04/2016
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
ms.openlocfilehash: 9e3d3acd74d1cf6db5856432cdefd632e36185f3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219148"
---
# <a name="mfc-macros-and-globals"></a>Macro e funzioni globali MFC

Il libreria Microsoft Foundation Class può essere suddiviso in due sezioni principali: (1) le classi MFC e (2) le macro e le variabili globali. Se una funzione o una variabile non è un membro di una classe, si tratta di una funzione o una variabile globale.

La libreria MFC e le macro di conversione delle stringhe di condivisione Active Template Library (ATL). Per ulteriori informazioni, vedere [macro di conversione di stringhe](../../atl/reference/string-conversion-macros.md) nella documentazione di ATL.

Le macro e i globali MFC offrono funzionalità nelle categorie seguenti.

## <a name="general-mfc"></a>MFC generale

- [Tipi di dati](data-types-mfc.md)

- [Cast di tipo degli oggetti classe MFC](type-casting-of-mfc-class-objects.md)

- [Servizi modelli a oggetti di runtime](run-time-object-model-services.md)

- [Servizi diagnostici](diagnostic-services.md)

- [Elaborazione delle eccezioni](exception-processing.md)

- [Formattazione CString e visualizzazione di finestre di messaggio](cstring-formatting-and-message-box-display.md)

- [Mappe messaggi](message-map-macros-mfc.md)

- [Mappe di interfacce e delegati](delegate-and-interface-maps.md)

- [Moduli e DLL](extension-dll-macros.md)

- [Informazioni sull'applicazione e gestione](application-information-and-management.md)

- [ID finestra e comando standard](standard-command-and-window-ids.md)

- [Helper di classi Collection](collection-class-helpers.md)

- [Funzioni bitmap grigie e con dithering](gray-and-dithered-bitmap-functions.md)

- [Routine DDX (Dialog Data Exchange) standard](standard-dialog-data-exchange-routines.md)

- [Routine di convalida dei dati delle finestre di dialogo standard (DDV)](standard-dialog-data-validation-routines.md)

- [Messaggi AFX](afx-messages.md)

- [Stili del controllo ToolBar](toolbar-control-styles.md)

- [Enumerazione Enumerazione CMFCImagePaintArea:: IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md)

## <a name="database"></a>Database

- [Funzioni RFX (record Field Exchange](record-field-exchange-functions.md) ) e [funzioni RFX (Bulk Record Field Exchange)](record-field-exchange-functions.md) per le classi ODBC MFC

- [Funzioni di scambio di campi di record (DFX)](record-field-exchange-functions.md) per le classi DAO MFC

- [Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView](dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md) (classi ODBC e DAO MFC)

- [Funzioni DDX (Dialog Data Exchange) per i controlli OLE](dialog-data-exchange-functions-for-ole-controls.md)

- [Macro e globali per semplificare la chiamata diretta delle funzioni API ODBC (Open Database Connectivity)](database-macros-and-globals.md)

- [Inizializzazione e terminazione del motore di database DAO](dao-database-engine-initialization-and-termination.md)

## <a name="internet"></a>Internet

- [Funzioni globali di analisi degli URL Internet](internet-url-parsing-globals.md)

## <a name="dhtml--dhtml-event-maps"></a>Mappe eventi DHTML/DHTML

- [Macro Helper DDX (Dialog Data Exchange) DHTML](ddx-dhtml-helper-macros.md)

- [Mappe eventi DHTML](dhtml-event-maps.md)

## <a name="ole"></a>OLE

- [Inizializzazione OLE](ole-initialization.md)

- [Controllo applicazione](application-control.md)

- [Mappe di invio](dispatch-maps.md)

MFC fornisce inoltre una funzione denominata [AfxEnableControlContainer](ole-initialization.md#afxenablecontrolcontainer) che consente a qualsiasi contenitore OLE sviluppato con MFC 4,0 di supportare completamente i controlli OLE incorporati.

## <a name="ole-controls"></a>Controlli OLE

- [Costanti di tipi di parametri varianti](variant-parameter-type-constants.md)

- [Accesso alla libreria dei tipi](type-library-access.md)

- [Pagine delle proprietà](property-pages-mfc.md)

- [Mappe eventi](event-maps.md)

- [Mappe sink di evento](event-sink-maps.md)

- [Mappe di connessione](connection-maps.md)

- [Registrazione di controlli OLE](registering-ole-controls.md)

- [Class factory e licenze](class-factories-and-licensing.md)

- [Persistenza di controlli OLE](persistence-of-ole-controls.md)

La prima parte di questa sezione illustra brevemente ognuna delle categorie precedenti ed elenca le macro e le variabili globali nella categoria, insieme a brevi descrizioni delle funzionalità. Di seguito vengono descritte le funzioni globali, le variabili globali e le macro nella libreria MFC.

> [!NOTE]
> Molte funzioni globali iniziano con il prefisso "AFX", ma alcune, ad esempio, le funzioni DDX (Dialog Data Exchange) e molte delle funzioni di database non rispettano questa convenzione. Tutte le variabili globali iniziano con "AFX" come prefisso. Le macro non iniziano con un prefisso particolare, ma sono scritte in lettere maiuscole.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../mfc/class-library-overview.md)
