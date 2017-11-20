---
title: Implementazione di un'interfaccia (Visual C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: interfaces, implementing
ms.assetid: 72f8731b-7e36-45db-8b10-7ef211a773cd
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: caea9442973d131e99b3f52ca36a6cf991f2410a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="implementing-an-interface-visual-c"></a>Implementazione di un'interfaccia (Visual C++)
Per implementare un'interfaccia, è necessario avere creato un progetto come un'applicazione COM ATL o di un'applicazione MFC con supporto ATL. È possibile utilizzare il [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.  
  
 Dopo aver creato il progetto, per implementare un'interfaccia, è innanzitutto necessario aggiungere un oggetto ATL. Vedere [aggiunta di oggetti e i controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) per un elenco di procedure guidate che aggiungere oggetti al progetto ATL.  
  
> [!NOTE]
>  La procedura guidata non supporta le finestre di dialogo ATL, servizi Web XML mediante ATL, oggetti delle prestazioni o i contatori delle prestazioni.  
  
 Se si [aggiungere un controllo ATL](../atl/reference/adding-an-atl-control.md), è possibile specificare se implementare le interfacce predefinite, elencate nel [interfacce](../atl/reference/interfaces-atl-control-wizard.md) pagina che procedura guidata e definito in atlcom. h.  
  
 Dopo aver aggiunto l'oggetto o un controllo, è possibile implementare altre interfacce, che si trova in qualsiasi libreria dei tipi disponibili, usando l'implementazione guidata interfaccia.  
  
 Se si aggiunge una nuova interfaccia, è necessario aggiungerla manualmente al file IDL del progetto. Vedere [aggiunta una nuova interfaccia in un progetto ATL](../atl/reference/adding-a-new-interface-in-an-atl-project.md) per ulteriori informazioni.  
  
### <a name="to-implement-an-interface"></a>Per implementare un'interfaccia  
  
1.  In visualizzazione classi, fare clic sul nome della classe per l'oggetto ATL.  
  
2.  Fare clic su **Aggiungi** dal menu di scelta rapida e quindi fare clic su **implementa interfaccia** per visualizzare il [implementazione guidata interfaccia](../ide/implement-interface-wizard.md).  
  
3.  Selezionare le interfacce da implementare da librerie dei tipi appropriate, quindi scegliere **fine**.  
  
4.  In visualizzazione classi, espandere base dell'oggetto e interfacce nodo per visualizzare l'interfaccia è stata implementata e quindi espandere il nodo dell'interfaccia per visualizzare la proprietà disponibili, metodi ed eventi.  
  
    > [!NOTE]
    >  È inoltre possibile utilizzare il [Visualizzatore oggetti](http://msdn.microsoft.com/en-us/f89acfc5-1152-413d-9f56-3dc16e3f0470) per esaminare i membri dell'interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'interfaccia COM](../ide/creating-a-com-interface-visual-cpp.md)   
 [Modifica di un'interfaccia COM](../ide/editing-a-com-interface.md)