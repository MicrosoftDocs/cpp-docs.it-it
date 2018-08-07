---
title: Selezione di controlli | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Dialog editor, selecting controls
- dominant controls
- dialog box controls, selecting in editor
- controls [C++], selecting
- size, controls
- controls [C++], dominant
ms.assetid: 27f05450-4550-4229-9f4c-2c9e06365596
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 5c8a7a57b263fc3db1fa7f021c1a6f4e09c0f8f7
ms.sourcegitcommit: 4586bfc32d8bc37ab08b24816d7fad5df709bfa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/07/2018
ms.locfileid: "39605669"
---
# <a name="selecting-controls"></a>Selezione di controlli
Selezionare i controlli alla dimensione, allineare, spostare, copiare, o eliminarli e quindi eseguire l'operazione desiderata. Nella maggior parte dei casi, è necessario selezionare più di un controllo per utilizzare gli strumenti di ridimensionamento e l'allineamento della [sulla barra degli strumenti dell'Editor finestre](../windows/showing-or-hiding-the-dialog-editor-toolbar.md).  
  
 Quando viene selezionato un controllo, ha un bordo intorno a esso ombreggiato pieni (attivi) o (inattivo) vuoto "quadratini di ridimensionamento," quadratini che vengono visualizzate sul bordo di selezione. Quando si selezionano più controlli, il controllo dominante dispone di quadratini di ridimensionamento a tinta unita; tutti gli altri comandi selezionati sono quadratini vuoti.  
  
 Quando si ridimensionano o allineamento dei controlli più, l'editor finestre viene utilizzato il "controllo dominante" per determinare come gli altri controlli vengono ridimensionati o allineati. Per impostazione predefinita, il controllo dominante è il primo controllo selezionato.  
  
-   [Selezione di più controlli](../windows/selecting-multiple-controls.md)  
  
-   [Impostazione del controllo dominante](../windows/specifying-the-dominant-control.md)  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)