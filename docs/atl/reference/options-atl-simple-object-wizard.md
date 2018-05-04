---
title: Opzioni, creazione guidata oggetto semplice ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.simple.options
dev_langs:
- C++
helpviewer_keywords:
- ATL Simple Object Wizard, options
ms.assetid: 125fe179-942d-4181-8b82-33e92e1fd779
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ffc38f5359b68b90f91a2643e1fbaa743a94e559
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="options-atl-simple-object-wizard"></a>Opzioni, Creazione guidata oggetto semplice ATL
Utilizzare questa pagina della creazione guidata oggetto semplice ATL per aumentare l'efficienza e supporto per gli errori per l'oggetto.  
  
 Per ulteriori informazioni sui progetti ATL e le classi ATL COM, vedere [componenti di Desktop ATL COM](../../atl/atl-com-desktop-components.md).  
  
 **Modello di threading**  
 Indica il metodo per la gestione dei thread. Per impostazione predefinita, il progetto utilizza **Apartment** threading.  
  
 Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per ulteriori informazioni.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|`Single`|Specifica che l'oggetto viene sempre eseguito nel thread COM primario. Vedere [apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112) e [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) per ulteriori informazioni.|  
|**Apartment**|Specifica che l'oggetto utilizza il threading apartment. Apartment di thread equivalente a una singola. Ogni oggetto di un componente del modello di threading apartment viene assegnato un apartment per il relativo thread per tutta la durata dell'oggetto. Tuttavia, più thread possono essere utilizzati per più oggetti. Ogni apartment è correlato a un thread specifico e ha un message pump di Windows (impostazione predefinita).<br /><br /> Vedere [apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112) per ulteriori informazioni.|  
|**Entrambi**|Specifica che l'oggetto può utilizzare apartment o modello di threading free, a seconda di quale tipo di un thread creato.|  
|**Disponibile**|Specifica che l'oggetto viene utilizzato come modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Vedere [apartment con multithreading](http://msdn.microsoft.com/library/windows/desktop/ms693421) per ulteriori informazioni.|  
|**Neutral**|Specifica che l'oggetto segue le linee guida per apartment con multithreading, ma può essere eseguito su qualsiasi tipo di thread.|  
  
 **Aggregazione**  
 Indica se l'oggetto utilizza [aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558). L'oggetto aggregato sceglie interfacce da esporre ai client e le interfacce sono esposte come se l'oggetto aggregato state implementate. I client dell'oggetto di aggregazione comunicano solo con l'oggetto aggregato.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|Yes|Specifica che è possibile aggregare l'oggetto. Valore predefinito.|  
|No|Specifica che l'oggetto non è aggregato.|  
|Solo|Specifica che l'oggetto deve essere aggregata.|  
  
 **Interface**  
 Indica il tipo di interfaccia che supporta l'oggetto. Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Doppio**|Specifica che l'oggetto supporta un'interfaccia duale (la vtable dell'oggetto ha funzionalità di interfaccia personalizzata oltre ad associazione tardiva `IDispatch` metodi). Consente di entrambi i client COM e [i controller di automazione](../../mfc/automation-clients.md) per accedere all'oggetto. Valore predefinito.|  
|**Personalizzato**|Specifica che l'oggetto supporta un'interfaccia personalizzata (la vtable dell'oggetto ha funzioni di interfaccia personalizzata). Un'interfaccia personalizzata può essere più veloce rispetto a un'interfaccia duale, in particolare attraverso i limiti di processo.<br /><br /> -   **Compatibile con l'automazione** i controller di automazione consente l'accesso a un oggetto con il supporto di interfaccia personalizzata.|  
  
 **Supporto**  
 Indica il supporto aggiuntivo per l'oggetto.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**ISupportErrorInfo**|Per creare il supporto per il [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire informazioni sugli errori al client.|  
|**Punti di connessione**|Abilita punti di connessione per l'oggetto mediante derivazione dalla classe dell'oggetto [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|  
|**Gestore di marshalling a thread libero**|Crea un oggetto gestore del marshalling a thread libero per effettuare il marshalling di puntatori di interfaccia in modo efficiente tra thread nello stesso processo. Disponibile per l'oggetto che specifica **entrambi** come il modello di threading.|  
|**IObjectWithSite (supporto di oggetto di inserimento/espulsione)**|Implementa [IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md), che fornisce un modo semplice per supportare la comunicazione tra un oggetto e il sito in un contenitore.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md)   
 [Oggetto semplice ATL](../../atl/reference/adding-an-atl-simple-object.md)   
 [Problemi relativi al Threading di Server in-Process](http://msdn.microsoft.com/library/windows/desktop/ms687205)

