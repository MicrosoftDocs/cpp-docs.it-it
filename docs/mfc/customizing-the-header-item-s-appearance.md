---
title: Personalizzare l'elemento dell'intestazione&#39;aspetto s | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- header controls [MFC], customization of items
- CHeaderCtrl class [MFC], customizing the items
- HDS_ styles
ms.assetid: b1e1e326-ec7d-4dbd-a46f-96a3e2055618
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3523feb14d49a0e275fd3024925287aa05521f4b
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43195518"
---
# <a name="customizing-the-header-item39s-appearance"></a>Personalizzare l'elemento dell'intestazione&#39;aspetto
Impostando il *dwStyle* parametro quando si crea un controllo header ([CHeaderCtrl:: Create](../mfc/reference/cheaderctrl-class.md#create)), è possibile definire l'aspetto e comportamento dell'intestazione di elementi o dell'intestazione del controllo stesso.  
  
 Di seguito sono riportati gli stili che è possibile impostare e il loro scopo:  
  
-   Per rendere un elemento di intestazione l'aspetto di un pulsante di comando, usare il **HDS_BUTTONS** stile.  
  
     Usare questo stile se si desidera eseguire azioni in risposta ai clic del mouse su un elemento di intestazione, ad esempio l'ordinamento dei dati da una determinata colonna, come accade in Microsoft Outlook.  
  
-   Per assegnare agli elementi dell'intestazione di un aspetto "hot track" quando il cursore del mouse passa su di essi, usare il **HDS_HOTTRACK** stile.  
  
     La funzionalità di intercettazione consente di visualizzare un bordo 3D il puntatore è posizionato su un elemento in un semplice in caso contrario, a barre.  
  
-   Per indicare che il controllo intestazione deve essere nascosto, usare il **HDS_HIDDEN** stile.  
  
     Il **HDS_HIDDEN** stile indica che il controllo intestazione deve essere utilizzato come un contenitore di dati e non un controllo visivo. Questo stile non nasconde automaticamente il controllo ma, invece, influisce sul comportamento di `CHeaderCtrl::Layout`. Il valore restituito nel *cy* membro del `WINDOWPOS` struttura sarà zero che indica che il controllo non deve essere visibile all'utente.  
  
 Per altre informazioni su queste proprietà, vedere [elementi](/windows/desktop/Controls/header-controls) nel SDK di Windows. Per informazioni sull'aggiunta di elementi a un controllo intestazione, vedere [aggiunta di elementi al controllo Header](../mfc/adding-items-to-the-header-control.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

