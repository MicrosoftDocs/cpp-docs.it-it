---
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
ms.openlocfilehash: ed45fc7014bda18887be6dc8fbcdff8ba9a9c5f1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373049"
---
# <a name="mfc-macros-and-globals"></a>Macro e funzioni globali MFC

La libreria Microsoft Foundation Class può essere suddivisa in due sezioni principali: (1) le classi MFC e (2) le macro e i globali. Se una funzione o una variabile non è un membro di una classe, è una funzione o una variabile globale.

La libreria MFC e le macro di conversione delle stringhe di condivisione ATL (Active Template Library). Per ulteriori informazioni, vedere Macro di [conversione](../../atl/reference/string-conversion-macros.md) di stringhe nella documentazione DI ATL.

Le macro e i globali MFC offrono funzionalità nelle categorie seguenti.

## <a name="general-mfc"></a>MFC generale

- [Tipi di dati](data-types-mfc.md)

- [Cast di tipi di oggetti di classe MFCType casting of MFC class objects](type-casting-of-mfc-class-objects.md)

- [Servizi del modello a oggetti in fase di esecuzioneRun-time object model services](run-time-object-model-services.md)

- [Servizi diagnostici](diagnostic-services.md)

- [Elaborazione delle eccezioni](exception-processing.md)

- [Formattazione di CString e visualizzazione della finestra di messaggio](cstring-formatting-and-message-box-display.md)

- [Mappe messaggi](message-map-macros-mfc.md)

- [Mappe dei delegati e delle interfacce](delegate-and-interface-maps.md)

- [Moduli e DLL](extension-dll-macros.md)

- [Informazioni e gestione delle applicazioni](application-information-and-management.md)

- [Comandamenti standard di comandi e finestre](standard-command-and-window-ids.md)

- [Helper di classi Collection](collection-class-helpers.md)

- [Funzioni bitmap grigie e dithered](gray-and-dithered-bitmap-functions.md)

- [Routine DDX (Standard Dialog Data Exchange)](standard-dialog-data-exchange-routines.md)

- [Routine di convalida dei dati delle finestre di dialogo standard (DDV)Standard dialog data validation (DDV) routines](standard-dialog-data-validation-routines.md)

- [Messaggi AFX](afx-messages.md)

- [Stili del controllo ToolBar](toolbar-control-styles.md)

- [Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE](cmfcimagepaintarea-image-edit-mode-enumeration.md)

## <a name="database"></a>Database

- Funzioni di scambio di campi di record [(RFX)](record-field-exchange-functions.md) e [funzioni Bulk Record Field Exchange (RFX di massa)](record-field-exchange-functions.md) per le classi ODBC MFC

- [Funzioni DFX (Record Field Exchange)](record-field-exchange-functions.md) per le classi DAO MFC

- [Funzioni DDX (Dialog Data Exchange) per CRecordView e CDaoRecordView](dialog-data-exchange-functions-for-crecordview-and-cdaorecordview.md) (classi ODBC e DAO)

- [Funzioni DDX (Dialog Data Exchange) per i controlli OLE](dialog-data-exchange-functions-for-ole-controls.md)

- [Macro e variabili globali per facilitare la chiamata diretta delle funzioni API ODBC (Open Database Connectivity)](database-macros-and-globals.md)

- [Inizializzazione e terminazione del motore di database DAO](dao-database-engine-initialization-and-termination.md)

## <a name="internet"></a>Internet

- [Global di analisi degli URL Internet](internet-url-parsing-globals.md)

## <a name="dhtml--dhtml-event-maps"></a>Mappe eventi DHTML / DHTML

- [Macro helper DDX (DDX) della finestra di dialogo DHTML](ddx-dhtml-helper-macros.md)

- [Mappe eventi DHTML](dhtml-event-maps.md)

## <a name="ole"></a>OLE

- [inizializzazione OLE](ole-initialization.md)

- [Controllo applicazione](application-control.md)

- [Mappe di spedizione](dispatch-maps.md)

Inoltre, MFC fornisce una funzione denominata [AfxEnableControlContainer](ole-initialization.md#afxenablecontrolcontainer) che consente a qualsiasi contenitore OLE sviluppato con MFC 4.0 di supportare completamente i controlli OLE incorporati.

## <a name="ole-controls"></a>Controlli OLE

- [Costanti di tipo parametro Variant](variant-parameter-type-constants.md)

- [Accesso alla libreria dei tipi](type-library-access.md)

- [Pagine delle proprietà](property-pages-mfc.md)

- [Mappe degli eventi](event-maps.md)

- [Mappe del sink di evento](event-sink-maps.md)

- [Mappe di connessione](connection-maps.md)

- [Registrazione di controlli OLERegistering OLE controls](registering-ole-controls.md)

- [Fabbriche di classe e licenze](class-factories-and-licensing.md)

- [Persistenza di controlli OLEPersistence of OLE controls](persistence-of-ole-controls.md)

Nella prima parte di questa sezione vengono illustrate brevemente ciascuna delle categorie precedenti ed elencati i valori globali e le macro della categoria, insieme a brevi descrizioni delle funzionalità. Di seguito sono riportate le descrizioni delle funzioni globali, delle variabili globali e delle macro nella libreria MFC.

> [!NOTE]
> Molte funzioni globali iniziano con il prefisso "Afx", ma alcune, ad esempio, le funzioni DDX (Dialog Data Exchange) e molte delle funzioni di database non seguono questa convenzione. Tutte le variabili globali iniziano con "afx" come prefisso. Le macro non iniziano con alcun prefisso particolare, ma sono scritte in lettere maiuscole.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../mfc/class-library-overview.md)
