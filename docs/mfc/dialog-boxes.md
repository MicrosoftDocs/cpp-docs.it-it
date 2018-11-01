---
title: Finestre di dialogo
ms.date: 11/04/2016
helpviewer_keywords:
- modeless dialog boxes [MFC], MFC dialog boxes
- MFC, dialog boxes
- modal dialog boxes [MFC], MFC dialog boxes
- CDialog class [MFC], MFC dialog boxes
- MFC dialog boxes
ms.assetid: e4feea1a-8360-4ccb-9b84-507f1ccd9ef3
ms.openlocfilehash: 400107a7b61ae28ca1d3ec69ee3217d58f55d9e2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50665075"
---
# <a name="dialog-boxes"></a>Finestre di dialogo

Applicazioni per Windows spesso comunicano con l'utente tramite le finestre di dialogo. Classe [CDialog](../mfc/reference/cdialog-class.md) fornisce un'interfaccia per la gestione delle finestre, l'editor di finestre di Visual C++ rende più semplice progettare le finestre di dialogo e creare le risorse del modello di finestra di dialogo e le creazioni guidate codice semplificano il processo di inizializzazione e convalida i controlli in una finestra di dialogo e di raccogliere i valori immessi dall'utente.

Finestre di dialogo contengono controlli, tra cui:

- Controlli comuni di Windows, ad esempio modificare finestre di pulsanti di comando, le caselle di riepilogo, caselle combinate, i controlli dell'albero, controlli elenco e gli indicatori di stato.

- Controlli ActiveX.

- Controlli creati dal proprietario: i controlli che sono responsabile del disegno nella finestra di dialogo.

La maggior parte delle finestre di dialogo sono modale, che richiede all'utente di chiudere la finestra di dialogo prima di usare qualsiasi altra parte del programma. Ma è possibile creare finestre di dialogo non modale, consentono agli utenti di lavorare con le altre finestre mentre è aperta la finestra di dialogo. MFC supporta entrambi i tipi di finestra di dialogo con la classe `CDialog`. I controlli vengono disposti e gestite usando una risorsa modello di finestra, creata con il [editor finestre](../windows/dialog-editor.md).

[Finestre delle proprietà](../mfc/property-sheets-mfc.md), noto anche come scheda finestre di dialogo, finestre di dialogo contenenti "pagine" di controlli di finestra di dialogo distinti. Ogni pagina contiene una cartella di file "scheda" nella parte superiore. Facendo clic su una scheda visualizzata questa pagina all'inizio della finestra di dialogo.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu](../mfc/example-displaying-a-dialog-box-via-a-menu-command.md)

- [Componenti della finestra di dialogo nel framework](../mfc/dialog-box-components-in-the-framework.md)

- [Finestre di dialogo modali e non modali](../mfc/modal-and-modeless-dialog-boxes.md)

- [Finestre delle proprietà e pagine delle proprietà](../mfc/property-sheets-and-property-pages-mfc.md) in una finestra di dialogo

- [Creazione della risorsa finestra di dialogo](../mfc/creating-the-dialog-resource.md)

- [Creazione di una classe di finestra di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)

- [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

- [(DDV) di convalida e DDX (DDX)](../mfc/dialog-data-exchange-and-validation.md)

- [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)

- [Mapping di messaggi Windows a classi](../mfc/mapping-windows-messages-to-your-class.md)

- [Funzioni membro comunemente sottoposte a override](../mfc/commonly-overridden-member-functions.md)

- [Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)

- [Classi di finestra di dialogo comuni](../mfc/common-dialog-classes.md)

- [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md)

- Creare un'applicazione con interfaccia utente è una finestra di dialogo: vedere la [CMNCTRL1](../visual-cpp-samples.md) oppure [CMNCTRL2](../visual-cpp-samples.md) programmi di esempio. La creazione guidata applicazione fornisce anche questa opzione.

- [Esempi](../mfc/dialog-sample-list.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
