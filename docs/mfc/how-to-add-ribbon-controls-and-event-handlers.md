---
title: 'Procedura: aggiungere controlli Ribbon e gestori eventi | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- event handlers [MFC], adding
- ribbon controls [MFC], adding
ms.assetid: b31f25bc-ede7-49c3-9e3c-dffe4e174a69
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 7623a254e26cd7f1d09d7906fb4a9b192f46183e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-add-ribbon-controls-and-event-handlers"></a>Procedura: aggiungere controlli Ribbon e gestori eventi
Controlli della barra multifunzione sono elementi, ad esempio i pulsanti e caselle combinate, che aggiungono ai pannelli. I pannelli sono aree della barra multifunzione che mostrano un gruppo di controlli correlati.  
  
 In questo argomento, verrà di aprire la finestra di progettazione della barra multifunzione, aggiungere un pulsante e quindi collegare un evento che visualizza "Hello World".  
  
### <a name="to-open-the-ribbon-designer"></a>Per aprire la finestra di progettazione della barra multifunzione  
  
1.  In Visual Studio, sul **vista** menu, fare clic su **visualizzazione risorse**.  
  
2.  In **visualizzazione risorse**, fare doppio clic sulla risorsa barra multifunzione per visualizzarla nell'area di progettazione.  
  
### <a name="to-add-a-button-and-an-event-handler"></a>Per aggiungere un pulsante e un gestore eventi  
  
1.  Dal **barra degli strumenti**, fare clic su **pulsante** e trascinarlo in un pannello dell'area di progettazione.  
  
2.  Il pulsante destro e scegliere **Aggiungi gestore**.  
  
3.  Nel **Creazione guidata gestore eventi**confermare le impostazioni predefinite e fare clic su **aggiungere e modificare**. Per ulteriori informazioni, vedere [Creazione guidata gestore eventi](../ide/event-handler-wizard.md).  
  
4.  Nell'editor di codice, aggiungere il codice seguente in funzione del gestore:  
  
 ```  
    MessageBox((LPCTSTR)L"Hello World");

 ```  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio RibbonGadgets: Applicazione di gadget della barra multifunzione](../visual-cpp-samples.md)   
 [Finestra di progettazione della barra multifunzione (MFC)](../mfc/ribbon-designer-mfc.md)

