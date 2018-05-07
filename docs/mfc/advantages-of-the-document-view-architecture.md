---
title: Vantaggi dell'architettura documento / visualizzazione | Documenti Microsoft
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
ms.openlocfilehash: 45065b38128a2e3239b1fd10ded490fdcbcb3eac
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="advantages-of-the-documentview-architecture"></a>Vantaggi dell'architettura documento/visualizzazione
Il vantaggio principale per l'uso dell'architettura documento/visualizzazione MFC è che l'architettura supporta particolarmente più viste dello stesso documento. (Se non è necessario più viste e ridotto overhead di documento/visualizzazione è eccessivo nell'applicazione, è possibile evitare l'architettura. [Alternative all'architettura documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md).)  
  
 Si supponga che l'applicazione consente agli utenti di visualizzare i dati numerici in un foglio di calcolo o in forma di grafico. Un utente potrebbe voler vedere contemporaneamente entrambi i dati non elaborati, in un foglio di calcolo e un grafico risultante dai dati. Visualizzare queste visualizzazioni separate in finestre cornice separato o in riquadri di divisione all'interno di una singola finestra. Ora si supponga che l'utente può modificare i dati nel foglio di calcolo e vedere immediatamente le modifiche anche nel grafico.  
  
 In MFC, la visualizzazione di foglio di calcolo e la visualizzazione del grafico potrebbe essere basate in diverse classi derivate da CView. Entrambe le visualizzazioni verranno associate a un singolo oggetto documento. Il documento archivia i dati o li riceve da un database. Entrambe le visualizzazioni di accedere al documento e visualizzano dei dati recuperati da esso.  
  
 Quando un utente aggiorna una delle visualizzazioni, che consente di visualizzare le chiamate di oggetti `CDocument::UpdateAllViews`. Tale funzione notifica tutte le visualizzazioni del documento e gli aggiornamenti di ogni visualizzazione utilizzando i dati più recenti dal documento. La chiamata a singola `UpdateAllViews` Sincronizza le visualizzazioni diverse.  
  
 Questo scenario sarebbe difficile senza la separazione dei dati dalla visualizzazione, in particolare se le viste archiviati i dati stessi. Con documento/visualizzazione, è facile. Il framework esegue la maggior parte delle operazioni di coordinamento per l'utente.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Alternative a documento/visualizzazione](../mfc/alternatives-to-the-document-view-architecture.md)  
  
-   [CDocument](../mfc/reference/cdocument-class.md)  
  
-   [CView](../mfc/reference/cview-class.md)  
  
-   [UpdateAllViews](../mfc/reference/cdocument-class.md#updateallviews)  
  
-   [CView::GetDocument](../mfc/reference/cview-class.md#getdocument)  
  
## <a name="see-also"></a>Vedere anche  
 [Architettura documento/visualizzazione](../mfc/document-view-architecture.md)

