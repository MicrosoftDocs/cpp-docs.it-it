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
ms.openlocfilehash: dedf8926f02dd36dc8d6ac8ab5ff4056b60dfc91
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62345708"
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
|[CInternetException::m_dwContext](#m_dwcontext)|Il valore di contesto associato all'operazione che ha causato l'eccezione.|
|[CInternetException::m_dwError](#m_dwerror)|Errore che ha causato l'eccezione.|

## <a name="remarks"></a>Note

Il `CInternetException` classe include due membri dati pubblici: uno contiene il codice di errore associato all'eccezione e l'altro contiene l'identificatore di contesto dell'applicazione Internet associato all'errore.

Per ulteriori informazioni sugli identificatori di contesto per le applicazioni Internet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CException](../../mfc/reference/cexception-class.md)

`CInternetException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet. h

##  <a name="cinternetexception"></a>  CInternetException::CInternetException

Questa funzione membro viene chiamata quando un `CInternetException` oggetto viene creato.

```
CInternetException(DWORD dwError);
```

### <a name="parameters"></a>Parametri

*dwError*<br/>
Errore che ha causato l'eccezione.

### <a name="remarks"></a>Note

Per generare un CInternetException, chiamare la funzione globale MFC [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).

##  <a name="m_dwcontext"></a>  CInternetException::m_dwContext

Il valore di contesto associato all'operazione Internet correlata.

```
DWORD_PTR m_dwContext;
```

### <a name="remarks"></a>Note

L'identificatore di contesto viene originariamente specificato nella [CInternetSession](../../mfc/reference/cinternetsession-class.md) e passato da MFC per [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)- e [CInternetFile](../../mfc/reference/cinternetfile-class.md)-le classi derivate. È possibile eseguire l'override di questo valore predefinito e assegnare uno qualsiasi *dwContext* parametro un valore di propria scelta. *dwContext* è associato a qualsiasi operazione dell'oggetto specificato. *dwContext* identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).

##  <a name="m_dwerror"></a>  CInternetException::m_dwError

Errore che ha causato l'eccezione.

```
DWORD m_dwError;
```

### <a name="remarks"></a>Note

Questo valore di errore può essere un sistema di codice di errore, disponibile in WINERROR. H o un valore di errore da WININET. H.

Per un elenco dei codici di errore Win32, vedere [codici di errore](/windows/desktop/Debug/system-error-codes). Per un elenco di messaggi di errore Internet specifiche, vedere. Entrambi gli argomenti sono in Windows SDK.

## <a name="see-also"></a>Vedere anche

[Classe CException](../../mfc/reference/cexception-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CException](../../mfc/reference/cexception-class.md)
