---
description: 'Altre informazioni su: multithreading: quando usare le classi di sincronizzazione MFC'
title: 'Multithreading: quando usare le classi di sincronizzazione MFC'
ms.date: 08/27/2018
helpviewer_keywords:
- threading [MFC], synchronization classes
- resources [C++], multithreading
- synchronization classes [C++]
- synchronization [C++], multithreading
- controlled resource access [C++]
- synchronization access classes [C++]
- threading [C++], synchronization
- multithreading [C++], synchronization classes
ms.assetid: 4914f54e-68ac-438f-93c9-c013455a657e
ms.openlocfilehash: 02776bc61ed702ee81ce0f7373dd442a9fc3d446
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97149851"
---
# <a name="multithreading-when-to-use-the-mfc-synchronization-classes"></a>Multithreading: quando usare le classi di sincronizzazione MFC

Le classi multithread fornite con MFC rientrano in due categorie: oggetti di sincronizzazione ([CSyncObject](../mfc/reference/csyncobject-class.md), [CSemaphore](../mfc/reference/csemaphore-class.md), [CMutex](../mfc/reference/cmutex-class.md), [CCriticalSection](../mfc/reference/ccriticalsection-class.md)e [CEvent](../mfc/reference/cevent-class.md)) e oggetti di accesso alla sincronizzazione ([CMultiLock](../mfc/reference/cmultilock-class.md) e [CSingleLock](../mfc/reference/csinglelock-class.md)).

Le classi di sincronizzazione vengono usate quando è necessario controllare l'accesso a una risorsa per garantire l'integrità della risorsa. Per ottenere l'accesso a queste risorse controllate vengono usate le classi di accesso alla sincronizzazione. In questo argomento viene descritto quando utilizzare ogni classe.

Per determinare la classe di sincronizzazione da usare, porre le domande seguenti:

1. L'applicazione deve attendere che si verifichi un evento prima che possa accedere alla risorsa (ad esempio, i dati devono essere ricevuti da una porta di comunicazione prima di poter essere scritti in un file)?

   In caso affermativo, usare `CEvent` .

2. È possibile che più thread all'interno della stessa applicazione accedano a questa risorsa in una sola volta. ad esempio, l'applicazione consente fino a cinque finestre con viste nello stesso documento.

   In caso affermativo, usare `CSemaphore` .

3. Questa risorsa può essere usata da più di un'applicazione (ad esempio, la risorsa si trova in una DLL)?

   In caso affermativo, usare `CMutex` .

   Se no, usare `CCriticalSection` .

`CSyncObject` non viene mai utilizzato direttamente. Si tratta della classe base per le altre quattro classi di sincronizzazione.

## <a name="example-1-using-three-synchronization-classes"></a>Esempio 1: uso di tre classi di sincronizzazione

Si prenda ad esempio un'applicazione che gestisce un elenco collegato di account. Questa applicazione consente di esaminare fino a tre account in finestre separate, ma solo una può essere aggiornata in un determinato momento. Quando viene aggiornato un account, i dati aggiornati vengono inviati in rete a un archivio dati.

Questa applicazione di esempio utilizza tutti e tre i tipi di classi di sincronizzazione. Poiché consente di esaminare fino a un massimo di tre account contemporaneamente, viene usato `CSemaphore` per limitare l'accesso a tre oggetti visualizzazione. Quando si verifica un quarto account, l'applicazione attende fino alla chiusura di una delle prime tre finestre o l'esito negativo. Quando un account viene aggiornato, l'applicazione usa `CCriticalSection` per garantire che un solo account venga aggiornato alla volta. Una volta completato l'aggiornamento, viene segnalato `CEvent` , che rilascia un thread in attesa che venga segnalato l'evento. Questo thread invia i nuovi dati all'archivio dati.

## <a name="example-2-using-synchronization-access-classes"></a>Esempio 2: uso delle classi di accesso di sincronizzazione

La scelta della classe di accesso alla sincronizzazione da usare è ancora più semplice. Se l'applicazione è interessata ad accedere a una sola risorsa controllata, usare `CSingleLock` . Se è necessario accedere a una qualsiasi di una serie di risorse controllate, usare `CMultiLock` . Nell'esempio 1 `CSingleLock` sarebbe stato usato, perché in ogni caso è necessaria una sola risorsa in un determinato momento.

Per informazioni sul modo in cui vengono utilizzate le classi di sincronizzazione, vedere [multithreading: come utilizzare le classi di sincronizzazione](multithreading-how-to-use-the-synchronization-classes.md). Per informazioni sulla sincronizzazione, vedere [sincronizzazione](/windows/win32/Sync/synchronization) nella Windows SDK. Per informazioni sul supporto del multithreading in MFC, vedere [multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md).

## <a name="see-also"></a>Vedi anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)
