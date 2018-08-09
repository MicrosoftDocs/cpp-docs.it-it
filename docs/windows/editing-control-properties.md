---
title: Modifica delle proprietà di controllo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- controls [C++], undoing changes
- controls [C++], editing properties
- dialog box controls, editing properties
ms.assetid: 9bdae21d-6dec-4344-a197-2ca4fc46d040
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bc7b555ee04b8739040e0ec9d53c3820c2e13f16
ms.sourcegitcommit: 37a10996022d738135999cbe71858379386bab3d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/08/2018
ms.locfileid: "39648746"
---
# <a name="editing-control-properties"></a>Modifica delle proprietà dei controlli
### <a name="to-edit-the-properties-of-a-control-or-controls"></a>Per modificare le proprietà di uno o più controlli  
  
1.  Nella finestra di dialogo, selezionare il controllo che si desidera modificare.  
  
    > [!NOTE]
    >  Se si selezionano più controlli, solo le proprietà comuni a tutti i controlli possono essere modificate.  
  
2.  Nel [finestra proprietà](/visualstudio/ide/reference/properties-window), modificare le proprietà del controllo.  
  
    > [!NOTE]
    >  Quando si impostano i **Bitmap** proprietà per un pulsante, un pulsante di opzione o un controllo casella di controllo uguale a **True**, lo stile BS_BITMAP viene implementata per il controllo. Per altre informazioni, vedere [stili dei pulsanti](../mfc/reference/styles-used-by-mfc.md#button-styles). Per un esempio di associazione di una bitmap con un controllo, vedere [CButton:: SetBitmap](../mfc/reference/cbutton-class.md#setbitmap). Bitmap non verranno visualizzate nel controllo mentre è attiva la **dialogo** editor di risorse.  
  
### <a name="to-undo-changes-to-the-properties-of-a-control"></a>Per annullare le modifiche alle proprietà di un controllo  
  
1.  Assicurarsi che il controllo ha lo stato attivo **dialogo** editor.  
  
2.  Scegliere **annullare** dalle **modificare** menu (se non è attivo il controllo, il **annullare** comando non sarà disponibile).  
  
 Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [procedura dettagliata: localizzazione di Windows Form](http://msdn.microsoft.com/9a96220d-a19b-4de0-9f48-01e5d82679e5) e[Procedura dettagliata: utilizzo delle risorse per la localizzazione con ASP.NET](http://msdn.microsoft.com/Library/bb4e5b44-e2b0-48ab-bbe9-609fb33900b6).  
  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)