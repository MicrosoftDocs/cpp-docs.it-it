---
title: Classi di sezioni critiche (ATL) e i modelli di threading | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.atl.threads.models
dev_langs: C++
helpviewer_keywords:
- ATL, critical sections
- ATL, multithreading
- threading [ATL], models
- critical sections
ms.assetid: 759f05ef-6285-4be6-a2cc-78572dd75146
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ef4d17e1fe6067c9cce36895c761f46d7d713b23
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="threading-models-and-critical-sections-classes"></a>I modelli e classi sezioni critiche del threading
Le classi seguenti definiscono un threading modello e sezione critica:  
  
-   [CAtlAutoThreadModule](../atl/reference/catlautothreadmodule-class.md) implementa un server di pool di thread, modello di apartment COM.  
  
-   [CAtlAutoThreadModuleT](../atl/reference/catlautothreadmodulet-class.md) fornisce metodi per l'implementazione di un server di pool di thread, modello di apartment COM.  
  
-   [CComMultiThreadModel](../atl/reference/ccommultithreadmodel-class.md) fornisce i metodi di thread-safe per incremento e decremento una variabile. Fornisce una sezione critica.  
  
-   [CComMultiThreadModelNoCS](../atl/reference/ccommultithreadmodelnocs-class.md) fornisce i metodi di thread-safe per incremento e decremento una variabile. Non è disponibile una sezione critica.  
  
-   [CComSingleThreadModel](../atl/reference/ccomsinglethreadmodel-class.md) fornisce metodi per l'incremento e decremento una variabile. Non è disponibile una sezione critica.  
  
-   [CComObjectThreadModel](../atl/reference/atl-typedefs.md#ccomobjectthreadmodel) determina la classe di modello di threading appropriata per una classe di oggetto singolo.  
  
-   [CComGlobalsThreadModel](../atl/reference/atl-typedefs.md#ccomglobalsthreadmodel) determina la classe di modello di threading appropriata per un oggetto che è disponibile a livello globale.  
  
-   [CComAutoCriticalSection](../atl/reference/ccomautocriticalsection-class.md) contiene metodi per ottenere e rilasciare una sezione critica. La sezione critica viene inizializzata automaticamente.  
  
-   [CComCriticalSection](../atl/reference/ccomcriticalsection-class.md) contiene metodi per ottenere e rilasciare una sezione critica. La sezione critica deve essere inizializzata in modo esplicito.  
  
-   [CComFakeCriticalSection](../atl/reference/ccomfakecriticalsection-class.md) riflette i metodi in `CComCriticalSection` senza fornire una sezione critica. I metodi in `CComFakeCriticalSection` non eseguire alcuna operazione.  
  
-   [CRTThreadTraits](../atl/reference/crtthreadtraits-class.md) fornisce la funzione di creazione di un thread di CRT. Utilizzare questa classe se il thread utilizzeranno le funzioni CRT.  
  
-   [Win32ThreadTraits](../atl/reference/win32threadtraits-class.md) fornisce la funzione di creazione di un thread di Windows. Utilizzare questa classe se il thread non utilizzerà le funzioni CRT.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../atl/atl-class-overview.md)

