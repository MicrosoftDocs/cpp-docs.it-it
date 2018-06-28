---
title: Classe CInternetConnection | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CInternetConnection
- AFXINET/CInternetConnection
- AFXINET/CInternetConnection::CInternetConnection
- AFXINET/CInternetConnection::GetContext
- AFXINET/CInternetConnection::GetServerName
- AFXINET/CInternetConnection::GetSession
dev_langs:
- C++
helpviewer_keywords:
- CInternetConnection [MFC], CInternetConnection
- CInternetConnection [MFC], GetContext
- CInternetConnection [MFC], GetServerName
- CInternetConnection [MFC], GetSession
ms.assetid: 62a5d1c3-8471-4e36-a064-48831829b2a7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 227637dc042777725692122babe0d4c7b232d578
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37037778"
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
|[CInternetConnection::GetContext](#getcontext)|Ottiene l'ID del contesto per questo oggetto di connessione.|  
|[CInternetConnection::GetServerName](#getservername)|Ottiene il nome del server associato alla connessione.|  
|[CInternetConnection::GetSession](#getsession)|Ottiene un puntatore per il [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto associato alla connessione.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetConnection::operator HINTERNET](#operator_hinternet)|Un handle a una sessione di Internet.|  
  
## <a name="remarks"></a>Note  
 È la classe base per classi MFC [CFtpConnection](../../mfc/reference/cftpconnection-class.md), [CHttpConnection](../../mfc/reference/chttpconnection-class.md), e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md). Ognuna di queste classi fornisce funzionalità aggiuntive per la comunicazione con il rispettivo server gopher, HTTP o FTP.  
  
 Per comunicare direttamente con un server Internet, è necessario un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto e un `CInternetConnection` oggetto.  
  
 Per altre informazioni su come le classi di WinInet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CInternetConnection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="cinternetconnection"></a>  CInternetConnection::CInternetConnection  
 Questa funzione membro viene chiamata quando un `CInternetConnection` oggetto viene creato.  
  
```  
CInternetConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    DWORD_PTR dwContext = 1);
```  
  
### <a name="parameters"></a>Parametri  
 *pSession*  
 Un puntatore a un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto.  
  
 *pstrServer*  
 Un puntatore a una stringa contenente il nome del server.  
  
 *nPort*  
 Numero che identifica la porta di Internet per questa connessione.  
  
 *dwContext*  
 Identificatore di contesto per il `CInternetConnection` oggetto. Vedere **osservazioni** per ulteriori informazioni sulle *dwContext*.  
  
### <a name="remarks"></a>Note  
 Non eseguire mai chiamate `CInternetConnection` manualmente; in alternativa, chiamare il [CInternetSession](../../mfc/reference/cinternetsession-class.md) funzione membro per il tipo di connessione che si desidera stabilire:  
  
- [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection)  
  
- [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection)  
  
- [CInternetSession:: GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection)  
  
 Il valore predefinito per *dwContext* inviato da MFC per il `CInternetConnection`-oggetto derivato dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) dell'oggetto che ha creato la **InternetConnection**- oggetto derivato da. Il valore predefinito è impostato su 1. Tuttavia, è possibile assegnare in modo esplicito un identificatore di contesto specifico nel [CInternetSession](../../mfc/reference/cinternetsession-class.md#cinternetsession) costruttore per la connessione. L'oggetto e qualsiasi lavoro che svolto verrà associati a tale ID del contesto. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato per l'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
##  <a name="getcontext"></a>  CInternetConnection::GetContext  
 Chiamare questa funzione membro per ottenere l'ID del contesto per questa sessione.  
  
```  
DWORD_PTR GetContext() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID del contesto applicazione assegnata.  
  
### <a name="remarks"></a>Note  
 L'ID del contesto è specificata in origine [CInternetSession](../../mfc/reference/cinternetsession-class.md) e verrà propagato a `CInternetConnection`- e [CInternetFile](../../mfc/reference/cinternetfile-class.md)-classi derivate, se non diversamente specificato in modo diverso nella chiamata a una funzione che viene aperta la connessione. L'ID del contesto è associato a qualsiasi operazione dell'oggetto specificato e identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).  
  
 Per ulteriori informazioni sul `GetContext` può essere utilizzata con altre classi WinInet per fornire le informazioni sullo stato utente, vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
##  <a name="getservername"></a>  CInternetConnection::GetServerName  
 Chiamare questa funzione membro per ottenere il nome del server associato alla connessione Internet.  
  
```  
CString GetServerName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del server con cui lavora l'oggetto connessione.  
  
##  <a name="getsession"></a>  CInternetConnection::GetSession  
 Chiamare questa funzione per ottenere un puntatore a membro di `CInternetSession` oggetto è associato a questa connessione.  
  
```  
CInternetSession* GetSession() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto associato all'oggetto connessione Internet.  
  
##  <a name="operator_hinternet"></a>  CInternetConnection::operator HINTERNET  
 Utilizzare questo operatore per ottenere l'handle del livello di API per la sessione corrente di Internet.  
  
```  
operator HINTERNET() const;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



