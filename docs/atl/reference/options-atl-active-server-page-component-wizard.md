---
title: Opzioni, creazione guidata componente ASP ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.asp.options
dev_langs:
- C++
helpviewer_keywords:
- ATL Active Server Page Component Wizard, options
ms.assetid: 54f34e26-53c7-4456-9675-cb86e356bde0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 31549c812b4f523cb8026a0d0b15ae60e31cd1f8
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32364545"
---
# <a name="options-atl-active-server-page-component-wizard"></a>Opzioni, Creazione guidata componente ASP ATL
Utilizzare questa pagina della Active Server pagina Creazione guidata componente ATL per aumentare l'efficienza e supporto per gli errori per l'oggetto.  
  
 Per ulteriori informazioni sui progetti ATL e le classi ATL COM, vedere [componenti di Desktop ATL COM](../../atl/atl-com-desktop-components.md).  
  
 **Modello di threading**  
 Indica il metodo per la gestione dei thread. Per impostazione predefinita, il progetto utilizza **Apartment** threading.  
  
 Vedere [specifica modello del progetto di Threading](../../atl/specifying-the-threading-model-for-a-project-atl.md) per ulteriori informazioni.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|`Single`|Specifica che l'oggetto utilizza il modello di threading singolo. Nel modello di threading singolo, un oggetto viene sempre eseguito nel thread COM primario. Vedere [apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112) e [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) per ulteriori informazioni.|  
|**Apartment**|Specifica che l'oggetto utilizza il threading apartment. Apartment di thread equivalente a una singola. Ogni oggetto di un componente del modello di threading apartment viene assegnato un apartment per il relativo thread per tutta la durata dell'oggetto. Tuttavia, più thread possono essere utilizzati per più oggetti. Ogni apartment è correlato a un thread specifico e ha un message pump di Windows (impostazione predefinita).<br /><br /> Vedere [apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112) per ulteriori informazioni.|  
|**Entrambi**|Specifica che l'oggetto può utilizzare apartment o modello di threading free, a seconda di quale tipo di un thread creato.|  
|**Disponibile**|Specifica che l'oggetto viene utilizzato come modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Vedere [apartment con multithreading](http://msdn.microsoft.com/library/windows/desktop/ms693421) per ulteriori informazioni.|  
|**Neutral**|Specifica che l'oggetto segue le linee guida per apartment con multithreading, ma può essere eseguito su qualsiasi tipo di thread.|  
  
 **Aggregazione**  
 Indica se l'oggetto utilizza [aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558). L'oggetto aggregato sceglie interfacce da esporre ai client e le interfacce sono esposte come se l'oggetto aggregato state implementate. I client dell'oggetto di aggregazione comunicano solo con l'oggetto aggregato.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Sì**|Specifica che è possibile aggregare l'oggetto. Valore predefinito.|  
|**No**|Specifica che l'oggetto non è aggregato.|  
|**Solo**|Specifica che l'oggetto deve essere aggregata.|  
  
 **Supporto**  
 (Descrizione elemento da aggiungere)  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**ISupportErrorInfo**|Per creare il supporto per il [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire informazioni sugli errori al client.|  
|**Punti di connessione**|Abilita punti di connessione per l'oggetto mediante derivazione dalla classe dell'oggetto [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|  
|**Gestore di marshalling a thread libero**|Crea un oggetto gestore del marshalling a thread libero per effettuare il marshalling di puntatori di interfaccia in modo efficiente tra thread nello stesso processo. È disponibile per oggetti specificando **entrambi** o **libero** come il modello di threading.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)   
 [Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)

