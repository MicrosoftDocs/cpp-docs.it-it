---
title: Aggiunta di una classe da un controllo ActiveX (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ActiveX controls [C++], adding classes
- classes [C++], creating
ms.assetid: 729fcb37-54b8-44d5-9b4e-50bb16e0eea4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 793adf38da33808371a0df71f671c3e29da75326
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="adding-a-class-from-an-activex-control-visual-c"></a>Aggiunta di una classe da un controllo ActiveX (Visual C++)
Utilizzare questa procedura guidata per creare una classe MFC da un'interfaccia in un controllo ActiveX disponibile. È possibile aggiungere una classe MFC da un [applicazione MFC](../mfc/reference/creating-an-mfc-application.md), un [DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md), o un [controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md).  
  
> [!NOTE]
>  Non è necessario creare un progetto MFC con l'automazione in grado di aggiungere una classe da controllo ActiveX.  
  
 Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM (Component Object) che supporta un'ampia gamma di funzionalità OLE e possono essere personalizzati per soddisfare numerosi requisiti software. Controlli ActiveX sono progettati per l'utilizzo in normali contenitori di controlli ActiveX e su Internet in pagine Web.  
  
### <a name="to-add-an-mfc-class-from-an-activex-control"></a>Per aggiungere una classe MFC da controllo ActiveX  
  
1.  In entrambi **Esplora** o [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic sul nome del progetto a cui si desidera aggiungere la classe del controllo ActiveX.  
  
2.  Dal menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi classe**.  
  
3.  Nel [Aggiungi classe](../ide/add-class-dialog-box.md) la finestra di dialogo, nel riquadro dei modelli, fare clic su **classe MFC da controllo ActiveX**e quindi fare clic su **aprire** per visualizzare il [aggiunta classe da ActiveX Controllo Creazione guidata](../ide/add-class-from-activex-control-wizard.md).  
  
 Nella procedura guidata, è possibile aggiungere più di un'interfaccia in un controllo ActiveX. Analogamente, è possibile creare classi da più di un controllo ActiveX in una sessione unica procedura guidata.  
  
 È possibile aggiungere classi di controlli ActiveX registrati nel sistema oppure è possibile aggiungere classi di controlli ActiveX presenti nei file di libreria di tipo (tlb, con estensione olb, DLL, ocx o .exe) senza prima registrarli nel sistema. Vedere [registrazione di controlli OLE](../mfc/reference/registering-ole-controls.md) per ulteriori informazioni sulla registrazione di controlli ActiveX.  
  
 La procedura guidata crea una classe MFC, derivata da [CWnd](../mfc/reference/cwnd-class.md) o da [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dal controllo ActiveX selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)