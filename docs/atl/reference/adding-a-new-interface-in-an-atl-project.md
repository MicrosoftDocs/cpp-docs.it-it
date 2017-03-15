---
title: Aggiunta di una nuova interfaccia in un progetto ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- vc.appwiz.ATL.interface
dev_langs:
- C++
helpviewer_keywords:
- interfaces, adding to ATL objects
- Implement Interface ATL wizard
- controls [ATL], interfaces
- ATL projects, adding interfaces
ms.assetid: 7d34b023-2c6b-4155-aca3-d47a40968063
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: 8e4916c60310dd8dcbf0bb9e8c1f151309a32621
ms.lasthandoff: 02/24/2017

---
# <a name="adding-a-new-interface-in-an-atl-project"></a>Aggiunta di una nuova interfaccia in un progetto ATL
Quando si aggiunge un'interfaccia per l'oggetto o il controllo, si creano funzioni generate automaticamente per ogni metodo in tale interfaccia. In un oggetto o controllo, è possibile aggiungere solo le interfacce attualmente presenti in una libreria dei tipi esistente. Inoltre, la classe in cui viene aggiunta l'interfaccia deve implementare il [BEGIN_COM_MAP](http://msdn.microsoft.com/library/ead2a1e3-334d-44ad-bb1f-b94bb14c2333) macro o, se il progetto con attribuito, è necessario che il `coclass` attributo.  
  
 È possibile aggiungere una nuova interfaccia a un controllo in uno dei due modi: manualmente o mediante le creazioni guidate codice in visualizzazione classi.  
  
### <a name="to-use-code-wizards-in-class-view-to-add-an-interface-to-an-existing-object-or-control"></a>Utilizzare le creazioni guidate codice in visualizzazione classi per aggiungere un'interfaccia a un oggetto esistente o un controllo  
  
1.  In [Visualizzazione classi](http://msdn.microsoft.com/en-us/8d7430a9-3e33-454c-a9e1-a85e3d2db925), fare doppio clic sul nome della classe di un controllo. Ad esempio, un controllo completo o controllo composito o qualsiasi altra classe di controllo che implementa una macro BEGIN_COM_MAP nel relativo file di intestazione.  
  
2.  Menu di scelta rapida, fare clic su **Aggiungi**, quindi fare clic su **implementa interfaccia**.  
  
3.  Selezionare le interfacce da implementare nel [implementazione guidata interfaccia](../../ide/implement-interface-wizard.md). Se l'interfaccia non esiste in qualsiasi libreria dei tipi disponibile, quindi è necessario aggiungerlo manualmente nel file IDL.  
  
### <a name="to-add-a-new-interface-manually"></a>Per aggiungere manualmente una nuova interfaccia  
  
1.  Aggiungere la definizione della nuova interfaccia per il file con estensione idl.  
  
2.  Derivare l'oggetto o il controllo dall'interfaccia.  
  
3.  Creare un nuovo [COM_INTERFACE_ENTRY](http://msdn.microsoft.com/library/c5363b8b-a1a2-471e-ad3a-d472f6c356c5) per l'interfaccia oppure, se il progetto con attribuito, aggiungere il `coclass` attributo.  
  
4.  Implementare metodi nell'interfaccia.  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata progetto ATL](../../atl/reference/atl-project-wizard.md)   
 [Tipi di progetto Visual C++](../../ide/visual-cpp-project-types.md)   
 [Creazione di progetti Desktop tramite le creazioni guidate applicazione](../../ide/creating-desktop-projects-by-using-application-wizards.md)   
 [Programmazione con codice di runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)   
 [Nozioni fondamentali di oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)   
 [Configurazioni predefinite progetto ATL](../../atl/reference/default-atl-project-configurations.md)


