---
title: Specifica la posizione e le dimensioni di una finestra di dialogo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- dialog boxes, size
- dialog boxes, positioning
ms.assetid: 2b7c495e-6595-4cfb-9664-80b2826d0851
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b0dcd2acc4067e62d5cc44ca4e180f591e9fe63b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="specifying-the-location-and-size-of-a-dialog-box"></a>Impostazione della posizione e della dimensione di una finestra di dialogo
La posizione e dimensioni di una finestra di dialogo, nonché la posizione e dimensioni dei controlli in esso contenuti, vengono misurati in unità di finestra di dialogo. I valori per i singoli controlli e la finestra di dialogo vengono visualizzati nella parte inferiore destra della barra quando si seleziona lo stato di Visual Studio.  
  
 Esistono tre proprietà che è possibile impostare nel [finestra proprietà](/visualstudio/ide/reference/properties-window) per specificare in una finestra di dialogo verrà visualizzata sullo schermo. La proprietà Center è un valore booleano. Se si imposta il valore su True, la finestra di dialogo verrà sempre visualizzato al centro dello schermo. Se è impostato su False, è quindi possibile impostare le proprietà Posx e Posy definire in modo esplicito in cui verrà visualizzata la finestra di dialogo visualizzate sullo schermo. Le proprietà posizione sono valori di offset dall'angolo superiore sinistro dell'area di visualizzazione, è definito come {X = 0, Y = 0}. La posizione si basa inoltre sul **Absolute Align** proprietà: se True, le coordinate sono rispetto allo schermo; se False, le coordinate sono relativi alla finestra del proprietario della finestra di dialogo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](https://msdn.microsoft.com/library/f45fce5x.aspx) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](https://msdn.microsoft.com/library/xbx3z216.aspx). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](https://msdn.microsoft.com/library/h6270d0z.aspx).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

