---
title: Classi di finestra di dialogo comuni OLE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.classes.ole
dev_langs: C++
helpviewer_keywords:
- ActiveX classes [MFC]
- dialog classes [MFC], OLE
- OLE common dialog classes [MFC]
- common dialog classes [MFC]
ms.assetid: 706526ae-f94f-4909-a0f8-6b5fe954fd97
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0617354337e75e2c2431df894c054722349e2306
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ole-common-dialog-classes"></a>Classi di finestre di dialogo comuni OLE
Queste classi gestiscono comuni OLE mediante l'implementazione di un numero di finestre di dialogo OLE standard. Forniscono inoltre un'interfaccia utente coerente per la funzionalità OLE.  
  
 [COleDialog](../mfc/reference/coledialog-class.md)  
 Utilizzata dal framework per contenere le implementazioni comuni per tutte le finestre di dialogo OLE. Tutte le classi di finestra di dialogo nella categoria dell'interfaccia utente derivano da questa classe di base. `COleDialog`non può essere utilizzata direttamente.  
  
 [Classe COleInsertDialog](../mfc/reference/coleinsertdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Inserisci oggetto, l'interfaccia utente standard per l'inserimento di nuovi OLE elementi collegati o incorporati.  
  
 [Classe COlePasteSpecialDialog](../mfc/reference/colepastespecialdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Incolla speciale, l'interfaccia utente standard per l'implementazione del comando di modifica Incolla speciale.  
  
 [COleLinksDialog](../mfc/reference/colelinksdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Modifica collegamenti, l'interfaccia utente standard per la modifica di informazioni sugli elementi collegati.  
  
 [Classe COleChangeIconDialog](../mfc/reference/colechangeicondialog-class.md)  
 Consente di visualizzare la finestra di dialogo Cambia icona, l'interfaccia utente standard per modificare l'icona associata a OLE incorporato o un elemento collegato.  
  
 [Classe COleConvertDialog](../mfc/reference/coleconvertdialog-class.md)  
 Consente di visualizzare la finestra di dialogo Converti, l'interfaccia utente standard per la conversione di elementi OLE da un tipo a un altro.  
  
 [COlePropertiesDialog](../mfc/reference/colepropertiesdialog-class.md)  
 Incapsula la finestra di dialogo Windows comune delle proprietà OLE. Finestre di dialogo comuni OLE proprietà forniscono un modo semplice per visualizzare e modificare le proprietà di un elemento del documento OLE in modo coerente con gli standard di Windows.  
  
 [Classe COleUpdateDialog](../mfc/reference/coleupdatedialog-class.md)  
 Consente di visualizzare la finestra di dialogo aggiornamento, l'interfaccia utente standard per l'aggiornamento di tutti i collegamenti in un documento. Nella finestra di dialogo contiene un indicatore di stato per indicare come chiudere la procedura di aggiornamento fino al completamento.  
  
 [COleChangeSourceDialog](../mfc/reference/colechangesourcedialog-class.md)  
 Consente di visualizzare la finestra di dialogo Modifica origine, l'interfaccia utente standard per la modifica della destinazione o origine di un collegamento.  
  
 [Classe COleBusyDialog](../mfc/reference/colebusydialog-class.md)  
 Consente di visualizzare le finestre di dialogo Server occupato e Server non risponde, l'interfaccia utente standard per la gestione delle chiamate alle applicazioni occupate. In genere visualizzati automaticamente dal `COleMessageFilter` implementazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../mfc/class-library-overview.md)

