---
description: 'Altre informazioni su: classe CInternetConnection'
title: Classe CInternetConnection
ms.date: 11/04/2016
f1_keywords:
- CInternetConnection
- AFXINET/CInternetConnection
- AFXINET/CInternetConnection::CInternetConnection
- AFXINET/CInternetConnection::GetContext
- AFXINET/CInternetConnection::GetServerName
- AFXINET/CInternetConnection::GetSession
helpviewer_keywords:
- CInternetConnection [MFC], CInternetConnection
- CInternetConnection [MFC], GetContext
- CInternetConnection [MFC], GetServerName
- CInternetConnection [MFC], GetSession
ms.assetid: 62a5d1c3-8471-4e36-a064-48831829b2a7
ms.openlocfilehash: 2ae869e8cbf3bbfb3ce19e78088a465ae1d6aa65
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143546"
---
# <a name="cinternetconnection-class"></a>Classe CInternetConnection

Gestisce la connessione a un server Internet.

## <a name="syntax"></a>Sintassi

```
class CInternetConnection : public CObject
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetConnection:: CInternetConnection](#cinternetconnection)|Costruisce un oggetto `CInternetConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetConnection:: GetContext](#getcontext)|Ottiene l'ID del contesto per questo oggetto connessione.|
|[CInternetConnection:: GetServerName](#getservername)|Ottiene il nome del server associato alla connessione.|
|[CInternetConnection:: GetSession](#getsession)|Ottiene un puntatore all'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) associato alla connessione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CInternetConnection:: operator HINTERNET](#operator_hinternet)|Handle per una sessione Internet.|

## <a name="remarks"></a>Commenti

Si tratta della classe base per le classi MFC [CFtpConnection](../../mfc/reference/cftpconnection-class.md), [CHttpConnection](../../mfc/reference/chttpconnection-class.md)e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md). Ognuna di queste classi fornisce funzionalità aggiuntive per la comunicazione con il rispettivo server FTP, HTTP o gopher.

Per comunicare direttamente con un server Internet, è necessario disporre di un oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) e di un `CInternetConnection` oggetto.

Per ulteriori informazioni sul funzionamento delle classi WinInet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CInternetConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXINET. h

## <a name="cinternetconnectioncinternetconnection"></a><a name="cinternetconnection"></a> CInternetConnection:: CInternetConnection

Questa funzione membro viene chiamata quando `CInternetConnection` viene creato un oggetto.

```
CInternetConnection(
    CInternetSession* pSession,
    LPCTSTR pstrServer,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pSession*<br/>
Puntatore a un oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) .

*pstrServer*<br/>
Puntatore a una stringa contenente il nome del server.

*nPort*<br/>
Numero che identifica la porta Internet per questa connessione.

*dwContext*<br/>
Identificatore di contesto per l' `CInternetConnection` oggetto. Per ulteriori informazioni su *dwContext*, vedere la **sezione Osservazioni** .

### <a name="remarks"></a>Commenti

Non è mai possibile chiamarsi, `CInternetConnection` bensì chiamare la funzione membro [CInternetSession](../../mfc/reference/cinternetsession-class.md) per il tipo di connessione che si vuole stabilire:

- [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection)

- [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection)

- [CInternetSession:: GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection)

Il valore predefinito per *dwContext* viene inviato da MFC all' `CInternetConnection` oggetto derivato da dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l'oggetto derivato da **per**. Il valore predefinito è 1. Tuttavia, è possibile assegnare in modo esplicito un identificatore di contesto specifico nel costruttore [CInternetSession](../../mfc/reference/cinternetsession-class.md#cinternetsession) per la connessione. L'oggetto e tutte le operazioni che verranno associate a tale ID di contesto. L'identificatore di contesto viene restituito a [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato nell'oggetto con cui viene identificato. Per ulteriori informazioni sull'identificatore di contesto, vedere l'articolo [primo passaggio per Internet: WinInet](../../mfc/wininet-basics.md) .

## <a name="cinternetconnectiongetcontext"></a><a name="getcontext"></a> CInternetConnection:: GetContext

Chiamare questa funzione membro per ottenere l'ID del contesto per questa sessione.

```
DWORD_PTR GetContext() const;
```

### <a name="return-value"></a>Valore restituito

ID del contesto assegnato dall'applicazione.

### <a name="remarks"></a>Commenti

L'ID del contesto viene originariamente specificato in [CInternetSession](../../mfc/reference/cinternetsession-class.md) e viene propagato alle `CInternetConnection` classi derivate da e [CInternetFile](../../mfc/reference/cinternetfile-class.md), a meno che non venga specificato diversamente nella chiamata a una funzione che apre la connessione. L'ID del contesto è associato a qualsiasi operazione dell'oggetto specificato e identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).

Per ulteriori informazioni sul `GetContext` funzionamento di con altre classi WinInet per fornire le informazioni sullo stato utente, vedere l'articolo [primi passaggi per Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="cinternetconnectiongetservername"></a><a name="getservername"></a> CInternetConnection:: GetServerName

Chiamare questa funzione membro per ottenere il nome del server associato a questa connessione Internet.

```
CString GetServerName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del server utilizzato da questo oggetto connessione.

## <a name="cinternetconnectiongetsession"></a><a name="getsession"></a> CInternetConnection:: GetSession

Chiamare questa funzione membro per ottenere un puntatore all' `CInternetSession` oggetto associato a questa connessione.

```
CInternetSession* GetSession() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) associato a questo oggetto connessione Internet.

## <a name="cinternetconnectionoperator-hinternet"></a><a name="operator_hinternet"></a> CInternetConnection:: operator HINTERNET

Usare questo operatore per ottenere l'handle a livello di API per la sessione Internet corrente.

```
operator HINTERNET() const;
```

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
