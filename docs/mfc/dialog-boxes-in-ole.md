---
title: Finestre di dialogo in OLE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC dialog boxes [MFC], OLE dialog boxes
- OLE dialog boxes
- dialog boxes
- OLE dialog boxes [MFC], about OLE dialog boxes
- dialog boxes [MFC], about dialog boxes
- dialog boxes [MFC], OLE
- Insert object
ms.assetid: 73c41eb8-738a-4d02-9212-d3395bb09a3a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9fe7f9b4b97fd17e73c3dd9f113a87d8f087b93c
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929663"
---
# <a name="dialog-boxes-in-ole"></a>Finestre di dialogo in OLE
Anche se un utente esegue un'applicazione abilitata per OLE, esistono volte quando l'applicazione necessita di informazioni da parte dell'utente per eseguire l'operazione. Le classi OLE MFC forniscono una serie di finestre di dialogo per raccogliere le informazioni necessarie. Questo argomento elenca le attività gestite dalle finestre di dialogo OLE e le classi necessarie per visualizzare le finestre di dialogo. Per informazioni dettagliate sulle finestre di dialogo OLE e le strutture utilizzate per personalizzare il comportamento, vedere [riferimenti alla libreria MFC](../mfc/mfc-desktop-applications.md).  
  
 *Inserisci oggetto*  
 Questa finestra di dialogo consente all'utente di inserimento appena creato o gli oggetti esistenti nel documento composito. Inoltre, consente all'utente di scegliere di visualizzare l'elemento come un'icona e abilita il pulsante di comando di modifica dell'icona. Visualizzare questa finestra di dialogo quando l'utente sceglie Inserisci oggetto dal menu Modifica. Usare la [classe COleInsertDialog](../mfc/reference/coleinsertdialog-class.md) classe per visualizzare questa finestra di dialogo. Notare che non è possibile inserire un'applicazione MDI in se stessa. Un'applicazione contenitore/server non può essere inserita in se stessa a meno che non sia un'applicazione SDI.  
  
 *Incolla speciale*  
 Questa finestra di dialogo consente all'utente di controllare il formato utilizzato quando si incollano dati in un documento composito. L'utente può scegliere il formato dei dati, se si desidera incorporare o collegare i dati e se si desidera visualizzare come icona. Visualizzare questa finestra di dialogo quando l'utente sceglie Incolla speciale dal menu Modifica. Usare la [classe COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md) classe per visualizzare questa finestra di dialogo.  
  
 *Cambia icona*  
 Questa finestra di dialogo consente all'utente di selezionare l'icona da visualizzare per rappresentare l'elemento collegato o incorporato. Visualizzare questa finestra di dialogo quando l'utente sceglie l'icona di modifica dal menu Modifica o sceglie il pulsante Cambia icona Incolla speciale o finestre di dialogo Converti. Viene inoltre visualizzata quando l'utente apre la finestra di dialogo Inserisci oggetto e sceglie Visualizza come icona. Usare la [classe COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md) classe per visualizzare questa finestra di dialogo.  
  
 *Convert*  
 Questa finestra di dialogo consente all'utente di modificare il tipo di un elemento incorporato o collegato. Ad esempio, se si è incorporato un metafile in un documento composito e successivamente si desidera utilizzare un'altra applicazione per modificare il metafile incorporato, è possibile utilizzare la finestra di dialogo Converti. Questa finestra di dialogo in genere viene visualizzata facendo clic *tipo di elemento* oggetto dal menu Modifica e quindi, nel menu a cascata, facendo clic su Converti. Usare la [classe COleConvertDialog](../mfc/reference/coleconvertdialog-class.md) classe per visualizzare questa finestra di dialogo. Per un esempio, eseguire l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).  
  
 *Collegamenti di modifica o aggiornamento*  
 La finestra di dialogo Modifica collegamenti consente all'utente di modificare le informazioni sull'origine di un oggetto collegato. La finestra di dialogo Aggiorna collegamenti verifica le origini di tutti gli elementi collegati nella finestra di dialogo corrente e consente di visualizzare la finestra di dialogo Modifica collegamenti se necessario. Visualizzare la finestra di dialogo Modifica collegamenti quando l'utente sceglie i collegamenti dal menu Modifica. La finestra di dialogo Aggiorna i collegamenti in genere viene visualizzata quando si apre un documento composito. Utilizzare la [COleLinksDialog](../mfc/reference/colelinksdialog-class.md) o il [classe COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md) classe, a seconda di quale finestra di dialogo si desidera visualizzare.  
  
 *Server occupato o non risponde*  
 Quando l'utente prova ad attivare un elemento e il server è attualmente in grado di gestire la richiesta, in genere perché il server è in uso da un altro utente o attività, viene visualizzata la finestra di dialogo Server occupato. Se il server non risponde alla richiesta di attivazione affatto, viene visualizzata la finestra di dialogo Server non risponde. Queste finestre di dialogo vengono visualizzate tramite `COleMessageFilter`, in base a un'implementazione dell'interfaccia OLE `IMessageFilter`, e l'utente può decidere se tentare nuovamente la richiesta di attivazione. Usare la [classe COleBusyDialog](../mfc/reference/colebusydialog-class.md) classe per visualizzare questa finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [OLE](../mfc/ole-in-mfc.md)

