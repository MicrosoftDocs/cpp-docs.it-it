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
ms.openlocfilehash: d03966cb61e1ccab3f8f3886638efdf95a534a73
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930313"
---
# <a name="optimizing-persistence-and-initialization"></a>Ottimizzazione di persistenza e inizializzazione
Per impostazione predefinita, la persistenza e inizializzazione in un controllo vengono gestite dal `DoPropExchange` funzione membro. In un tipico controllo, questa funzione contiene chiamate a diversi **px** funzioni (`PX_Color`, `PX_Font`e così via), uno per ogni proprietà.  
  
 Questo approccio presenta il vantaggio che un singolo `DoPropExchange` implementazione può essere usata per l'inizializzazione, per la persistenza in formato binario e per la persistenza nel formato cosiddetti "proprietà" utilizzato da alcuni contenitori. Questa uno funzione fornisce tutte le informazioni sulle proprietà e i relativi valori predefiniti in un'unica posizione.  
  
 Tuttavia, questo generalità risvolti negativi, ovvero l'efficienza. Il **px** funzioni ottenere loro flessibilità alle implementazioni multilivello che sono implicitamente meno efficienti rispetto agli approcci più diretti, ma è meno flessibili. Inoltre, se un controllo passa un valore predefinito da un **px** funzione, valore predefinito deve essere fornito ogni volta, anche in situazioni in cui il valore predefinito non può essere necessariamente utilizzato. Se la generazione del valore predefinito è un'operazione non semplice (ad esempio, quando il valore viene ottenuto da una proprietà di ambiente), quindi extra inutili operazione viene eseguita nei casi in cui non viene utilizzato il valore predefinito.  
  
 È possibile migliorare le prestazioni della persistenza binaria del controllo eseguendo l'override del controllo `Serialize` (funzione). L'implementazione predefinita di questa funzione membro effettua una chiamata ai `DoPropExchange` (funzione). Con una sostituzione, è possibile fornire un'implementazione più diretta per la persistenza binaria. Ad esempio, si consideri questo `DoPropExchange` funzione:  
  
 [!code-cpp[NVC_MFC_AxOpt#1](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_1.cpp)]  
  
 Per migliorare le prestazioni della persistenza binaria del controllo, è possibile eseguire l'override di `Serialize` funzionare nel modo seguente:  
  
 [!code-cpp[NVC_MFC_AxOpt#2](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_2.cpp)]  
  
 Il `dwVersion` variabile locale può essere utilizzata per rilevare la versione dello stato persistente del controllo viene caricata o salvata. È possibile usare questa variabile anziché chiamando [CPropExchange:: GetVersion](../mfc/reference/cpropexchange-class.md#getversion).  
  
 Per salvare uno spazio ridotto in formato permanente per un **BOOL** proprietà (e per mantenerla compatibile con il formato prodotto da `PX_Bool`), è possibile archiviare la proprietà come un **BYTE**, come segue:  
  
 [!code-cpp[NVC_MFC_AxOpt#3](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_3.cpp)]  
  
 Si noti che nel caso di caricamento, viene usata una variabile temporanea e quindi viene assegnato il suo valore, anziché eseguire il cast *m_boolProp* a un **BYTE** riferimento. La tecnica di cast comporterebbe un solo byte di *m_boolProp* in fase di modifica, lasciando i byte rimanenti non inizializzati.  
  
 Per lo stesso controllo, è possibile ottimizzare l'inizializzazione del controllo eseguendo l'override [OnResetState](../mfc/reference/colecontrol-class.md#onresetstate) come indicato di seguito:  
  
 [!code-cpp[NVC_MFC_AxOpt#4](../mfc/codesnippet/cpp/optimizing-persistence-and-initialization_4.cpp)]  
  
 Sebbene `Serialize` e `OnResetState` è stato eseguito l'override, il `DoPropExchange` funzione deve essere conservata perché è ancora utilizzata per la persistenza nel formato contenitore delle proprietà. È importante mantenere tutte e tre di queste funzioni per garantire che il controllo gestisce le relative proprietà in modo coerente, indipendentemente dalla persistenza meccanismo il contenitore utilizza.  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli ActiveX MFC: ottimizzazione](../mfc/mfc-activex-controls-optimization.md)

