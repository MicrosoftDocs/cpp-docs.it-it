---
title: Aggiunta di una classe da un controllo ActiveX (Visual C++) | Microsoft Docs
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
ms.openlocfilehash: b676e35dcf98ef7ae1f41e4a91922d689bd40409
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43202139"
---
# <a name="adding-a-class-from-an-activex-control-visual-c"></a>Aggiunta di una classe da un controllo ActiveX (Visual C++)
Usare questa procedura guidata per creare una classe MFC da un'interfaccia in un controllo ActiveX disponibile. È possibile aggiungere una classe MFC in un'[applicazione MFC](../mfc/reference/creating-an-mfc-application.md), una [DLL MFC](../mfc/reference/creating-an-mfc-dll-project.md) o un [controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md).  
  
> [!NOTE]
>  Non è necessario creare il progetto MFC con l'automazione abilitata per aggiungere una classe da un controllo ActiveX.  
  
 Un controllo ActiveX è un componente software riutilizzabile basato sul modello COM (Component Object Model) che supporta un'ampia gamma di funzionalità OLE e può essere personalizzato per soddisfare numerosi requisiti software. I controlli ActiveX sono progettati per essere usati sia nei normali contenitori di controlli ActiveX sia sulle pagine Web di Internet.  
  
### <a name="to-add-an-mfc-class-from-an-activex-control"></a>Per aggiungere una classe MFC da un controllo ActiveX  
  
1.  In **Esplora soluzioni** o nella [Visualizzazione classi](https://msdn.microsoft.com/8d7430a9-3e33-454c-a9e1-a85e3d2db925) fare clic con il pulsante destro del mouse sul nome del progetto a cui si vuole aggiungere la classe del controllo ActiveX.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.  
  
3.  Nella finestra di dialogo [Aggiungi classe](../ide/add-class-dialog-box.md) nel riquadro Modelli fare clic su **Classe MFC da controllo ActiveX** e quindi fare clic su **Apri** per visualizzare l'[Aggiunta guidata classe da controllo ActiveX](../ide/add-class-from-activex-control-wizard.md).  
  
 Nella procedura guidata è possibile aggiungere più di un'interfaccia in un controllo ActiveX. Analogamente, è possibile creare classi da più di un controllo ActiveX in un'unica sessione della procedura guidata.  
  
 È possibile aggiungere classi da controlli ActiveX registrati nel sistema oppure da controlli ActiveX presenti nei file di libreria dei tipi (file con estensione tlb, olb, ocx o exe) senza prima registrarli nel sistema. Per altre informazioni sulla registrazione di controlli ActiveX, vedere [Registrazione di controlli OLE](../mfc/reference/registering-ole-controls.md).  
  
 La procedura guidata crea una classe MFC, derivata da [CWnd](../mfc/reference/cwnd-class.md) o da [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dal controllo ActiveX selezionato.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Introduzione a COM e a ATL](../atl/introduction-to-com-and-atl.md)