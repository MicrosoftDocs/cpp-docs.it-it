---
description: 'Altre informazioni su: classe CInternetException'
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
ms.openlocfilehash: d46c2eca7f7f568b0296d6ced567d33b49ba4cb6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209945"
---
# <a name="cinternetexception-class"></a>Classe CInternetException

Rappresenta una condizione di eccezione correlata a un'operazione su Internet.

## <a name="syntax"></a>Sintassi

```
class CInternetException : public CException
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetException:: CInternetException](#cinternetexception)|Costruisce un oggetto `CInternetException`.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetException:: m_dwContext](#m_dwcontext)|Valore di contesto associato all'operazione che ha causato l'eccezione.|
|[CInternetException:: m_dwError](#m_dwerror)|Errore che ha causato l'eccezione.|

## <a name="remarks"></a>Commenti

La `CInternetException` classe include due membri dati pubblici: uno contiene il codice di errore associato all'eccezione e l'altro contiene l'identificatore di contesto dell'applicazione Internet associata all'errore.

Per ulteriori informazioni sugli identificatori di contesto per le applicazioni Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CInternetException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

## <a name="cinternetexceptioncinternetexception"></a><a name="cinternetexception"></a> CInternetException:: CInternetException

Questa funzione membro viene chiamata quando `CInternetException` viene creato un oggetto.

```
CInternetException(DWORD dwError);
```

### <a name="parameters"></a>Parametri

*dwError*<br/>
Errore che ha causato l'eccezione.

### <a name="remarks"></a>Commenti

Per generare un CInternetException, chiamare la funzione globale MFC [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).

## <a name="cinternetexceptionm_dwcontext"></a><a name="m_dwcontext"></a> CInternetException:: m_dwContext

Valore di contesto associato all'operazione Internet correlata.

```
DWORD_PTR m_dwContext;
```

### <a name="remarks"></a>Commenti

L'identificatore di contesto viene originariamente specificato in [CInternetSession](../../mfc/reference/cinternetsession-class.md) e passato da MFC alle classi derivate da [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)e [CInternetFile](../../mfc/reference/cinternetfile-class.md). È possibile eseguire l'override di questa impostazione predefinita e assegnare al parametro *dwContext* un valore a scelta. *dwContext* è associato a qualsiasi operazione dell'oggetto specificato. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).

## <a name="cinternetexceptionm_dwerror"></a><a name="m_dwerror"></a> CInternetException:: m_dwError

Errore che ha causato l'eccezione.

```
DWORD m_dwError;
```

### <a name="remarks"></a>Commenti

Questo valore di errore può essere un codice di errore di sistema, disponibile in WINERROR. H o un valore di errore da WININET. H.

Per un elenco di codici di errore Win32, vedere [codici di errore](/windows/win32/Debug/system-error-codes). Per un elenco di messaggi di errore specifici per Internet, vedere. Entrambi gli argomenti si trovano nella Windows SDK.

## <a name="see-also"></a>Vedi anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)
