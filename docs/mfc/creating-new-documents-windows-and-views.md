---
title: Creazione di nuovi documenti, Windows e le viste | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MDI [MFC], creating windows
- window objects [MFC], creating
- objects [MFC], creating document objects
- MFC default objects
- frame windows [MFC], creating
- windows [MFC], MDI
- MFC, documents
- view objects [MFC], creating
- windows [MFC], creating
- overriding, default view behavior
- views [MFC], initializing
- customizing MFC default objects
- MFC, frame windows
- MFC, views
- MDI [MFC], frame windows
- child windows [MFC], creating MDI
- view objects [MFC]
- document objects [MFC], creating
- MFC default objects [MFC], customizing
- views [MFC], overriding default behavior
- initializing views [MFC]
ms.assetid: 88aa1f5f-2078-4603-b16b-a2b4c7b4a2a3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0b4ccddbed0d347468331218614cad70cfd49a62
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46427238"
---
# <a name="creating-new-documents-windows-and-views"></a>Creazione di nuovi documenti, finestre e visualizzazioni

Le figure seguenti offrono una panoramica del processo di creazione di documenti, visualizzazioni e finestre cornice. Altri articoli che concentrarsi sugli oggetti partecipanti forniscono ulteriori dettagli.

Al termine di questo processo, gli oggetti che cooperano esistano e archiviano i puntatori tra loro. Le figure seguenti mostrano la sequenza in cui vengono creati gli oggetti. È possibile seguire la sequenza da una figura al.

![Sequenza per la creazione di un documento](../mfc/media/vc387l1.gif "vc387l1") sequenza di creazione di un documento

![Sequenza di creazione di finestre cornice](../mfc/media/vc387l2.png "vc387l2") sequenza di creazione di una finestra cornice

![Sequenza per la creazione di una vista](../mfc/media/vc387l3.gif "vc387l3") sequenza di creazione di una vista

Per informazioni sul modo in cui il framework Inizializza il nuovo documento, visualizzazione e finestra cornice oggetti, vedere le classi [CDocument](../mfc/reference/cdocument-class.md), [CView](../mfc/reference/cview-class.md), [CFrameWnd](../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) nel riferimento alla libreria MFC. Vedere anche [Nota tecnica 22](../mfc/tn022-standard-commands-implementation.md), che illustra i processi di creazione e inizializzazione ulteriormente sotto la relativa descrizione comandi standard del framework per il **New** e **aprire** gli elementi del **File** menu.

##  <a name="_core_initializing_your_own_additions_to_these_classes"></a> L'inizializzazione personalizzate aggiunte a queste classi

Le figure precedenti è consigliabile anche i punti in corrispondenza del quale è possibile eseguire l'override di funzioni membro per inizializzare gli oggetti dell'applicazione. Un override di `OnInitialUpdate` nella propria visualizzazione classe è il modo migliore per inizializzare la visualizzazione. Il `OnInitialUpdate` chiamata si verifica immediatamente dopo che la finestra cornice viene creata e la visualizzazione all'interno della finestra cornice è collegata al suo documento. Ad esempio, se la visualizzazione è una visualizzazione a scorrimento (derivato da `CScrollView` invece `CView`), è necessario impostare la dimensione della visualizzazione in base alla dimensione del documento nel `OnInitialUpdate` eseguire l'override. (Questo processo è descritto nella descrizione della classe [CScrollView](../mfc/reference/cscrollview-class.md).) È possibile eseguire l'override di `CDocument` funzioni membro `OnNewDocument` e `OnOpenDocument` per fornire specifici dell'applicazione l'inizializzazione del documento. In genere, è necessario eseguire l'override sia poiché è possibile creare un documento in due modi.

Nella maggior parte dei casi, l'override deve chiamare la versione della classe base. Per altre informazioni, vedere le funzioni membro denominate delle classi [CDocument](../mfc/reference/cdocument-class.md), [CView](../mfc/reference/cview-class.md), [CFrameWnd](../mfc/reference/cframewnd-class.md), e [CWinApp](../mfc/reference/cwinapp-class.md) in MFC Riferimenti alla libreria.

## <a name="see-also"></a>Vedere anche

[I modelli di documento e il processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](../mfc/document-template-creation.md)<br/>
[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)<br/>
[Relazioni tra oggetti MFC](../mfc/relationships-among-mfc-objects.md)

