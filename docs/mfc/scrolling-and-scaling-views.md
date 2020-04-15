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
ms.openlocfilehash: 366f0e2953e5190f80a2877804bff2fc7dbbd520
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372780"
---
# <a name="scrolling-and-scaling-views"></a>Scorrimento e ridimensionamento di visualizzazioni

MFC supporta le visualizzazioni che scorrono e le visualizzazioni che vengono ridimensionate automaticamente alle dimensioni della finestra cornice che le visualizza. La `CScrollView` classe supporta entrambi i tipi di visualizzazioni.

Per ulteriori informazioni sullo scorrimento e il ridimensionamento, vedere la classe [CScrollView](../mfc/reference/cscrollview-class.md) in *Mfc Reference*. Per un esempio di scorrimento, vedere [l'esempio Scribble](../overview/visual-cpp-samples.md).

## <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- Scorrimento di una visualizzazione

- Ridimensionamento di una vista

- [Visualizzare le coordinate](/windows/win32/gdi/window-coordinate-system)

## <a name="scrolling-a-view"></a><a name="_core_scrolling_a_view"></a>Scorrimento di una vista

Spesso le dimensioni di un documento sono maggiori di quelle visualizzate dalla visualizzazione. Ciò può verificarsi perché i dati del documento aumentano o l'utente riduce la finestra che inquadra la visualizzazione. In questi casi, la visualizzazione deve supportare lo scorrimento.

Qualsiasi visualizzazione può gestire i `OnHScroll` messaggi `OnVScroll` della barra di scorrimento nelle funzioni membro e e . È possibile implementare la gestione dei messaggi della barra di scorrimento in `CScrollView` queste funzioni, eseguendo tutto il lavoro manualmente, oppure è possibile utilizzare la classe per gestire lo scorrimento per l'utente.

Tramite la funzione `CScrollView` vengono effettuate le operazioni seguenti:

- Gestisce le dimensioni delle finestre e delle finestre e le modalità di mappatura

- Scorre automaticamente in risposta ai messaggi della barra di scorrimento

È possibile specificare quanto scorrere per una "pagina" (quando l'utente fa clic in un albero della barra di scorrimento) e una "linea" (quando l'utente fa clic in una freccia di scorrimento). Pianifica questi valori in base alla natura della tua vista. Ad esempio, è possibile scorrere con incrementi di 1 pixel per una vista grafica ma in incrementi in base all'altezza della riga nei documenti di testo.

## <a name="scaling-a-view"></a><a name="_core_scaling_a_view"></a>Ridimensionamento di una vista

Quando si desidera che la visualizzazione si adatti automaticamente `CScrollView` alle dimensioni della finestra cornice, è possibile utilizzare per il ridimensionamento anziché lo scorrimento. La visualizzazione logica viene estesa o rimpicciolita per adattarsi esattamente all'area client della finestra. Una visualizzazione in scala non dispone di barre di scorrimento.

## <a name="see-also"></a>Vedere anche

[Utilizzo delle visualizzazioni](../mfc/using-views.md)
