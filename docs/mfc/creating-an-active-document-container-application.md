---
title: Creazione di un'applicazione contenitore documenti attivi | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- active documents [MFC], containers
- containers [MFC], active document
- active document containers [MFC], creating
- MFC COM, active document containment
- applications [MFC], active document container
ms.assetid: 14e2d022-a6c5-4249-8712-706b0f4433f7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8817133ba1004e746f568ad3e039de5130693174
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929445"
---
# <a name="creating-an-active-document-container-application"></a>Creazione di un'applicazione contenitore di documenti attivi
Il modo più semplice e consigliato per creare un'applicazione contenitore di documenti attivi consiste nel creare un'applicazione contenitore EXE MFC mediante la Creazione guidata applicazione MFC, quindi modificare l'applicazione per supportare il contenimento dei documenti attivi.  
  
#### <a name="to-create-an-active-document-container-application"></a>Per creare un'applicazione contenitore di documenti attivi  
  
1.  Dal **File** menu, fare clic su **progetto**dal **nuovo** sottomenu.  
  
2.  Nel riquadro sinistro, fare clic su **Visual C++** tipo di progetto.  
  
3.  Selezionare **applicazione MFC** dal riquadro di destra.  
  
4.  Denominare il progetto *Prog*, fare clic su **OK**.  
  
5.  Selezionare il **supporto documenti compositi** pagina.  
  
6.  Selezionare il **contenitore** oppure **contenitore/server completo** opzione.  
  
7.  Selezionare il **contenitore di documenti attivi** casella di controllo.  
  
8.  Scegliere **Fine**.  
  
9. Una volta completata la generazione dell'applicazione tramite la Creazione guidata applicazione MFC, aprire i seguenti file in Esplora soluzioni:  
  
    -   *MyProjview.*  
  
10. In *MyProjview*, apportare le modifiche seguenti:  
  
    -   In `CMyProjView::OnPreparePrinting` sostituire il contenuto della funzione con il seguente codice:  
  
         [!code-cpp[NVC_MFCDocView#56](../mfc/codesnippet/cpp/creating-an-active-document-container-application_1.cpp)]  
  
     `OnPreparePrinting` fornisce il supporto di stampa. Questo codice sostituisce `DoPreparePrinting`, ovvero la preparazione predefinita alla stampa.  
  
     Il contenimento del documento attivo fornisce uno schema di stampa avanzato:  
  
    -   È possibile chiamare innanzitutto il documento attivo tramite il relativo `IPrint` l'interfaccia e inviargli venga stampato. Ciò è diverso dal precedente contenimento OLE, in cui il contenitore doveva eseguire il rendering di un'immagine dell'elemento contenuto nella stampante `CDC` oggetto.  
  
    -   Se il problema persiste, indicare l'elemento di contenuto per stampare se stesso tramite il relativo `IOleCommandTarget` interfaccia  
  
    -   Se l'operazione fallisce, eseguire il rendering dell'elemento.  
  
     Le funzioni membro statiche `COleDocObjectItem::OnPrint` e `COleDocObjectItem::OnPreparePrinting`, come implementate nel codice precedente, gestiscono questo schema di stampa avanzato.  
  
11. Aggiungere qualsiasi implementazione personalizzata e compilare l'applicazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Contenimento dei documenti attivi](../mfc/active-document-containment.md)

