---
title: Specifica la posizione e le dimensioni di una finestra di dialogo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes, size
- dialog boxes, positioning
ms.assetid: 2b7c495e-6595-4cfb-9664-80b2826d0851
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: cc4c6867f5ed3791414619257fec33db4c632553
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33890577"
---
# <a name="specifying-the-location-and-size-of-a-dialog-box"></a>Impostazione della posizione e della dimensione di una finestra di dialogo
La posizione e dimensioni di una finestra di dialogo, nonché la posizione e dimensioni dei controlli in esso contenuti, vengono misurati in unità di finestra di dialogo. I valori per i singoli controlli e la finestra di dialogo vengono visualizzati nella parte inferiore destra della barra quando si seleziona lo stato di Visual Studio.  
  
 Esistono tre proprietà che è possibile impostare nel [finestra proprietà](/visualstudio/ide/reference/properties-window) per specificare in una finestra di dialogo verrà visualizzata sullo schermo. La proprietà Center è un valore booleano. Se si imposta il valore su True, la finestra di dialogo verrà sempre visualizzato al centro dello schermo. Se è impostato su False, è quindi possibile impostare le proprietà Posx e Posy definire in modo esplicito in cui verrà visualizzata la finestra di dialogo visualizzate sullo schermo. Le proprietà posizione sono valori di offset dall'angolo superiore sinistro dell'area di visualizzazione, è definito come {X = 0, Y = 0}. La posizione si basa inoltre sul **Absolute Align** proprietà: se True, le coordinate sono rispetto allo schermo; se False, le coordinate sono relativi alla finestra del proprietario della finestra di dialogo.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [la creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione di risorse nelle applicazioni gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)

