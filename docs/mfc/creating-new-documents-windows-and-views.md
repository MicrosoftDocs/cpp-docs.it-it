---
title: Creazione di nuovi documenti, finestre e visualizzazioni
ms.date: 11/19/2018
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
ms.openlocfilehash: aa1c58b02df92d79ca9915032b97fb5c0e2eaffc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371673"
---
# <a name="creating-new-documents-windows-and-views"></a>Creazione di nuovi documenti, finestre e visualizzazioni

Le figure seguenti forniscono una panoramica del processo di creazione di documenti, visualizzazioni e finestre cornice. Altri articoli che si concentrano sugli oggetti partecipanti forniscono ulteriori dettagli.

Al termine di questo processo, gli oggetti cooperanti esistono e archiviano i puntatori l'uno all'altro. Le figure seguenti mostrano la sequenza di creazione degli oggetti. È possibile seguire la sequenza da figura a figura.

![Sequenza per la creazione di un documento](../mfc/media/vc387l1.gif "Sequenza per la creazione di un documento") <br/>
Sequenza di creazione di un documento

![Sequenza di creazione delle finestre cornice](../mfc/media/vc387l2.png "Sequenza di creazione delle finestre cornice") <br/>
Sequenza di creazione di una finestra cornice

![Sequenza per la creazione di una visualizzazione](../mfc/media/vc387l3.gif "Sequenza per la creazione di una visualizzazione") <br/>
Sequenza di creazione di una visualizzazione

Per informazioni su come il framework inizializza i nuovi oggetti documento, visualizzazione e finestra cornice, vedere le classi [CDocument](../mfc/reference/cdocument-class.md), [CView](../mfc/reference/cview-class.md), [CFrameWnd](../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md)e [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) in Riferimenti alla libreria MFC. Vedere anche [la nota tecnica 22](../mfc/tn022-standard-commands-implementation.md), che illustra ulteriormente i processi di creazione e inizializzazione sotto la discussione dei comandi standard del framework per le voci **New** e **Open** del menu **File** .

## <a name="initializing-your-own-additions-to-these-classes"></a><a name="_core_initializing_your_own_additions_to_these_classes"></a>Inizializzazione delle proprie aggiunte a queste classi

Le figure precedenti suggeriscono inoltre i punti in cui è possibile eseguire l'override delle funzioni membro per inizializzare gli oggetti dell'applicazione. Un override `OnInitialUpdate` di nella classe di visualizzazione è la posizione migliore per inizializzare la visualizzazione. La `OnInitialUpdate` chiamata si verifica immediatamente dopo la creazione della finestra cornice e la visualizzazione all'interno della finestra cornice è associata al documento. Ad esempio, se la visualizzazione è `CScrollView` una `CView`visualizzazione a scorrimento (derivata da anziché `OnInitialUpdate` da ), è necessario impostare le dimensioni della visualizzazione in base alle dimensioni del documento nella sostituzione. Questo processo è descritto nella descrizione della classe [CScrollView](../mfc/reference/cscrollview-class.md). È possibile `CDocument` eseguire `OnNewDocument` l'override delle funzioni membro e `OnOpenDocument` fornire l'inizializzazione specifica dell'applicazione del documento. In genere, è necessario eseguire l'override di entrambi poiché un documento può essere creato in due modi.

Nella maggior parte dei casi, l'override deve chiamare la versione della classe base. Per ulteriori informazioni, vedere le funzioni membro denominate delle classi [CDocument](../mfc/reference/cdocument-class.md), [CView](../mfc/reference/cview-class.md), [CFrameWnd](../mfc/reference/cframewnd-class.md)e [CWinApp](../mfc/reference/cwinapp-class.md) in Riferimenti alla libreria MFC.

## <a name="see-also"></a>Vedere anche

[Modelli di documenti e processo di creazione documento/visualizzazione](../mfc/document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](../mfc/document-template-creation.md)<br/>
[Creazione di documenti/visualizzazioni](../mfc/document-view-creation.md)<br/>
[Relazioni tra oggetti MFCRelationships Among MFC Objects](../mfc/relationships-among-mfc-objects.md)
