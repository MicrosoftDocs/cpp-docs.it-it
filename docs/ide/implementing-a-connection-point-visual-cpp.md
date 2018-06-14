---
title: Implementazione di un punto di connessione (Visual C++) | Microsoft Docs
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
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33328347"
---
# <a name="implementing-a-connection-point-visual-c"></a>Implementazione di un punto di connessione (Visual C++)
Per implementare un punto di connessione mediante la Creazione guidata punto di connessione, è necessario avere creato un progetto come un'applicazione ATL COM o un'applicazione MFC con supporto ATL. È possibile usare la [Creazione guidata progetto ATL](../atl/reference/atl-project-wizard.md) per creare un'applicazione ATL o [aggiungere un oggetto ATL all'applicazione MFC](../mfc/reference/adding-atl-support-to-your-mfc-project.md) per implementare il supporto ATL per un'applicazione MFC.  
  
> [!NOTE]
>  Per informazioni sull'implementazione dei punti di connessione per un progetto MFC, vedere [Punti di connessione](../mfc/connection-points.md).  
  
 Dopo aver creato il progetto, per implementare un punto di connessione è necessario per prima cosa aggiungere un oggetto ATL. Per un elenco di procedure guidate per aggiungere oggetti al progetto ATL, vedere [Aggiunta di oggetti e controlli a un progetto ATL](../atl/reference/adding-objects-and-controls-to-an-atl-project.md).  
  
> [!NOTE]
>  La procedura guidata non supporta le finestre di dialogo ATL, i servizi Web XML creati con il server ATL, gli oggetti prestazioni o i contatori delle prestazioni.  
  
 Un oggetto collegabile, ovvero un'origine, può esporre un punto di connessione per ognuna delle interfacce in uscita. Ogni interfaccia in uscita può essere implementata da un client in un oggetto, ovvero un sink. Per altre informazioni, vedere [Punti di connessione ATL](../atl/atl-connection-points.md).  
  
### <a name="to-implement-a-connection-point"></a>Per implementare un punto di connessione  
  
1.  In Visualizzazione classi fare clic con il pulsante destro del mouse sul nome della classe per l'oggetto ATL.  
  
2.  Fare clic su **Aggiungi** dal menu di scelta rapida e quindi fare clic su **Aggiungi punto di connessione** per visualizzare l'[Implementazione guidata punto di connessione](../ide/implement-connection-point-wizard.md).  
  
3.  Selezionare le interfacce dei punti di connessione per implementare le librerie di tipi appropriate e fare clic su **Fine**.  
  
4.  In Visualizzazione classi esaminare le classi proxy create per ogni punto di connessione. Le classi vengono visualizzate come CProxy*Nomeinterfaccia*\<T> e vengono derivate da [IConnectionPointImpl](../atl/reference/iconnectionpointimpl-class.md).  
  
5.  Fare doppio clic sulla classe del punto di connessione per visualizzare la definizione della classe del punto di connessione.  
  
    -   Se si implementa un punto di connessione per l'interfaccia del progetto, viene visualizzata la definizione seguente  
  
        ```  
        template< class T >  
        class CProxyInterfaceName :  
           public IConnectionPointImpl< T, &IID_InterfaceName >  
        {  
        public:  
        };  
        ```  
  
         Se si implementa un'interfaccia locale, i metodi e le proprietà vengono visualizzati nel corpo della classe.  
  
    -   Se si implementa un punto di connessione per un'altra interfaccia, la definizione include i metodi dell'interfaccia, ognuno preceduto da `Fire_`.  
  
## <a name="see-also"></a>Vedere anche  
 [Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)   
 [Aggiunta di punti di connessione a un oggetto](../atl/adding-connection-points-to-an-object.md)