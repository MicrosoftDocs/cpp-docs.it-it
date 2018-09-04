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
ms.openlocfilehash: ef8f2142f00b862ff198df9c75e142dc66a049b5
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43689964"
---
# <a name="insert-activex-control-dialog-box"></a>Inserisci controllo ActiveX (finestra di dialogo)

Questa finestra di dialogo consente [inserire controlli ActiveX nella finestra di dialogo](../windows/viewing-and-adding-activex-controls-to-a-dialog-box.md) quando si usa la [editor finestre](../windows/dialog-editor.md).

### <a name="activex-control"></a>Controllo ActiveX

Visualizza un elenco di controlli ActiveX. Inserimento di un controllo dalla finestra di dialogo non genera una classe wrapper. Se è necessaria una classe wrapper, utilizzare [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code) per crearne uno (per altre informazioni, vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)). Se un controllo ActiveX non viene visualizzato nella finestra di dialogo, provare a installare il controllo in base alle istruzioni del fornitore.

### <a name="path"></a>Path

Visualizza il file in cui si trova il controllo ActiveX.

È possibile inserire controlli nel **casella degli strumenti** finestra per semplificare l'accesso. Per altre informazioni, vedere [Casella degli strumenti](/visualstudio/ide/reference/).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Scheda Editor finestre, Casella degli strumenti](../windows/dialog-editor-tab-toolbox.md)  
[File di risorse](../windows/resource-files-visual-studio.md)  
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)