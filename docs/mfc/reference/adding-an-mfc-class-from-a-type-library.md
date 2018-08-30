---
title: Aggiunta di una classe MFC da una libreria dei tipi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- classes [MFC], adding MFC
- MFC, adding classes from type libraries
- type libraries, adding MFC classes from
ms.assetid: aba40476-3cfb-47af-990e-ae2e9e0d79cf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 656d5c357874a7b470eb2fd630c91ad0aefa5a0d
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205373"
---
# <a name="adding-an-mfc-class-from-a-type-library"></a>Aggiunta di una classe MFC da una libreria dei tipi
Usare questa procedura guidata per creare una classe MFC da un'interfaccia in una libreria dei tipi disponibili. È possibile aggiungere una classe MFC in un'[applicazione MFC](../../mfc/reference/creating-an-mfc-application.md), una [DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md) o un [controllo ActiveX MFC](../../mfc/reference/creating-an-mfc-activex-control.md).  
  
> [!NOTE]
>  Non devi creare un progetto MFC con automazione abilitata per aggiungere una classe da una libreria dei tipi.  
  
 Una libreria dei tipi contiene una descrizione binaria di interfacce esposte da un componente, che definisce i metodi e i relativi parametri e tipi restituiti. La libreria dei tipi deve essere registrata per visualizzarlo nel **librerie dei tipi disponibili** elenco nell'Aggiunta guidata classe da libreria dei tipi. Vedere "All'interno di Distributed COM: tipo di librerie e linguaggio integrazione" in MSDN library per ulteriori informazioni.  
  
### <a name="to-add-an-mfc-class-from-a-type-library"></a>Per aggiungere una classe MFC da una libreria dei tipi  
  
1.  In uno **Esplora soluzioni** oppure [Visualizzazione classi](https://msdn.microsoft.com/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic il nome del progetto a cui si desidera aggiungere la classe.  
  
2.  Scegliere **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi classe**.  
  
3.  Nel [Aggiungi classe](../../ide/add-class-dialog-box.md) finestra di dialogo, nel riquadro dei modelli, fare clic su **classe MFC da libreria dei tipi**e quindi fare clic su **Open** per visualizzare il [Aggiunta guidata classe da libreria dei tipi ](../../mfc/reference/add-class-from-typelib-wizard.md).  
  
 Nella procedura guidata, è possibile aggiungere più di una classe in una libreria dei tipi. Analogamente, è possibile aggiungere classi da più di una libreria dei tipi in una singola sessione.  
  
 La procedura guidata crea una classe MFC, derivata da [COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dalla libreria dei tipi selezionati. `COleDispatchDriver` implementa il lato client di automazione OLE.  
  
## <a name="see-also"></a>Vedere anche  
 [Client di automazione](../../mfc/automation-clients.md)   
 [Client di automazione: uso delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)

