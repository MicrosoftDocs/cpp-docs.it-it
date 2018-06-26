---
title: Controllo Header e controllo elenco | Documenti Microsoft
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
ms.openlocfilehash: acee0508243f468f41c645a0cde825ca7c828657
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36931594"
---
# <a name="header-control-and-list-control"></a>Controllo Header e controllo List
Nella maggior parte dei casi, si utilizzerà il controllo intestazione incorporato in un [CListCtrl](../mfc/reference/clistctrl-class.md) oppure [CListView](../mfc/reference/clistview-class.md) oggetto. Tuttavia, vi sono casi in cui un oggetto di controllo di intestazione separato è utile, ad esempio la modifica dei dati, disposti in colonne o righe, in un [CView](../mfc/reference/cview-class.md)-oggetto derivato. In questi casi, è necessario un maggiore controllo sull'aspetto e comportamento predefinito di un controllo header incorporato.  
  
 Nel caso comune che si desidera un controllo di intestazione per fornire standard, il comportamento predefinito, è possibile utilizzare [CListCtrl](../mfc/reference/clistctrl-class.md) oppure [CListView](../mfc/reference/clistview-class.md) invece. Utilizzare `CListCtrl` quando si vuole la funzionalità di un controllo di intestazione predefinita incorporata in un controllo comune di visualizzazione elenco. Uso [CListView](../mfc/reference/clistview-class.md) quando si vuole la funzionalità di un controllo di intestazione predefinita incorporata in un oggetto visualizzazione.  
  
> [!NOTE]
>  Questi controlli includono un controllo intestazione incorporata solo se il controllo di visualizzazione elenco viene creato tramite il **LVS_REPORT** stile.  
  
 Nella maggior parte dei casi, è possibile modificare l'aspetto del controllo header incorporato modificando gli stili del controllo di visualizzazione elenco che lo contiene. Inoltre, informazioni sul controllo intestazione possono essere ottenute tramite le funzioni membro di controllo di visualizzazione elenco padre. Tuttavia, per il controllo completo e l'accesso agli attributi e stili del controllo header incorporato, è preferibile che è possibile ottenere un puntatore all'oggetto controllo intestazione.  
  
 L'oggetto di controllo header incorporato è possibile accedere da uno `CListCtrl` oppure `CListView` con una chiamata a della rispettiva classe `GetHeaderCtrl` funzione membro. Il codice seguente illustra questo processo:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#14](../mfc/codesnippet/cpp/header-control-and-list-control_1.cpp)]  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Utilizzo di elenchi immagini con controlli header](../mfc/using-image-lists-with-header-controls.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

