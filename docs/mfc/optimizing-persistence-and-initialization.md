---
title: Ottimizzazione di persistenza e inizializzazione
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], optimizing
- performance, ActiveX controls
- optimization, ActiveX controls
- optimizing performance, ActiveX controls
ms.assetid: e821e19e-b9eb-49ab-b719-0743420ba80b
ms.openlocfilehash: 57b98f7e2e4f9e23175b8b01c2e37ff49c499949
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624003"
---
# <a name="optimizing-persistence-and-initialization"></a>Ottimizzazione di persistenza e inizializzazione

Per impostazione predefinita, la persistenza e l'inizializzazione in un controllo vengono gestite dalla `DoPropExchange` funzione membro. In un controllo tipico questa funzione contiene chiamate a diverse funzioni di **PX_** ( `PX_Color` , `PX_Font` e così via), una per ogni proprietà.

Questo approccio offre il vantaggio di `DoPropExchange` poter usare una singola implementazione per l'inizializzazione, la persistenza in formato binario e la persistenza nel formato cosiddetto "Property-Bag" usato da alcuni contenitori. Questa funzione fornisce tutte le informazioni sulle proprietà e i relativi valori predefiniti in un'unica posizione.

Tuttavia, questa generalità si presenta a scapito dell'efficienza. Le funzioni **PX_** ottengono la loro flessibilità grazie a implementazioni multilivello intrinsecamente meno efficienti rispetto a approcci più diretti ma meno flessibili. Inoltre, se un controllo passa un valore predefinito a una funzione **PX_** , il valore predefinito deve essere specificato ogni volta, anche in situazioni in cui il valore predefinito potrebbe non essere necessariamente utilizzato. Se la generazione del valore predefinito è un'attività non semplice (ad esempio, quando il valore viene ottenuto da una proprietà di ambiente), il lavoro aggiuntivo superfluo viene eseguito nei casi in cui non viene utilizzato il valore predefinito.

È possibile migliorare le prestazioni di persistenza binaria del controllo eseguendo l'override della funzione del controllo `Serialize` . L'implementazione predefinita di questa funzione membro esegue una chiamata alla `DoPropExchange` funzione. Eseguendo l'override, è possibile fornire un'implementazione più diretta per la persistenza binaria. Ad esempio, si consideri questa `DoPropExchange` funzione:

[!code-cpp[NVC_MFC_AxOpt#1](codesnippet/cpp/optimizing-persistence-and-initialization_1.cpp)]

Per migliorare le prestazioni della persistenza binaria di questo controllo, è possibile eseguire l'override della `Serialize` funzione come indicato di seguito:

[!code-cpp[NVC_MFC_AxOpt#2](codesnippet/cpp/optimizing-persistence-and-initialization_2.cpp)]

La `dwVersion` variabile locale può essere usata per rilevare la versione dello stato persistente del controllo caricato o salvato. È possibile usare questa variabile invece di chiamare [CPropExchange:: GetVersion](reference/cpropexchange-class.md#getversion).

Per salvare uno spazio ridotto nel formato persistente per una proprietà **bool** (e per mantenerlo compatibile con il formato prodotto da `PX_Bool` ), è possibile archiviare la proprietà come **byte**, come indicato di seguito:

[!code-cpp[NVC_MFC_AxOpt#3](codesnippet/cpp/optimizing-persistence-and-initialization_3.cpp)]

Si noti che nel caso di carico viene usata una variabile temporanea e quindi il relativo valore viene assegnato, anziché eseguire il cast *m_boolProp* a un riferimento a un **byte** . La tecnica di cast comporta la modifica di un solo byte di *m_boolProp* , lasciando i byte rimanenti non inizializzati.

Per lo stesso controllo, è possibile ottimizzare l'inizializzazione del controllo eseguendo l'override di [COleControl:: OnResetState](reference/colecontrol-class.md#onresetstate) come indicato di seguito:

[!code-cpp[NVC_MFC_AxOpt#4](codesnippet/cpp/optimizing-persistence-and-initialization_4.cpp)]

Sebbene `Serialize` e `OnResetState` siano stati sottoposti a override, la `DoPropExchange` funzione deve essere mantenuta intatta perché è ancora usata per la persistenza nel formato del contenitore delle proprietà. È importante mantenere tutte e tre queste funzioni per garantire che il controllo gestisca le proprietà in modo coerente, indipendentemente dal meccanismo di persistenza utilizzato dal contenitore.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: ottimizzazione](mfc-activex-controls-optimization.md)
