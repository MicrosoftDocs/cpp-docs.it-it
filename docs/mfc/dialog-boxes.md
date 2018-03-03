---
title: Finestre di dialogo | Documenti Microsoft
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
- modeless dialog boxes [MFC], MFC dialog boxes
- MFC, dialog boxes
- modal dialog boxes [MFC], MFC dialog boxes
- CDialog class [MFC], MFC dialog boxes
- MFC dialog boxes
ms.assetid: e4feea1a-8360-4ccb-9b84-507f1ccd9ef3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8117d175d59859c97a360ca6a6d2af559b403e32
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dialog-boxes"></a>Finestre di dialogo
Applicazioni per Windows spesso comunicano con l'utente tramite le finestre di dialogo. Classe [CDialog](../mfc/reference/cdialog-class.md) fornisce un'interfaccia per la gestione delle finestre, l'editor di finestre di Visual C++ semplifica la progettazione di finestre di dialogo e creare le proprie risorse modello di finestra di dialogo e le creazioni guidate codice semplificano il processo di inizializzazione e convalida i controlli in una finestra di dialogo e di raccogliere i valori immessi dall'utente.  
  
 Finestre di dialogo contengono controlli, ad esempio:  
  
-   Controlli comuni di Windows, ad esempio modificare caselle, pulsanti, caselle di riepilogo, caselle combinate, albero (controlli), controlli elenco e gli indicatori di stato.  
  
-   Controlli ActiveX.  
  
-   Proprietario controlli: controlli che è responsabile per il disegno nella finestra di dialogo.  
  
 La maggior parte delle finestre di dialogo sono modale, che richiede all'utente di chiudere la finestra di dialogo prima di utilizzare qualsiasi altra parte del programma. Ma è possibile creare finestre di dialogo non modale, che consentono agli utenti di lavorare con le altre finestre mentre è aperta la finestra di dialogo. MFC supporta entrambi i tipi di finestra di dialogo con la classe `CDialog`. I controlli vengono disposti e gestiti attraverso una risorsa modello di finestra di dialogo, creata con il [editor finestre](../windows/dialog-editor.md).  
  
 [Finestre delle proprietà](../mfc/property-sheets-mfc.md), noto anche come scheda finestre di dialogo, finestre di dialogo che contengono "pagine" di controlli finestra di dialogo distinti. Ogni pagina è presente una cartella di file "scheda" nella parte superiore. Facendo clic su una scheda visualizzata la pagina all'inizio della finestra di dialogo.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Esempio: visualizzazione di una finestra di dialogo tramite un comando di menu](../mfc/example-displaying-a-dialog-box-via-a-menu-command.md)  
  
-   [Componenti della finestra di dialogo nel framework](../mfc/dialog-box-components-in-the-framework.md)  
  
-   [Finestre di dialogo modali e non modali](../mfc/modal-and-modeless-dialog-boxes.md)  
  
-   [Finestre delle proprietà e pagine delle proprietà](../mfc/property-sheets-and-property-pages-mfc.md) in una finestra di dialogo  
  
-   [Creazione della risorsa finestra di dialogo](../mfc/creating-the-dialog-resource.md)  
  
-   [Creazione di una classe di finestra di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)  
  
-   [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)  
  
-   [Dialog data exchange (DDX) e (DDV) di convalida](../mfc/dialog-data-exchange-and-validation.md)  
  
-   [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)  
  
-   [Mapping di messaggi di Windows a classi](../mfc/mapping-windows-messages-to-your-class.md)  
  
-   [Funzioni membro comunemente sottoposte a override](../mfc/commonly-overridden-member-functions.md)  
  
-   [Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)  
  
-   [Classi di finestre di dialogo comuni](../mfc/common-dialog-classes.md)  
  
-   [Finestre di dialogo in OLE](../mfc/dialog-boxes-in-ole.md)  
  
-   Creare un'applicazione con interfaccia utente è una finestra di dialogo: vedere la [CMNCTRL1](../visual-cpp-samples.md) o [CMNCTRL2](../visual-cpp-samples.md) programmi di esempio. La creazione guidata applicazione fornisce anche questa opzione.  
  
-   [Esempi](../mfc/dialog-sample-list.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)
