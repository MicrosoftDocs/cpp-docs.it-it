---
title: Opzioni, Creazione guidata oggetto semplice ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.simple.options
helpviewer_keywords:
- ATL Simple Object Wizard, options
ms.assetid: 125fe179-942d-4181-8b82-33e92e1fd779
ms.openlocfilehash: e92f4909907645fc317590fbcc3601887346c642
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495164"
---
# <a name="options-atl-simple-object-wizard"></a>Opzioni, Creazione guidata oggetto semplice ATL

Utilizzare questa pagina della creazione guidata oggetto semplice ATL per progettare per migliorare l'efficienza e il supporto degli errori per l'oggetto.

Per altre informazioni sui progetti ATL e le classi ATL COM, vedere [Componenti desktop ATL COM](../../atl/atl-com-desktop-components.md).

- **Modello di threading**

   Indica il metodo per la gestione dei thread. Per impostazione predefinita, il progetto usa il threading dell' **Apartment** .

   Per informazioni, vedere [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) (Specifica di un modello di threading per un progetto).

   |Opzione|DESCRIZIONE|
   |------------|-----------------|
   |**Single**|Specifica che l'oggetto viene sempre eseguito nel thread COM primario. Per ulteriori informazioni, vedere [Apartment a thread singolo](/windows/win32/com/single-threaded-apartments) e [InprocServer32](/windows/win32/com/inprocserver32) .|
   |**Apartment**|Specifica che l'oggetto utilizza il threading dell'Apartment. Equivalente a Apartment a thread singolo. A ogni oggetto di un componente a thread di Apartment viene assegnato un Apartment per il relativo thread, per la durata dell'oggetto; è tuttavia possibile usare più thread per più oggetti. Ogni Apartment è associato a un thread specifico ed è dotato di un message pump di Windows (impostazione predefinita).<br /><br /> Per ulteriori informazioni, vedere [Apartment a thread singolo](/windows/win32/com/single-threaded-apartments) .|
   |**Sia**|Specifica che l'oggetto può utilizzare l'Apartment o il threading libero, a seconda del tipo di thread che viene creato.|
   |**Libero**|Specifica che l'oggetto usa il threading libero. Il threading libero è equivalente a un modello di Apartment multithread. Per ulteriori informazioni, vedere [apartment multithreading](/windows/win32/com/multithreaded-apartments) .|
   |**Neutral**|Specifica che l'oggetto segue le linee guida per gli apartment multithreading, ma può essere eseguito su qualsiasi tipo di thread.|

- **Aggregazione**

   Indica se l'oggetto utilizza l' [aggregazione](/windows/win32/com/aggregation). L'oggetto aggregato sceglie le interfacce da esporre ai client e le interfacce vengono esposte come se l'oggetto aggregato le avesse implementate. I client dell'oggetto aggregato comunicano solo con l'oggetto aggregato.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Sì**|Specifica che l'oggetto può essere aggregato. Valore predefinito.|
   |**No**|Specifica che l'oggetto non è aggregato.|
   |**Solo**|Specifica che l'oggetto deve essere aggregato.|

- **Interface**

   Indica il tipo di interfaccia supportata dall'oggetto. Per impostazione predefinita, l'oggetto supporta un'interfaccia duale.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Doppia**|Specifica che l'oggetto supporta un'interfaccia duale (il relativo vtable dispone di funzioni di interfaccia personalizzate `IDispatch` oltre ai metodi di associazione tardiva). Consente ai client COM e ai [controller di automazione](../../mfc/automation-clients.md) di accedere all'oggetto. Valore predefinito.|
   |**Impostazione personalizzata**|Specifica che l'oggetto supporta un'interfaccia personalizzata (la relativa vtable dispone di funzioni dell'interfaccia personalizzata). Un'interfaccia personalizzata può essere più veloce di un'interfaccia duale, in particolare attraverso i limiti dei processi.<br /><br /> - **Compatibile con l'automazione** Consente ai controller di automazione di accedere a un oggetto che dispone del supporto dell'interfaccia personalizzata.|

- **Supporto**

   Indica supporto aggiuntivo per l'oggetto.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**ISupportErrorInfo**|Crea il supporto per l'interfaccia [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) in modo che l'oggetto possa restituire le informazioni sull'errore al client.|
   |**Punti di connessione**|Abilita i punti di connessione per l'oggetto facendo derivare la classe dell'oggetto da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|
   |**Gestore di marshalling a thread libero**|Crea un oggetto gestore di marshalling a thread libero per effettuare il marshalling dei puntatori di interfaccia in modo efficiente tra thread nello stesso processo. Disponibile per l'oggetto specificando **entrambi** come modello di Threading.|
   |**IObjectWithSite** (Supporto per oggetti IE)|Implementa [IObjectWithSiteImpl](../../atl/reference/iobjectwithsiteimpl-class.md), che fornisce un modo semplice per supportare la comunicazione tra un oggetto e il relativo sito in un contenitore.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata oggetto semplice ATL](../../atl/reference/atl-simple-object-wizard.md)<br/>
[Oggetto semplice ATL](../../atl/reference/adding-an-atl-simple-object.md)<br/>
[Problemi di threading del server in-process](/windows/win32/com/in-process-server-threading-issues)
