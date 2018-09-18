---
title: ATL e il Marshaler privo di thread | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ATL, free threaded marshaler
- free threaded marshaler
- threading [C++], marshaler in ATL
- threading [ATL], free threaded marshaler
- FTM in ATL
ms.assetid: 2db88a13-2217-4ebc-aa7e-432d5da902eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 60d8d81e772a6da66254d6e777c0cafa4fc8a296
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46069274"
---
# <a name="atl-and-the-free-threaded-marshaler"></a>ATL e il gestore del marshalling con modello di threading Free

Pagina di attributi ATL semplice oggetto della procedura guidata offre un'opzione che consente la classe deve aggregare il marshalling a thread gratuito (FTM).

La procedura guidata genera codice per creare un'istanza del gestore di marshalling a thread libero nel `FinalConstruct` rilasciare quell'istanza in `FinalRelease`. Una macro COM_INTERFACE_ENTRY_AGGREGATE viene automaticamente aggiunto alla mappa COM per assicurarsi che `QueryInterface` le richieste relative a [IMarshal](/windows/desktop/api/objidlbase/nn-objidlbase-imarshal) vengono gestiti dal gestore di marshalling a thread libero.

Il gestore di marshalling a thread libero consente l'accesso diretto alle interfacce dell'oggetto da qualsiasi thread nello stesso processo, velocizzando le chiamate tra apartment. Questa opzione è destinata alle classi che usano il modello di threading entrambe.

Quando si usa questa opzione, le classi devono assumersi la responsabilità per la thread safety dei propri dati. Inoltre, gli oggetti che il gestore di marshalling a thread libero di aggregazione ed è necessario usare i puntatori di interfaccia ottenuti da altri oggetti devono eseguire passaggi aggiuntivi per garantire che le interfacce in modo corretto vengono effettuato il marshalling. In genere, ciò comporta l'archiviazione dei puntatori a interfaccia nella tabella di interfaccia globale (GIT) e ottenere il puntatore del mouse da GIT ogni volta che viene usata. ATL fornisce la classe [CComGITPtr](../atl/reference/ccomgitptr-class.md) per poter utilizzare puntatori a interfaccia memorizzati in GIT.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[CoCreateFreeThreadedMarshaler](/windows/desktop/api/combaseapi/nf-combaseapi-cocreatefreethreadedmarshaler)<br/>
[IMarshal](/windows/desktop/api/objidlbase/nn-objidlbase-imarshal)<br/>
[Quando usare la tabella di interfaccia globale](/windows/desktop/com/when-to-use-the-global-interface-table)<br/>
[Problemi relativi al Threading di Server in-Process](/windows/desktop/com/in-process-server-threading-issues)

