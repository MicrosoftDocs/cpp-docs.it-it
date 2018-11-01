---
title: 'Multithreading: Quando usare le classi di sincronizzazione di MFC'
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
ms.openlocfilehash: 63555236ec41ce0a28d82aa676318b53a24169c3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50502843"
---
# <a name="multithreading-when-to-use-the-mfc-synchronization-classes"></a>Multithreading: Quando usare le classi di sincronizzazione di MFC

Le classi multithreading fornite con MFC rientrano in due categorie: gli oggetti di sincronizzazione ([CSyncObject](../mfc/reference/csyncobject-class.md), [CSemaphore](../mfc/reference/csemaphore-class.md), [CMutex](../mfc/reference/cmutex-class.md), [ CCriticalSection](../mfc/reference/ccriticalsection-class.md), e [CEvent](../mfc/reference/cevent-class.md)) e oggetti di sincronizzazione accesso ([CMultiLock](../mfc/reference/cmultilock-class.md) e [CSingleLock](../mfc/reference/csinglelock-class.md)).

Classi di sincronizzazione vengono usate quando l'accesso a una risorsa deve essere controllato per assicurare l'integrità della risorsa. Accesso delle classi di sincronizzazione per ottenere l'accesso a tali risorse controllate. In questo argomento viene descritto quando utilizzare ciascuna classe.

Per determinare quale classe di sincronizzazione è consigliabile usare, richiedere la serie di domande seguenti:

1. L'applicazione deve attendere per un evento prima di poter accedere alla risorsa (ad esempio, i dati devono essere ricevuti da una porta di comunicazione prima può essere scritta in un file)?

   In caso affermativo, usare `CEvent`.

2. Possa più di un thread all'interno di accesso dell'applicazione stessa questa risorsa in una sola volta (ad esempio, l'applicazione consente fino a cinque windows con le viste nello stesso documento)?

   In caso affermativo, usare `CSemaphore`.

3. Se più applicazioni possono utilizzare questa risorsa (ad esempio, la risorsa è in una DLL)?

   In caso affermativo, usare `CMutex`.

   Se no, usare `CCriticalSection`.

`CSyncObject` non viene mai usato direttamente. È la classe di base per altri quattro classi di sincronizzazione.

## <a name="example-1-using-three-synchronization-classes"></a>Esempio 1: Utilizzo di tre classi di sincronizzazione

Ad esempio, eseguire un'applicazione che gestisce un elenco collegato dell'account. Questa applicazione consente fino a tre account da esaminare in finestre separate, ma solo uno può essere aggiornato in qualsiasi momento specifico. Quando viene aggiornato un account, i dati aggiornati vengono inviati attraverso la rete a un archivio dati.

Questa applicazione di esempio Usa tutti i tre tipi di classi di sincronizzazione. Poiché è consentito un massimo di tre account da esaminare in una sola volta, utilizza `CSemaphore` per limitare l'accesso a tre oggetti di visualizzazione. Quando si tenta di visualizzare un quarto account si verifica, l'applicazione sia in attesa fino a quando una delle prime tre finestre chiude o si verifica un errore. Quando viene aggiornato un account, l'applicazione usa `CCriticalSection` per garantire che solo un account venga aggiornato contemporaneamente. Dopo l'aggiornamento ha esito positivo, viene segnalato `CEvent`, che rilascia un thread in attesa per l'evento venga segnalato. Questo thread invia i dati di nuovo all'archivio dati.

## <a name="example-2-using-synchronization-access-classes"></a>Esempio 2: Uso di classi di accesso di sincronizzazione

Scelta della classe da usare l'accesso di sincronizzazione è ancora più semplice. Se l'applicazione viene eseguito l'accesso a una singola risorsa controllata, usare `CSingleLock`. Se è richiesto l'accesso a una delle numerose risorse controllate, usare `CMultiLock`. Nell'esempio 1, `CSingleLock` sarebbe stata utilizzata, perché in ogni caso è necessaria solo una risorsa in un determinato momento.

Per informazioni sull'uso delle classi di sincronizzazione, vedere [Multithreading: come usare le classi di sincronizzazione](multithreading-how-to-use-the-synchronization-classes.md). Per informazioni sulla sincronizzazione, vedere [sincronizzazione](/windows/desktop/Sync/synchronization) nel SDK di Windows. Per informazioni sul supporto del multithreading in MFC, vedere [Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md).

## <a name="see-also"></a>Vedere anche

[Multithreading con C++ e MFC](multithreading-with-cpp-and-mfc.md)