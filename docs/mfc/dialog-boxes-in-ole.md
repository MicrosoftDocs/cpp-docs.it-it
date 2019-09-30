---
title: Finestre di dialogo in OLE
ms.date: 11/04/2016
helpviewer_keywords:
- MFC dialog boxes [MFC], OLE dialog boxes
- OLE dialog boxes
- dialog boxes
- OLE dialog boxes [MFC], about OLE dialog boxes
- dialog boxes [MFC], about dialog boxes
- dialog boxes [MFC], OLE
- Insert object
ms.assetid: 73c41eb8-738a-4d02-9212-d3395bb09a3a
ms.openlocfilehash: 997bfc0bda05f5a2520c102cb38777b533bcef95
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685777"
---
# <a name="dialog-boxes-in-ole"></a>Finestre di dialogo in OLE

Mentre un utente esegue un'applicazione abilitata per OLE, in alcuni casi l'applicazione necessita di informazioni dall'utente per eseguire l'operazione. Le classi OLE MFC forniscono diverse finestre di dialogo per raccogliere le informazioni necessarie. In questo argomento vengono elencate le attività gestite dalle finestre di dialogo OLE e le classi necessarie per visualizzare tali finestre di dialogo. Per informazioni dettagliate sulle finestre di dialogo OLE e sulle strutture utilizzate per personalizzare il comportamento, vedere [riferimenti a MFC](../mfc/mfc-desktop-applications.md).

*Inserisci oggetto*<br/>
Questa finestra di dialogo consente all'utente di inserire oggetti appena creati o esistenti nel documento composto. Consente inoltre all'utente di scegliere di visualizzare l'elemento come icona e di abilitare il pulsante di comando Cambia icona. Visualizza questa finestra di dialogo quando l'utente sceglie Inserisci oggetto dal menu Modifica. Utilizzare la classe [COleInsertDialog](../mfc/reference/coleinsertdialog-class.md) per visualizzare questa finestra di dialogo. Notare che non è possibile inserire un'applicazione MDI in se stessa. Un'applicazione contenitore/server non può essere inserita in se stessa a meno che non sia un'applicazione SDI.

*Incolla speciale*<br/>
Questa finestra di dialogo consente all'utente di controllare il formato utilizzato per incollare i dati in un documento composto. L'utente può scegliere il formato dei dati, se incorporare o collegare i dati e se visualizzarli come un'icona. Visualizza questa finestra di dialogo quando l'utente sceglie Incolla speciale dal menu Modifica. Utilizzare la classe [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md) per visualizzare questa finestra di dialogo.

*Cambia icona*<br/>
Questa finestra di dialogo consente all'utente di selezionare l'icona visualizzata per rappresentare l'elemento collegato o incorporato. Visualizza questa finestra di dialogo quando l'utente sceglie icona modifica dal menu modifica oppure sceglie il pulsante Cambia icona nelle finestre di dialogo Incolla speciale o Converti. Visualizzarla anche quando l'utente apre la finestra di dialogo Inserisci oggetto e sceglie Visualizza come icona. Utilizzare la classe [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md) per visualizzare questa finestra di dialogo.

*Convertire*<br/>
Questa finestra di dialogo consente all'utente di modificare il tipo di un elemento incorporato o collegato. Se, ad esempio, è stato incorporato un metafile in un documento composto e in seguito si desidera utilizzare un'altra applicazione per modificare il metafile incorporato, è possibile utilizzare la finestra di dialogo Converti. Questa finestra di dialogo viene in genere visualizzata scegliendo oggetto *tipo di elemento* dal menu modifica, quindi scegliere Converti dal menu a cascata. Utilizzare la classe [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md) per visualizzare questa finestra di dialogo. Per un esempio, eseguire l'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md).

*Modificare i collegamenti o aggiornare i collegamenti*<br/>
La finestra di dialogo Modifica collegamenti consente all'utente di modificare le informazioni relative all'origine di un oggetto collegato. Nella finestra di dialogo Aggiorna collegamenti vengono verificate le origini di tutti gli elementi collegati nella finestra di dialogo corrente e viene visualizzata la finestra di dialogo Modifica collegamenti, se necessario. Visualizzare la finestra di dialogo Modifica collegamenti quando l'utente sceglie collegamenti dal menu Modifica. La finestra di dialogo Aggiorna collegamenti viene in genere visualizzata quando un documento composto viene aperto per la prima volta. Utilizzare la classe [COleLinksDialog](../mfc/reference/colelinksdialog-class.md) o [COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md) , a seconda della finestra di dialogo che si desidera visualizzare.

*Server occupato o server non in risposta*<br/>
La finestra di dialogo Server occupato viene visualizzata quando l'utente tenta di attivare un elemento e il server non è attualmente in grado di gestire la richiesta, in genere perché il server è utilizzato da un altro utente o da un'altra attività. La finestra di dialogo Server che non risponde viene visualizzata se il server non risponde alla richiesta di attivazione. Queste finestre di dialogo vengono visualizzate tramite `COleMessageFilter`, in base a un'implementazione dell'interfaccia OLE `IMessageFilter`, e l'utente può decidere se tentare nuovamente la richiesta di attivazione. Utilizzare la classe [COleBusyDialog](../mfc/reference/colebusydialog-class.md) per visualizzare questa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[OLE](../mfc/ole-in-mfc.md)
