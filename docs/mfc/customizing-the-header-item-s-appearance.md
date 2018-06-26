---
title: Personalizzazione dell'elemento di intestazione&#39;aspetto s | Documenti Microsoft
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
ms.openlocfilehash: e09f8bc0b61e22435ee348968f117940b57132e3
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930875"
---
# <a name="customizing-the-header-item39s-appearance"></a>Personalizzazione dell'elemento di intestazione&#39;s aspetto
Impostando il *dwStyle* parametro quando si crea innanzitutto un controllo header ([CHeaderCtrl:: Create](../mfc/reference/cheaderctrl-class.md#create)), è possibile definire l'aspetto e comportamento di intestazione elementi o dell'intestazione del controllo stesso.  
  
 Di seguito è riportato un campione di è possibile impostare gli stili e il loro scopo:  
  
-   Per rendere una voce di intestazione, ad esempio un pulsante di comando, usare il **HDS_BUTTONS** stile.  
  
     Utilizzare questo stile se si desidera eseguire azioni in risposta ai clic del mouse su un elemento di intestazione, ad esempio l'ordinamento dei dati da una determinata colonna, come accade in Microsoft Outlook.  
  
-   Per ottenere gli elementi dell'intestazione un aspetto "intercettazione" durante il passaggio del cursore del mouse su di essi, utilizzare il **HDS_HOTTRACK** stile.  
  
     Intercettazione viene visualizzato un contorno 3D quando il puntatore è posizionato su un elemento in un semplice in caso contrario, a barre.  
  
-   Per indicare che il controllo intestazione deve essere nascosta, usare il **HDS_HIDDEN** stile.  
  
     Il **HDS_HIDDEN** stile indica che il controllo intestazione deve essere utilizzato come un contenitore di dati e non un controllo visivo. Questo stile non nasconde automaticamente il controllo, ma, invece, influisce sul comportamento di `CHeaderCtrl::Layout`. Il valore restituito nel *cy* appartenente il `WINDOWPOS` struttura sarà zero che indica che il controllo non deve essere visibile all'utente.  
  
 Per ulteriori informazioni su queste proprietà, vedere [elementi](http://msdn.microsoft.com/library/windows/desktop/bb775238) in Windows SDK. Per informazioni sull'aggiunta di elementi a un controllo di intestazione, vedere [aggiunta di elementi al controllo Header](../mfc/adding-items-to-the-header-control.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

