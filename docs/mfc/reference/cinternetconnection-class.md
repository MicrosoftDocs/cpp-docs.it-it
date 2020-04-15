---
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
ms.openlocfilehash: 6649986f279e010a833b31157922cb4fd1ea8613
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372416"
---
# <a name="cinternetconnection-class"></a>Classe CInternetConnection

Gestisce la connessione a un server Internet.

## <a name="syntax"></a>Sintassi

```
class CInternetConnection : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetConnection::CInternetConnection](#cinternetconnection)|Costruisce un oggetto `CInternetConnection`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetConnection::GetContext](#getcontext)|Ottiene l'ID di contesto per questo oggetto connessione.|
|[CInternetConnection::NomeServer](#getservername)|Ottiene il nome del server associato alla connessione.|
|[CInternetConnection::GetSession](#getsession)|Ottiene un puntatore all'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) associato alla connessione.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CInternetConnection::operatore HINTERNET](#operator_hinternet)|Handle per una sessione Internet.|

## <a name="remarks"></a>Osservazioni

È la classe base per le classi MFC [CFtpConnection](../../mfc/reference/cftpconnection-class.md), [CHttpConnection](../../mfc/reference/chttpconnection-class.md)e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md). Ognuna di queste classi fornisce funzionalità aggiuntive per la comunicazione con il rispettivo server FTP, HTTP o gopher.

Per comunicare direttamente con un server Internet, è necessario `CInternetConnection` disporre di un oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) e di un oggetto.

Per ulteriori informazioni sul funzionamento delle classi WinInet, vedere l'articolo [Programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CInternetConnection`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxinet.h

## <a name="cinternetconnectioncinternetconnection"></a><a name="cinternetconnection"></a>CInternetConnection::CInternetConnection

Questa funzione membro viene `CInternetConnection` chiamata quando viene creato un oggetto.

```
CInternetConnection(
    CInternetSession* pSession,
    LPCTSTR pstrServer,
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,
    DWORD_PTR dwContext = 1);
```

### <a name="parameters"></a>Parametri

*pSessione*<br/>
Puntatore a un oggetto [CInternetSession.](../../mfc/reference/cinternetsession-class.md)

*pstrServer (informazioni in base al server utente)*<br/>
Puntatore a una stringa contenente il nome del server.

*nPorta*<br/>
Numero che identifica la porta Internet per questa connessione.

*dwContext*<br/>
Identificatore di `CInternetConnection` contesto per l'oggetto. Vedere **Osservazioni** per ulteriori informazioni su *dwContext*.

### <a name="remarks"></a>Osservazioni

Non ti `CInternetConnection` chiami mai; chiamare invece il [CInternetSession](../../mfc/reference/cinternetsession-class.md) funzione membro per il tipo di connessione che si desidera stabilire:

- [CInternetSession::GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection)

- [CInternetSession::GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection)

- [CInternetSession::GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection)

Il valore predefinito per *dwContext* viene `CInternetConnection`inviato da MFC all'oggetto derivato dall'oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) che ha creato l'oggetto derivato da **InternetConnection.** Il valore predefinito è 1; Tuttavia, è possibile assegnare in modo esplicito un identificatore di contesto specifico nel [CInternetSession](../../mfc/reference/cinternetsession-class.md#cinternetsession) costruttore per la connessione. L'oggetto e le operazioni eseguite verranno associati a tale ID di contesto. L'identificatore di contesto viene restituito a [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato sull'oggetto con cui è identificato. Vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="cinternetconnectiongetcontext"></a><a name="getcontext"></a>CInternetConnection::GetContext

Chiamare questa funzione membro per ottenere l'ID di contesto per questa sessione.

```
DWORD_PTR GetContext() const;
```

### <a name="return-value"></a>Valore restituito

ID di contesto assegnato dall'applicazione.

### <a name="remarks"></a>Osservazioni

L'ID di contesto è originariamente specificato `CInternetConnection`in [CInternetSession](../../mfc/reference/cinternetsession-class.md) e si propaga a - e [CInternetFile](../../mfc/reference/cinternetfile-class.md)-classi derivate, a meno che specificato in modo diverso nella chiamata a una funzione che apre la connessione. L'ID di contesto è associato a qualsiasi operazione dell'oggetto specificato e identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).

Per ulteriori informazioni `GetContext` su come funziona con altre classi WinInet per fornire le informazioni sullo stato utente, vedere l'articolo [Internet First Steps: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.

## <a name="cinternetconnectiongetservername"></a><a name="getservername"></a>CInternetConnection::NomeServer

Chiamare questa funzione membro per ottenere il nome del server associato a questa connessione Internet.

```
CString GetServerName() const;
```

### <a name="return-value"></a>Valore restituito

Nome del server con cui sta lavorando questo oggetto connessione.

## <a name="cinternetconnectiongetsession"></a><a name="getsession"></a>CInternetConnection::GetSession

Chiamare questa funzione membro per `CInternetSession` ottenere un puntatore all'oggetto associato a questa connessione.

```
CInternetSession* GetSession() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CInternetSession](../../mfc/reference/cinternetsession-class.md) associato a questo oggetto connessione Internet.

## <a name="cinternetconnectionoperator-hinternet"></a><a name="operator_hinternet"></a>CInternetConnection::operatore HINTERNET

Utilizzare questo operatore per ottenere l'handle a livello di API per la sessione Internet corrente.

```
operator HINTERNET() const;
```

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
