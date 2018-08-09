---
title: Specifica la posizione e dimensione di una finestra di dialogo | Microsoft Docs
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
ms.openlocfilehash: 160346a8ced39440b53ae1244ca5fa99e612b4d4
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40011829"
---
# <a name="specifying-the-location-and-size-of-a-dialog-box"></a>Impostazione della posizione e della dimensione di una finestra di dialogo
La posizione e dimensioni di una finestra di dialogo, nonché la posizione e dimensioni dei controlli in essa contenuti vengono misurati in unità di misura della finestra. I valori per i singoli controlli e la finestra di dialogo vengono visualizzati in basso a destra della barra quando si seleziona di stato di Visual Studio.  
  
 Esistono tre proprietà che è possibile impostare nella [finestra proprietà](/visualstudio/ide/reference/properties-window) per specificare in una finestra di dialogo verrà visualizzata sullo schermo. Il **centro** proprietà è un valore booleano; se si imposta il valore su **True**, la finestra di dialogo verrà sempre visualizzato al centro della schermata. Se viene impostata su **False**, quindi è possibile impostare il **XPos** e **YPos** proprietà da definire in modo esplicito in cui sullo schermo verrà visualizzata la finestra di dialogo. Le proprietà di posizione sono valori di offset dall'angolo superiore sinistro dell'area di visualizzazione, che è definita come `{X=0, Y=0}`. È anche in base alla posizione di **Absolute Align** proprietà: se **True**, le coordinate sono relative schermo; se **False**, le coordinate sono relative la finestra di dialogo finestra del proprietario.  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)