---
title: Classe CMutex | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMutex
- AFXMT/CMutex
- AFXMT/CMutex::CMutex
dev_langs:
- C++
helpviewer_keywords:
- CMutex [MFC], CMutex
ms.assetid: 6330c050-4f01-4195-a099-2029b92f8cf1
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 23270275103faac3af48a3627a5f5833140645e2
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50066746"
---
# <a name="cmutex-class"></a>Classe CMutex

Rappresenta un mutex di"", ovvero un oggetto di sincronizzazione che consente un accesso che si escludono a vicenda thread a una risorsa.

## <a name="syntax"></a>Sintassi

```
class CMutex : public CSyncObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMutex::CMutex](#cmutex)|Costruisce un oggetto `CMutex`.|

## <a name="remarks"></a>Note

I mutex sono utili quando un solo thread alla volta può essere autorizzato a modificare i dati o un'altra risorsa controllata. Ad esempio, l'aggiunta di nodi a un elenco collegato è un processo che deve essere consentito solo da un solo thread alla volta. Usando un `CMutex` oggetto per controllare l'elenco collegato, solo un thread alla volta può accedere all'elenco.

Usare un `CMutex` dell'oggetto, costruire il `CMutex` oggetto quando è necessario. Specificare il nome del mutex di cui si vuole attendere e che l'applicazione deve inizialmente esserne il proprietario. È quindi possibile accedere al mutex quando viene restituito il costruttore. Chiamare [CSyncObject::Unlock](../../mfc/reference/csyncobject-class.md#unlock) al termine l'accesso alla risorsa controllata.

Un metodo alternativo per l'utilizzo `CMutex` oggetti consiste nell'aggiungere una variabile di tipo `CMutex` come membro dei dati per la classe di cui effettuare il controllo. Durante la costruzione dell'oggetto controllato, chiamare il costruttore del `CMutex` (membro dati) che specifica se il mutex è inizialmente di proprietà, il nome del mutex (se che verrà usato nei limiti dei processi) e gli attributi di sicurezza desiderato.

Per accedere alle risorse controllate da `CMutex` oggetti in questo modo, prima di tutto creare una variabile di tipo [CSingleLock](../../mfc/reference/csinglelock-class.md) oppure digitare [CMultiLock](../../mfc/reference/cmultilock-class.md) nella funzione membro di accesso della risorsa. Quindi chiamare l'oggetto di blocco `Lock` funzione membro (ad esempio [CSingleLock::Lock](../../mfc/reference/csinglelock-class.md#lock)). A questo punto, i thread verranno sia ottenere l'accesso alla risorsa, attendere che la risorsa essere rilasciato e ottenere l'accesso, attendere la risorsa deve essere rilasciato e raggiungere il timeout non riesce ad accedere alla risorsa. In ogni caso, la risorsa è stato eseguito l'accesso in modo thread-safe. Per rilasciare la risorsa, usare l'oggetto di blocco `Unlock` funzione membro (ad esempio [CSingleLock::Unlock](../../mfc/reference/csinglelock-class.md#unlock)), o consentire l'oggetto di blocco uscire dall'ambito.

Per altre informazioni sull'uso `CMutex` oggetti, vedere l'articolo [Multithreading: come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CSyncObject](../../mfc/reference/csyncobject-class.md)

`CMutex`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxmt. h

##  <a name="cmutex"></a>  CMutex::CMutex

Costruisce un nome o senza nome `CMutex` oggetto.

```
CMutex(
    BOOL bInitiallyOwn = FALSE,
    LPCTSTR lpszName = NULL,
    LPSECURITY_ATTRIBUTES lpsaAttribute = NULL);
```

### <a name="parameters"></a>Parametri

*bInitiallyOwn*<br/>
Specifica se la creazione di thread di `CMutex` oggetto ha inizialmente l'accesso alla risorsa controllata dal mutex.

*lpszName*<br/>
Nome dell'oggetto `CMutex`. Se non esiste un altro mutex con lo stesso nome, *lpszName* è necessario specificare se l'oggetto verrà usato nell'ambito dei processi. Se **NULL**, mutex sarà senza nome. Se il nome corrisponde a un mutex esistente, il costruttore crea un nuovo `CMutex` oggetto cui fa riferimento il mutex di tale nome. Se il nome corrisponde a un oggetto di sincronizzazione esistente che non è un mutex, la creazione avrà esito negativo.

*lpsaAttribute*<br/>
Attributi di sicurezza per l'oggetto mutex. Per una descrizione completa di questa struttura, vedere [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) nel SDK di Windows.

### <a name="remarks"></a>Note

Per accedere o rilasciare un `CMutex` dell'oggetto, creare un [CMultiLock](../../mfc/reference/cmultilock-class.md) o [CSingleLock](../../mfc/reference/csinglelock-class.md) oggetto e chiamare relativo [blocco](../../mfc/reference/csinglelock-class.md#lock) e [Unlock](../../mfc/reference/csinglelock-class.md#unlock) funzioni membro. Se il `CMutex` viene utilizzato l'oggetto autonomo, chiamare il `Unlock` funzione membro per rilasciarlo.

> [!IMPORTANT]
>  Dopo aver creato il `CMutex` dell'oggetto, utilizzare [GetLastError](https://msdn.microsoft.com/library/windows/desktop/ms679360) per garantire che il mutex non esisteva. Se il mutex non erano presenti in modo imprevisto, potrebbe indicare un processo è squatting e potrebbe voler usare mutex da utenti malintenzionati. In questo caso, la procedura di altissimo di sicurezza consigliata è di chiudere l'handle e continuare come se si è verificato un errore nella creazione dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Classe CSyncObject](../../mfc/reference/csyncobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

