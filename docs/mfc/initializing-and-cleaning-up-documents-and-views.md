---
title: Inizializzazione e pulizia di documenti e visualizzazioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- initializing documents [MFC]
- views [MFC], cleaning up
- documents [MFC], initializing
- documents [MFC], cleaning up
- views [MFC], initializing
- initializing objects [MFC], document objects
- document objects [MFC], life cycle of
- initializing views [MFC]
ms.assetid: 95d6f09b-a047-4079-856a-ae7d0548e9d2
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: e193e2d6f32c60781a87620c6b955c1f646a5b44
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="initializing-and-cleaning-up-documents-and-views"></a>Inizializzazione e pulizia di documenti e visualizzazioni
Utilizzare le seguenti linee guida per l'inizializzazione e pulizia dopo i documenti e visualizzazioni:  
  
-   Il framework MFC Inizializza documenti e viste. è inizializzare tutti i dati che si aggiunge a essi.  
  
-   Il framework pulisce come documenti e visualizzazioni chiudere; è necessario liberare la memoria allocata all'heap all'interno delle funzioni membro dei documenti e visualizzazioni.  
  
> [!NOTE]
>  Tenere presente che l'inizializzazione per l'intera applicazione la soluzione ottimale consiste nell'override del [InitInstance](../mfc/reference/cwinapp-class.md#initinstance) funzione membro di classe `CWinApp`, e pulizia per l'intera applicazione la soluzione ottimale consiste nell'override del `CWinApp`funzione membro [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance).  
  
 Ciclo di vita di un documento (e la finestra cornice e visualizzazione o viste) in un form MDI applicazione è il seguente:  
  
1.  Durante la creazione dinamica, viene chiamato il costruttore di documento.  
  
2.  Per ogni nuovo, il documento del documento [OnNewDocument](../mfc/reference/cdocument-class.md#onnewdocument) o [OnOpenDocument](../mfc/reference/cdocument-class.md#onopendocument) viene chiamato.  
  
3.  L'utente interagisce con il documento in tutta la durata. In genere questo accade quando l'utente elabora dati del documento tramite la visualizzazione, selezionare e modificare i dati. La visualizzazione passa le modifiche apportate al documento per l'archiviazione e l'aggiornamento delle altre viste. Durante questo periodo comandi possono essere gestiti al documento e la visualizzazione.  
  
4.  Il framework chiama [DeleteContents](../mfc/reference/cdocument-class.md#deletecontents) per eliminare i dati specifici di un documento.  
  
5.  Viene chiamato il distruttore del documento.  
  
 In un'applicazione SDI, passaggio 1 viene eseguito una volta, quando il creazione del documento. Quindi i passaggi da 2 a 4 vengono eseguiti ripetutamente ogni volta che viene aperto un nuovo documento. Il nuovo documento riutilizza l'oggetto documento esistente. Passaggio 5, infine, viene eseguito al termine dell'applicazione.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Inizializzazione di documenti e visualizzazioni](../mfc/initializing-documents-and-views.md)  
  
-   [Pulizia di documenti e visualizzazioni](../mfc/cleaning-up-documents-and-views.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

