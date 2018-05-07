---
title: Implementazione di un punto di connessione (Visual C++) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Implement Connection Point Wizard [C++]
- connection points [C++], implementing
ms.assetid: 5b37e4f9-73c9-4bef-b26d-365bc0662260
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3b75bf145da401ad9889353a1e65448831c602c9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="implementing-a-connection-point-visual-c"></a>Implementazione di un punto di connessione (Visual C++)
Per implementare un punto di connessione mediante l'implementazione guidata punto di connessione, è necessario avere creato un progetto come un'applicazione COM ATL o di un'applicazione MFC con supporto ATL. È possibile utilizzare il [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.  
  
> [!NOTE]
>  Per informazioni sull'implementazione dei punti di connessione per un progetto MFC, vedere [punti di connessione](../mfc/connection-points.md).  
  
 Dopo aver creato il progetto, per implementare un punto di connessione, è innanzitutto necessario aggiungere un oggetto ATL. Vedere [aggiunta di oggetti e i controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md) per un elenco di procedure guidate che aggiungere oggetti al progetto ATL.  
  
> [!NOTE]
>  La procedura guidata non supporta le finestre di dialogo ATL, servizi Web XML creati con ATL Server, gli oggetti prestazioni o i contatori delle prestazioni.  
  
 Un oggetto collegabile (vale a dire un'origine) è possibile esporre un punto di connessione per ognuna delle interfacce in uscita. Ogni interfaccia in uscita può essere implementata da un client su un oggetto (vale a dire un sink). Per ulteriori informazioni, vedere [punti di connessione ATL](../atl/atl-connection-points.md).  
  
### <a name="to-implement-a-connection-point"></a>Per implementare un punto di connessione  
  
1.  In visualizzazione classi, fare clic sul nome della classe per l'oggetto ATL.  
  
2.  Fare clic su **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi punto di connessione** per visualizzare il [implementazione guidata punto di connessione](../ide/implement-connection-point-wizard.md).  
  
3.  Selezionare le interfacce dei punti di connessione per implementare le librerie di tipo appropriato e fare clic su **fine**.  
  
4.  In visualizzazione classi, esaminare le classi proxy create per ogni punto di connessione. Le classi vengono visualizzate come CProxy*InterfaceName*\<T > e sono derivati dalla [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).  
  
5.  Fare doppio clic la classe del punto di connessione per visualizzare la definizione della classe del punto di connessione.  
  
    -   Se si implementa un punto di connessione per l'interfaccia del progetto, viene visualizzata la seguente definizione  
  
        ```  
        template< class T >  
        class CProxyInterfaceName :  
           public IConnectionPointImpl< T, &IID_InterfaceName >  
        {  
        public:  
        };  
        ```  
  
         Se si implementa un'interfaccia locale, metodi e le proprietà vengono visualizzate nel corpo della classe.  
  
    -   Se si implementa un punto di connessione per un'altra interfaccia, la definizione include i metodi dell'interfaccia, ognuna preceduta da `Fire_`.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di punti di connessione a un oggetto](../atl/adding-connection-points-to-an-object.md)