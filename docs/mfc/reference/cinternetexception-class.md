---
title: Classe CInternetException
ms.date: 11/04/2016
f1_keywords:
- CInternetException
- AFXINET/CInternetException
- AFXINET/CInternetException::CInternetException
- AFXINET/CInternetException::m_dwContext
- AFXINET/CInternetException::m_dwError
helpviewer_keywords:
- CInternetException [MFC], CInternetException
- CInternetException [MFC], m_dwContext
- CInternetException [MFC], m_dwError
ms.assetid: 44fb3cbe-523e-4754-8843-a77909990b14
ms.openlocfilehash: b0239afa2b984ccf93d661ec11f11013c89fd912
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372413"
---
# <a name="cinternetexception-class"></a>Classe CInternetException

Rappresenta una condizione di eccezione correlata a un'operazione su Internet.

## <a name="syntax"></a>Sintassi

```
class CInternetException : public CException
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetException::CInternetException](#cinternetexception)|Costruisce un oggetto `CInternetException`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetException::m_dwContext](#m_dwcontext)|Valore di contesto associato all'operazione che ha causato l'eccezione.|
|[CInternetException::m_dwError](#m_dwerror)|Errore che ha causato l'eccezione.|

## <a name="remarks"></a>Osservazioni

La `CInternetException` classe include due membri dati pubblici: uno contiene il codice di errore associato all'eccezione e l'altro contiene l'identificatore di contesto dell'applicazione Internet associata all'errore.

Per ulteriori informazioni sugli identificatori di contesto per le applicazioni Internet, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CEccezione](../../mfc/reference/cexception-class.md)

`CInternetException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cinternetexceptioncinternetexception"></a><a name="cinternetexception"></a>CInternetException::CInternetException

Questa funzione membro viene `CInternetException` chiamata quando viene creato un oggetto.

```
CInternetException(DWORD dwError);
```

### <a name="parameters"></a>Parametri

*dwError (errore)*<br/>
Errore che ha causato l'eccezione.

### <a name="remarks"></a>Osservazioni

Per generare un'eccezione CInternetException, chiamare la funzione globale MFC [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).

## <a name="cinternetexceptionm_dwcontext"></a><a name="m_dwcontext"></a>CInternetException::m_dwContext

Valore di contesto associato all'operazione Internet correlata.

```
DWORD_PTR m_dwContext;
```

### <a name="remarks"></a>Osservazioni

L'identificatore di contesto è originariamente specificato in [CInternetSession](../../mfc/reference/cinternetsession-class.md) e passato da MFC a [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)- e [CInternetFile-classi](../../mfc/reference/cinternetfile-class.md)derivate. È possibile eseguire l'override di questa impostazione predefinita e assegnare a qualsiasi parametro *dwContext* un valore di propria scelta. *dwContext* è associato a qualsiasi operazione dell'oggetto specificato. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).

## <a name="cinternetexceptionm_dwerror"></a><a name="m_dwerror"></a>CInternetException::m_dwError

Errore che ha causato l'eccezione.

```
DWORD m_dwError;
```

### <a name="remarks"></a>Osservazioni

Questo valore di errore può essere un codice di errore di sistema, disponibile in WINERROR. H o un valore di errore da WININET. H.

Per un elenco dei codici di errore Win32, vedere [Codici di errore](/windows/win32/Debug/system-error-codes). Per un elenco dei messaggi di errore specifici di Internet, vedere . Entrambi gli argomenti sono disponibili in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)
