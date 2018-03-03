---
title: "Modifica le proprietà del controllo | Documenti Microsoft"
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
- controls [C++], undoing changes
- controls [C++], editing properties
- dialog box controls, editing properties
ms.assetid: 9bdae21d-6dec-4344-a197-2ca4fc46d040
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f2baed8431501bfa5bf68313403c87a1fb9bccb2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="editing-control-properties"></a>Modifica delle proprietà dei controlli
### <a name="to-edit-the-properties-of-a-control-or-controls"></a>Per modificare le proprietà di una o più controlli  
  
1.  Nella finestra di dialogo, selezionare il controllo che si desidera modificare.  
  
    > [!NOTE]
    >  Se si selezionano più controlli, è possano modificare solo le proprietà comuni a tutti i controlli.  
  
2.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), modificare le proprietà del controllo.  
  
    > [!NOTE]
    >  Quando si imposta la **Bitmap** proprietà di un pulsante, un pulsante di opzione o un controllo casella di controllo uguale a **True**, lo stile BS_BITMAP viene implementato per il controllo. Per ulteriori informazioni, vedere [stili dei pulsanti](../mfc/reference/styles-used-by-mfc.md#button-styles). Per un esempio di associazione di una bitmap con un controllo, vedere [CButton:: SetBitmap](../mfc/reference/cbutton-class.md#setbitmap). Bitmap non verranno visualizzata sul controllo mentre si è nell'editor di risorse finestra di dialogo.  
  
### <a name="to-undo-changes-to-the-properties-of-a-control"></a>Per annullare le modifiche alle proprietà di un controllo  
  
1.  Verificare che il controllo ha lo stato attivo nell'editor finestre.  
  
2.  Scegliere **Annulla** dal **modifica** menu (se non è attivo il controllo, il **Annulla** comando non sarà disponibile).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle applicazioni Desktop](/dotnet/framework/resources/index) nel *Guida per gli sviluppatori di .NET Framework.* . Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, sulla visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [Procedura dettagliata: Localizzazione di Windows Form](http://msdn.microsoft.com/en-us/9a96220d-a19b-4de0-9f48-01e5d82679e5) e [Walkthrough: Using Resources for Localization with ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
 Requisiti  
  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)

