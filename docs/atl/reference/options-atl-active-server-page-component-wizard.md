---
description: 'Ulteriori informazioni su: opzioni, ATL Active Server pagina Creazione guidata componente'
title: Opzioni, Creazione guidata componente ASP ATL
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.class.atl.asp.options
helpviewer_keywords:
- ATL Active Server Page Component Wizard, options
ms.assetid: 54f34e26-53c7-4456-9675-cb86e356bde0
ms.openlocfilehash: 6d41b5cb43aa9f0445e73bbe148a2a753e374a15
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139022"
---
# <a name="options-atl-active-server-page-component-wizard"></a>Opzioni, Creazione guidata componente ASP ATL

Utilizzare questa pagina della creazione guidata componente della pagina Active Server ATL per progettare per migliorare l'efficienza e il supporto degli errori per l'oggetto.

Per altre informazioni sui progetti ATL e le classi ATL COM, vedere [Componenti desktop ATL COM](../../atl/atl-com-desktop-components.md).

- **Modello di threading**

   Indica il metodo per la gestione dei thread. Per impostazione predefinita, il progetto usa il threading dell' **Apartment** .

   Per informazioni, vedere [Specifying the Project's Threading Model](../../atl/specifying-the-threading-model-for-a-project-atl.md) (Specifica di un modello di threading per un progetto).

   |Opzione|Description|
   |------------|-----------------|
   |**Singolo**|Specifica che l'oggetto utilizza il modello a thread singolo. Nel modello a thread singolo, un oggetto viene sempre eseguito nel thread COM primario. Per ulteriori informazioni, vedere [Apartment a thread singolo](/windows/win32/com/single-threaded-apartments) e [InprocServer32](/windows/win32/com/inprocserver32) .|
   |**Apartment**|Specifica che l'oggetto utilizza il threading dell'Apartment. Equivalente a Apartment a thread singolo. A ogni oggetto di un componente a thread di Apartment viene assegnato un Apartment per il relativo thread, per la durata dell'oggetto; è tuttavia possibile usare più thread per più oggetti. Ogni Apartment è associato a un thread specifico ed è dotato di un message pump di Windows (impostazione predefinita).<br /><br /> Per ulteriori informazioni, vedere [Apartment a thread singolo](/windows/win32/com/single-threaded-apartments) .|
   |**Entrambe**|Specifica che l'oggetto può utilizzare l'Apartment o il threading libero, a seconda del tipo di thread che viene creato.|
   |**Free**|Specifica che l'oggetto usa il threading libero. Il threading libero è equivalente a un modello di Apartment multithread. Per ulteriori informazioni, vedere [apartment multithreading](/windows/win32/com/multithreaded-apartments) .|
   |**Indipendente dalla**|Specifica che l'oggetto segue le linee guida per gli apartment multithreading, ma può essere eseguito su qualsiasi tipo di thread.|

- **Aggregazione**

   Indica se l'oggetto utilizza l' [aggregazione](/windows/win32/com/aggregation). L'oggetto aggregato sceglie le interfacce da esporre ai client e le interfacce vengono esposte come se l'oggetto aggregato le avesse implementate. I client dell'oggetto aggregato comunicano solo con l'oggetto aggregato.

   |Opzione|Description|
   |------------|-----------------|
   |**Sì**|Specifica che l'oggetto può essere aggregato. Valore predefinito.|
   |**No**|Specifica che l'oggetto non è aggregato.|
   |**Solo**|Specifica che l'oggetto deve essere aggregato.|

- **Supporto tecnico**

   Opzioni di supporto aggiuntive:

   |Opzione|Description|
   |------------|-----------------|
   |**ISupportErrorInfo**|Crea il supporto per l'interfaccia [ISupportErrorInfo](../../atl/reference/isupporterrorinfoimpl-class.md) in modo che l'oggetto possa restituire le informazioni sull'errore al client.|
   |**Punti di connessione**|Abilita i punti di connessione per l'oggetto facendo derivare la classe dell'oggetto da [IConnectionPointContainerImpl](../../atl/reference/iconnectionpointcontainerimpl-class.md).|
   |**Gestore di marshalling a thread libero**|Crea un oggetto gestore di marshalling a thread libero per effettuare il marshalling dei puntatori di interfaccia in modo efficiente tra thread nello stesso processo. Disponibile per l'oggetto che specifica **sia** o **Free** come modello di Threading.|

## <a name="see-also"></a>Vedi anche

[Creazione guidata componente ASP ATL](../../atl/reference/atl-active-server-page-component-wizard.md)<br/>
[Componente pagine ASP ATL](../../atl/reference/adding-an-atl-active-server-page-component.md)
