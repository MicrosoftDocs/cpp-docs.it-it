---
title: Classe CSemaphore
ms.date: 11/04/2016
f1_keywords:
- CSemaphore
- AFXMT/CSemaphore
- AFXMT/CSemaphore::CSemaphore
helpviewer_keywords:
- CSemaphore [MFC], CSemaphore
ms.assetid: 385fc7e4-8f86-4be2-85e1-d23b38c12f7f
ms.openlocfilehash: f2a05963f39393bcc73650beb44c5dbb8e5535ee
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57274219"
---
# <a name="csemaphore-class"></a>Classe CSemaphore

Un oggetto della classe `CSemaphore` rappresenta un "semaforo", ovvero un oggetto di sincronizzazione che consente un numero limitato di thread in uno o più processi di accedere a un mantiene un conteggio del numero di thread che accedono attualmente a una risorsa specificata.

## <a name="syntax"></a>Sintassi

```
class CSemaphore : public CSyncObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSemaphore::CSemaphore](#csemaphore)|Costruisce un oggetto `CSemaphore`.|

## <a name="remarks"></a>Note

I semafori sono utili per controllare l'accesso a una risorsa condivisa che può supportare solo un numero limitato di utenti. Il numero corrente del `CSemaphore` oggetto è il numero di utenti aggiuntivi consentiti. Quando il conteggio raggiunge lo zero, tutti i tentativi di usare la risorsa controllata dal `CSemaphore` oggetto verrà inserito in una coda di sistema e attesa entrambi timeout o il numero maggiore di 0. Viene specificato il numero massimo di utenti che possono accedere alla risorsa controllata in una sola volta durante la costruzione del `CSemaphore` oggetto.

Usare un `CSemaphore` dell'oggetto, costruire il `CSemaphore` oggetto quando è necessario. Specificare il nome del semaforo di cui si vuole attendere, e che l'applicazione deve inizialmente esserne il proprietario. È quindi possibile accedere al semaforo quando viene restituito il costruttore. Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) al termine l'accesso alla risorsa controllata.

Un metodo alternativo per l'utilizzo `CSemaphore` oggetti consiste nell'aggiungere una variabile di tipo `CSemaphore` come membro dei dati per la classe di cui effettuare il controllo. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CSemaphore` membro dati specificando iniziale di accesso count, numero massimo di accesso, nome del semaforo (se che verrà usato nei limiti di processo) e gli attributi di sicurezza desiderato.

Per accedere alle risorse controllate da `CSemaphore` oggetti in questo modo, prima di tutto creare una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) oppure digitare [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Quindi chiamare l'oggetto di blocco `Lock` funzione membro (ad esempio [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, i thread verranno sia ottenere l'accesso alla risorsa, attendere che la risorsa essere rilasciato e ottenere l'accesso, attendere la risorsa deve essere rilasciato e raggiungere il timeout non riesce ad accedere alla risorsa. In ogni caso, la risorsa è stato eseguito l'accesso in modo thread-safe. Per rilasciare la risorsa, usare l'oggetto di blocco `Unlock` funzione membro (ad esempio [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)), o consentire l'oggetto di blocco uscire dall'ambito.

In alternativa, è possibile creare un `CSemaphore` oggetti autonomi e accedervi in modo esplicito prima di tentare di accedere alla risorsa controllata. Questo metodo, mentre più chiaro a chiunque la lettura del codice sorgente, è più soggetto a errori.

Per altre informazioni su come usare `CSemaphore` oggetti, vedere l'articolo [Multithreading: Come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CSemaphore`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

##  <a name="csemaphore"></a>  CSemaphore::CSemaphore

Costruisce un nome o senza nome `CSemaphore` oggetto.

```
CSemaphore(
    LONG lInitialCount = 1,
    LONG lMaxCount = 1,
    LPCTSTR pstrName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttributes = NULL);
```

### <a name="parameters"></a>Parametri

*lInitialCount*<br/>
Il conteggio di utilizzo iniziale per il semaforo. Deve essere maggiore o uguale a 0 e minore o uguale a *lMaxCount*.

*lMaxCount*<br/>
Il conteggio di utilizzo massimo per il semaforo. Deve essere maggiore di 0.

*pstrName*<br/>
Il nome del semaforo. Deve essere specificato se si accederà al semaforo attraverso i limiti di processo. Se `NULL`, l'oggetto sarà senza nome. Se il nome corrisponde a un semaforo esistente, il costruttore crea un nuovo `CSemaphore` oggetto cui fa riferimento il semaforo di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un semaforo, la creazione avrà esito negativo.

*lpsaAttributes*<br/>
Attributi di sicurezza per l'oggetto semaforo. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) nel SDK di Windows.

### <a name="remarks"></a>Note

Per accedere o rilasciare un `CSemaphore` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro.

> [!IMPORTANT]
>  Dopo aver creato il `CSemaphore` dell'oggetto, utilizzare [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esisteva. Se il mutex non erano presenti in modo imprevisto, potrebbe indicare un processo è squatting e potrebbe voler usare mutex da utenti malintenzionati. In questo caso, la procedura di altissimo di sicurezza consigliata è di chiudere l'handle e continuare come se si è verificato un errore nella creazione dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
