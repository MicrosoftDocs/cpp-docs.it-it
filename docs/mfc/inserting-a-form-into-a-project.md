---
title: Inserimento di un Form in un progetto | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- inserting forms [MFC]
- Insert New dialog box [MFC]
- forms, adding to projects
ms.assetid: f3bd2998-3ce2-496d-ac5c-57ca70eec7cb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e62618301e09ad4c44fb91608976ecab972a59da
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33344133"
---
# <a name="inserting-a-form-into-a-project"></a>Inserimento di un form in un progetto
Form fornisce un contenitore appropriato per i controlli. È possibile inserire facilmente un modulo basato su MFC nell'applicazione fino a quando l'applicazione supporta le librerie MFC.  
  
### <a name="to-insert-a-form-into-your-project"></a>Per inserire un form nel progetto  
  
1.  Visualizzazione classi, selezionare il progetto a cui si desidera aggiungere il form e fare clic sul pulsante destro del mouse.  
  
2.  Dal menu di scelta rapida, fare clic su **Aggiungi** e quindi fare clic su **Aggiungi classe**.  
  
     Se il **nuovo modulo** comando non è disponibile, il progetto potrebbe essere basato sulla libreria ATL (Active Template). Per aggiungere un form a un progetto ATL, è necessario [specificare determinate impostazioni](../atl/reference/application-settings-atl-project-wizard.md) al momento della creazione del progetto.  
  
3.  Dal **MFC** cartella, fare clic su **classe MFC**.  
  
4.  La creazione guidata classe MFC, definire la nuova classe derivano da [CFormView](../mfc/reference/cformview-class.md).  
  
 Visual C++ aggiunge il form per l'applicazione, aprirlo all'interno dell'editor della finestra di dialogo in modo da poter iniziare l'aggiunta di controlli e lavorare sul progetto complessivo.  
  
 È consigliabile eseguire i passaggi aggiuntivi seguenti (non applicabili per le applicazioni basate su finestra di dialogo):  
  
1.  Eseguire l'override di `OnUpdate` funzione membro.  
  
2.  Implementare una funzione membro per spostare i dati dalla visualizzazione al documento.  
  
3.  Creare un `OnPrint` funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Visualizzazioni di form](../mfc/form-views-mfc.md)

