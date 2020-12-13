---
description: 'Altre informazioni su: classe CMutex'
title: Classe CMutex
ms.date: 11/04/2016
f1_keywords:
- CMutex
- AFXMT/CMutex
- AFXMT/CMutex::CMutex
helpviewer_keywords:
- CMutex [MFC], CMutex
ms.assetid: 6330c050-4f01-4195-a099-2029b92f8cf1
ms.openlocfilehash: 4890a99d52fb8142bac0cc25d6a23ef6dbcaed5b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331495"
---
# <a name="cmutex-class"></a>Classe CMutex

Rappresenta un "mutex", un oggetto di sincronizzazione che consente a un thread di accedere a una risorsa in modo reciprocamente esclusivo.

## <a name="syntax"></a>Sintassi

```
class CMutex : public CSyncObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMutex:: CMutex](#cmutex)|Costruisce un oggetto `CMutex`.|

## <a name="remarks"></a>Commenti

I mutex sono utili quando è possibile consentire a un solo thread alla volta di modificare i dati o altre risorse controllate. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un thread alla volta. Utilizzando un `CMutex` oggetto per controllare l'elenco collegato, un solo thread alla volta può ottenere l'accesso all'elenco.

Per usare un `CMutex` oggetto, costruire l' `CMutex` oggetto quando è necessario. Specificare il nome del mutex che si desidera attendere e che l'applicazione deve essere inizialmente proprietaria. È quindi possibile accedere al mutex quando il costruttore restituisce. Chiamare [CSyncObject:: Unlock](../../mfc/reference/csyncobject-class.md#unlock) dopo aver eseguito l'accesso alla risorsa controllata.

Un metodo alternativo per l'utilizzo di `CMutex` oggetti consiste nell'aggiungere una variabile di tipo `CMutex` come membro dati alla classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CMutex` membro dati che specifica se il mutex è inizialmente di proprietà, il nome del mutex (se verrà usato tra i limiti del processo) e gli attributi di sicurezza desiderati.

Per accedere alle risorse controllate dagli `CMutex` oggetti in questo modo, creare prima di tutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Chiamare quindi la funzione membro dell'oggetto lock `Lock` , ad esempio [CSingleLock:: Lock](../../mfc/reference/csinglelock-class.md#lock). A questo punto, il thread otterrà l'accesso alla risorsa, attenderà che la risorsa venga rilasciata e ottenga l'accesso oppure attenda che la risorsa venga rilasciata e si verifichi il timeout, in modo da ottenere l'accesso alla risorsa. In ogni caso, l'accesso alla risorsa è stato eseguito in modo thread-safe. Per rilasciare la risorsa, usare la funzione membro dell'oggetto lock `Unlock` (ad esempio, [CSingleLock:: Unlock](../../mfc/reference/csinglelock-class.md#unlock)) o consentire all'oggetto Lock di uscire dall'ambito.

Per ulteriori informazioni sull'utilizzo degli `CMutex` oggetti, vedere l'articolo [multithreading: come utilizzare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CMutex`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

## <a name="cmutexcmutex"></a><a name="cmutex"></a> CMutex:: CMutex

Costruisce un oggetto denominato o senza nome `CMutex` .

```
CMutex(
    BOOL bInitiallyOwn = FALSE,
    LPCTSTR lpszName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```

### <a name="parameters"></a>Parametri

*bInitiallyOwn*<br/>
Specifica se il thread che crea l' `CMutex` oggetto ha inizialmente accesso alla risorsa controllata dal mutex.

*lpszName*<br/>
Nome dell'oggetto `CMutex`. Se esiste un altro mutex con lo stesso nome, è necessario specificare *lpszName* se l'oggetto verrà usato tra i limiti del processo. Se **null**, il mutex verrà senza nome. Se il nome corrisponde a un mutex esistente, il costruttore compila un nuovo `CMutex` oggetto che fa riferimento al mutex di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un mutex, la costruzione avrà esito negativo.

*lpsaAttribute*<br/>
Attributi di sicurezza per l'oggetto mutex. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) nel Windows SDK.

### <a name="remarks"></a>Commenti

Per accedere o rilasciare un `CMutex` oggetto, creare un oggetto [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) e chiamare le funzioni membro [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) . Se l' `CMutex` oggetto viene usato autonomamente, chiamare la relativa `Unlock` funzione membro per rilasciarlo.

> [!IMPORTANT]
> Dopo aver creato l' `CMutex` oggetto, utilizzare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per verificare che il mutex non esista già. Se il mutex esisteva in modo imprevisto, potrebbe indicare che un processo non autorizzato è accovacciato e potrebbe avere intenzione di usare il mutex in modo dannoso. In questo caso, la procedura consigliata per la sicurezza è quella di chiudere l'handle e continuare come se si fosse verificato un errore durante la creazione dell'oggetto.

## <a name="see-also"></a>Vedi anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
