---
title: ATL e il gestore di marshalling di thread | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- ATL, free threaded marshaler
- free threaded marshaler
- threading [C++], marshaler in ATL
- threading [ATL], free threaded marshaler
- FTM in ATL
ms.assetid: 2db88a13-2217-4ebc-aa7e-432d5da902eb
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ed5660be9a5559d5f51d0cdb0ec2e5bc185bd0b4
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="atl-and-the-free-threaded-marshaler"></a>ATL e il gestore del marshalling con modello di threading Free
Pagina di attributi ATL semplice oggetto della procedura guidata fornisce un'opzione che consente la classe di aggregazione gestore (FTM).  
  
 La procedura guidata genera codice per creare un'istanza del gestore del marshalling con modello di threading free nel `FinalConstruct` e rilasciare tale istanza in `FinalRelease`. Oggetto `COM_INTERFACE_ENTRY_AGGREGATE` (macro) viene automaticamente aggiunto alla mappa COM per garantire che `QueryInterface` le richieste di [IMarshal](http://msdn.microsoft.com/library/windows/desktop/dd542707) vengono gestiti dal gestore di marshalling a thread libero.  
  
 Il gestore di marshalling a thread libero consente l'accesso diretto alle interfacce dell'oggetto da qualsiasi thread nello stesso processo, velocizzare le chiamate tra apartment. Questa opzione è riservata per le classi che utilizzano il modello di threading entrambi.  
  
 Quando si utilizza questa opzione, le classi devono garantire la thread safety dei propri dati. Inoltre, gli oggetti che il gestore di marshalling a thread libero di aggregazione e l'esigenza di utilizzare puntatori a interfacce ottenuti da altri oggetti è necessario eseguire passaggi aggiuntivi per garantire che le interfacce in modo corretto vengono effettuato il marshalling. In genere questo implica l'archiviazione dei puntatori a interfaccia in una tabella di interfaccia globale (GIT) e ottenere il puntatore da GIT ogni volta che viene utilizzato. ATL fornisce la classe [CComGITPtr](../atl/reference/ccomgitptr-class.md) consentono di utilizzare puntatori di interfaccia archiviati nella tabella GIT.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)   
 [CoCreateFreeThreadedMarshaler](http://msdn.microsoft.com/library/windows/desktop/ms694500)   
 [IMarshal](http://msdn.microsoft.com/library/windows/desktop/dd542707)   
 [Quando utilizzare la tabella di interfaccia globale](http://msdn.microsoft.com/library/windows/desktop/ms693729)   
 [Problemi relativi al Threading di Server in-Process](http://msdn.microsoft.com/library/windows/desktop/ms687205)

