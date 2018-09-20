---
title: Controllo Header e controllo di elenco | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CListCtrl class [MFC], with CHeaderCtrl
- CListCtrl class [MFC], header controls
- CHeaderCtrl class [MFC], with CListCtrl
- controls [MFC], header
- header controls [MFC]
- header controls [MFC], list controls used with
ms.assetid: b20194b1-1a6b-4e2f-b890-1b3cca6650bc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 24d40ea26a6ff52490b4a501a8b62c0aace660b1
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46407634"
---
# <a name="header-control-and-list-control"></a>Controllo Header e controllo List

Nella maggior parte dei casi, si userà il controllo intestazione incorporata in un [CListCtrl](../mfc/reference/clistctrl-class.md) oppure [CListView](../mfc/reference/clistview-class.md) oggetto. Tuttavia, vi sono casi in cui un oggetto di controllo di intestazione separato è utile, ad esempio la modifica dei dati, disposti in colonne o righe, in un [CView](../mfc/reference/cview-class.md)-oggetto derivato. In questi casi, è necessario un maggiore controllo sull'aspetto e comportamento predefinito di un controllo header incorporato.

Nel caso comune che si desidera un controllo di intestazione per fornire standard, il comportamento predefinito, è possibile usare [CListCtrl](../mfc/reference/clistctrl-class.md) oppure [CListView](../mfc/reference/clistview-class.md) invece. Usare `CListCtrl` quando si vuole la funzionalità di un controllo di intestazione predefinita incorporata in un controllo comune visualizzazione elenco. Uso [CListView](../mfc/reference/clistview-class.md) quando si vuole la funzionalità di un controllo di intestazione predefinita incorporata in un oggetto visualizzazione.

> [!NOTE]
>  Questi controlli includono un controllo intestazione incorporata solo se il controllo di visualizzazione elenco viene creato tramite il **LVS_REPORT** stile.

Nella maggior parte dei casi, l'aspetto del controllo intestazione incorporata può essere modificato modificando gli stili del controllo visualizzazione elenco che lo contiene. Inoltre, informazioni sul controllo intestazione possono essere ottenute tramite funzioni membro di controllo di visualizzazione elenco padre. Tuttavia, per il controllo completo e l'accesso, agli attributi e stili del controllo intestazione incorporati, è consigliabile che sia possibile ottenere un puntatore all'oggetto controllo intestazione.

L'oggetto controllo intestazione incorporati sono accessibili da una `CListCtrl` oppure `CListView` con una chiamata a della rispettiva classe `GetHeaderCtrl` funzione membro. Il codice seguente illustra questo processo:

[!code-cpp[NVC_MFCControlLadenDialog#14](../mfc/codesnippet/cpp/header-control-and-list-control_1.cpp)]

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Utilizzo di elenchi immagini con controlli header](../mfc/using-image-lists-with-header-controls.md)

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

