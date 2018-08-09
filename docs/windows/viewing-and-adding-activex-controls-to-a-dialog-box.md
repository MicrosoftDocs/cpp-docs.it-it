---
title: Visualizzazione e aggiunta di controlli ActiveX in una finestra di dialogo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.controls.activex
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes [C++], adding ActiveX controls
- Insert ActiveX Control command
- ActiveX controls [C++], adding to dialog boxes
ms.assetid: e1c2e3ae-e1b0-40d3-9766-623007073856
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 2939d5d99c0657e6caa68e8cc6fbb9e6361fcaf7
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40017042"
---
# <a name="viewing-and-adding-activex-controls-to-a-dialog-box"></a>Visualizzazione e aggiunta di controlli ActiveX in una finestra di dialogo
Visual Studio consente di inserire controlli ActiveX nella finestra di dialogo.  
  
### <a name="to-see-the-activex-controls-you-have-available"></a>Per visualizzare i controlli ActiveX disponibili  
  
1.  Aprire una finestra di dialogo nell'editor finestre.  
  
2.  Fare clic con il pulsante destro del mouse in un punto qualsiasi della finestra di dialogo.  
  
3.  Scegliere **Inserisci controllo ActiveX**dal menu di scelta rapida.  
  
     Nella [finestra di dialogo Inserisci controllo ActiveX](../windows/insert-activex-control-dialog-box.md) che viene visualizzata sono presenti tutti i controlli ActiveX nel sistema. Nella parte inferiore della finestra di dialogo è indicato il percorso del file del controllo ActiveX.  
  
### <a name="to-add-an-activex-control-to-a-dialog-box"></a>Per aggiungere un controllo ActiveX a una finestra di dialogo  
  
1.  Nella [finestra di dialogo Inserisci controllo ActiveX](../windows/insert-activex-control-dialog-box.md)selezionare il controllo da aggiungere alla finestra di dialogo, quindi fare clic su **OK**.  
  
     Il controllo viene visualizzato nella finestra di dialogo, in cui è possibile modificarlo o creare i relativi gestori, come per qualsiasi altro controllo.  
  
    > [!NOTE]
    >  È possibile aggiungere controlli ActiveX alla [finestra Casella degli strumenti](/visualstudio/ide/reference/toolbox). Per altre informazioni, vedere [gestione di elementi e le schede della casella degli strumenti](http://msdn.microsoft.com/21285050-cadd-455a-b1f5-a2289a89c4db).  
  
    > [!CAUTION]
    >  Potrebbe non essere legalmente consentito distribuire tutti i controlli ActiveX nel sistema. Fare riferimento al contratto di licenza del software che ha installato i controlli o contattare il produttore del software.  
  
     È possibile inserire controlli nel **casella degli strumenti** finestra per semplificare l'accesso. Per altre informazioni, vedere [finestra di dialogo Personalizza casella degli strumenti](http://msdn.microsoft.com/bd07835f-18a8-433e-bccc-7141f65263bb).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Contenitori di controlli ActiveX](../mfc/activex-control-containers.md)