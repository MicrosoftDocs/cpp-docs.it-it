---
title: Finestre di dialogo in OLE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 96dfe1828ae3451411adf3ab57c1ec67db24c34e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dialog-boxes-in-ole"></a>Finestre di dialogo in OLE
Mentre un utente esegue un'applicazione abilitata per OLE, vi sono casi l'applicazione richiede informazioni da parte dell'utente per eseguire l'operazione. Le classi OLE MFC forniscono un numero di finestre di dialogo per raccogliere le informazioni necessarie. Questo argomento elenca le attività gestite dalle finestre di dialogo OLE e le classi necessarie per visualizzare le finestre di dialogo. Per informazioni sulle finestre di dialogo OLE e le strutture utilizzate per personalizzare il comportamento, vedere [riferimenti alla libreria MFC](../mfc/mfc-desktop-applications.md).  
  
 *Inserisci oggetto*  
 Questa finestra di dialogo consente all'utente di inserimento appena creato o gli oggetti esistenti nel documento composito. Inoltre, consente all'utente di scegliere di visualizzare l'elemento come un'icona e abilita il pulsante di comando di modifica dell'icona. Visualizzare questa finestra di dialogo quando l'utente sceglie Inserisci oggetto dal menu Modifica. Utilizzare il [classe COleInsertDialog](../mfc/reference/coleinsertdialog-class.md) classe per visualizzare questa finestra di dialogo. Notare che non è possibile inserire un'applicazione MDI in se stessa. Un'applicazione contenitore/server non può essere inserita in se stessa a meno che non sia un'applicazione SDI.  
  
 *Incolla speciale*  
 Questa finestra di dialogo consente all'utente di controllare il formato utilizzato quando si incollano dati in un documento composito. L'utente può scegliere il formato dei dati, specificare se incorporare o collegare i dati e se si desidera visualizzare come icona. Visualizzare questa finestra di dialogo quando l'utente sceglie Incolla speciale dal menu Modifica. Utilizzare il [classe COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md) classe per visualizzare questa finestra di dialogo.  
  
 *Cambia icona*  
 Questa finestra di dialogo consente all'utente di selezionare l'icona da visualizzare per rappresentare l'elemento collegato o incorporato. Visualizzare questa finestra di dialogo quando l'utente sceglie l'icona di modifica dal menu Modifica o sceglie il pulsante Cambia icona Incolla speciale o finestre di dialogo Converti. Viene inoltre visualizzata quando l'utente apre la finestra di dialogo Inserisci oggetto e sceglie Visualizza come icona. Utilizzare il [classe COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md) classe per visualizzare questa finestra di dialogo.  
  
 *Converti*  
 Questa finestra di dialogo consente all'utente di modificare il tipo di un elemento incorporato o collegato. Ad esempio, se si è incorporato un metafile in un documento composito e successivamente si desidera utilizzare un'altra applicazione per modificarlo, è possibile utilizzare la finestra di dialogo Converti. Questa finestra di dialogo viene visualizzata in genere facendo *tipo di elemento* oggetto dal menu Modifica e quindi, nel menu a cascata, fare clic su Converti. Utilizzare il [classe COleConvertDialog](../mfc/reference/coleconvertdialog-class.md) classe per visualizzare questa finestra di dialogo. Per un esempio, eseguire l'esempio OLE MFC [OCLIENT](../visual-cpp-samples.md).  
  
 *Collegamenti di modifica o aggiornamento*  
 La finestra di dialogo Modifica collegamenti consente all'utente di modificare le informazioni relative all'origine di un oggetto collegato. Nella finestra di dialogo Aggiorna collegamenti verifica le origini di tutti gli elementi collegati nella finestra di dialogo corrente e consente di visualizzare la finestra di dialogo Modifica collegamenti se necessario. Visualizzare la finestra di dialogo Modifica collegamenti quando l'utente sceglie i collegamenti dal menu Modifica. La finestra di dialogo Aggiorna i collegamenti in genere viene visualizzata quando si apre un documento composito. Utilizzare il [COleLinksDialog](../mfc/reference/colelinksdialog-class.md) o [classe COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md) classe, a seconda di quale finestra di dialogo si desidera visualizzare.  
  
 *Server occupato o non risponde*  
 Quando l'utente tenta di attivare un elemento e il server è attualmente in grado di gestire la richiesta, in genere perché il server è in uso da un altro utente o attività, viene visualizzata la finestra di dialogo Server occupato. Se il server non risponde alla richiesta di attivazione del tutto, viene visualizzata nella finestra di dialogo Server non risponde. Queste finestre di dialogo vengono visualizzate tramite `COleMessageFilter`, in base a un'implementazione dell'interfaccia OLE **IMessageFilter**, e l'utente può decidere se tentare nuovamente la richiesta di attivazione. Utilizzare il [classe COleBusyDialog](../mfc/reference/colebusydialog-class.md) classe per visualizzare questa finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [OLE](../mfc/ole-in-mfc.md)

