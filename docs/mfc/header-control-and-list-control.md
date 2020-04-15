---
title: Controllo Header e controllo List
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], with CHeaderCtrl
- CListCtrl class [MFC], header controls
- CHeaderCtrl class [MFC], with CListCtrl
- controls [MFC], header
- header controls [MFC]
- header controls [MFC], list controls used with
ms.assetid: b20194b1-1a6b-4e2f-b890-1b3cca6650bc
ms.openlocfilehash: 53dd6f1a7878d82a7f7ac48dd7082d791323941b
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370478"
---
# <a name="header-control-and-list-control"></a>Controllo Header e controllo List

Nella maggior parte dei casi, si utilizzerà il controllo intestazione incorporato in un [CListCtrl](../mfc/reference/clistctrl-class.md) o [CListView](../mfc/reference/clistview-class.md) oggetto. Tuttavia, esistono casi in cui è auspicabile un oggetto controllo intestazione separato, ad esempio la modifica dei dati, disposti in colonne o righe, in un oggetto derivato da CView.However, there are cases where a separate header control object is desirable, such as manipulating data, arranged in columns or rows, in a [CView-derived](../mfc/reference/cview-class.md)object. In questi casi, è necessario un maggiore controllo sull'aspetto e sul comportamento predefinito di un controllo intestazione incorporato.

Nel caso comune in cui si desidera che un controllo intestazione fornisca il comportamento predefinito standard, è possibile utilizzare [cListCtrl](../mfc/reference/clistctrl-class.md) o [CListView](../mfc/reference/clistview-class.md) invece. Utilizzare `CListCtrl` quando si desidera la funzionalità di un controllo intestazione predefinito, incorporato in un controllo comune visualizzazione elenco. Utilizzare [CListView](../mfc/reference/clistview-class.md) quando si desidera la funzionalità di un controllo intestazione predefinito, incorporato in un oggetto visualizzazione.

> [!NOTE]
> Questi controlli includono solo un controllo intestazione incorporato se il controllo visualizzazione elenco viene creato utilizzando lo stile **di LVS_REPORT.**

Nella maggior parte dei casi, l'aspetto del controllo intestazione incorporato può essere modificato modificando gli stili del controllo visualizzazione elenco che lo contiene. Inoltre, le informazioni sul controllo intestazione possono essere ottenute tramite le funzioni membro del controllo visualizzazione elenco padre. Tuttavia, per il controllo completo e l'accesso agli attributi e agli stili del controllo intestazione incorporato, è consigliabile ottenere un puntatore all'oggetto controllo intestazione.

È possibile accedere all'oggetto `CListCtrl` controllo `CListView` intestazione incorporato da uno `GetHeaderCtrl` o con una chiamata alla funzione membro della rispettiva classe. Il codice seguente illustra questo processo:

[!code-cpp[NVC_MFCControlLadenDialog#14](../mfc/codesnippet/cpp/header-control-and-list-control_1.cpp)]

## <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Uso di elenchi immagini con controlli intestazione](../mfc/using-image-lists-with-header-controls.md)

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
