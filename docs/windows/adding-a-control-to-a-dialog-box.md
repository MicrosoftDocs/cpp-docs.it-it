---
title: Aggiunta di un controllo a una finestra di dialogo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.dialog.dialog
dev_langs:
- C++
helpviewer_keywords:
- dialog boxes, adding controls to
- dialog box controls, adding to dialog boxes
- controls [C++], adding to dialog boxes
ms.assetid: b2a26d19-093f-49ca-93da-fef00dfbb381
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 17c3756dc62fd8872adb8a0fb1b89112ed9771f9
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42608611"
---
# <a name="adding-a-control-to-a-dialog-box"></a>Aggiunta di un controllo a una finestra di dialogo

### <a name="to-add-a-control-to-a-dialog-box"></a>Per aggiungere un controllo a una finestra di dialogo

1. Assicurarsi che la finestra a schede della finestra di dialogo sia il documento corrente nel frame dell'editor. Se una finestra di dialogo non è il documento corrente, non verrà visualizzata la **scheda Editor finestre** nella **Casella degli strumenti**.

2. Nella [scheda Editor finestre](../windows/dialog-editor-tab-toolbox.md) della [finestra della casella degli strumenti](/visualstudio/ide/reference/toolbox)selezionare il controllo desiderato e quindi:

   - Fare clic sulla finestra di dialogo in corrispondenza della posizione in cui inserire il controllo. Il controllo viene visualizzato laddove si è fatto clic. Per informazioni vedere [Aggiunta di più controlli](../windows/adding-multiple-controls.md).

       \- oppure -

   - Trascinare e rilasciare il controllo dal **casella degli strumenti** finestra nella posizione sulla finestra di dialogo. Per altre informazioni, vedere [Ridimensionamento di un controllo durante l'aggiunta](../windows/sizing-a-control-while-you-add-it.md).

       \- oppure -

   - Fare doppio clic sul controllo nella **casella degli strumenti** finestra (viene visualizzato nella finestra di dialogo) quindi riposizionare il controllo nella posizione desiderata.

Per informazioni sui tipi di controlli disponibili nel **casella degli strumenti** finestra, vedere [scheda Editor finestre, finestra Casella degli strumenti](../windows/dialog-editor-tab-toolbox.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)  
[Aggiunta di gestori eventi per i controlli della finestra di dialogo](../windows/adding-event-handlers-for-dialog-box-controls.md)  
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)