---
description: 'Altre informazioni su: modelli di threading e classi di sezioni critiche'
title: Modelli di threading e classi di sezioni critiche (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- ATL, critical sections
- ATL, multithreading
- threading [ATL], models
- critical sections
ms.assetid: 759f05ef-6285-4be6-a2cc-78572dd75146
ms.openlocfilehash: 51ad5a5f2f03bfe080395966d0c480615c49a109
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138281"
---
# <a name="threading-models-and-critical-sections-classes"></a>Classi di modelli di threading e sezioni critiche

Le classi seguenti definiscono un modello di threading e una sezione critica:

- [CAtlAutoThreadModule](../atl/reference/catlautothreadmodule-class.md) Implementa un server COM in pool di thread, con modello di Apartment.

- [CAtlAutoThreadModuleT](../atl/reference/catlautothreadmodulet-class.md) Fornisce metodi per l'implementazione di un server COM in pool di thread e di tipo Apartment.

- [CComMultiThreadModel](../atl/reference/ccommultithreadmodel-class.md) Fornisce metodi thread-safe per incrementare e decrementare una variabile. Fornisce una sezione critica.

- [CComMultiThreadModelNoCS](../atl/reference/ccommultithreadmodelnocs-class.md) Fornisce metodi thread-safe per incrementare e decrementare una variabile. Non fornisce una sezione critica.

- [CComSingleThreadModel](../atl/reference/ccomsinglethreadmodel-class.md) Fornisce metodi per incrementare e decrementare una variabile. Non fornisce una sezione critica.

- [CComObjectThreadModel](../atl/reference/atl-typedefs.md#ccomobjectthreadmodel) Determina la classe del modello di threading appropriata per una singola classe di oggetti.

- [CComGlobalsThreadModel](../atl/reference/atl-typedefs.md#ccomglobalsthreadmodel) Determina la classe del modello di threading appropriata per un oggetto disponibile a livello globale.

- [CComAutoCriticalSection](../atl/reference/ccomautocriticalsection-class.md) Contiene i metodi per ottenere e rilasciare una sezione critica. La sezione critica viene inizializzata automaticamente.

- [CComCriticalSection](../atl/reference/ccomcriticalsection-class.md) Contiene i metodi per ottenere e rilasciare una sezione critica. La sezione critica deve essere inizializzata in modo esplicito.

- [CComFakeCriticalSection](../atl/reference/ccomfakecriticalsection-class.md) Rispecchia i metodi in `CComCriticalSection` senza fornire una sezione critica. I metodi in `CComFakeCriticalSection` non eseguono alcuna operazione.

- [CRTThreadTraits](../atl/reference/crtthreadtraits-class.md) Fornisce la funzione di creazione per un thread CRT. Utilizzare questa classe se il thread utilizzerà funzioni CRT.

- [Win32ThreadTraits](../atl/reference/win32threadtraits-class.md) Fornisce la funzione di creazione per un thread di Windows. Utilizzare questa classe se il thread non utilizzerà funzioni CRT.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../atl/atl-class-overview.md)
