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
ms.openlocfilehash: 26e1fd55d321b221f4732874d57d02a79c4c6398
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81318506"
---
# <a name="csemaphore-class"></a>Classe CSemaphore

Un oggetto `CSemaphore` di classe rappresenta un "semaforo", ovvero un oggetto di sincronizzazione che consente a un numero limitato di thread in uno o più processi di accedere a un mantiene un conteggio del numero di thread che accedono attualmente a una risorsa specificata.

## <a name="syntax"></a>Sintassi

```
class CSemaphore : public CSyncObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSemaphore::CSemaphore](#csemaphore)|Costruisce un oggetto `CSemaphore`.|

## <a name="remarks"></a>Osservazioni

I semafori sono utili per controllare l'accesso a una risorsa condivisa che può supportare solo un numero limitato di utenti. Il conteggio corrente `CSemaphore` dell'oggetto è il numero di utenti aggiuntivi consentiti. Quando il conteggio raggiunge lo zero, tutti i `CSemaphore` tentativi di utilizzare la risorsa controllata dall'oggetto verranno inseriti in una coda di sistema e attenderanno fino al timeout o il conteggio aumenta superiore a 0. Il numero massimo di utenti che possono accedere alla risorsa `CSemaphore` controllata contemporaneamente viene specificato durante la costruzione dell'oggetto.

Per utilizzare `CSemaphore` un oggetto, costruire l'oggetto `CSemaphore` quando è necessario. Specificare il nome del semaforo che si desidera attendere e che l'applicazione deve essere proprietaria inizialmente. È quindi possibile accedere al semaforo quando il costruttore restituisce . Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) al termine dell'accesso alla risorsa controllata.

Un metodo alternativo `CSemaphore` per l'utilizzo di `CSemaphore` oggetti consiste nell'aggiungere una variabile di tipo come membro dati alla classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, `CSemaphore` chiamare il costruttore del membro dati specificando il conteggio di accesso iniziale, il numero massimo di accessi, il nome del semaforo (se verrà utilizzato oltre i limiti del processo) e gli attributi di sicurezza desiderati.

Per accedere alle `CSemaphore` risorse controllate dagli oggetti in questo modo, creare innanzitutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Chiamare quindi la funzione `Lock` membro dell'oggetto di blocco ( ad esempio, [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, il thread otterrà l'accesso alla risorsa, attenderà il rilascio della risorsa e l'accesso oppure attenderà che la risorsa venga rilasciata e svincolata, non riuscendo ad accedere alla risorsa. In ogni caso, l'accesso alla risorsa è stato eseguito in modo thread-safe. Per rilasciare la risorsa, utilizzare `Unlock` la funzione membro dell'oggetto di blocco (ad esempio, [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)) oppure consentire all'oggetto di blocco di non uscire dall'ambito.

In alternativa, è `CSemaphore` possibile creare un oggetto autonomo e accedervi in modo esplicito prima di tentare di accedere alla risorsa controllata. Questo metodo, sebbene sia più chiaro per qualcuno che legge il codice sorgente, è più soggetto a errori.

Per ulteriori informazioni sull'utilizzo `CSemaphore` degli oggetti, vedere l'articolo [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CSemaphore`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt.h

## <a name="csemaphorecsemaphore"></a><a name="csemaphore"></a>CSemaphore::CSemaphore

Costruisce un oggetto denominato `CSemaphore` o senza nome.

```
CSemaphore(
    LONG lInitialCount = 1,
    LONG lMaxCount = 1,
    LPCTSTR pstrName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttributes = NULL);
```

### <a name="parameters"></a>Parametri

*LInitialCount (Conteggio informazioni in base al contenuto in*<br/>
Conteggio di utilizzo iniziale per il semaforo. Deve essere maggiore o uguale a 0 e minore o uguale a *lMaxCount*.

*lMaxCount (conteggio massimo informazioni)*<br/>
Conteggio di utilizzo massimo per il semaforo. Deve essere maggiore di 0.

*pstrName (nome di database)*<br/>
Nome del semaforo. Deve essere fornito se si accede al semaforo attraverso i limiti del processo. Se `NULL`, l'oggetto verrà senza nome. Se il nome corrisponde a un semaforo `CSemaphore` esistente, il costruttore compila un nuovo oggetto che fa riferimento al semaforo di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un semaforo, la costruzione avrà esito negativo.

*LpsaAttributi*<br/>
Attributi di sicurezza per l'oggetto semaforo. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Per accedere o `CSemaphore` rilasciare un oggetto, creare un [oggetto CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) e chiamare le relative funzioni membro [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) .

> [!IMPORTANT]
> Dopo aver `CSemaphore` creato l'oggetto, utilizzare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per assicurarsi che il mutex non esistesse già. Se il mutex esisteva inaspettatamente, potrebbe indicare che un processo non autorizzato è accovacciato e potrebbe essere intenzionato a utilizzare il mutex maliziosamente. In questo caso, la procedura consigliata per la sicurezza è quella di chiudere l'handle e continuare come se si fosse verificato un errore nella creazione dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
