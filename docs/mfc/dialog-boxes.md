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
ms.openlocfilehash: 18b4c4d1386716a0a3282b88d6fdf5a701abce08
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685792"
---
# <a name="dialog-boxes"></a>Finestre di dialogo

Le applicazioni per Windows comunicano spesso con l'utente tramite le finestre di dialogo. La classe [CDialog](../mfc/reference/cdialog-class.md) fornisce un'interfaccia per la gestione delle finestre di C++ dialogo, l'editor finestre di dialogo visiva semplifica la progettazione di finestre di dialogo e la creazione delle risorse del modello di finestra di dialogo e le procedure guidate per il codice semplificano il processo di inizializzazione e convalida del controlli in una finestra di dialogo e raccolta dei valori immessi dall'utente.

Le finestre di dialogo contengono controlli, tra cui:

- Controlli comuni di Windows, ad esempio caselle di modifica, pulsanti, caselle di riepilogo, caselle combinate, controlli struttura ad albero, controlli elenco e indicatori di stato.

- Controlli ActiveX.

- Controlli creati dal proprietario: controlli di cui si è responsabili per il disegno nella finestra di dialogo.

La maggior parte delle finestre di dialogo è modale, per cui è necessario che l'utente chiuda la finestra di dialogo prima di utilizzare qualsiasi altra parte del programma. È tuttavia possibile creare finestre di dialogo non modali che consentono agli utenti di utilizzare altre finestre mentre la finestra di dialogo è aperta. MFC supporta entrambi i tipi di finestra di dialogo con la classe `CDialog`. I controlli vengono disposti e gestiti usando una risorsa modello di finestra di dialogo, creata con l' [editor finestre](../windows/dialog-editor.md).

Le finestre delle [Proprietà](../mfc/property-sheets-mfc.md), note anche come finestre di dialogo a schede, sono finestre di dialogo che contengono "pagine" di controlli della finestra di dialogo distinti. Ogni pagina contiene una cartella di file "tab" nella parte superiore. Se si fa clic su una scheda, la pagina viene visualizzata nella parte anteriore della finestra di dialogo.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu](../mfc/example-displaying-a-dialog-box-via-a-menu-command.md)

- [Componenti della finestra di dialogo nel Framework](../mfc/dialog-box-components-in-the-framework.md)

- [Finestre di dialogo modali e non modali](../mfc/modal-and-modeless-dialog-boxes.md)

- [Finestre delle proprietà e pagine delle proprietà](../mfc/property-sheets-and-property-pages-mfc.md) in una finestra di dialogo

- [Creazione della risorsa finestra di dialogo](../mfc/creating-the-dialog-resource.md)

- [Creazione di una classe di finestre di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)

- [Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)

- [DDX (Dialog Data Exchange) e convalida (DDV)](../mfc/dialog-data-exchange-and-validation.md)

- [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)

- [Mapping dei messaggi di Windows alla classe](../mfc/mapping-windows-messages-to-your-class.md)

- [Funzioni membro comunemente sottoposte a override](../mfc/commonly-overridden-member-functions.md)

- [Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)

- [Classi di finestre di dialogo comuni](../mfc/common-dialog-classes.md)

- [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md)

- Creare un'applicazione la cui interfaccia utente è una finestra di dialogo: vedere i programmi di esempio [CMNCTRL1](../overview/visual-cpp-samples.md) o [CMNCTRL2](../overview/visual-cpp-samples.md) . Questa opzione è disponibile anche nella creazione guidata applicazione.

- [Esempi](../mfc/dialog-sample-list.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
