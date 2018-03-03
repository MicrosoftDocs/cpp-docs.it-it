---
title: Creazione di un'applicazione contenitore documenti attivi | Documenti Microsoft
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
- active documents [MFC], containers
- containers [MFC], active document
- active document containers [MFC], creating
- MFC COM, active document containment
- applications [MFC], active document container
ms.assetid: 14e2d022-a6c5-4249-8712-706b0f4433f7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 077d15837ed857ac983c3c9f9d4e7853b45aeee5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="creating-an-active-document-container-application"></a>Creazione di un'applicazione contenitore di documenti attivi
Il modo più semplice e consigliato per creare un'applicazione contenitore di documenti attivi consiste nel creare un'applicazione contenitore EXE MFC mediante la Creazione guidata applicazione MFC, quindi modificare l'applicazione per supportare il contenimento dei documenti attivi.  
  
#### <a name="to-create-an-active-document-container-application"></a>Per creare un'applicazione contenitore di documenti attivi  
  
1.  Dal **File** menu, fare clic su **progetto**dal **New** sottomenu.  
  
2.  Nel riquadro sinistro, fare clic su **Visual C++** tipo di progetto.  
  
3.  Selezionare **applicazione MFC** dal riquadro di destra.  
  
4.  Denominare il progetto `MyProj`, fare clic su **OK**.  
  
5.  Selezionare il **supporto documenti compositi** pagina.  
  
6.  Selezionare il **contenitore** o **contenitore/server completo** opzione.  
  
7.  Selezionare il **contenitore documenti attivi** casella di controllo.  
  
8.  Scegliere **Fine**.  
  
9. Una volta completata la generazione dell'applicazione tramite la Creazione guidata applicazione MFC, aprire i seguenti file in Esplora soluzioni:  
  
    -   MyProjview.cpp  
  
10. In MyProjview.cpp apportare le seguenti modifiche:  
  
    -   In `CMyProjView::OnPreparePrinting` sostituire il contenuto della funzione con il seguente codice:  
  
         [!code-cpp[NVC_MFCDocView#56](../mfc/codesnippet/cpp/creating-an-active-document-container-application_1.cpp)]  
  
     `OnPreparePrinting` fornisce il supporto di stampa. Questo codice sostituisce `DoPreparePrinting`, ovvero la preparazione predefinita alla stampa.  
  
     Il contenimento del documento attivo fornisce uno schema di stampa avanzato:  
  
    -   È possibile chiamare innanzitutto il documento attivo tramite il relativo `IPrint` interfaccia e specificare venga stampato. Questo comportamento è diverso dal precedente contenimento OLE, in cui il contenitore deve eseguire il rendering di un'immagine dell'elemento contenuto nella stampante `CDC` oggetto.  
  
    -   Se il problema persiste, indicare l'elemento di contenuto di stampa tramite il relativo `IOleCommandTarget` interfaccia  
  
    -   Se l'operazione fallisce, eseguire il rendering dell'elemento.  
  
     Le funzioni membro statiche `COleDocObjectItem::OnPrint` e `COleDocObjectItem::OnPreparePrinting`, come implementate nel codice precedente, gestiscono questo schema di stampa avanzato.  
  
11. Aggiungere qualsiasi implementazione personalizzata e compilare l'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)

