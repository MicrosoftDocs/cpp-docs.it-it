---
description: 'Altre informazioni su: supporto di IDispEventImpl'
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
ms.openlocfilehash: 6a5c12e011ad0dc0f27594325a22dadddd5b92c0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157373"
---
# <a name="supporting-idispeventimpl"></a>Supporto di IDispEventImpl

La classe modello [IDispEventImpl](../atl/reference/idispeventimpl-class.md) può essere utilizzata per fornire supporto per i sink di punti di connessione nella classe ATL. Un sink del punto di connessione consente alla classe di gestire gli eventi generati da oggetti COM esterni. Questi sink di punti di connessione vengono mappati con una mappa di sink di eventi, fornita dalla classe.

Per implementare correttamente un sink del punto di connessione per la classe, è necessario completare i passaggi seguenti:

- Importare le librerie dei tipi per ogni oggetto esterno

- Dichiarare le `IDispEventImpl` interfacce

- Dichiarare una mappa di sink di evento

- Consigliare e annullare la notifica dei punti di connessione

Tutti i passaggi necessari per l'implementazione di un sink di punto di connessione vengono eseguiti modificando solo il file di intestazione (. h) della classe.

## <a name="importing-the-type-libraries"></a>Importazione delle librerie dei tipi

Per ogni oggetto esterno di cui si desidera gestire gli eventi, è necessario importare la libreria dei tipi. Questo passaggio definisce gli eventi che possono essere gestiti e fornisce informazioni utilizzate quando si dichiara la mappa di sink di evento. Per eseguire questa operazione, è possibile usare la direttiva [#import](../preprocessor/hash-import-directive-cpp.md) . Aggiungere le `#import` righe di direttiva necessarie per ogni interfaccia di dispatch che sarà supportata per il file di intestazione (. h) della classe.

Nell'esempio seguente viene importata la libreria dei tipi di un server COM esterno ( `MSCAL.Calendar.7` ):

[!code-cpp[NVC_ATL_Windowing#141](../atl/codesnippet/cpp/supporting-idispeventimpl_1.h)]

> [!NOTE]
> È necessario disporre di un' `#import` istruzione separata per ogni libreria dei tipi esterna che sarà supportata.

## <a name="declaring-the-idispeventimpl-interfaces"></a>Dichiarazione delle interfacce IDispEventImpl

Ora che sono state importate le librerie dei tipi di ogni interfaccia dispatch, è necessario dichiarare `IDispEventImpl` interfacce separate per ogni interfaccia dispatch esterna. Modificare la dichiarazione della classe aggiungendo una dichiarazione di `IDispEventImpl` interfaccia per ogni oggetto esterno. Per ulteriori informazioni sui parametri, vedere [IDispEventImpl](../atl/reference/idispeventimpl-class.md).

Il codice seguente dichiara due sink di punti di connessione, per l' `DCalendarEvents` interfaccia, per l'oggetto COM implementato dalla classe `CMyCompositCtrl2` :

[!code-cpp[NVC_ATL_Windowing#142](../atl/codesnippet/cpp/supporting-idispeventimpl_2.h)]

## <a name="declaring-an-event-sink-map"></a>Dichiarazione di una mappa di sink di evento

Affinché le notifiche degli eventi vengano gestite dalla funzione appropriata, la classe deve indirizzare ogni evento al gestore corretto. Questa operazione viene eseguita dichiarando una mappa di sink di evento.

In ATL sono disponibili diverse macro, [BEGIN_SINK_MAP](reference/composite-control-macros.md#begin_sink_map), [END_SINK_MAP](reference/composite-control-macros.md#end_sink_map)e [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex), che rendono più semplice questo mapping. Il formato standard è il seguente:

```cpp
BEGIN_SINK_MAP(comClass)
  SINK_ENTRY_EX(id, iid, dispid, func)
  . . . //additional external event entries
END_SINK_MAP()
```

Nell'esempio seguente viene dichiarata una mappa di sink di evento con due gestori eventi:

[!code-cpp[NVC_ATL_Windowing#136](../atl/codesnippet/cpp/supporting-idispeventimpl_3.h)]

L'implementazione è quasi completa. L'ultimo passaggio riguarda la consulenza e la non consulenza delle interfacce esterne.

## <a name="advising-and-unadvising-the-idispeventimpl-interfaces"></a>Consigliare e non consigliare le interfacce IDispEventImpl

Il passaggio finale consiste nell'implementare un metodo che consiglierà (o Unadvise) tutti i punti di connessione nei momenti appropriati. Questa operazione deve essere eseguita prima che la comunicazione tra i client esterni e l'oggetto possa avvenire. Prima che l'oggetto diventi visibile, viene eseguita una query sulle interfacce in uscita per ogni interfaccia di dispatch esterna supportata dall'oggetto. Viene stabilita una connessione e viene utilizzato un riferimento all'interfaccia in uscita per gestire gli eventi dall'oggetto. Questa procedura viene definita "consulenza".

Al termine dell'oggetto con le interfacce esterne, le interfacce in uscita devono ricevere una notifica che non vengono più utilizzate dalla classe. Questo processo viene definito "non consigliato".

A causa della natura univoca degli oggetti COM, questa procedura varia, in dettaglio ed esecuzione, tra le implementazioni. Questi dettagli esulano dall'ambito di questo argomento e non vengono risolti.

## <a name="see-also"></a>Vedi anche

[Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)
