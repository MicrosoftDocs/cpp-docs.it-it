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
ms.openlocfilehash: 3652aae2a6c84833ed32e52599d3834d6e66a5ee
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62274287"
---
# <a name="supporting-idispeventimpl"></a>Supporto di IDispEventImpl

La classe modello [IDispEventImpl](../atl/reference/idispeventimpl-class.md) può essere utilizzato per fornire supporto per i sink di punto di connessione nella classe ATL. Un sink dei punti di connessione consente di classe per gestire gli eventi generati dagli oggetti COM esterni. Vengono eseguito il mapping di questi sink di punto di connessione con una mappa eventi sink, fornita dalla classe.

Per implementare correttamente un sink dei punti di connessione per la classe, è necessario completare i passaggi seguenti:

- Importare le librerie di tipo per ogni oggetto esterno

- Dichiarare il `IDispEventImpl` interfacce

- Dichiarare una mappa di sink di evento

- Notifica e annullare i punti di connessione

I passaggi relativi all'implementazione di un sink di punto di connessione vengono tutti eseguiti mediante la modifica solo il file di intestazione (h) della classe.

## <a name="importing-the-type-libraries"></a>L'importazione di librerie dei tipi

Per ogni oggetto cui si desidera gestire gli eventi esterno, è necessario importare la libreria dei tipi. Questo passaggio definisce gli eventi che possono essere gestiti e fornisce informazioni che viene usate quando si dichiara la mappa di sink di evento. Il [#import](../preprocessor/hash-import-directive-cpp.md) direttiva può essere utilizzata per eseguire questa operazione. Aggiungere le necessarie `#import` direttive righe per ogni interfaccia di dispatch si supporteranno al file di intestazione (h) della classe.

L'esempio seguente importa la libreria dei tipi di un server COM esterno (`MSCAL.Calendar.7`):

[!code-cpp[NVC_ATL_Windowing#141](../atl/codesnippet/cpp/supporting-idispeventimpl_1.h)]

> [!NOTE]
>  È necessario configurare un apposito `#import` istruzione per ogni libreria dei tipi esterne da supportare.

## <a name="declaring-the-idispeventimpl-interfaces"></a>Dichiara le interfacce di IDispEventImpl

Dopo aver importato le librerie dei tipi di ogni interfaccia di dispatch, è necessario dichiarare separato `IDispEventImpl` interfacce per ogni interfaccia di dispatch esterno. Modificare la dichiarazione della classe aggiungendo un `IDispEventImpl` interfaccia di dichiarazione per ogni oggetto esterno. Per altre informazioni sui parametri, vedere [IDispEventImpl](../atl/reference/idispeventimpl-class.md).

Il codice seguente dichiara due sink dei punti di connessione, per il `DCalendarEvents` interfaccia, per l'oggetto COM implementata dalla classe `CMyCompositCtrl2`:

[!code-cpp[NVC_ATL_Windowing#142](../atl/codesnippet/cpp/supporting-idispeventimpl_2.h)]

## <a name="declaring-an-event-sink-map"></a>La dichiarazione di una mappa di Sink di evento

Affinché le notifiche degli eventi da gestire con la funzione appropriata, la classe deve indirizzare ogni evento gestore corretto. Questo risultato viene ottenuto con la dichiarazione di una mappa di sink di eventi.

ATL fornisce diverse macro [BEGIN_SINK_MAP](reference/composite-control-macros.md#begin_sink_map), [END_SINK_MAP](reference/composite-control-macros.md#end_sink_map), e [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex), che semplificano questo mapping. Il formato standard è come segue:

```cpp
BEGIN_SINK_MAP(comClass)
  SINK_ENTRY_EX(id, iid, dispid, func)
  . . . //additional external event entries
END_SINK_MAP()
```

Nell'esempio seguente viene dichiarata una mappa di sink di eventi con due gestori eventi:

[!code-cpp[NVC_ATL_Windowing#136](../atl/codesnippet/cpp/supporting-idispeventimpl_3.h)]

L'implementazione è quasi completata. L'ultimo passaggio riguarda la notifica e la disattivazione della notifica per le interfacce esterne.

## <a name="advising-and-unadvising-the-idispeventimpl-interfaces"></a>Consigli per le interfacce IDispEventImpl

Il passaggio finale consiste nell'implementare un metodo che verrà consigliare (o annullare gli avvisi) tutti i punti di connessione al momento opportuno. Questa notifica è necessario eseguire prima la comunicazione tra i client esterni e l'oggetto può essere eseguite. Prima che l'oggetto sia visibile, ogni interfaccia di dispatch esterna supportata dall'oggetto viene eseguita una query per le interfacce in uscita. Viene stabilita una connessione e un riferimento all'interfaccia in uscita viene usato per gestire gli eventi dall'oggetto. Questa procedura è detta "notifica".

Una volta completato l'oggetto con le interfacce esterne, le interfacce in uscita dovrebbero essere notificate che non vengono più usati dalla propria classe. Questo processo è detto "disattivazione della notifica".

A causa della natura univoca degli oggetti COM, questa procedura varia a in dettaglio e l'esecuzione, tra diverse implementazioni. Questi dettagli esulano dall'ambito di questo argomento e non sono trattati.

## <a name="see-also"></a>Vedere anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)
