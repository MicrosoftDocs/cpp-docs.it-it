---
title: Vantaggi dell'architettura documento / visualizzazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- views [MFC], advantages
- document/view architecture [MFC], advantages of
ms.assetid: 0bc27071-e120-4889-939c-ce1e61fb9cb3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 213fc108b11d6056df6696f92658e74a736c4a16
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392840"
---
# <a name="advantages-of-the-documentview-architecture"></a>Vantaggi dell'architettura documento/visualizzazione

Il vantaggio principale dell'uso dell'architettura documento/visualizzazione MFC è che l'architettura supporta più visualizzazioni dello stesso documento particolarmente bene. (Se non occorre più viste e il limitato overhead aggiuntivo del documento/visualizzazione è eccessiva nell'applicazione, è possibile evitare l'architettura. [Alternative all'architettura documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md).)

Si supponga che l'applicazione consente agli utenti di visualizzare i dati numerici in un foglio di calcolo o in formato grafico. Un utente potrebbe voler vedere contemporaneamente entrambi i dati non elaborati, in un foglio di calcolo e un grafico risultante dai dati. Queste visualizzazioni separate è visualizzare nelle finestre cornice separato o in riquadri di divisione all'interno di una singola finestra. Ora si supponga che l'utente può modificare i dati nel foglio di calcolo e vedere le modifiche riflesse immediatamente nel grafico.

In MFC, la visualizzazione del foglio di calcolo e la visualizzazione del grafico potrebbe essere basate in diverse classi derivate da CView. Entrambe le visualizzazioni sono associate a un oggetto singolo documento. Il documento archivia i dati (o li riceve da un database). Entrambe le visualizzazioni del documento di accesso e visualizzano i dati che vengano recuperati da quest'ultimo.

Quando un utente aggiorna una delle visualizzazioni, che consente di visualizzare le chiamate oggetto `CDocument::UpdateAllViews`. Tale funzione notifica a tutte le visualizzazioni del documento e ogni visualizzazione autoaggiorna utilizzando i dati più recenti dal documento. Singola chiamata a `UpdateAllViews` Sincronizza le visualizzazioni diverse.

Questo scenario sarebbe difficile al codice senza la separazione dei dati dalla visualizzazione, in particolare se le visualizzazioni archiviati i dati stessi. Documento/visualizzazione, è facile. Il framework esegue la maggior parte del lavoro di coordinamento per l'utente.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Alternative a documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)

- [CDocument](../mfc/reference/cdocument-class.md)

- [CView](../mfc/reference/cview-class.md)

- [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews)

- [CView::GetDocument](../mfc/reference/cview-class.md#getdocument)

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

