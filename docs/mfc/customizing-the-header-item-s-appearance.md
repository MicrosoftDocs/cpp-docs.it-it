---
title: Personalizzazione dell'elemento di intestazione &#39; aspetto s | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- header controls [MFC], customization of items
- CHeaderCtrl class [MFC], customizing the items
- HDS_ styles
ms.assetid: b1e1e326-ec7d-4dbd-a46f-96a3e2055618
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: dacb5cc7aa1c6d7c74a07ee911c5887efe1d877b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="customizing-the-header-item39s-appearance"></a>Personalizzazione dell'elemento di intestazione &#39; s aspetto
Impostando il *dwStyle* parametro quando si crea un controllo header ([CHeaderCtrl:: Create](../mfc/reference/cheaderctrl-class.md#create)), è possibile definire l'aspetto e comportamento di intestazione degli elementi o dell'intestazione del controllo stesso.  
  
 Di seguito è riportato un esempio di, è possibile impostare gli stili e il loro scopo:  
  
-   Per visualizzare un elemento di intestazione come un pulsante di comando, utilizzare il `HDS_BUTTONS` stile.  
  
     Utilizzare questo stile se si desidera eseguire azioni in risposta ai clic del mouse su un elemento di intestazione, ad esempio l'ordinamento dei dati in una determinata colonna, come accade in Microsoft Outlook.  
  
-   Per assegnare gli elementi dell'intestazione di un aspetto "intercettazione" quando si passa il cursore del mouse su di essi, utilizzare il `HDS_HOTTRACK` stile.  
  
     Intercettazione viene visualizzato un contorno 3D quando il puntatore è posizionato su un elemento in un piano in caso contrario barra.  
  
-   Per indicare che il controllo intestazione deve essere nascosta, utilizzare il `HDS_HIDDEN` stile.  
  
     Il `HDS_HIDDEN` stile indica che il controllo intestazione deve essere utilizzato come un contenitore di dati e non un controllo visivo. Questo stile non nasconde automaticamente il controllo, ma, invece, influisce sul comportamento di `CHeaderCtrl::Layout`. Il valore restituito nel **cy** appartenente il `WINDOWPOS` struttura sarà zero che indica che il controllo non deve essere visibile all'utente.  
  
 Per ulteriori informazioni su queste proprietà, vedere [elementi](http://msdn.microsoft.com/library/windows/desktop/bb775238) in Windows SDK. Per informazioni sull'aggiunta di elementi a un controllo di intestazione, vedere [aggiunta di elementi al controllo Header](../mfc/adding-items-to-the-header-control.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

