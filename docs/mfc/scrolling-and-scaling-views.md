---
description: 'Altre informazioni su: scorrimento e scalabilità delle visualizzazioni'
title: Scorrimento e ridimensionamento di visualizzazioni
ms.date: 11/04/2016
helpviewer_keywords:
- message handlers [MFC]
- scaling views [MFC]
- message handling [MFC], scroll bars in view class [MFC]
- scroll bars [MFC], messages
- scrolling views [MFC]
ms.assetid: f98a3421-c336-407e-97ee-dbb2ffd76fbd
ms.openlocfilehash: f18b774eadf875f61fcb1f3f3a8dc9e0e370f9a9
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217809"
---
# <a name="scrolling-and-scaling-views"></a>Scorrimento e ridimensionamento di visualizzazioni

MFC supporta visualizzazioni che scorrono e visualizzano automaticamente le dimensioni della finestra cornice che le Visualizza. `CScrollView`La classe supporta entrambi i tipi di viste.

Per ulteriori informazioni sullo scorrimento e la scalabilità, vedere la classe [CScrollView](../mfc/reference/cscrollview-class.md) nella Guida di *riferimento a MFC*. Per un esempio di scorrimento, vedere l'esempio [Scribble](../overview/visual-cpp-samples.md).

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- Scorrimento di una visualizzazione

- Ridimensionamento di una vista

- [Visualizza Coordinate](/windows/win32/gdi/window-coordinate-system)

## <a name="scrolling-a-view"></a><a name="_core_scrolling_a_view"></a> Scorrimento di una visualizzazione

Spesso le dimensioni di un documento sono maggiori delle dimensioni che possono essere visualizzate nella visualizzazione. Questo problema può verificarsi perché i dati del documento aumentano o l'utente compatta la finestra che incornicia la visualizzazione. In questi casi, la vista deve supportare lo scorrimento.

Qualsiasi visualizzazione può gestire i messaggi della barra di scorrimento `OnHScroll` nelle `OnVScroll` funzioni membro e. È possibile implementare la gestione dei messaggi della barra di scorrimento in queste funzioni, eseguendo manualmente tutto il lavoro, oppure è possibile utilizzare la `CScrollView` classe per gestire lo scorrimento.

`CScrollView` effettua le operazioni seguenti:

- Gestisce le modalità di mapping e le dimensioni della finestra e del viewport

- Scorre automaticamente in risposta ai messaggi della barra di scorrimento

È possibile specificare la quantità di scorrimento per una "pagina" (quando l'utente fa clic in un albero della barra di scorrimento) e una "riga" (quando l'utente fa clic su una freccia di scorrimento). Pianificare questi valori per adattarli alla natura della propria visualizzazione. Ad esempio, potrebbe essere necessario scorrere gli incrementi di 1 pixel per una visualizzazione grafica, ma in incrementi in base all'altezza della riga nei documenti di testo.

## <a name="scaling-a-view"></a><a name="_core_scaling_a_view"></a> Ridimensionamento di una vista

Quando si desidera che la visualizzazione corrisponda automaticamente alla dimensione della finestra cornice, è possibile utilizzare `CScrollView` per il ridimensionamento anziché lo scorrimento. La visualizzazione logica viene allungata o compattata in modo da adattarsi esattamente all'area client della finestra. Una visualizzazione ridimensionata non ha barre di scorrimento.

## <a name="see-also"></a>Vedi anche

[Uso delle visualizzazioni](../mfc/using-views.md)
