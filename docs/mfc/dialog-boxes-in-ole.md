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
ms.openlocfilehash: fa3d87e2cc17e297c3e6387920c6d527d8ddbe39
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58767652"
---
# <a name="dialog-boxes-in-ole"></a>Finestre di dialogo in OLE

Anche se un utente esegue un'applicazione abilitata per OLE, vi sono casi quando l'applicazione richiede informazioni da parte dell'utente per eseguire l'operazione. Le classi OLE MFC offrono numerose finestre di dialogo per raccogliere le informazioni necessarie. Questo argomento elenca le attività gestite dalle finestre di dialogo OLE e le classi necessarie per la visualizzazione di tali finestre di dialogo. Per informazioni dettagliate sulle finestre di dialogo OLE e le strutture utilizzate per personalizzarne il comportamento, vedere [riferimenti alla libreria MFC](../mfc/mfc-desktop-applications.md).

*Inserisci oggetto*<br/>
Questa finestra di dialogo consente all'utente di insert appena creato o gli oggetti esistenti nel documento composito. Inoltre, consente all'utente di scegliere se visualizzare l'elemento come un'icona e abilita il pulsante di comando Cambia icona. Visualizzare la finestra di dialogo quando l'utente sceglie di inserire oggetti dal menu Modifica. Usare la [COleInsertDialog](../mfc/reference/coleinsertdialog-class.md) classe per visualizzare questa finestra di dialogo. Notare che non è possibile inserire un'applicazione MDI in se stessa. Un'applicazione contenitore/server non può essere inserita in se stessa a meno che non sia un'applicazione SDI.

*Incolla speciale*<br/>
Questa finestra di dialogo consente all'utente controllare il formato utilizzato quando si incollano dati in un documento composito. L'utente può scegliere il formato dei dati, se si desidera incorporare o collegare i dati e se si desidera visualizzarlo come un'icona. Visualizzare la finestra di dialogo quando l'utente sceglie Incolla speciale dal menu Modifica. Usare la [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md) classe per visualizzare questa finestra di dialogo.

*Cambia icona*<br/>
Questa finestra di dialogo consente all'utente di selezionare l'icona da visualizzare per rappresentare l'elemento collegato o incorporato. Visualizzare questa finestra di dialogo quando l'utente sceglie l'icona di modifica dal menu Modifica o sceglie il pulsante Cambia icona nella Incolla speciale o finestre di dialogo Convert. Viene inoltre visualizzata quando l'utente apre la finestra di dialogo Inserisci oggetto e sceglie Visualizza come icona. Usare la [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md) classe per visualizzare questa finestra di dialogo.

*Convert*<br/>
Questa finestra di dialogo consente all'utente di modificare il tipo di un elemento incorporato o collegato. Ad esempio, se si è incorporato un metafile in un documento composito e successivamente si vuole usare un'altra applicazione per modificarlo, è possibile utilizzare la finestra di dialogo Converti. Questa finestra di dialogo viene visualizzata in genere facendo *tipo di elemento* oggetto dal menu Modifica e quindi, nel menu a cascata, facendo clic su Converti. Usare la [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md) classe per visualizzare questa finestra di dialogo. Per un esempio, eseguire l'esempio OLE MFC [OCLIENT](../overview/visual-cpp-samples.md).

*Collegamenti di modifica o aggiornamento*<br/>
La finestra di dialogo Modifica collegamenti consente all'utente di modificare le informazioni sull'origine dell'oggetto collegato. La finestra di dialogo Aggiorna i collegamenti verifica del codice sorgente di tutti gli elementi collegati nella finestra di dialogo corrente e consente di visualizzare la finestra di dialogo Modifica collegamenti se necessario. Visualizzare la finestra di dialogo Modifica collegamenti quando l'utente sceglie i collegamenti dal menu Modifica. La finestra di dialogo Aggiorna i collegamenti in genere viene visualizzata prima apertura di un documento composito. Usare la [COleLinksDialog](../mfc/reference/colelinksdialog-class.md) o il [COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md) classe, a seconda di quale finestra di dialogo da visualizzare.

*Server occupato o non risponde*<br/>
Quando l'utente tenta di attivare un elemento e il server è attualmente in grado di gestire la richiesta, in genere perché il server è in uso da un altro utente o di attività, viene visualizzata la finestra di dialogo Server occupato. Se il server non invia alcuna risposta alla richiesta di attivazione, viene visualizzata la finestra di dialogo Server non risponde. Queste finestre di dialogo vengono visualizzate tramite `COleMessageFilter`, in base a un'implementazione dell'interfaccia OLE `IMessageFilter`, e l'utente può decidere se tentare nuovamente la richiesta di attivazione. Usare la [COleBusyDialog](../mfc/reference/colebusydialog-class.md) classe per visualizzare questa finestra di dialogo.

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[OLE](../mfc/ole-in-mfc.md)
