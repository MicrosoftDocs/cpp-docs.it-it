---
description: 'Altre informazioni su: classe CSemaphore'
title: Classe CSemaphore
ms.date: 11/04/2016
f1_keywords:
- CSemaphore
- AFXMT/CSemaphore
- AFXMT/CSemaphore::CSemaphore
helpviewer_keywords:
- CSemaphore [MFC], CSemaphore
ms.assetid: 385fc7e4-8f86-4be2-85e1-d23b38c12f7f
ms.openlocfilehash: 102b7ac9d7f934e3a04783c9ab537a858541c780
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97264700"
---
# <a name="csemaphore-class"></a>Classe CSemaphore

Un oggetto della classe `CSemaphore` rappresenta un "semaforo", ovvero un oggetto di sincronizzazione che consente a un numero limitato di thread in uno o più processi di accedere a e mantiene un conteggio del numero di thread che accedono attualmente a una risorsa specificata.

## <a name="syntax"></a>Sintassi

```
class CSemaphore : public CSyncObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CSemaphore:: CSemaphore](#csemaphore)|Costruisce un oggetto `CSemaphore`.|

## <a name="remarks"></a>Commenti

I semafori sono utili per controllare l'accesso a una risorsa condivisa che può supportare solo un numero limitato di utenti. Il conteggio corrente dell' `CSemaphore` oggetto è il numero di utenti aggiuntivi consentiti. Quando il conteggio raggiunge lo zero, tutti i tentativi di usare la risorsa controllata dall' `CSemaphore` oggetto verranno inseriti in una coda di sistema e attendono il timeout o il conteggio è maggiore di 0. Il numero massimo di utenti che possono accedere alla risorsa controllata in una sola volta viene specificato durante la costruzione dell' `CSemaphore` oggetto.

Per usare un `CSemaphore` oggetto, costruire l' `CSemaphore` oggetto quando è necessario. Specificare il nome del semaforo che si desidera attendere e che l'applicazione deve essere inizialmente proprietaria. È quindi possibile accedere al semaforo quando viene restituito il costruttore. Chiamare [CSyncObject:: Unlock](../../mfc/reference/csyncobject-class.md#unlock) dopo aver eseguito l'accesso alla risorsa controllata.

Un metodo alternativo per l'utilizzo di `CSemaphore` oggetti consiste nell'aggiungere una variabile di tipo `CSemaphore` come membro dati alla classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CSemaphore` membro dati specificando il numero di accessi iniziale, il numero massimo di accessi, il nome del semaforo (se verrà usato tra i limiti del processo) e gli attributi di sicurezza desiderati.

Per accedere alle risorse controllate dagli `CSemaphore` oggetti in questo modo, creare prima di tutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Chiamare quindi la funzione membro dell'oggetto lock `Lock` , ad esempio [CSingleLock:: Lock](../../mfc/reference/csinglelock-class.md#lock). A questo punto, il thread otterrà l'accesso alla risorsa, attenderà che la risorsa venga rilasciata e ottenga l'accesso oppure attenda che la risorsa venga rilasciata e si verifichi il timeout, in modo da ottenere l'accesso alla risorsa. In ogni caso, l'accesso alla risorsa è stato eseguito in modo thread-safe. Per rilasciare la risorsa, usare la funzione membro dell'oggetto lock `Unlock` (ad esempio, [CSingleLock:: Unlock](../../mfc/reference/csinglelock-class.md#unlock)) o consentire all'oggetto Lock di uscire dall'ambito.

In alternativa, è possibile creare un `CSemaphore` oggetto autonomo e accedervi in modo esplicito prima di tentare di accedere alla risorsa controllata. Questo metodo, benché più chiaro per qualcuno che legge il codice sorgente, è più soggetto a errori.

Per ulteriori informazioni sull'utilizzo degli `CSemaphore` oggetti, vedere l'articolo [multithreading: come utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CSemaphore`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

## <a name="csemaphorecsemaphore"></a><a name="csemaphore"></a> CSemaphore:: CSemaphore

Costruisce un oggetto denominato o senza nome `CSemaphore` .

```
CSemaphore(
    LONG lInitialCount = 1,
    LONG lMaxCount = 1,
    LPCTSTR pstrName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttributes = NULL);
```

### <a name="parameters"></a>Parametri

*lInitialCount*<br/>
Conteggio di utilizzo iniziale per il semaforo. Deve essere maggiore o uguale a 0 e minore o uguale a *lMaxCount*.

*lMaxCount*<br/>
Numero massimo di utilizzi per il semaforo. Deve essere maggiore di 0.

*pstrName*<br/>
Nome del semaforo. Deve essere specificato se il semaforo sarà accessibile attraverso i limiti del processo. Se `NULL` , l'oggetto sarà senza nome. Se il nome corrisponde a un semaforo esistente, il costruttore compila un nuovo `CSemaphore` oggetto che fa riferimento al semaforo di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un semaforo, la costruzione avrà esito negativo.

*lpsaAttributes*<br/>
Attributi di sicurezza per l'oggetto semaforo. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) nel Windows SDK.

### <a name="remarks"></a>Commenti

Per accedere o rilasciare un `CSemaphore` oggetto, creare un oggetto [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) e chiamare le funzioni membro [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) .

> [!IMPORTANT]
> Dopo aver creato l' `CSemaphore` oggetto, utilizzare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per verificare che il mutex non esista già. Se il mutex esisteva in modo imprevisto, potrebbe indicare che un processo non autorizzato è accovacciato e potrebbe avere intenzione di usare il mutex in modo dannoso. In questo caso, la procedura consigliata per la sicurezza è quella di chiudere l'handle e continuare come se si fosse verificato un errore durante la creazione dell'oggetto.

## <a name="see-also"></a>Vedi anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
