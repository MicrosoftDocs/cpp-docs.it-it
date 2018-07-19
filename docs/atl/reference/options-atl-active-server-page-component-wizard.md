---
title: Creazione guidata componente ASP ATL, opzioni | Microsoft Docs
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
ms.openlocfilehash: cdd3e62915b81311450cf4d798b04f8df30492ff
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37884600"
---
# <a name="options-atl-active-server-page-component-wizard"></a>Opzioni, Creazione guidata componente ASP ATL
Utilizzare questa pagina della finestra attiva Server pagina Creazione guidata componente ATL per progettare per aumentare l'efficienza e supporto per gli errori per l'oggetto.  
  
 Per altre informazioni sulle classi ATL COM e progetti ATL, vedere [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).  
  
 **Modello di threading**  
 Indica il metodo per la gestione dei thread. Per impostazione predefinita, il progetto usa **Apartment** threading.  
  
 Visualizzare [specifica di un modello di Threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre informazioni.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Single**|Specifica che l'oggetto Usa il modello di threading singolo. Nel modello di threading singolo, un oggetto viene sempre eseguito nel thread COM primario. Visualizzare [apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112) e [InprocServer32](http://msdn.microsoft.com/library/windows/desktop/ms682390) per altre informazioni.|  
|**Apartment**|Specifica che l'oggetto Usa il threading apartment. Apartment di thread equivalente al singolo. Ogni oggetto di un componente di apartment a thread viene assegnato un apartment per il relativo thread per tutta la durata dell'oggetto. Tuttavia, più thread possono essere utilizzati per più oggetti. Ogni tipo di apartment è associato a un thread specifico e ha un message pump Windows (impostazione predefinita).<br /><br /> Visualizzare [apartment a thread singolo](http://msdn.microsoft.com/library/windows/desktop/ms680112) per altre informazioni.|  
|**Entrambi**|Specifica che l'oggetto può utilizzare apartment o modello di threading free, a seconda dal tipo di un thread viene creato.|  
|**gratuito**|Specifica che l'oggetto utilizza il modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Visualizzare [apartment a thread multipli](http://msdn.microsoft.com/library/windows/desktop/ms693421) per altre informazioni.|  
|**Neutral**|Specifica che l'oggetto segue le linee guida per apartment a thread multipli, ma può essere eseguito su qualsiasi tipo di thread.|  
  
 **Aggregazione**  
 Indica se l'oggetto utilizza [aggregazione](http://msdn.microsoft.com/library/windows/desktop/ms686558). Oggetto di aggregazione sceglie interfacce da esporre ai client e le interfacce vengono esposte come se l'oggetto aggregato state implementate. I client dell'oggetto di aggregazione comunicare solo con l'oggetto aggregato.  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|**Sì**|Specifica che è possibile aggregare l'oggetto. Valore predefinito.|  
|**No**|Specifica che l'oggetto non è aggregato.|  
|**Solo**|Specifica che l'oggetto deve essere aggregato.|  
  
 **Supporto**  
 (Descrizione dell'elemento da aggiungere)  
  
|Opzione|Descrizione|  
|------------|-----------------|  
|`ISupportErrorInfo`|Per creare il supporto per la [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire le informazioni sull'errore al client.|  
|**Punti di connessione**|Abilita i punti di connessione per l'oggetto mediante derivazione dalla classe dell'oggetto [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|  
|**Gestore del marshalling a thread libero**|Crea un oggetto gestore del marshalling a thread libero per effettuare il marshalling di puntatori di interfaccia in modo efficiente tra thread nello stesso processo. È disponibile per l'oggetto che specifica la **entrambe** oppure **gratuito** come il modello di threading.|  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)   
 [Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)

