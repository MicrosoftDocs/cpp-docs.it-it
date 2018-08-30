---
title: Creazione guidata oggetto semplice ATL, opzioni | Microsoft Docs
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
ms.openlocfilehash: 36aab0177eaa62e5ec9601d9258c7de1a6ce7b59
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43205690"
---
# <a name="options-atl-simple-object-wizard"></a>Opzioni, Creazione guidata oggetto semplice ATL
Utilizzare questa pagina della creazione guidata oggetto semplice ATL per progettare per aumentare l'efficienza e supporto per gli errori per l'oggetto.  
  
 Per altre informazioni sulle classi ATL COM e progetti ATL, vedere [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).  
  
 **Modello di threading**  
 Indica il metodo per la gestione dei thread. Per impostazione predefinita, il progetto usa **Apartment** threading.  
  
 Visualizzare [specifica di un modello di Threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre informazioni.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Single**|Specifica che l'oggetto viene sempre eseguito nel thread COM primario. Visualizzare [apartment a thread singolo](/windows/desktop/com/single-threaded-apartments) e [InprocServer32](/windows/desktop/com/inprocserver32) per altre informazioni.|  
|**Apartment**|Specifica che l'oggetto Usa il threading apartment. Apartment di thread equivalente al singolo. Ogni oggetto di un componente di apartment a thread viene assegnato un apartment per il relativo thread per tutta la durata dell'oggetto. Tuttavia, più thread possono essere utilizzati per più oggetti. Ogni tipo di apartment è associato a un thread specifico e ha un message pump Windows (impostazione predefinita).<br /><br /> Visualizzare [apartment a thread singolo](/windows/desktop/com/single-threaded-apartments) per altre informazioni.|  
|**Entrambi**|Specifica che l'oggetto può utilizzare apartment o modello di threading free, a seconda dal tipo di un thread viene creato.|  
|**gratuito**|Specifica che l'oggetto utilizza il modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Visualizzare [apartment a thread multipli](/windows/desktop/com/multithreaded-apartments) per altre informazioni.|  
|**Neutral**|Specifica che l'oggetto segue le linee guida per apartment a thread multipli, ma può essere eseguito su qualsiasi tipo di thread.|  
  
 **Aggregazione**  
 Indica se l'oggetto utilizza [aggregazione](/windows/desktop/com/aggregation). Oggetto di aggregazione sceglie interfacce da esporre ai client e le interfacce vengono esposte come se l'oggetto aggregato state implementate. I client dell'oggetto di aggregazione comunicare solo con l'oggetto aggregato.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|Yes|Specifica che è possibile aggregare l'oggetto. Valore predefinito.|  
|No|Specifica che l'oggetto non è aggregato.|  
|Solo|Specifica che l'oggetto deve essere aggregato.|  
  
 **Interface**  
 Indica il tipo di interfaccia che supporta l'oggetto. Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Dual**|Specifica che l'oggetto supporta le interfacce duali (relativo vtable ha funzionalità di interfaccia personalizzati oltre ad associazione tardiva `IDispatch` metodi). Consente a entrambi i client COM e [controller di automazione](../../mfc/automation-clients.md) per accedere all'oggetto. Valore predefinito.|  
|**Personalizzato**|Specifica che l'oggetto supporta un'interfaccia personalizzata (relativo vtable ha funzioni dell'interfaccia personalizzata). Un'interfaccia personalizzata può essere più veloce rispetto a un'interfaccia duale, in particolare tra i limiti dei processi.<br /><br /> -   **Compatibile con l'automazione** i controller di automazione consente di accedere a un oggetto con il supporto di interfaccia personalizzata.|  
  
 **Supporto**  
 Indica il supporto aggiuntivo per l'oggetto.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|`ISupportErrorInfo`|Per creare il supporto per la [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire le informazioni sull'errore al client.|  
|**Punti di connessione**|Abilita i punti di connessione per l'oggetto mediante derivazione dalla classe dell'oggetto [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|  
|**Gestore del marshalling a thread libero**|Crea un oggetto gestore del marshalling a thread libero per effettuare il marshalling di puntatori di interfaccia in modo efficiente tra thread nello stesso processo. Disponibile per l'oggetto che specifica **entrambi** come il modello di threading.|  
|`IObjectWithSite` **(Supporto di oggetti di inserimento/espulsione)**|Implements [IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md), che fornisce un modo semplice per supportare la comunicazione tra un oggetto e il relativo sito in un contenitore.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md)   
 [Oggetto semplice ATL](../../atl/reference/adding-an-atl-simple-object.md)   
 [Problemi relativi al Threading di Server in-Process](/windows/desktop/com/in-process-server-threading-issues)

