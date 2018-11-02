---
title: Ottimizzazione di persistenza e inizializzazione
ms.date: 11/04/2016
helpviewer_keywords:
- MFC ActiveX controls [MFC], optimizing
- performance, ActiveX controls
- optimization, ActiveX controls
- optimizing performance, ActiveX controls
ms.assetid: e821e19e-b9eb-49ab-b719-0743420ba80b
ms.openlocfilehash: 6f0d888f49cf27505882e89e3cdbb469ea9e8684
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50472696"
---
# <a name="optimizing-persistence-and-initialization"></a>Ottimizzazione di persistenza e inizializzazione

Per impostazione predefinita, la persistenza e inizializzazione di un controllo vengono gestite dal `DoPropExchange` funzione membro. In un tipico controllo, questa funzione contiene chiamate a diversi **px** funzioni (`PX_Color`, `PX_Font`e così via), uno per ogni proprietà.

Questo approccio ha il vantaggio che un singolo `DoPropExchange` implementazione può essere utilizzata per l'inizializzazione, per la persistenza in formato binario e per la persistenza in formato elenco-cosiddette"proprietà" utilizzata da alcuni contenitori. Questa uno funzione fornisce tutte le informazioni sulle proprietà e i relativi valori predefiniti in un'unica posizione.

Tuttavia, questo generalità comporta tuttavia l'efficienza. Il **px _** funzioni ottenere loro flessibilità alle implementazioni multilivello che sono implicitamente meno efficienti rispetto agli approcci più diretti, ma meno flessibili. Inoltre, se un controllo passa un valore predefinito da un **px _** funzione, valore predefinito deve essere fornito ogni volta, anche in situazioni in cui il valore predefinito non può essere necessariamente utilizzato. Se la generazione del valore predefinito è un'operazione non semplice (ad esempio, quando il valore viene ottenuto da una proprietà di ambiente), quindi extra, operazioni non necessarie viene eseguita nei casi in cui non viene usato il valore predefinito.

È possibile migliorare le prestazioni della persistenza binario del controllo eseguendo l'override del controllo `Serialize` (funzione). L'implementazione predefinita di questa funzione membro esegue una chiamata ai `DoPropExchange` (funzione). Con una sostituzione, è possibile fornire un'implementazione più diretta per la persistenza binaria. Ad esempio, prendere in considerazione questo `DoPropExchange` funzione:

[!code-cpp[NVC_MFC_AxOpt#1](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_1.cpp)]

Per migliorare le prestazioni della persistenza binaria di questo controllo, è possibile eseguire l'override di `Serialize` funzionare nel modo seguente:

[!code-cpp[NVC_MFC_AxOpt#2](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_2.cpp)]

Il `dwVersion` variabile locale può essere usata per rilevare la versione dello stato persistente del controllo in fase di caricamento o salvataggio. È possibile usare questa variabile invece di chiamare [CPropExchange:: GetVersion](../mfc/reference/cpropexchange-class.md#getversion).

Per ridurre lo spazio nel formato persistente per un **BOOL** proprietà (e per mantenerlo compatibile con il formato generato dal `PX_Bool`), è possibile archiviare la proprietà come un **BYTE**, come indicato di seguito:

[!code-cpp[NVC_MFC_AxOpt#3](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_3.cpp)]

Si noti che nel caso di caricamento, viene usata una variabile temporanea e il relativo valore viene assegnato, anziché eseguire il cast *m_boolProp* a un **BYTE** riferimento. La tecnica di cast comporterebbe un solo byte del *m_boolProp* in fase di modifica, lasciando i byte rimanenti non inizializzati.

Per il controllo stesso, è possibile ottimizzare l'inizializzazione del controllo eseguendo l'override [OnResetState](../mfc/reference/colecontrol-class.md#onresetstate) come indicato di seguito:

[!code-cpp[NVC_MFC_AxOpt#4](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_4.cpp)]

Sebbene `Serialize` e `OnResetState` è stato eseguito l'override, il `DoPropExchange` funzione deve rimanere invariata perché viene ancora usato per il salvataggio permanente nel formato di contenitore di proprietà. È importante mantenere tutte e tre di queste funzioni per garantire che il controllo gestisce le relative proprietà in modo coerente, indipendentemente dal fatto che la persistenza Usa meccanismo del contenitore.

## <a name="see-also"></a>Vedere anche

[Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

