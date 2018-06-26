---
title: Modifica degli stili del controllo elenco | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- styles [MFC], CListCtrl
- CListCtrl class [MFC], styles
- CListCtrl class [MFC], changing styles
ms.assetid: be74a005-0795-417c-9056-f6342aa74b26
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 18d54d22106742cab8d1cdfe9c32adc0a98fb41b
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36929543"
---
# <a name="changing-list-control-styles"></a>Modifica degli stili del controllo List
È possibile modificare lo stile della finestra di un controllo elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)) in qualsiasi momento dopo averlo creato. Se si modifica lo stile della finestra, modificare il tipo di visualizzazione utilizzato dal controllo. Per emulare Esplora risorse, ad esempio, è possibile fornire voci di menu o pulsanti della barra degli strumenti per passare il controllo tra diverse visualizzazioni: visualizzazione icone, visualizzazione elenco e così via.  
  
 Ad esempio, quando l'utente seleziona la voce di menu, è possibile apportare una chiamata a [GetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633584) per recuperare lo stile del controllo corrente e quindi chiamare [SetWindowLong](http://msdn.microsoft.com/library/windows/desktop/ms633591) per reimpostare lo stile. Per altre informazioni, vedere [utilizzo dei controlli di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774736) in Windows SDK.  
  
 Gli stili disponibili sono elencati nel [crea](../mfc/reference/clistctrl-class.md#create). Gli stili **LVS_ICON**, **LVS_SMALLICON**, **LVS_LIST**, e **LVS_REPORT** designare le viste di controllo quattro elenco.  
  
## <a name="extended-styles"></a>Stili estesi  
 Oltre a stili standard per un controllo elenco, è un altro set, detto stili estesi. Questi stili, descritti in [stili di visualizzazione elenco estesi](http://msdn.microsoft.com/library/windows/desktop/bb774732) in Windows SDK, forniscono un'ampia gamma di funzionalità utili che consentono di personalizzare il comportamento del controllo elenco. Per implementare il comportamento di un determinato stile (ad esempio la selezione), effettuare una chiamata a [CListCtrl:: SetExtendedStyle](../mfc/reference/clistctrl-class.md#setextendedstyle), passando lo stile richiesto. Nell'esempio seguente viene illustrata la chiamata di funzione:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#22](../mfc/codesnippet/cpp/changing-list-control-styles_1.cpp)]  
  
> [!NOTE]
>  Per la selezione a funzionare, è inoltre necessario uno **lo stile LVS_EX_ONECLICKACTIVATE** oppure **LVS_EX_TWOCLICKACTIVATE** attivata.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

