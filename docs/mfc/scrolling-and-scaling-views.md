---
title: Scorrimento e ridimensionamento di visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- message handlers [MFC]
- scaling views [MFC]
- message handling [MFC], scroll bars in view class [MFC]
- scroll bars [MFC], messages
- scrolling views [MFC]
ms.assetid: f98a3421-c336-407e-97ee-dbb2ffd76fbd
ms.openlocfilehash: 7d26bc656dec3fdcbb8fc5ea4918ec7d59bc5afc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62308602"
---
# <a name="scrolling-and-scaling-views"></a>Scorrimento e ridimensionamento di visualizzazioni

MFC supporta le visualizzazioni di scorrimento e visualizzazioni che vengono ridimensionate automaticamente per le dimensioni della finestra cornice che li visualizza. Classe `CScrollView` supporta entrambi i tipi di viste.

Per altre informazioni sullo scorrimento e ridimensionamento, vedere la classe [CScrollView](../mfc/reference/cscrollview-class.md) nel *riferimento MFC*. Per un esempio di scorrimento, vedere la [esempio Scribble](../overview/visual-cpp-samples.md).

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- Lo scorrimento di una vista

- Ridimensionamento di una visualizzazione

- [Coordinate di visualizzazione](/windows/desktop/gdi/window-coordinate-system)

##  <a name="_core_scrolling_a_view"></a> Lo scorrimento di una vista

Spesso le dimensioni di un documento sono maggiore della dimensione che può visualizzare la relativa visualizzazione. Ciò può verificarsi perché i dati del documento aumentano o l'utente si riduce la finestra cornice della visualizzazione. In questi casi, la visualizzazione deve supportare lo scorrimento.

Qualsiasi visualizzazione può gestire i messaggi della barra di scorrimento nel relativo `OnHScroll` e `OnVScroll` funzioni membro. È possibile una gestione dei messaggi della barra di scorrimento implementano in queste funzioni, autonomamente tutto il lavoro, oppure è possibile usare il `CScrollView` classe per gestire lo scorrimento per l'utente.

`CScrollView` effettua le operazioni seguenti:

- Gestisce le dimensioni di finestra e del riquadro di visualizzazione e la modalità di mapping

- Scorre automaticamente in risposta ai messaggi della barra di scorrimento

È possibile specificare la quantità di scorrimento di una "pagina" (quando l'utente fa clic in un albero della barra di scorrimento) e "riga" (quando l'utente fa clic in una freccia di scorrimento). Pianificare tali valori in modo la natura della vista. Ad esempio, è possibile scorrere in incrementi di 1 pixel per una visualizzazione grafica, ma in base a incrementi in base all'altezza di riga nei documenti di testo.

##  <a name="_core_scaling_a_view"></a> Ridimensionamento di una visualizzazione

Quando si desidera che la vista si adatti automaticamente le dimensioni della finestra cornice, è possibile usare `CScrollView` per la scalabilità anziché lo scorrimento. La visualizzazione logica viene ingrandita o rimpicciolita affinché si adatti perfettamente area client della finestra. Una visualizzazione ridimensionata non dispone di alcuna barra di scorrimento.

## <a name="see-also"></a>Vedere anche

[Uso delle visualizzazioni](../mfc/using-views.md)
