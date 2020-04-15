---
title: Supporto di IDispEventImpl
ms.date: 11/04/2016
helpviewer_keywords:
- event sink maps, declaring
- IDispEventImpl class, advising and unadvising
- SINK_ENTRY macro
- type libraries, importing
- ATL, IDispEventImpl support in COM objects
- BEGIN_SINK_MAP macro
- IDispEventImpl class, declaring
ms.assetid: b957f930-6a5b-4598-8e4d-8027759957e7
ms.openlocfilehash: 31beff30a067416f71029c18051f214c8d4429de
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329316"
---
# <a name="supporting-idispeventimpl"></a>Supporto di IDispEventImpl

La classe modello [IDispEventImpl](../atl/reference/idispeventimpl-class.md) può essere utilizzata per fornire il supporto per i sink dei punti di connessione nella classe ATL. Un sink del punto di connessione consente alla classe di gestire gli eventi generati da oggetti COM esterni. Questi sink dei punti di connessione vengono mappati con una mappa del sink di evento, fornita dalla classe.

Per implementare correttamente un sink del punto di connessione per la classe, è necessario completare i passaggi seguenti:To properly implement a connection point sink for your class, the following steps must be completed:

- Importare le librerie dei tipi per ogni oggetto esterno

- Dichiarare `IDispEventImpl` le interfacce

- Dichiarare una mappa del sink di eventoDeclare an event sink map

- Consigliare e annullare la distribuzione dei punti di connessione

I passaggi necessari per implementare un sink del punto di connessione vengono tutti eseguiti modificando solo il file di intestazione (h) della classe.

## <a name="importing-the-type-libraries"></a>Importazione delle librerie dei tipi

Per ogni oggetto esterno di cui si desidera gestire gli eventi, è necessario importare la libreria dei tipi. Questo passaggio definisce gli eventi che possono essere gestiti e fornisce informazioni che vengono utilizzate quando si dichiara la mappa del sink di evento. La [direttiva #import](../preprocessor/hash-import-directive-cpp.md) può essere utilizzata per raggiungere questo obiettivo. Aggiungere le `#import` righe di direttiva necessarie per ogni interfaccia dispatch che verrà supportata al file di intestazione (.h) della classe.

Nell'esempio seguente viene importata la`MSCAL.Calendar.7`libreria dei tipi di un server COM esterno ( ):

[!code-cpp[NVC_ATL_Windowing#141](../atl/codesnippet/cpp/supporting-idispeventimpl_1.h)]

> [!NOTE]
> È necessario disporre `#import` di un'istruzione separata per ogni libreria dei tipi esterna supportata.

## <a name="declaring-the-idispeventimpl-interfaces"></a>Dichiarazione delle interfacce IDispEventImplDeclaring the IDispEventImpl Interfaces

Dopo aver importato le librerie dei tipi di ogni `IDispEventImpl` interfaccia dispatch, è necessario dichiarare interfacce separate per ogni interfaccia dispatch esterna. Modificare la dichiarazione della `IDispEventImpl` classe aggiungendo una dichiarazione di interfaccia per ogni oggetto esterno. Per ulteriori informazioni sui parametri, vedere [IDispEventImpl](../atl/reference/idispeventimpl-class.md).

Il codice seguente dichiara due sink del `DCalendarEvents` punto di connessione, per `CMyCompositCtrl2`l'interfaccia, per l'oggetto COM implementato dalla classe :

[!code-cpp[NVC_ATL_Windowing#142](../atl/codesnippet/cpp/supporting-idispeventimpl_2.h)]

## <a name="declaring-an-event-sink-map"></a>Dichiarazione di una mappa del sink di eventoDeclaring an Event Sink Map

Affinché le notifiche degli eventi vengano gestite dalla funzione appropriata, la classe deve instradare ogni evento al gestore corretto. Ciò si ottiene dichiarando una mappa del sink di evento.

ATL fornisce diverse macro, [BEGIN_SINK_MAP](reference/composite-control-macros.md#begin_sink_map), [END_SINK_MAP](reference/composite-control-macros.md#end_sink_map)e [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex), che semplificano questo mapping. Il formato standard è il seguente:

```cpp
BEGIN_SINK_MAP(comClass)
  SINK_ENTRY_EX(id, iid, dispid, func)
  . . . //additional external event entries
END_SINK_MAP()
```

Nell'esempio seguente viene dichiarata una mappa del sink di evento con due gestori eventi:The following example declares an event sink map with two event handlers:

[!code-cpp[NVC_ATL_Windowing#136](../atl/codesnippet/cpp/supporting-idispeventimpl_3.h)]

L'implementazione è quasi completa. L'ultimo passo riguarda la consulenza e l'annullamento delle interfacce esterne.

## <a name="advising-and-unadvising-the-idispeventimpl-interfaces"></a>Consulenza e annullamento delle interfacce IDispEventImpl

Il passaggio finale consiste nell'implementare un metodo che consiglierà (o annullerà) tutti i punti di connessione nei momenti appropriati. Questa consulenza deve essere effettuata prima della comunicazione tra i client esterni e l'oggetto. Prima che l'oggetto diventi visibile, ogni interfaccia dispatch esterna supportata dall'oggetto viene eseguita una query per le interfacce in uscita. Viene stabilita una connessione e viene utilizzato un riferimento all'interfaccia in uscita per gestire gli eventi dall'oggetto. Questa procedura è detta "consulenza".

Al termine dell'oggetto con le interfacce esterne, le interfacce in uscita devono essere notificate che non sono più utilizzate dalla classe. Questo processo viene definito "unadvising".

A causa della natura univoca degli oggetti COM, questa procedura varia, in dettaglio ed esecuzione, tra le implementazioni. Questi dettagli esulano dall'ambito di questo argomento e non vengono affrontati.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)
