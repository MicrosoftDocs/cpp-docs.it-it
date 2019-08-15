---
title: ATL e il gestore del marshalling con modello di threading Free
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, free threaded marshaler
- free threaded marshaler
- threading [C++], marshaler in ATL
- threading [ATL], free threaded marshaler
- FTM in ATL
ms.assetid: 2db88a13-2217-4ebc-aa7e-432d5da902eb
ms.openlocfilehash: 94e4961c69e9441d160d72d9b72afcee3677e25f
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69491917"
---
# <a name="atl-and-the-free-threaded-marshaler"></a>ATL e il gestore del marshalling con modello di threading Free

La pagina attributi della creazione guidata oggetto semplice ATL fornisce un'opzione che consente alla classe di aggregare il gestore di marshalling a thread libero (FTM).

La procedura guidata genera il codice per creare un'istanza del gestore di marshalling a `FinalConstruct` thread libero in e rilascia `FinalRelease`tale istanza in. Una macro COM_INTERFACE_ENTRY_AGGREGATE viene aggiunta automaticamente alla mappa com per garantire che `QueryInterface` le richieste per [IMarshal](/windows/win32/api/objidlbase/nn-objidlbase-imarshal) siano gestite dal gestore di marshalling a thread libero.

Il gestore di marshalling a thread libero consente l'accesso diretto alle interfacce dell'oggetto da qualsiasi thread nello stesso processo, velocizzando le chiamate tra Apartment. Questa opzione è destinata alle classi che usano entrambi il modello di Threading.

Quando si usa questa opzione, le classi devono assumersi la responsabilità della thread safety dei propri dati. Inoltre, gli oggetti che aggregano il gestore di marshalling a thread libero e che devono usare i puntatori di interfaccia ottenuti da altri oggetti devono eseguire passaggi aggiuntivi per garantire che le interfacce siano sottoposte correttamente a marshalling. In genere, ciò implica l'archiviazione dei puntatori di interfaccia nella tabella di interfaccia globale (GIT) e il recupero del puntatore dal GIT ogni volta che viene usato. ATL fornisce la classe [CComGITPtr](../atl/reference/ccomgitptr-class.md) per consentire l'utilizzo di puntatori di interfaccia archiviati in git.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)<br/>
[CoCreateFreeThreadedMarshaler](/windows/win32/api/combaseapi/nf-combaseapi-cocreatefreethreadedmarshaler)<br/>
[IMarshal](/windows/win32/api/objidlbase/nn-objidlbase-imarshal)<br/>
[Quando usare la tabella dell'interfaccia globale](/windows/win32/com/when-to-use-the-global-interface-table)<br/>
[Problemi di threading del server in-process](/windows/win32/com/in-process-server-threading-issues)
