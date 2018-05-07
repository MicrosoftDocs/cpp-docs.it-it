---
title: Creazione di una finestra delle proprietà non modale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- modeless property sheets
- property sheets, modeless
- Create method [MFC], property sheets
ms.assetid: eafd8a92-cc67-4a69-a5fb-742c920d1ae8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 10dbef813d922bd01a5f9215b6d6e642349d2b75
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="creating-a-modeless-property-sheet"></a>Creazione di una finestra delle proprietà non modale
In genere, le finestre delle proprietà create saranno modale. Quando si utilizza una finestra delle proprietà modale, l'utente deve chiudere la finestra delle proprietà prima di utilizzare qualsiasi altra parte dell'applicazione. Questo articolo descrive i metodi che utilizzabili per creare una finestra delle proprietà non modale che consente all'utente di tenere aperta la finestra delle proprietà durante l'utilizzo di altre parti dell'applicazione.  
  
 Per visualizzare una finestra delle proprietà come finestra di dialogo non modale anziché come una finestra di dialogo modale, chiamare [CPropertySheet:: Create](../mfc/reference/cpropertysheet-class.md#create) anziché [DoModal](../mfc/reference/cpropertysheet-class.md#domodal). È inoltre necessario implementare alcune operazioni aggiuntive per supportare una finestra delle proprietà non modale.  
  
 Una delle attività aggiuntive scambia dati tra la finestra delle proprietà e l'oggetto esterno che viene modificato quando è aperta la finestra delle proprietà. Si tratta in genere la stessa attività per le finestre di dialogo non modali standard. Ambito di questa attività viene implementata da un canale di comunicazione tra la finestra delle proprietà non modale e l'oggetto esterno a cui applicare le impostazioni delle proprietà. Questa implementazione è molto più semplice se si deriva una classe da [CPropertySheet](../mfc/reference/cpropertysheet-class.md) per la finestra delle proprietà non modale. In questo articolo si presuppone che si è fatto.  
  
 Un metodo per la comunicazione tra la finestra delle proprietà non modale ed esterno oggetto (la selezione corrente in una visualizzazione, ad esempio) consiste nel definire un puntatore nella finestra delle proprietà all'oggetto esterno. Definire una funzione (chiamato simile `SetMyExternalObject`) nei `CPropertySheet`-derivata per modificare il puntatore ogni volta che cambia lo stato attivo da un oggetto esterno a un altro. Il `SetMyExternalObject` funzione è necessario reimpostare le impostazioni per ogni pagina delle proprietà in modo da riflettere il nuovo oggetto esterno selezionato. A tale scopo, il `SetMyExternalObject` funzione deve essere in grado di accedere il [CPropertyPage](../mfc/reference/cpropertypage-class.md) oggetti appartenenti alla `CPropertySheet` classe.  
  
 È il modo più semplice per fornire l'accesso alle pagine delle proprietà all'interno di una finestra delle proprietà per incorporare il `CPropertyPage` gli oggetti di `CPropertySheet`-oggetto derivato. Incorporamento `CPropertyPage` gli oggetti di `CPropertySheet`-oggetto derivato rispetto alla normale progettazione di finestre di dialogo modale in cui il proprietario della finestra delle proprietà crea la `CPropertyPage` oggetti e li passa alla finestra delle proprietà tramite [ :: AddPage](../mfc/reference/cpropertysheet-class.md#addpage).  
  
 Esistono diverse alternative di interfaccia utente per determinare quando le impostazioni della finestra delle proprietà non modale devono essere applicate a un oggetto esterno. Un'alternativa consiste nell'applicare le impostazioni della pagina delle proprietà correnti ogni volta che l'utente modifica qualsiasi valore. Un'altra alternativa consiste nel fornire un pulsante Applica, che consente all'utente a continue modifiche nelle pagine delle proprietà prima di eseguirne il commit all'oggetto esterno. Per informazioni sulle modalità di gestione del pulsante Applica, vedere l'articolo [gestione del pulsante Applica](../mfc/handling-the-apply-button.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md)   
 [Lo scambio di dati](../mfc/exchanging-data.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)

