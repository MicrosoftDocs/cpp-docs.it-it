---
description: "Altre informazioni su: creazione di un'applicazione contenitore di documenti attivi"
title: Creazione di un'applicazione contenitore di documenti attivi
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC], containers
- containers [MFC], active document
- active document containers [MFC], creating
- MFC COM, active document containment
- applications [MFC], active document container
ms.assetid: 14e2d022-a6c5-4249-8712-706b0f4433f7
ms.openlocfilehash: 9bf00a73e7520cde45d4e43ae79813896d4c1129
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309992"
---
# <a name="creating-an-active-document-container-application"></a>Creazione di un'applicazione contenitore di documenti attivi

Il modo più semplice e consigliato per creare un'applicazione contenitore di documenti attivi consiste nel creare un'applicazione contenitore EXE MFC mediante la Creazione guidata applicazione MFC, quindi modificare l'applicazione per supportare il contenimento dei documenti attivi.

#### <a name="to-create-an-active-document-container-application"></a>Per creare un'applicazione contenitore di documenti attivi

1. Dal menu **file** scegliere **progetto** dal sottomenu **nuovo** .

1. Nel riquadro sinistro fare clic su **Visual C++** tipo di progetto.

1. Selezionare **applicazione MFC** dal riquadro di destra.

1. Assegnare al progetto il nome *PROG*, quindi fare clic su **OK**.

1. Selezionare la pagina **supporto documenti compositi** .

1. Selezionare l'opzione **contenitore** o **contenitore/server completo** .

1. Selezionare la casella di controllo **contenitore documenti attivi** .

1. Fare clic su **Fine**.

1. Una volta completata la generazione dell'applicazione tramite la Creazione guidata applicazione MFC, aprire i seguenti file in Esplora soluzioni:

   - *MyProjview.cpp*

1. In *file MyProjview. cpp* apportare le modifiche seguenti:

   - In `CMyProjView::OnPreparePrinting` sostituire il contenuto della funzione con il seguente codice:

     [!code-cpp[NVC_MFCDocView#56](codesnippet/cpp/creating-an-active-document-container-application_1.cpp)]

   `OnPreparePrinting` fornisce il supporto di stampa. Questo codice sostituisce `DoPreparePrinting`, ovvero la preparazione predefinita alla stampa.

   Il contenimento del documento attivo fornisce uno schema di stampa avanzato:

   - È possibile chiamare prima il documento attivo tramite la relativa `IPrint` interfaccia e indicargli di stamparlo. Si tratta di una differenza rispetto al contenuto OLE precedente, in cui il contenitore doveva eseguire il rendering di un'immagine dell'elemento contenuto nell' `CDC` oggetto Printer.

   - Se l'operazione ha esito negativo, indicare all'elemento contenuto di stamparlo tramite la relativa `IOleCommandTarget` interfaccia

   - Se l'operazione fallisce, eseguire il rendering dell'elemento.

   Le funzioni membro statiche `COleDocObjectItem::OnPrint` e `COleDocObjectItem::OnPreparePrinting`, come implementate nel codice precedente, gestiscono questo schema di stampa avanzato.

1. Aggiungere qualsiasi implementazione personalizzata e compilare l'applicazione.

## <a name="see-also"></a>Vedi anche

[Contenimento del documento attivo](active-document-containment.md)
