---
title: Scorrimento e ridimensionamento di visualizzazioni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- message handlers [MFC]
- scaling views [MFC]
- message handling [MFC], scroll bars in view class [MFC]
- scroll bars [MFC], messages
- scrolling views [MFC]
ms.assetid: f98a3421-c336-407e-97ee-dbb2ffd76fbd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f9758c63562a19d6b9e458fd434108a92bbc8576
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33379268"
---
# <a name="scrolling-and-scaling-views"></a>Scorrimento e ridimensionamento di visualizzazioni
MFC supporta le viste di scorrimento e visualizzazioni che vengono automaticamente ridimensionato in base alle dimensioni della finestra cornice che li visualizza. Classe `CScrollView` supporta entrambi i tipi di viste.  
  
 Per ulteriori informazioni su lo scorrimento e ridimensionamento, vedere la classe [CScrollView](../mfc/reference/cscrollview-class.md) nel *riferimenti alla libreria MFC*. Per un esempio di scorrimento, vedere il [esempio Scribble](../visual-cpp-samples.md).  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   Scorrimento di una visualizzazione  
  
-   Ridimensionamento di una visualizzazione  
  
-   [Coordinate di visualizzazione](http://msdn.microsoft.com/library/windows/desktop/dd145205)  
  
##  <a name="_core_scrolling_a_view"></a> Scorrimento di una visualizzazione  
 Spesso le dimensioni di un documento sono maggiore della dimensione che relativa visualizzazione. Ciò può verificarsi perché i dati del documento aumentano o si riduce la finestra cornice della visualizzazione. In questi casi, la vista deve supportare lo scorrimento.  
  
 Qualsiasi visualizzazione in grado di gestire i messaggi della barra di scorrimento nel relativo `OnHScroll` e `OnVScroll` funzioni membro. È possibile la gestione dei messaggi della barra di scorrimento entrambi implementare queste funzioni, personalmente tutto il lavoro, oppure è possibile utilizzare la `CScrollView` classe per gestire lo scorrimento per l'utente.  
  
 `CScrollView` effettua le operazioni seguenti:  
  
-   Gestisce le dimensioni di finestra e del riquadro di visualizzazione e la modalità di mapping  
  
-   Scorre automaticamente in risposta ai messaggi della barra di scorrimento  
  
 È possibile specificare la quantità di scorrimento per una "pagina" (quando l'utente fa clic in un albero di barra di scorrimento) e "riga" (quando l'utente fa clic in una freccia di scorrimento). Pianificare tali valori in modo la natura della vista. Potrebbe ad esempio, si desidera scorrere in incrementi di 1 pixel per una visualizzazione grafica e con incrementi in base all'altezza di riga nei documenti di testo.  
  
##  <a name="_core_scaling_a_view"></a> Ridimensionamento di una visualizzazione  
 Quando si desidera che la vista per adattare automaticamente le dimensioni della finestra cornice, è possibile utilizzare `CScrollView` per la scalabilità anziché lo scorrimento. La vista logica è estesa o ridotta per adattarsi esattamente l'area client della finestra. Una vista in scala non dispone di alcuna barra di scorrimento.  
  
## <a name="see-also"></a>Vedere anche  
 [Uso delle visualizzazioni](../mfc/using-views.md)

