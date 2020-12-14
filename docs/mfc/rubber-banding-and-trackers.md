---
description: 'Altre informazioni su: Rubber-Banding e tracker'
title: Selezione e tracker
ms.date: 11/04/2016
helpviewer_keywords:
- trackers [MFC]
- CRectTracker class [MFC], implementing trackers
- OLE objects [MFC], selecting
- rubber banding [MFC]
- WM_LBUTTONDOWN [MFC]
ms.assetid: 0d0fa64c-6418-4baf-ab7f-2d16ca039230
ms.openlocfilehash: 5d641e7553a2891e0319484558f025c6998f9693
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217835"
---
# <a name="rubber-banding-and-trackers"></a>Selezione e tracker

Un'altra funzionalità fornita dagli strumenti di rilevamento è il rettangolo di selezione, che consente a un utente di selezionare più elementi OLE trascinando un rettangolo di ridimensionamento attorno agli elementi da selezionare. Quando l'utente rilascia il pulsante sinistro del mouse, gli elementi inclusi nell'area selezionata vengono selezionati e possono essere modificati dall'utente. Ad esempio, l'utente può trascinare la selezione in un'altra applicazione contenitore.

Per implementare questa funzionalità, è necessario codice aggiuntivo nella funzione del gestore WM_LBUTTONDOWN dell'applicazione.

Nell'esempio di codice seguente sono implementati il rettangolo di selezione e funzionalità aggiuntive.

[!code-cpp[NVC_MFCOClient#6](../mfc/codesnippet/cpp/rubber-banding-and-trackers_1.cpp)]

Se si vuole consentire l'orientamento reversibile dello strumento di rilevamento durante la banda di gomma, è necessario chiamare [CRectTracker:: TrackRubberBand](../mfc/reference/crecttracker-class.md#trackrubberband) con il terzo parametro impostato su **true**. Si tenga presente che, a volte, l'orientamento reversibile può causare l'inversione di [CRectTracker:: m_rect](../mfc/reference/crecttracker-class.md#m_rect) . Questa operazione può essere corretta tramite una chiamata a [CRect:: NormalizeRect](../atl-mfc-shared/reference/crect-class.md#normalizerect).

Per altre informazioni, vedere [elementi client contenitore](../mfc/containers-client-items.md) e [trascinamento della selezione OLE: personalizzare il trascinamento della selezione](../mfc/drag-and-drop-ole.md#customize-drag-and-drop).

## <a name="see-also"></a>Vedi anche

[Tracker: implementazione di tracker nell'applicazione OLE](../mfc/trackers-implementing-trackers-in-your-ole-application.md)<br/>
[Classe CRectTracker](../mfc/reference/crecttracker-class.md)
