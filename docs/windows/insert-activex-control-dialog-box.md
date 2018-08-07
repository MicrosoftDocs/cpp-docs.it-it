---
title: Inserisci controllo ActiveX, finestra di dialogo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.dialog.insertActiveXControls
dev_langs:
- C++
helpviewer_keywords:
- Insert ActiveX Control dialog box
- ActiveX controls [C++], adding to dialog boxes
ms.assetid: 06638ea3-0726-40da-a989-9b89292d0e3d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7bbf381170da99a17ee8c701d8d3f3251c88729d
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39607124"
---
# <a name="insert-activex-control-dialog-box"></a>Inserisci controllo ActiveX (finestra di dialogo)
Questa finestra di dialogo consente [inserire controlli ActiveX nella finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md) quando si usa la [editor finestre](../windows/dialog-editor.md).  
  
 **Controllo ActiveX**  
 Visualizza un elenco di controlli ActiveX. Inserimento di un controllo dalla finestra di dialogo non genera una classe wrapper. Se è necessaria una classe wrapper, utilizzare [Visualizzazione classi](http://msdn.microsoft.com/8d7430a9-3e33-454c-a9e1-a85e3d2db925) per crearne uno (per altre informazioni, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)). Se un controllo ActiveX non viene visualizzato nella finestra di dialogo, provare a installare il controllo in base alle istruzioni del fornitore.  
  
 **Percorso**  
 Visualizza il file in cui si trova il controllo ActiveX.  
  
 È possibile inserire controlli nella finestra Casella degli strumenti per semplificare l'accesso. Per altre informazioni, vedere [finestra di dialogo Personalizza casella degli strumenti](http://msdn.microsoft.com/bd07835f-18a8-433e-bccc-7141f65263bb).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Scheda Editor finestre, casella degli strumenti](../windows/dialog-editor-tab-toolbox.md)   
 [File di risorse](../windows/resource-files-visual-studio.md)   
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)