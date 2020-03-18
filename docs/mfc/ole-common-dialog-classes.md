---
title: Classi di finestre di dialogo comuni OLE
ms.date: 11/04/2016
helpviewer_keywords:
- ActiveX classes [MFC]
- dialog classes [MFC], OLE
- OLE common dialog classes [MFC]
- common dialog classes [MFC]
ms.assetid: 706526ae-f94f-4909-a0f8-6b5fe954fd97
ms.openlocfilehash: b44a7b203c17f09f872cfedbb05798affb57f0f9
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447668"
---
# <a name="ole-common-dialog-classes"></a>Classi di finestre di dialogo comuni OLE

Queste classi gestiscono le attività OLE comuni implementando una serie di finestre di dialogo OLE standard. Forniscono inoltre un'interfaccia utente coerente per la funzionalità OLE.

[COleDialog](../mfc/reference/coledialog-class.md)<br/>
Utilizzato dal Framework per includere implementazioni comuni per tutte le finestre di dialogo OLE. Tutte le classi della finestra di dialogo nella categoria interfaccia utente sono derivate da questa classe di base. non è possibile usare direttamente `COleDialog`.

[COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Inserisci oggetto, l'interfaccia utente standard per l'inserimento di nuovi elementi collegati o incorporati OLE.

[COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Incolla speciale, l'interfaccia utente standard per l'implementazione del comando Modifica Incolla speciale.

[COleLinksDialog](../mfc/reference/colelinksdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica collegamenti, l'interfaccia utente standard per la modifica delle informazioni sugli elementi collegati.

[COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Cambia icona, l'interfaccia utente standard per la modifica dell'icona associata a un elemento OLE incorporato o collegato.

[COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Converti, ovvero l'interfaccia utente standard per la conversione di elementi OLE da un tipo a un altro.

[COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)<br/>
Incapsula la finestra di dialogo proprietà OLE comuni di Windows. Le finestre di dialogo delle proprietà OLE comuni forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows.

[COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo aggiornamento, l'interfaccia utente standard per l'aggiornamento di tutti i collegamenti in un documento. La finestra di dialogo contiene un indicatore di stato per indicare la modalità di completamento della procedura di aggiornamento.

[COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica origine, l'interfaccia utente standard per la modifica della destinazione o dell'origine di un collegamento.

[COleBusyDialog](../mfc/reference/colebusydialog-class.md)<br/>
Consente di visualizzare le finestre di dialogo Server occupato e server non in risposta, l'interfaccia utente standard per la gestione delle chiamate alle applicazioni occupate. Viene in genere visualizzato automaticamente dall'implementazione del `COleMessageFilter`.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
