---
title: Classe CMutex
ms.date: 11/04/2016
f1_keywords:
- CMutex
- AFXMT/CMutex
- AFXMT/CMutex::CMutex
helpviewer_keywords:
- CMutex [MFC], CMutex
ms.assetid: 6330c050-4f01-4195-a099-2029b92f8cf1
ms.openlocfilehash: 2d6f637ab4828b3e70df205ebf359ae45a940d60
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81363289"
---
# <a name="cmutex-class"></a>Classe CMutex

Rappresenta un "mutex", ovvero un oggetto di sincronizzazione che consente a un thread di accedere a una risorsa a vicenda.

## <a name="syntax"></a>Sintassi

```
class CMutex : public CSyncObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMutex::CMutex](#cmutex)|Costruisce un oggetto `CMutex`.|

## <a name="remarks"></a>Osservazioni

I mutex sono utili quando è possibile modificare i dati o altre risorse controllate un solo thread alla volta. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un thread alla volta. Utilizzando un `CMutex` oggetto per controllare l'elenco collegato, solo un thread alla volta può accedere all'elenco.

Per utilizzare `CMutex` un oggetto, costruire l'oggetto `CMutex` quando è necessario. Specificare il nome del mutex che si desidera attendere e che l'applicazione deve essere proprietaria inizialmente. È quindi possibile accedere al mutex quando il costruttore restituisce . Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) al termine dell'accesso alla risorsa controllata.

Un metodo alternativo `CMutex` per l'utilizzo di `CMutex` oggetti consiste nell'aggiungere una variabile di tipo come membro dati alla classe che si desidera controllare. Durante la costruzione dell'oggetto controllato, `CMutex` chiamare il costruttore del membro dati specificando se il mutex è inizialmente di proprietà, il nome del mutex (se verrà utilizzato oltre i limiti del processo) e gli attributi di sicurezza desiderati.

Per accedere alle `CMutex` risorse controllate dagli oggetti in questo modo, creare innanzitutto una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) o [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Chiamare quindi la funzione `Lock` membro dell'oggetto di blocco ( ad esempio, [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, il thread otterrà l'accesso alla risorsa, attenderà il rilascio della risorsa e l'accesso oppure attenderà che la risorsa venga rilasciata e svincolata, non riuscendo ad accedere alla risorsa. In ogni caso, l'accesso alla risorsa è stato eseguito in modo thread-safe. Per rilasciare la risorsa, utilizzare `Unlock` la funzione membro dell'oggetto di blocco (ad esempio, [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)) oppure consentire all'oggetto di blocco di non uscire dall'ambito.

Per ulteriori informazioni `CMutex` sull'utilizzo degli oggetti, vedere l'articolo [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CMutex`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt.h

## <a name="cmutexcmutex"></a><a name="cmutex"></a>CMutex::CMutex

Costruisce un oggetto denominato `CMutex` o senza nome.

```
CMutex(
    BOOL bInitiallyOwn = FALSE,
    LPCTSTR lpszName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```

### <a name="parameters"></a>Parametri

*bInizialmenteProprietà*<br/>
Specifica se il thread `CMutex` che crea l'oggetto inizialmente ha accesso alla risorsa controllata dal mutex.

*lpszName*<br/>
Nome dell'oggetto `CMutex`. Se esiste un altro mutex con lo stesso nome, è necessario *specificare lpszName* se l'oggetto verrà utilizzato oltre i limiti del processo. Se **NULL**, il mutex verrà senza nome. Se il nome corrisponde a un mutex `CMutex` esistente, il costruttore compila un nuovo oggetto che fa riferimento al mutex di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un mutex, la costruzione avrà esito negativo.

*LpsaAttribu*<br/>
Attributi di sicurezza per l'oggetto mutex. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Per accedere o `CMutex` rilasciare un oggetto, creare un [oggetto CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) e chiamare le relative funzioni membro [Lock](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) . Se `CMutex` l'oggetto viene utilizzato in `Unlock` modo autonomo, chiamare la relativa funzione membro per rilasciarlo.

> [!IMPORTANT]
> Dopo aver `CMutex` creato l'oggetto, utilizzare [GetLastError](/windows/win32/api/errhandlingapi/nf-errhandlingapi-getlasterror) per assicurarsi che il mutex non esistesse già. Se il mutex esisteva inaspettatamente, potrebbe indicare che un processo non autorizzato è accovacciato e potrebbe essere intenzionato a utilizzare il mutex maliziosamente. In questo caso, la procedura consigliata per la sicurezza è quella di chiudere l'handle e continuare come se si fosse verificato un errore nella creazione dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
