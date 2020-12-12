---
description: 'Altre informazioni su: controllo intestazione e controllo elenco'
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
ms.openlocfilehash: d2301f82a76516a008de0a72e1c9288580b8f545
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97325919"
---
# <a name="header-control-and-list-control"></a>Controllo Header e controllo List

Nella maggior parte dei casi, si utilizzerà il controllo Header incorporato in un oggetto [CListCtrl](reference/clistctrl-class.md) o [CListView](reference/clistview-class.md) . Tuttavia, esistono casi in cui è preferibile un oggetto controllo intestazione separato, ad esempio la modifica dei dati, la disposizione in colonne o righe in un oggetto derivato da [CView](reference/cview-class.md). In questi casi, è necessario un maggiore controllo sull'aspetto e sul comportamento predefinito di un controllo intestazione incorporato.

Nel caso comune in cui si vuole che un controllo intestazione fornisca un comportamento predefinito standard, è consigliabile usare [CListCtrl](reference/clistctrl-class.md) o [CListView](reference/clistview-class.md) . Usare `CListCtrl` quando si desidera la funzionalità di un controllo intestazione predefinito, incorporata in un controllo comune di visualizzazione elenco. Utilizzare [CListView](reference/clistview-class.md) quando si desidera che la funzionalità di un controllo intestazione predefinito, incorporata in un oggetto visualizzazione.

> [!NOTE]
> Questi controlli includono solo un controllo intestazione incorporato se il controllo visualizzazione elenco viene creato usando lo stile **LVS_REPORT** .

Nella maggior parte dei casi, l'aspetto del controllo intestazione incorporato può essere modificato modificando gli stili del controllo di visualizzazione elenco che lo contiene. Inoltre, le informazioni sul controllo intestazione possono essere ottenute tramite le funzioni membro del controllo visualizzazione elenco padre. Tuttavia, per il controllo completo e l'accesso agli attributi e agli stili del controllo intestazione incorporato, è consigliabile ottenere un puntatore all'oggetto controllo intestazione.

È possibile accedere all'oggetto controllo intestazione incorporato da `CListCtrl` o `CListView` con una chiamata alla funzione membro della relativa classe `GetHeaderCtrl` . Il codice seguente illustra questo processo:

[!code-cpp[NVC_MFCControlLadenDialog#14](codesnippet/cpp/header-control-and-list-control_1.cpp)]

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Uso di elenchi di immagini con controlli intestazione](using-image-lists-with-header-controls.md)

## <a name="see-also"></a>Vedi anche

[Utilizzo di CHeaderCtrl](using-cheaderctrl.md)<br/>
[Controlli](controls-mfc.md)
