---
title: Utilizzo delle viste | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interacting with users and role of view class [MFC]
- drawing [MFC], data
- rendering data
- view classes [MFC], role in managing user interaction
- CView class [MFC], view architecture
- MFC, views
- views [MFC], using
- painting data
- user input [MFC], interpreting through view class [MFC]
- view classes [MFC], role in displaying application data
ms.assetid: dc3de6ad-5c64-4317-8f10-8bdcc38cdbd5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4094f41f00266b229c755232f534e9c35d29fe7a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33384062"
---
# <a name="using-views"></a>Utilizzo delle visualizzazioni
Sono di responsabilità della vista per visualizzare graficamente i dati del documento all'utente e di ricevere e interpretare l'input dell'utente come operazioni sul documento. Le attività in cui scrivere la classe di visualizzazione sono:  
  
-   Scrivere la classe di visualizzazione [OnDraw](../mfc/reference/cview-class.md#ondraw) funzione membro, che esegue il rendering di dati del documento.  
  
-   Collegare i messaggi di Windows appropriati e oggetti dell'interfaccia utente, ad esempio voci di menu alle funzioni membro di gestore di messaggi nella classe di visualizzazione.  
  
-   Implementare i gestori per l'interpretazione dell'input dell'utente.  
  
 Inoltre, potrebbe essere necessario eseguire l'override di altri `CView` funzioni membro nella classe derivata di visualizzazione. In particolare, si consiglia di eseguire l'override [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) per eseguire l'inizializzazione speciale per la visualizzazione e [OnUpdate](../mfc/reference/cview-class.md#onupdate) per eseguire qualsiasi elaborazione speciale necessario subito prima della visualizzazione viene ridisegnato. Per i documenti con più pagine, è inoltre necessario eseguire l'override [OnPreparePrinting](../mfc/reference/cview-class.md#onprepareprinting) per inizializzare la finestra di dialogo di stampa con il numero di pagine da stampare e altre informazioni. Per ulteriori informazioni sull'override `CView` funzioni membro, vedere la classe [CView](../mfc/reference/cview-class.md) nel *riferimenti alla libreria MFC*.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Classi visualizzazione derivate disponibili in MFC](../mfc/derived-view-classes-available-in-mfc.md)  
  
-   [Disegno in una visualizzazione](../mfc/drawing-in-a-view.md)  
  
-   [Interpretazione dell'input utente attraverso una visualizzazione](../mfc/interpreting-user-input-through-a-view.md)  
  
-   [Il ruolo della visualizzazione nella stampa](../mfc/role-of-the-view-in-printing.md)  
  
-   [Scorrimento e ridimensionamento di visualizzazioni](../mfc/scrolling-and-scaling-views.md)  
  
-   [Inizializzazione e pulizia di documenti e visualizzazioni](../mfc/initializing-and-cleaning-up-documents-and-views.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)   
 [Classe CFormView](../mfc/reference/cformview-class.md)   
 [Visualizzazioni di record (accesso ai dati MFC)](../data/record-views-mfc-data-access.md)   
 [Esclusione del meccanismo di serializzazione](../mfc/bypassing-the-serialization-mechanism.md)

