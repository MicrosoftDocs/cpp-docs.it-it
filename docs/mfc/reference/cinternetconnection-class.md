---
title: Classe CInternetConnection | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CInternetConnection
dev_langs:
- C++
helpviewer_keywords:
- asynchronous connections
- CInternetConnection class
- Internet connections
ms.assetid: 62a5d1c3-8471-4e36-a064-48831829b2a7
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 7f99562e0c6103fc3f46a7fe28f9d2f2efff0a01
ms.lasthandoff: 02/24/2017

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
|[CInternetConnection::operator HINTERNET](#operator_hinternet)|Handle per una sessione di Internet.|  
  
## <a name="remarks"></a>Note  
 È la classe base per le classi MFC [CFtpConnection](../../mfc/reference/cftpconnection-class.md), [oggetto CHttpConnection](../../mfc/reference/chttpconnection-class.md), e [CGopherConnection](../../mfc/reference/cgopherconnection-class.md). Ognuna di queste classi fornisce funzionalità aggiuntive per la comunicazione con il relativo server FTP, HTTP o gopher.  
  
 Per comunicare direttamente con un server Internet, è necessario un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto e un `CInternetConnection` oggetto.  
  
 Per ulteriori informazioni su come le classi di WinInet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CInternetConnection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="a-namecinternetconnectiona--cinternetconnectioncinternetconnection"></a><a name="cinternetconnection"></a>CInternetConnection::CInternetConnection  
 Questa funzione membro viene chiamata quando un `CInternetConnection` viene creato l'oggetto.  
  
```  
CInternetConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    DWORD_PTR dwContext = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `pSession`  
 Un puntatore a un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto.  
  
 `pstrServer`  
 Un puntatore a una stringa contenente il nome del server.  
  
 `nPort`  
 Numero che identifica la porta di Internet per questa connessione.  
  
 `dwContext`  
 Identificatore di contesto per il `CInternetConnection` oggetto. Vedere **osservazioni** per ulteriori informazioni su `dwContext`.  
  
### <a name="remarks"></a>Note  
 Non eseguire mai chiamate `CInternetConnection` chiamare invece il [CInternetSession](../../mfc/reference/cinternetsession-class.md) una funzione membro per il tipo di connessione che si desidera stabilire:  
  
- [CInternetSession:: GetFtpConnection](../../mfc/reference/cinternetsession-class.md#getftpconnection)  
  
- [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection)  
  
- [CInternetSession:: GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection)  
  
 Il valore predefinito per `dwContext` viene inviato da MFC per la `CInternetConnection`-oggetto derivato dal [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto creato il **InternetConnection**-oggetto derivato. Il valore predefinito è impostato su 1. Tuttavia, è possibile assegnare in modo esplicito un identificatore di contesto specifico nel [CInternetSession](../../mfc/reference/cinternetsession-class.md#cinternetsession) costruttore per la connessione. L'oggetto e qualsiasi lavoro che svolto da associare con tale ID del contesto. L'identificatore di contesto viene restituito al [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'oggetto con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
##  <a name="a-namegetcontexta--cinternetconnectiongetcontext"></a><a name="getcontext"></a>CInternetConnection::GetContext  
 Chiamare questa funzione membro per ottenere l'ID di contesto per questa sessione.  
  
```  
DWORD_PTR GetContext() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID del contesto di applicazione assegnata.  
  
### <a name="remarks"></a>Note  
 L'ID del contesto è indicato in origine [CInternetSession](../../mfc/reference/cinternetsession-class.md) e viene propagato al `CInternetConnection`- e [CInternetFile](../../mfc/reference/cinternetfile-class.md)-classi derivate, se non diversamente specificato in modo diverso nella chiamata a una funzione che viene aperta la connessione. L'ID del contesto è associato a qualsiasi operazione dell'oggetto specificato e identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).  
  
 Per ulteriori informazioni su come **GetContext** funziona con altre classi WinInet per fornire le informazioni sullo stato utente, vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
##  <a name="a-namegetservernamea--cinternetconnectiongetservername"></a><a name="getservername"></a>CInternetConnection::GetServerName  
 Chiamare questa funzione membro per ottenere il nome del server associato alla connessione Internet.  
  
```  
CString GetServerName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il nome del server funziona con questo oggetto di connessione.  
  
##  <a name="a-namegetsessiona--cinternetconnectiongetsession"></a><a name="getsession"></a>CInternetConnection::GetSession  
 Chiamare questa funzione per ottenere un puntatore a membro di `CInternetSession` oggetto è associato a questa connessione.  
  
```  
CInternetSession* GetSession() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto associato all'oggetto connessione Internet.  
  
##  <a name="a-nameoperatorhinterneta--cinternetconnectionoperator-hinternet"></a><a name="operator_hinternet"></a>CInternetConnection::operator HINTERNET  
 Utilizzare questo operatore per ottenere l'handle a livello di API per la sessione corrente di Internet.  
  
```  
operator HINTERNET() const;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [CObject (classe)](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




