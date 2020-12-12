---
description: 'Altre informazioni su: creazione di nuovi documenti, finestre e visualizzazioni'
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
ms.openlocfilehash: 718d24d63811d4e3b5cc847b5d0ef69361c6fdf3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97309875"
---
# <a name="creating-new-documents-windows-and-views"></a>Creazione di nuovi documenti, finestre e visualizzazioni

Le figure seguenti forniscono una panoramica del processo di creazione per documenti, visualizzazioni e finestre cornice. Altri articoli che si concentrano sugli oggetti partecipanti forniscono ulteriori dettagli.

Al termine di questo processo, gli oggetti cooperating esistono e archiviano i puntatori tra loro. Nelle figure seguenti è illustrata la sequenza con cui vengono creati gli oggetti. È possibile seguire la sequenza da figure a figure.

![Sequenza per la creazione di un documento](../mfc/media/vc387l1.gif "Sequenza per la creazione di un documento") <br/>
Sequenza di creazione di un documento

![Sequenza di creazione delle finestre cornice](../mfc/media/vc387l2.png "Sequenza di creazione delle finestre cornice") <br/>
Sequenza di creazione di una finestra cornice

![Sequenza per la creazione di una visualizzazione](../mfc/media/vc387l3.gif "Sequenza per la creazione di una visualizzazione") <br/>
Sequenza di creazione di una visualizzazione

Per informazioni sul modo in cui il Framework inizializza i nuovi oggetti documento, visualizzazione e finestra cornice, vedere classi [CDocument](reference/cdocument-class.md), [CView](reference/cview-class.md), [CFrameWnd](reference/cframewnd-class.md), [CMDIFRAMEWND](reference/cmdiframewnd-class.md)e [CMDIChildWnd](reference/cmdichildwnd-class.md) in riferimenti alla libreria MFC. Vedere anche la [Nota tecnica 22](tn022-standard-commands-implementation.md), che illustra i processi di creazione e inizializzazione più avanti nella discussione dei comandi standard del Framework per gli elementi **nuovi** e **aperti** nel menu **file** .

## <a name="initializing-your-own-additions-to-these-classes"></a><a name="_core_initializing_your_own_additions_to_these_classes"></a> Inizializzazione delle proprie aggiunte a queste classi

Le cifre precedenti suggeriscono anche i punti in cui è possibile eseguire l'override delle funzioni membro per inizializzare gli oggetti dell'applicazione. Un override di `OnInitialUpdate` nella classe di visualizzazione è il posto migliore per inizializzare la visualizzazione. La `OnInitialUpdate` chiamata viene eseguita immediatamente dopo la creazione della finestra cornice e la visualizzazione all'interno della finestra cornice è associata al relativo documento. Ad esempio, se la visualizzazione è una visualizzazione a scorrimento (derivata da `CScrollView` anziché `CView` ), è necessario impostare la dimensione della visualizzazione in base alle dimensioni del documento nella `OnInitialUpdate` sostituzione. Questo processo è descritto nella descrizione della classe [CScrollView](reference/cscrollview-class.md). È possibile eseguire l'override delle `CDocument` funzioni membro `OnNewDocument` e `OnOpenDocument` fornire l'inizializzazione specifica dell'applicazione del documento. In genere, è necessario eseguire l'override di entrambi poiché è possibile creare un documento in due modi.

Nella maggior parte dei casi, l'override deve chiamare la versione della classe base. Per ulteriori informazioni, vedere le funzioni membro denominate delle classi [CDocument](reference/cdocument-class.md), [CView](reference/cview-class.md), [CFrameWnd](reference/cframewnd-class.md)e [CWinApp](reference/cwinapp-class.md) nei riferimenti alla libreria MFC.

## <a name="see-also"></a>Vedi anche

[Modelli di documento e processo di creazione documento/visualizzazione](document-templates-and-the-document-view-creation-process.md)<br/>
[Creazione di modelli di documento](document-template-creation.md)<br/>
[Creazione documento/visualizzazione](document-view-creation.md)<br/>
[Relazioni tra oggetti MFC](relationships-among-mfc-objects.md)
