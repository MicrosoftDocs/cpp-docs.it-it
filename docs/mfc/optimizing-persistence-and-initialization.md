---
title: Ottimizzazione di persistenza e inizializzazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- MFC ActiveX controls [MFC], optimizing
- performance, ActiveX controls
- optimization, ActiveX controls
- optimizing performance, ActiveX controls
ms.assetid: e821e19e-b9eb-49ab-b719-0743420ba80b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e528ea7901518112c255eefbfb1e674fddee04e2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="optimizing-persistence-and-initialization"></a>Ottimizzazione di persistenza e inizializzazione
Per impostazione predefinita, persistenza e inizializzazione in un controllo sono di competenza di `DoPropExchange` funzione membro. In un tipico controllo, questa funzione contiene chiamate a diversi **px** funzioni (`PX_Color`, `PX_Font`e così via), uno per ogni proprietà.  
  
 Questo approccio presenta il vantaggio che un singolo `DoPropExchange` implementazione può essere usata per l'inizializzazione, per la persistenza in formato binario e per la persistenza nel formato cosiddetti "proprietà" utilizzato da alcuni contenitori. Questa uno funzione fornisce tutte le informazioni sulle proprietà e i relativi valori predefiniti in un'unica posizione.  
  
 Tuttavia, questa generalità discapito dell'efficienza. Il **px** funzioni ottenere loro flessibilità alle implementazioni multilivello che sono implicitamente meno efficienti rispetto agli approcci più diretti, ma è meno flessibili. Inoltre, se un controllo passa un valore predefinito per un **px** funzione, valore predefinito deve essere fornito ogni volta, anche in situazioni in cui il valore predefinito non può essere necessariamente utilizzato. Se la generazione del valore predefinito è un'attività inusuale (ad esempio, quando il valore ottenuto da una proprietà di ambiente), quindi aggiuntivo, lavoro viene eseguita nei casi in cui non viene utilizzato il valore predefinito.  
  
 È possibile migliorare le prestazioni della persistenza binaria del controllo eseguendo l'override del controllo `Serialize` (funzione). L'implementazione predefinita di questa funzione membro effettua una chiamata ai `DoPropExchange` (funzione). Con una sostituzione, è possibile fornire un'implementazione più diretta per la persistenza binaria. Si consideri ad esempio questo `DoPropExchange` funzione:  
  
 [!code-cpp[NVC_MFC_AxOpt#1](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_1.cpp)]  
  
 Per migliorare le prestazioni della persistenza binaria del controllo, è possibile eseguire l'override di `Serialize` funzione come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#2](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_2.cpp)]  
  
 Il `dwVersion` variabile locale può essere utilizzata per rilevare la versione dello stato persistente del controllo viene caricata o salvata. È possibile utilizzare questa variabile anziché chiamare [CPropExchange:: GetVersion](../mfc/reference/cpropexchange-class.md#getversion).  
  
 Per ridurre lo spazio nel formato persistente per un **BOOL** proprietà (e per mantenerla compatibile con il formato prodotto da `PX_Bool`), è possibile archiviare la proprietà come un **BYTE**, come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#3](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_3.cpp)]  
  
 Si noti che nel caso di caricamento, viene utilizzata una variabile temporanea e il relativo valore viene assegnato, anziché eseguire il cast `m_boolProp` per un **BYTE** riferimento. La tecnica di cast darà origine a un solo byte di `m_boolProp` in fase di modifica, lasciando i byte rimanenti non inizializzati.  
  
 Per lo stesso controllo, è possibile ottimizzare l'inizializzazione del controllo eseguendo l'override [OnResetState](../mfc/reference/colecontrol-class.md#onresetstate) come indicato di seguito:  
  
 [!code-cpp[NVC_MFC_AxOpt#4](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_4.cpp)]  
  
 Sebbene `Serialize` e `OnResetState` sottoposti a override, il `DoPropExchange` funzione deve rimanere invariata, perché è ancora utilizzata per la persistenza nel formato contenitore delle proprietà. È importante mantenere tutte e tre di queste funzioni per garantire che il controllo gestisce le relative proprietà in modo coerente, indipendentemente dal fatto che la persistenza utilizza il meccanismo del contenitore.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

