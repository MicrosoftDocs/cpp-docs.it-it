---
title: Creazione di controlli la stessa larghezza, altezza o dimensione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Make Same Size command
- controls [C++], sizing
ms.assetid: 94b50613-67e2-497b-a2b6-6d98dccfd345
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 6ce5b1740d09f9d4eb0f90d96cc5a0f6fd70379b
ms.sourcegitcommit: 38af5a1bf35249f0a51e3aafc6e4077859c8f0d9
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/09/2018
ms.locfileid: "40020200"
---
# <a name="making-controls-the-same-width-height-or-size"></a>Impostazione della stessa larghezza, altezza o dimensione per i controlli
È possibile ridimensionare un gruppo di controlli in base alla dimensione del controllo dominante. È anche possibile [ridimensiona un controllo in base alle dimensioni del testo della didascalia](../windows/sizing-individual-controls.md).  
  
### <a name="to-make-controls-the-same-width-height-or-size"></a>Per rendere controlla la stessa larghezza, altezza o dimensione  
  
1.  [Selezionare i controlli](../windows/selecting-multiple-controls.md) si intende ridimensionare.  
  
     Il controllo selezionato per primo nella serie è il controllo dominante. Le dimensioni finali dei controlli nel gruppo dipendono dalle dimensioni del controllo dominante. Per altre informazioni sulla selezione del controllo dominante, vedere [impostazione del controllo dominante](../windows/specifying-the-dominant-control.md).  
  
2.  Dal **formato** menu, scegliere **Rendi uguali**, quindi scegliere uno dei seguenti comandi:  
  
    -   **Entrambi**  
  
    -   **Altezza**  
  
    -   **Larghezza**  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli nelle finestre di dialogo](../windows/controls-in-dialog-boxes.md)   
 [Controlli](../mfc/controls-mfc.md)