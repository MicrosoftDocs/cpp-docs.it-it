---
title: Classi di finestre di dialogo comuni OLE
ms.date: 11/04/2016
f1_keywords:
- vc.classes.ole
helpviewer_keywords:
- ActiveX classes [MFC]
- dialog classes [MFC], OLE
- OLE common dialog classes [MFC]
- common dialog classes [MFC]
ms.assetid: 706526ae-f94f-4909-a0f8-6b5fe954fd97
ms.openlocfilehash: d34c141fc9a2b53eab6a4c0b0ce1799ff5243d84
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62186392"
---
# <a name="ole-common-dialog-classes"></a>Classi di finestre di dialogo comuni OLE

Queste classi di gestiscono attività comuni di OLE mediante l'implementazione di un numero di finestre di dialogo OLE standard. Offrono anche un'interfaccia utente coerente per la funzionalità OLE.

[COleDialog](../mfc/reference/coledialog-class.md)<br/>
Utilizzato dal framework per contenere le implementazioni comuni per tutte le finestre di dialogo OLE. Tutte le classi di finestra di dialogo nella categoria dell'interfaccia utente sono derivate da questa classe di base. `COleDialog` non può essere utilizzata direttamente.

[Classe COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Inserisci oggetto, l'interfaccia utente standard per l'inserimento di nuovi OLE elementi collegati o incorporati.

[COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Incolla speciale, l'interfaccia utente standard per l'implementazione del comando Modifica Incolla speciale.

[COleLinksDialog](../mfc/reference/colelinksdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica collegamenti, l'interfaccia utente standard per la modifica delle informazioni sugli elementi collegati.

[COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Cambia icona, l'interfaccia utente standard per modificare l'icona associata a un oggetto OLE incorporato o un elemento collegato.

[COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Converti, l'interfaccia utente standard per la conversione di elementi OLE da un tipo a altro.

[COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)<br/>
Incapsula la finestra di dialogo Windows OLE proprietà comune. Finestre di dialogo comuni OLE proprietà forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento documento OLE in modo coerente con gli standard di Windows.

[COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo di aggiornamento, l'interfaccia utente standard per l'aggiornamento di tutti i collegamenti in un documento. La finestra di dialogo contiene un indicatore di stato per indicare come chiudere la procedura di aggiornamento è fino al completamento.

[COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)<br/>
Consente di visualizzare la finestra di dialogo Modifica origine, l'interfaccia utente standard per la modifica della destinazione o l'origine di un collegamento.

[COleBusyDialog](../mfc/reference/colebusydialog-class.md)<br/>
Consente di visualizzare le finestre di dialogo Server occupato e Server non risponde, l'interfaccia utente standard per la gestione delle chiamate alle applicazioni occupate. In genere visualizzati automaticamente dal `COleMessageFilter` implementazione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)
