---
title: Modelli di threading e sezioni critiche classi (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, critical sections
- ATL, multithreading
- threading [ATL], models
- critical sections
ms.assetid: 759f05ef-6285-4be6-a2cc-78572dd75146
ms.openlocfilehash: 98db15a1fee2637b9493b538468fa9446015404f
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57808157"
---
# <a name="threading-models-and-critical-sections-classes"></a>Modelli di threading e le classi di sezioni critiche

Le classi seguenti definiscono un threading modello e sezione critica:

- [CAtlAutoThreadModule](../atl/reference/catlautothreadmodule-class.md) implementa un pool di thread di modello di apartment COM server.

- [CAtlAutoThreadModuleT](../atl/reference/catlautothreadmodulet-class.md) fornisce metodi per l'implementazione di un server COM in pool di thread, modello di apartment.

- [CComMultiThreadModel](../atl/reference/ccommultithreadmodel-class.md) fornisce metodi thread-safe per incremento e decremento una variabile. Fornisce una sezione critica.

- [CComMultiThreadModelNoCS](../atl/reference/ccommultithreadmodelnocs-class.md) fornisce metodi thread-safe per incremento e decremento una variabile. Non è disponibile una sezione critica.

- [CComSingleThreadModel](../atl/reference/ccomsinglethreadmodel-class.md) fornisce metodi per l'incremento e decremento una variabile. Non è disponibile una sezione critica.

- [CComObjectThreadModel](../atl/reference/atl-typedefs.md#ccomobjectthreadmodel) determina la classe di modello di threading appropriata per una classe di oggetto singolo.

- [CComGlobalsThreadModel](../atl/reference/atl-typedefs.md#ccomglobalsthreadmodel) determina la classe di modello di threading appropriata per un oggetto che è disponibile a livello globale.

- [CComAutoCriticalSection](../atl/reference/ccomautocriticalsection-class.md) contiene metodi per ottenere e rilasciare una sezione critica. La sezione critica viene inizializzata automaticamente.

- [CComCriticalSection](../atl/reference/ccomcriticalsection-class.md) contiene metodi per ottenere e rilasciare una sezione critica. La sezione critica deve essere inizializzata in modo esplicito.

- [CComFakeCriticalSection](../atl/reference/ccomfakecriticalsection-class.md) rispecchia i metodi in `CComCriticalSection` senza fornire una sezione critica. I metodi in `CComFakeCriticalSection` non eseguono alcuna operazione.

- [CRTThreadTraits](../atl/reference/crtthreadtraits-class.md) fornisce la funzione di creazione di un thread di CRT. Utilizzare questa classe se il thread utilizza le funzioni CRT.

- [Win32ThreadTraits](../atl/reference/win32threadtraits-class.md) fornisce la funzione di creazione di un thread di Windows. Utilizzare questa classe se il thread non useranno le funzioni CRT.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../atl/atl-class-overview.md)
