---
title: Aggiunta di una classe MFC da una libreria dei tipi | Documenti Microsoft
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
ms.openlocfilehash: 349d06d7fecb82af64fbf2d3b2ebe54689b3b292
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="adding-an-mfc-class-from-a-type-library"></a>Aggiunta di una classe MFC da una libreria dei tipi
Utilizzare questa procedura guidata per creare una classe MFC da un'interfaccia in una libreria dei tipi disponibili. È possibile aggiungere una classe MFC da un [applicazione MFC](../../mfc/reference/creating-an-mfc-application.md), un [DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md), o un [controllo ActiveX MFC](../../mfc/reference/creating-an-mfc-activex-control.md).  
  
> [!NOTE]
>  Non è necessario creare un progetto MFC con l'automazione in grado di aggiungere una classe da una libreria dei tipi.  
  
 Una libreria dei tipi contiene una descrizione binaria di interfacce esposte da un componente che definisce i metodi e i relativi parametri e tipi restituiti. La libreria dei tipi deve essere registrato per essere visualizzato nel **librerie dei tipi disponibili** elenco l'aggiunta guidata classe da libreria dei tipi. Vedere "All'interno di Distributed COM: tipo di librerie e Language integrazione" in MSDN library per ulteriori informazioni.  
  
### <a name="to-add-an-mfc-class-from-a-type-library"></a>Per aggiungere una classe MFC da una libreria dei tipi  
  
1.  In entrambi **Esplora** o [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic sul nome del progetto a cui si desidera aggiungere la classe.  
  
2.  Dal menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **Aggiungi classe**.  
  
3.  Nel [Aggiungi classe](../../ide/add-class-dialog-box.md) la finestra di dialogo, nel riquadro dei modelli, fare clic su **classe MFC da libreria dei tipi**, quindi fare clic su **aprire** per visualizzare il [Aggiunta guidata classe da libreria dei tipi ](../../mfc/reference/add-class-from-typelib-wizard.md).  
  
 Nella procedura guidata, è possibile aggiungere più di una classe in una libreria dei tipi. Analogamente, è possibile aggiungere classi da più di una libreria dei tipi in una sessione unica procedura guidata.  
  
 La procedura guidata crea una classe MFC, derivata da [COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md), per ogni interfaccia aggiunta dalla libreria dei tipi selezionati. `COleDispatchDriver` implementa il lato client dell'automazione OLE.  
  
## <a name="see-also"></a>Vedere anche  
 [Client di automazione](../../mfc/automation-clients.md)   
 [Client di automazione: uso delle librerie dei tipi](../../mfc/automation-clients-using-type-libraries.md)

