---
title: Opzioni, Creazione guidata componente ASP ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.asp.options
helpviewer_keywords:
- ATL Active Server Page Component Wizard, options
ms.assetid: 54f34e26-53c7-4456-9675-cb86e356bde0
ms.openlocfilehash: 7e9740a67f265484c349a4df644be882dba30c13
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57280238"
---
# <a name="options-atl-active-server-page-component-wizard"></a>Opzioni, Creazione guidata componente ASP ATL

Utilizzare questa pagina della finestra attiva Server pagina Creazione guidata componente ATL per progettare per aumentare l'efficienza e supporto per gli errori per l'oggetto.

Per altre informazioni sulle classi ATL COM e progetti ATL, vedere [ATL COM Desktop Components](../../atl/atl-com-desktop-components.md).

- **Modello di threading**

   Indica il metodo per la gestione dei thread. Per impostazione predefinita, il progetto usa **Apartment** threading.

   Visualizzare [specifica di un modello di Threading del progetto](../../atl/specifying-the-threading-model-for-a-project-atl.md) per altre informazioni.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Single**|Specifica che l'oggetto Usa il modello di threading singolo. Nel modello di threading singolo, un oggetto viene sempre eseguito nel thread COM primario. Visualizzare [apartment a thread singolo](/windows/desktop/com/single-threaded-apartments) e [InprocServer32](/windows/desktop/com/inprocserver32) per altre informazioni.|
   |**Apartment**|Specifica che l'oggetto Usa il threading apartment. Apartment di thread equivalente al singolo. Ogni oggetto di un componente di apartment a thread viene assegnato un apartment per il relativo thread per tutta la durata dell'oggetto. Tuttavia, più thread possono essere utilizzati per più oggetti. Ogni tipo di apartment è associato a un thread specifico e ha un message pump Windows (impostazione predefinita).<br /><br /> Visualizzare [apartment a thread singolo](/windows/desktop/com/single-threaded-apartments) per altre informazioni.|
   |**Both**|Specifica che l'oggetto può utilizzare apartment o modello di threading free, a seconda dal tipo di un thread viene creato.|
   |**gratuito**|Specifica che l'oggetto utilizza il modello di threading free. Modello di threading Free è equivalente a un modello di apartment con multithreading. Visualizzare [apartment a thread multipli](/windows/desktop/com/multithreaded-apartments) per altre informazioni.|
   |**Neutral**|Specifica che l'oggetto segue le linee guida per apartment a thread multipli, ma può essere eseguito su qualsiasi tipo di thread.|

- **Aggregazione**

   Indica se l'oggetto utilizza [aggregazione](/windows/desktop/com/aggregation). Oggetto di aggregazione sceglie interfacce da esporre ai client e le interfacce vengono esposte come se l'oggetto aggregato state implementate. I client dell'oggetto di aggregazione comunicare solo con l'oggetto aggregato.

   |Opzione|Descrizione|
   |------------|-----------------|
   |**Sì**|Specifica che è possibile aggregare l'oggetto. Valore predefinito.|
   |**No**|Specifica che l'oggetto non è aggregato.|
   |**Only**|Specifica che l'oggetto deve essere aggregato.|

- **Supporto**

   Altre opzioni di supporto:

   |Opzione|Descrizione|
   |------------|-----------------|
   |**ISupportErrorInfo**|Per creare il supporto per la [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) interfaccia in modo che l'oggetto può restituire le informazioni sull'errore al client.|
   |**Punti di connessione**|Abilita i punti di connessione per l'oggetto mediante derivazione dalla classe dell'oggetto [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|
   |**Gestore del marshalling a thread libero**|Crea un oggetto gestore del marshalling a thread libero per effettuare il marshalling di puntatori di interfaccia in modo efficiente tra thread nello stesso processo. È disponibile per l'oggetto che specifica la **entrambe** oppure **gratuito** come il modello di threading.|

## <a name="see-also"></a>Vedere anche

[Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)<br/>
[Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)
