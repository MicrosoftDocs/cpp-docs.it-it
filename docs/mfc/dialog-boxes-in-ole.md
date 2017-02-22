---
title: "Finestre di dialogo in OLE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre di dialogo"
  - "finestre di dialogo, informazioni sulle finestre di dialogo"
  - "finestre di dialogo, OLE"
  - "Inserisci oggetto"
  - "MFC (finestre di dialogo), OLE (finestre di dialogo)"
  - "OLE (finestre di dialogo)"
  - "OLE (finestre di dialogo), informazioni sulle finestre di dialogo OLE"
ms.assetid: 73c41eb8-738a-4d02-9212-d3395bb09a3a
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Finestre di dialogo in OLE
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un utente esegue un'applicazione OLE abilitata, vi sono casi in cui l'applicazione richiede delle informazioni dall'utente per eseguire l'operazione.  Le classi OLE MFC offrono una serie di finestre di dialogo per raccogliere le informazioni necessarie.  In questo argomento vengono elencate le attività gestiti dalle finestre di dialogo OLE e le classi necessarie per visualizzare le finestre di dialogo.  Per informazioni dettagliate sulle finestre di dialogo OLE e le strutture utilizzate per personalizzare il comportamento, vedere [Riferimenti alla libreria MFC](../mfc/mfc-desktop-applications.md).  
  
 *Inserisci oggetto*  
 Questa finestra di dialogo consente all'utente agli oggetti creati o esistenti in documento composto.  Consente inoltre all'utente di scegliere di visualizzare l'elemento come icona e che consente il pulsante di comando modifica dell'icona.  Visualizzare questa finestra di dialogo quando l'utente sceglie l'oggetto inserisci dal menu Modifica.  Utilizzare la classe di [COleInsertDialog](../mfc/reference/coleinsertdialog-class.md) per visualizzare questa finestra di dialogo.  Si noti che non è possibile inserire un'applicazione MDI in se stesso.  Un'applicazione che rappresenta un contenitore\/server non può essere inserita in se stesso a meno che non sia un'applicazione SDI.  
  
 *Incolla speciale*  
 Questa finestra di dialogo consente all'utente di controllare il formato utilizzato quando si inserisce i dati in un documento composto.  L'utente potrà scegliere il formato dei dati, se includere o collegare i dati e se visualizzare come icona.  Visualizzare questa finestra di dialogo quando l'utente sceglie su paste special dal menu Modifica.  Utilizzare la classe di [COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md) per visualizzare questa finestra di dialogo.  
  
 *Modificare l'icona*  
 Questa finestra di dialogo consente di selezionare quale icona per rappresentare l'elemento collegato o incorporato.  Visualizzare questa finestra di dialogo quando l'utente sceglie l'icona di modifica dal menu Modifica oppure scegliere il pulsante modifica dell'icona nelle finestre di dialogo di convertire o edit paste special.  Viene visualizzato anche quando l'utente apre la finestra di dialogo insert new object e scegliere visualizza come icona.  Utilizzare la classe di [COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md) per visualizzare questa finestra di dialogo.  
  
 *Converti*  
 Questa finestra di dialogo consente di modificare il tipo di incorporato o di elemento collegato.  Ad esempio, se è incorporato un metafile in un documento composito e successivamente si desidera utilizzare un'altra applicazione modificare i metafile incorporate, è possibile utilizzare la finestra di dialogo converti.  Questa finestra di dialogo in genere visualizzati facendo clic sull'oggetto *del tipo di elemento* del menu Modifica e quindi, nel menu a cascata, quindi fare clic su converti.  Utilizzare la classe di [COleConvertDialog](../mfc/reference/coleconvertdialog-class.md) per visualizzare questa finestra di dialogo.  Per un esempio, eseguire l'esempio [OCLIENT](../top/visual-cpp-samples.md) oLE MFC.  
  
 *Modificare i collegamenti o collegamenti di aggiornamento*  
 La finestra di dialogo modifica dei collegamenti consente alle informazioni relative alle modifiche relative all'origine di un oggetto collegato.  La finestra di dialogo dei collegamenti dell'aggiornamento verifica le origini di tutti gli elementi collegati nella finestra di dialogo corrente e verrà visualizzata la finestra di dialogo modifica dei collegamenti se necessario.  Visualizzare la finestra di dialogo modifica dei collegamenti quando l'utente sceglie collegamenti dal menu Modifica.  La finestra di dialogo collegamenti di aggiornamento in genere visualizzata quando un documento composto viene aperto per la prima volta.  Utilizzare [COleLinksDialog](../mfc/reference/colelinksdialog-class.md) o la classe di [COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md), a seconda della finestra di dialogo da visualizzare.  
  
 *Risposta occupata o server*  
 La finestra di dialogo occupata server viene visualizzata quando l'utente tenta di attivare un elemento e il server non è attualmente gestire la richiesta, in genere perché il server è utilizzato da un altro utente o attività.  La finestra di dialogo di risposta del server viene visualizzata se il server non risponde alla richiesta di attivazione eseguito.  Queste finestre di dialogo visualizzate tramite `COleMessageFilter`, in base a un'implementazione dell'interfaccia OLE **IMessageFilter** e l'utente può decidere se tentare l'attivazione richiede nuovamente.  Utilizzare la classe di [COleBusyDialog](../mfc/reference/colebusydialog-class.md) per visualizzare questa finestra di dialogo.  
  
## Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [OLE](../mfc/ole-in-mfc.md)