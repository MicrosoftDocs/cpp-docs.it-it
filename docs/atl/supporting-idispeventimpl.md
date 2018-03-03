---
title: Supporto di IDispEventImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- IDispEventImpl
dev_langs:
- C++
helpviewer_keywords:
- event sink maps, declaring
- IDispEventImpl class, advising and unadvising
- SINK_ENTRY macro
- type libraries, importing
- ATL, IDispEventImpl support in COM objects
- BEGIN_SINK_MAP macro
- IDispEventImpl class, declaring
ms.assetid: b957f930-6a5b-4598-8e4d-8027759957e7
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8bf10a68ae15743a637df2dee52bee83c3dfcbe0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="supporting-idispeventimpl"></a>Supporto di IDispEventImpl
La classe modello [IDispEventImpl](../atl/reference/idispeventimpl-class.md) può essere utilizzato per fornire il supporto per i sink di punto di connessione della classe ATL. Un sink di punto di connessione consente la classe gestire gli eventi generati dagli oggetti COM esterni. Sink di questi punti di connessione vengono mappati a una mappa del sink di evento, fornita dalla classe.  
  
 Per implementare correttamente un sink di punto di connessione per la classe, è necessario completare i passaggi seguenti:  
  
-   Importare le librerie dei tipi per ogni oggetto esterno  
  
-   Dichiarare il `IDispEventImpl` interfacce  
  
-   Dichiarare una mappa del sink di evento  
  
-   Notifica e annullare gli avvisi per i punti di connessione  
  
 I passaggi necessari per l'implementazione di un sink di punto di connessione vengono tutti eseguiti modificando solo il file di intestazione (h) della classe.  
  
## <a name="importing-the-type-libraries"></a>L'importazione di librerie dei tipi  
 Per ogni oggetto il cui si desidera gestire gli eventi esterno, è necessario importare la libreria dei tipi. Questo passaggio definisce gli eventi che possono essere gestiti e fornisce informazioni che viene utilizzate quando si dichiara una mappa del sink di evento. Il [#import](../preprocessor/hash-import-directive-cpp.md) direttiva può essere utilizzata per eseguire questa operazione. Aggiungere i necessari `#import` direttive righe per ogni interfaccia dispatch da supportare per il file di intestazione (h) della classe.  
  
 L'esempio seguente importa la libreria dei tipi di un server COM esterno (`MSCAL.Calendar.7`):  
  
 [!code-cpp[NVC_ATL_Windowing#141](../atl/codesnippet/cpp/supporting-idispeventimpl_1.h)]  
  
> [!NOTE]
>  È necessario configurare un apposito `#import` istruzione per ogni libreria dei tipi esterni si desidera supportare.  
  
## <a name="declaring-the-idispeventimpl-interfaces"></a>Dichiarazione delle interfacce IDispEventImpl  
 Dopo aver importato le librerie dei tipi di ogni interfaccia dispatch, è necessario dichiarare separato `IDispEventImpl` interfacce per ogni interfaccia dispatch esterna. Modificare la dichiarazione della classe aggiungendo un `IDispEventImpl` interfaccia di dichiarazione per ogni oggetto esterno. Per ulteriori informazioni sui parametri, vedere [IDispEventImpl](../atl/reference/idispeventimpl-class.md).  
  
 Il codice seguente dichiara due sink dei punti di connessione, per il `DCalendarEvents` interfaccia, per l'oggetto COM implementata dalla classe `CMyCompositCtrl2`:  
  
 [!code-cpp[NVC_ATL_Windowing#142](../atl/codesnippet/cpp/supporting-idispeventimpl_2.h)]  
  
## <a name="declaring-an-event-sink-map"></a>Dichiarazione di una mappa del Sink di evento  
 Affinché le notifiche degli eventi deve essere gestito dalla funzione corretta, la classe è necessario che ogni evento al gestore corretto. A questo scopo, la dichiarazione di una mappa del sink di evento.  
  
 ATL fornisce diverse macro, [BEGIN_SINK_MAP](reference/composite-control-macros.md#begin_sink_map), [END_SINK_MAP](reference/composite-control-macros.md#end_sink_map), e [SINK_ENTRY_EX](reference/composite-control-macros.md#sink_entry_ex), che semplificano il mapping. Il formato standard è la seguente:  
  
 `BEGIN_SINK_MAP(comClass)`  
  
 `SINK_ENTRY_EX(id, iid, dispid, func)`  
  
 `. . . //additional external event entries`  
  
 `END_SINK_MAP()`  
  
 Nell'esempio seguente viene dichiarata una mappa del sink di evento con due gestori di eventi:  
  
 [!code-cpp[NVC_ATL_Windowing#136](../atl/codesnippet/cpp/supporting-idispeventimpl_3.h)]  
  
 L'implementazione è quasi completata. L'ultimo passaggio riguarda la notifica e la disattivazione della notifica per le interfacce esterne.  
  
## <a name="advising-and-unadvising-the-idispeventimpl-interfaces"></a>Consigli per le interfacce IDispEventImpl  
 Il passaggio finale consiste nell'implementare un metodo che verrà indicato (o annullare gli avvisi per) tutti i punti di connessione al momento opportuno. Notifica deve essere eseguita prima che la comunicazione tra i client esterni e l'oggetto può avere luogo. Prima che l'oggetto sia visibile, ogni interfaccia dispatch esterna supportata dall'oggetto viene eseguita una query per le interfacce in uscita. Viene stabilita una connessione e un riferimento all'interfaccia in uscita viene utilizzato per gestire gli eventi dall'oggetto. Questa procedura è detta "notifica".  
  
 Una volta terminato l'oggetto con le interfacce esterne, le interfacce in uscita devono ricevere notifiche non sono più utilizzate dalla classe. Questo processo è detto "annullare la notifica".  
  
 A causa della natura univoca degli oggetti COM, questa procedura varia in modo dettagliato e l'esecuzione, tra le implementazioni. Queste informazioni non rientrano nell'ambito di questo argomento e non vengono descritte.  
  
## <a name="see-also"></a>Vedere anche  
 [Nozioni fondamentali sugli oggetti COM ATL](../atl/fundamentals-of-atl-com-objects.md)

