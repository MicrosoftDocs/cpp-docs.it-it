---
title: Implementazione di un'interfaccia (Visual C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- interfaces, implementing
ms.assetid: 72f8731b-7e36-45db-8b10-7ef211a773cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 309ae9dc576f93574836ab4916e87c5232b37a6c
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 06/04/2018
ms.locfileid: "33332767"
---
# <a name="implementing-an-interface-visual-c"></a>Implementazione di un'interfaccia (Visual C++)
Per implementare un'interfaccia, è necessario avere creato un progetto come un'applicazione ATL COM o un'applicazione MFC con supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.  
  
 Dopo aver creato il progetto, per implementare un'interfaccia è necessario per prima cosa aggiungere un oggetto ATL. Per un elenco di procedure guidate per aggiungere oggetti al progetto ATL, vedere [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
> [!NOTE]
>  La procedura guidata non supporta le finestre di dialogo ATL, i servizi Web XML che usano ATL, gli oggetti prestazioni o i contatori delle prestazioni.  
  
 Se si [aggiungere un controllo ATL](../atl/reference/adding-an-atl-control.md), è possibile specificare se implementare le interfacce predefinite, elencate nella pagina [Interfacce](../atl/reference/interfaces-atl-control-wizard.md) della procedura guidata e definite in atlcom.h.  
  
 Dopo aver aggiunto l'oggetto o il controllo, è possibile implementare altre interfacce, incluse in qualsiasi libreria dei tipi disponibili, usando l'Implementazione guidata interfaccia.  
  
 Se si aggiunge una nuova interfaccia, è necessario aggiungerla manualmente al file con estensione idl del progetto. Per altre informazioni, vedere [Aggiunta di una nuova interfaccia in un progetto ATL](../atl/reference/adding-a-new-interface-in-an-atl-project.md).  
  
### <a name="to-implement-an-interface"></a>Per implementare un'interfaccia  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul nome della classe per l'oggetto ATL.  
  
2.  Fare clic su **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Implementa interfaccia** per visualizzare l'[Implementazione guidata interfaccia](../ide/implement-interface-wizard.md).  
  
3.  Selezionare le interfacce da implementare dalle librerie di tipi appropriate e fare clic su **Fine**.  
  
4.  In Visualizzazione classi espandere il nodo relativo a basi e interfacce dell'oggetto per visualizzare l'interfaccia implementata e quindi espandere il nodo dell'interfaccia per visualizzarne le proprietà, i metodi e gli eventi disponibili.  
  
    > [!NOTE]
    >  È anche possibile usare il [Visualizzatore oggetti](http://msdn.microsoft.com/en-us/f89acfc5-1152-413d-9f56-3dc16e3f0470) per esaminare i membri dell'interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'interfaccia COM](../ide/creating-a-com-interface-visual-cpp.md)   
 [Modifica di un'interfaccia COM](../ide/editing-a-com-interface.md)