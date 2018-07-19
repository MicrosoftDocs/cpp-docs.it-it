---
title: Classe CHttpConnection | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CHttpConnection
- AFXINET/CHttpConnection
- AFXINET/CHttpConnection::CHttpConnection
- AFXINET/CHttpConnection::OpenRequest
dev_langs:
- C++
helpviewer_keywords:
- CHttpConnection [MFC], CHttpConnection
- CHttpConnection [MFC], OpenRequest
ms.assetid: a402b662-c445-4988-800d-c8278551babe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 03e773e57b4cdaee09331dab651f41f1fa8db211
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336062"
---
# <a name="chttpconnection-class"></a>CHttpConnection (classe)
Gestisce la connessione a un server HTTP.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CHttpConnection : public CInternetConnection  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHttpConnection::CHttpConnection](#chttpconnection)|Crea un oggetto `CHttpConnection`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHttpConnection:: OpenRequest](#openrequest)|Apre una richiesta HTTP.|  
  
## <a name="remarks"></a>Note  
 HTTP è uno dei tre protocolli di server Internet implementati dalle classi WinInet MFC.  
  
 La classe `CHttpConnection` contiene un costruttore e una funzione, un membro [OpenRequest](#openrequest), che gestisce le connessioni a un server con un protocollo HTTP.  
  
 Per comunicare con un server HTTP, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md), quindi creare un [CHttpConnection](#_mfc_chttpconnection) oggetto. È non creare mai una `CHttpConnection` direttamente l'oggetto; piuttosto, chiamare [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection), che consente di creare il `CHttpConnection` specificato e restituisce un puntatore a esso.  
  
 Per altre informazioni su come `CHttpConnection` funziona con le altre classi MFC Internet, vedere l'articolo [programmazione Internet con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per altre informazioni sulla connessione ai server tramite gli altri due supportassero i protocolli Internet, gopher e FTP, vedere le classi [CGopherConnection](../../mfc/reference/cgopherconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CHttpConnection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="chttpconnection"></a>  CHttpConnection::CHttpConnection  
 Questa funzione membro viene chiamata per costruire un `CHttpConnection` oggetto.  
  
```  
CHttpConnection(
    CInternetSession* pSession,  
    HINTERNET hConnected,  
    LPCTSTR pstrServer,  
    DWORD_PTR dwContext);

 
CHttpConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    LPCTSTR pstrUserName = NULL,  
    LPCTSTR pstrPassword = NULL,  
    DWORD_PTR dwContext = 1);

 
CHttpConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    DWORD dwFlags,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER,  
    LPCTSTR pstrUserName = NULL,  
    LPCTSTR pstrPassword = NULL,  
    DWORD_PTR dwContext = 1);
```  
  
### <a name="parameters"></a>Parametri  
 *pSession*  
 Un puntatore a un [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto.  
  
 *hConnected*  
 Handle per una connessione a Internet.  
  
 *pstrServer*  
 Un puntatore a una stringa contenente il nome del server.  
  
 *dwContext*  
 L'identificatore di contesto per il `CInternetConnection` oggetto. Visualizzare **osservazioni** per altre informazioni sui *dwContext*.  
  
 *nPort*  
 Numero che identifica la porta di Internet per questa connessione.  
  
 *pstrUserName*  
 Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se NULL, il valore predefinito è anonymous.  
  
 *pstrPassword*  
 Un puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se entrambe *pstrPassword* e *pstrUserName* sono NULL, la password anonima predefinita è il nome dell'utente tramite posta elettronica. Se *pstrPassword* è NULL (o una stringa vuota), ma *pstrUserName* non è NULL, viene usata una password vuota. La tabella seguente descrive il comportamento per le quattro possibili impostazioni di *pstrUserName* e *pstrPassword*:  
  
|*pstrUserName*|*pstrPassword*|Nome utente inviato al server FTP|Password inviati al server FTP|  
|--------------------|--------------------|---------------------------------|---------------------------------|  
|NULL o ""|NULL o ""|"anonymous"|Nome messaggio di posta elettronica dell'utente|  
|Stringa non NULL|NULL o ""|*pstrUserName*|" "|  
|Stringa Non NULL a NULL|ERRORE|ERRORE||  
|Stringa non NULL|Stringa non NULL|*pstrUserName*|*pstrPassword*|  
  
 *dwFlags*  
 Qualsiasi combinazione dei **flag Internet FLAG_CONFIG_ALLOW_MOVE\***  flag. Vedere la tabella nel **osservazioni** sezione del [CHttpConnection:: OpenRequest](#openrequest) per una descrizione delle *dwFlags* valori.  
  
### <a name="remarks"></a>Note  
 È non creare mai un `CHttpConnection` direttamente. Piuttosto, si crea un oggetto chiamando [CInternetSession:: GetHttpConnection](../../mfc/reference/cinternetsession-class.md#gethttpconnection).  
  
##  <a name="openrequest"></a>  CHttpConnection:: OpenRequest  
 Chiamare la seguente funzione membro per aprire una connessione HTTP.  
  
```  
CHttpFile* OpenRequest(
    LPCTSTR pstrVerb,  
    LPCTSTR pstrObjectName,  
    LPCTSTR pstrReferer = NULL,  
    DWORD_PTR dwContext = 1,  
    LPCTSTR* ppstrAcceptTypes = NULL,  
    LPCTSTR pstrVersion = NULL,  
    DWORD dwFlags = INTERNET_FLAG_EXISTING_CONNECT);

 
CHttpFile* OpenRequest(
    int nVerb,  
    LPCTSTR pstrObjectName,  
    LPCTSTR pstrReferer = NULL,  
    DWORD_PTR dwContext = 1,  
    LPCTSTR* ppstrAcceptTypes = NULL,  
    LPCTSTR pstrVersion = NULL,  
    DWORD dwFlags = INTERNET_FLAG_EXISTING_CONNECT);
```  
  
### <a name="parameters"></a>Parametri  
 *pstrVerb*  
 Puntatore a una stringa contenente il metodo da utilizzare nella richiesta. Se NULL, viene utilizzato "GET".  
  
 *pstrObjectName*  
 Puntatore a una stringa contenente l'oggetto di destinazione del metodo specificato. Rappresenta in genere un nome di file, un modulo eseguibile o un identificatore di ricerca.  
  
 *pstrReferer*  
 Un puntatore a una stringa che specifica l'indirizzo (URL) del documento da cui l'URL nella richiesta ( *pstrObjectName*) è stato ottenuto. Se NULL, non viene specificata alcuna intestazione HTTP.  
  
 *dwContext*  
 Identificatore di contesto per l'operazione `OpenRequest`. Vedere la sezione Osservazioni per altre informazioni *dwContext*.  
  
 *ppstrAcceptTypes*  
 Un puntatore a una matrice con terminazione null di puntatori LPCTSTR a stringhe che indica i tipi di contenuto accettati dal client. Se *ppstrAcceptTypes* è NULL, i server interpretano che il client accetta solo documenti di tipo "text / *" (ovvero solo documenti di testo e non immagini o altri file binari). Il tipo di contenuto è equivalente alla variabile CONTENT_TYPE di CGI, che identifica il tipo di dati per le query con informazioni associate, quali HTTP POST e PUT.  
  
 *pstrVersion*  
 Puntatore a una stringa che definisce la versione di HTTP. Se NULL, viene utilizzato "HTTP/1.0".  
  
 *dwFlags*  
 Qualsiasi combinazione dei flag INTERNET_ FLAG_*. Vedere la sezione Osservazioni per una descrizione dei possibili *dwFlags* valori.  
  
 *nVerb*  
 Numero associato al tipo di richiesta HTTP. Può essere uno dei seguenti:  
  
|Tipo di richiesta HTTP|*nVerb* valore|  
|-----------------------|-------------------|  
|HTTP_VERB_POST|0|  
|HTTP_VERB_GET|1|  
|HTTP_VERB_HEAD|2|  
|HTTP_VERB_PUT|3|  
|HTTP_VERB_LINK|4|  
|HTTP_VERB_DELETE|5|  
|HTTP_VERB_UNLINK|6|  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CHttpFile](../../mfc/reference/chttpfile-class.md) oggetto richiesto.  
  
### <a name="remarks"></a>Note  
 *dwFlags* può essere uno dei seguenti:  
  
|Flag Internet|Descrizione|  
|-------------------|-----------------|  
|INTERNET_FLAG_RELOAD|Impone un download del file, dell'oggetto o dell'elenco di directory richiesto dal server di origine e non dalla cache.|  
|INTERNET_FLAG_DONT_CACHE|Non aggiunge l'entità restituita alla cache.|  
|INTERNET_FLAG_MAKE_PERSISTENT|Aggiunge l'entità restituita alla cache come entità persistente. Ciò significa che la pulizia standard della cache, la verifica di coerenza e il controllo di consistenza o l'operazione di Garbage Collection non può eliminare l'elemento dalla cache.|  
|INTERNET_FLAG_SECURE|Utilizza semantica sicura delle transazioni. Questo comporta l'utilizzo di SSL/PCT e il flag è significativo solo nelle richieste HTTP|  
|INTERNET_FLAG_NO_AUTO_REDIRECT|Utilizzato solo con HTTP, specifica che non reindirizzamenti devono essere gestiti automaticamente [CHttpFile:: SendRequest](../../mfc/reference/chttpfile-class.md#sendrequest).|  
  
 Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa specifica operazione dei `CHttpConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore per [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per altre informazioni sull'identificatore di contesto.  
  
 In questa funzione possono essere generate eccezioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)   
 [Classe CHttpFile](../../mfc/reference/chttpfile-class.md)
