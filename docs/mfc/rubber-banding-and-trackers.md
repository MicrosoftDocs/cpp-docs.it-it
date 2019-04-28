---
title: Selezione e tracker
ms.date: 11/04/2016
helpviewer_keywords:
- trackers [MFC]
- CRectTracker class [MFC], implementing trackers
- OLE objects [MFC], selecting
- rubber banding [MFC]
- WM_LBUTTONDOWN [MFC]
ms.assetid: 0d0fa64c-6418-4baf-ab7f-2d16ca039230
ms.openlocfilehash: a6a9c9848e21129d4e6a8ce300e8750b4a0c6126
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62308849"
---
# <a name="rubber-banding-and-trackers"></a>Selezione e tracker

Un'altra funzionalità fornita dagli strumenti di rilevamento è il rettangolo di selezione, che consente a un utente di selezionare più elementi OLE trascinando un rettangolo di ridimensionamento attorno agli elementi da selezionare. Quando l'utente rilascia il pulsante sinistro del mouse, gli elementi inclusi nell'area selezionata vengono selezionati e possono essere modificati dall'utente. Ad esempio, l'utente può trascinare la selezione in un'altra applicazione contenitore.

Implementazione di questa funzionalità richiede codice aggiuntivo nella funzione del gestore WM_LBUTTONDOWN dell'applicazione.

Nell'esempio di codice seguente sono implementati il rettangolo di selezione e funzionalità aggiuntive.

[!code-cpp[NVC_MFCOClient#6](../mfc/codesnippet/cpp/rubber-banding-and-trackers_1.cpp)]

Se si desidera consentire l'orientamento reversibile dello strumento di rilevamento durante la selezione, è necessario chiamare [CRectTracker](../mfc/reference/crecttracker-class.md#trackrubberband) con il terzo parametro impostato su **TRUE**. Tenere presente che consentire l'orientamento reversibile può talvolta indurre [CRectTracker::](../mfc/reference/crecttracker-class.md#m_rect) m_rect. Ciò può essere corretto da una chiamata a [CRect:: NormalizeRect](../atl-mfc-shared/reference/crect-class.md#normalizerect).

Per altre informazioni, vedere [elementi Client dei contenitori](../mfc/containers-client-items.md) e [personalizzazione di trascinamento della selezione](../mfc/drag-and-drop-customizing.md).

## <a name="see-also"></a>Vedere anche

[Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)<br/>
[Classe CRectTracker](../mfc/reference/crecttracker-class.md)
