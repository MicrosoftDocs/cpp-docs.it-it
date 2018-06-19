---
title: Classe CGopherConnection | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CGopherConnection
- AFXINET/CGopherConnection
- AFXINET/CGopherConnection::CGopherConnection
- AFXINET/CGopherConnection::CreateLocator
- AFXINET/CGopherConnection::GetAttribute
- AFXINET/CGopherConnection::OpenFile
dev_langs:
- C++
helpviewer_keywords:
- CGopherConnection [MFC], CGopherConnection
- CGopherConnection [MFC], CreateLocator
- CGopherConnection [MFC], GetAttribute
- CGopherConnection [MFC], OpenFile
ms.assetid: b5b96aea-ac99-430e-bd84-d1372b43f78f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d3dc5dae7758c77d335cf6e1255d8caba28df9f9
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33367773"
---
# <a name="cgopherconnection-class"></a>Classe CGopherConnection
Gestisce la connessione a un server Internet gopher.  
  
> [!NOTE]
>  Le classi `CGopherConnection`, `CGopherFile`, `CGopherFileFind`, `CGopherLocator` e i relativi membri sono stati deprecati non funzionano nella piattaforma Windows XP, poiché continueranno a funzionare in piattaforme precedenti.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CGopherConnection : public CInternetConnection  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherConnection::CGopherConnection](#cgopherconnection)|Costruisce un oggetto `CGopherConnection`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CGopherConnection:: CreateLocator](#createlocator)|Crea un [oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto per trovare i file in un server gopher.|  
|[CGopherConnection::GetAttribute](#getattribute)|Recupera informazioni sugli attributi sull'oggetto gopher.|  
|[CGopherConnection:: OpenFile](#openfile)|Apre un file gopher.|  
  
## <a name="remarks"></a>Note  
 Il servizio gopher è uno dei tre servizi Internet riconosciuti dalle classi WinInet MFC.  
  
 La classe `CGopherConnection` contiene un costruttore e tre le funzioni membro aggiuntive che gestiscono il servizio gopher: [OpenFile](#openfile), [CreateLocator](#createlocator), e [GetAttribute](#getattribute).  
  
 Per comunicare con un server Internet gopher, è innanzitutto necessario creare un'istanza di [CInternetSession](../../mfc/reference/cinternetsession-class.md)e quindi chiamare [CInternetSession:: GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), che consente di creare il `CGopherConnection` oggetto e restituisce un puntatore a esso. Non creare mai un `CGopherConnection` direttamente l'oggetto.  
  
 Per ulteriori informazioni su come `CGopherConnection` funziona con le altre classi MFC Internet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md). Per ulteriori informazioni sull'utilizzo di altri due supportato servizi Internet, FTP e HTTP vedere le classi [CHttpConnection](../../mfc/reference/chttpconnection-class.md) e [CFtpConnection](../../mfc/reference/cftpconnection-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)  
  
 `CGopherConnection`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="cgopherconnection"></a>  CGopherConnection::CGopherConnection  
 Questa funzione membro viene chiamata per costruire un `CGopherConnection` oggetto.  
  
```  
CGopherConnection(
    CInternetSession* pSession,  
    HINTERNET hConnected,  
    LPCTSTR pstrServer,  
    DWORD_PTR dwContext);

 
CGopherConnection(
    CInternetSession* pSession,  
    LPCTSTR pstrServer,  
    LPCTSTR pstrUserName = NULL,  
    LPCTSTR pstrPassword = NULL,  
    DWORD_PTR dwContext = 0,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```  
  
### <a name="parameters"></a>Parametri  
 `pSession`  
 Puntatore all'oggetto correlato [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto.  
  
 `hConnected`  
 Handle della finestra della sessione corrente di Internet.  
  
 `pstrServer`  
 Un puntatore a una stringa contenente il nome del server FTP.  
  
 `dwContext`  
 L'identificatore di contesto per l'operazione. `dwContext` Identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback). Il valore predefinito è impostato su 1. Tuttavia, è possibile assegnare in modo esplicito un ID di contesto specifico per l'operazione. L'oggetto e qualsiasi lavoro che svolto verrà associati all'ID di contesto.  
  
 `pstrUserName`  
 Puntatore a una stringa con terminazione null che specifica il nome dell'utente per l'accesso. Se **NULL**, il valore predefinito è anonimo.  
  
 `pstrPassword`  
 Un puntatore a una stringa con terminazione null che specifica la password da utilizzare per l'accesso. Se entrambi `pstrPassword` e `pstrUserName` sono **NULL**, la password utente anonimo predefinito è il nome di posta elettronica dell'utente. Se `pstrPassword` è **NULL** (o una stringa vuota) ma `pstrUserName` non **NULL**, viene utilizzata una password vuota. Nella tabella seguente vengono descritti il comportamento per le quattro possibili impostazioni di `pstrUserName` e `pstrPassword`:  
  
|`pstrUserName`|`pstrPassword`|Nome utente inviato al server FTP|Password inviata al server FTP|  
|--------------------|--------------------|---------------------------------|---------------------------------|  
|**NULL** o ""|**NULL** o ""|"anonymous"|Nome di posta elettronica dell'utente|  
|Non- **NULL** stringa|**NULL** o ""|`pstrUserName`|" "|  
|**NULL** diverso da **NULL** stringa|**ERRORE**|**ERRORE**||  
|Non- **NULL** stringa|Non- **NULL** stringa|`pstrUserName`|`pstrPassword`|  
  
 `nPort`  
 Numero che identifica la porta TCP/IP da utilizzare nel server.  
  
### <a name="remarks"></a>Note  
 Non creare mai un `CGopherConnection` direttamente. Chiamare invece [CInternetSession:: GetGopherConnection](../../mfc/reference/cinternetsession-class.md#getgopherconnection), che consente di creare un `CGopherConnection` dell'oggetto e restituisce un puntatore a esso.  
  
##  <a name="createlocator"></a>  CGopherConnection::CreateLocator  
 Chiamare questa funzione membro per creare un localizzatore gopher per individuare o identificare un file in un server gopher.  
  
```  
CGopherLocator CreateLocator(
    LPCTSTR pstrDisplayString,  
    LPCTSTR pstrSelectorString,  
    DWORD dwGopherType);  
  
static CGopherLocator CreateLocator(LPCTSTR pstrLocator);

 
static CGopherLocator CreateLocator(
    LPCTSTR pstrServerName,  
    LPCTSTR pstrDisplayString,  
    LPCTSTR pstrSelectorString,  
    DWORD dwGopherType,  
    INTERNET_PORT nPort = INTERNET_INVALID_PORT_NUMBER);
```  
  
### <a name="parameters"></a>Parametri  
 `pstrDisplayString`  
 Un puntatore a una stringa contenente il nome del documento gopher o della directory da recuperare. Se il `pstrDisplayString` parametro **NULL**, viene restituita la directory predefinita per il server gopher.  
  
 `pstrSelectorString`  
 Puntatore alla stringa di selettore venga inviato al server gopher per recuperare un elemento. `pstrSelectorString` può essere **NULL**.  
  
 *dwGopherType*  
 Specifica se `pstrSelectorString` fa riferimento a una directory o un documento, e se la richiesta è gopher o gopher +. Visualizzare gli attributi per la struttura [GOPHER_FIND_DATA](http://msdn.microsoft.com/library/windows/desktop/aa384215) in Windows SDK.  
  
 `pstrLocator`  
 Puntatore a una stringa che identifica il file da aprire. In genere, questa stringa viene restituita da una chiamata a [CGopherFileFind:: GetLocator](../../mfc/reference/cgopherfilefind-class.md#getlocator).  
  
 *pstrServerName*  
 Un puntatore a una stringa contenente il nome del server gopher.  
  
 `nPort`  
 Il numero che identifica la porta di Internet per questa connessione.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 La versione della funzione membro statica è necessario specificare un server, mentre la versione non statico viene utilizzato il nome del server dall'oggetto connessione.  
  
 Per recuperare informazioni da un server gopher, un'applicazione deve innanzitutto ottenere un indicatore di posizione gopher. L'applicazione deve quindi considerare l'indicatore di posizione come un token opaco (vale a dire o dell'applicazione può utilizzare l'indicatore di posizione ma non direttamente modificare confrontarlo). In genere, l'applicazione utilizza l'indicatore di posizione per le chiamate al [CGopherFileFind:: FindFile](../../mfc/reference/cgopherfilefind-class.md#findfile) funzione membro per recuperare una parte specifica di informazioni.  
  
##  <a name="getattribute"></a>  CGopherConnection::GetAttribute  
 Chiamare questa funzione membro per recuperare informazioni di attributo specifico su un elemento dal server gopher.  
  
```  
BOOL GetAttribute(
    CGopherLocator& refLocator    CString strRequestedAttributes,  
    CString& strResult,);
```  
  
### <a name="parameters"></a>Parametri  
 `refLocator`  
 Un riferimento a un [oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.  
  
 *strRequestedAttributes*  
 Stringa delimitata che specifica i nomi degli attributi richiesti.  
  
 `strResult`  
 Un riferimento a un [CString](../../atl-mfc-shared/reference/cstringt-class.md) che riceve il tipo di localizzatore.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0. Se la chiamata ha esito negativo, la funzione Win32 [GetLastError](http://msdn.microsoft.com/library/windows/desktop/ms679360) può essere chiamato per determinare la causa dell'errore.  
  
##  <a name="openfile"></a>  CGopherConnection::OpenFile  
 Chiamare questa funzione membro per aprire un file in un server gopher.  
  
```  
CGopherFile* OpenFile(
    CGopherLocator& refLocator,  
    DWORD dwFlags = 0,  
    LPCTSTR pstrView = NULL,  
    DWORD_PTR dwContext = 1);
```  
  
### <a name="parameters"></a>Parametri  
 `refLocator`  
 Un riferimento a un [oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md) oggetto.  
  
 `dwFlags`  
 Qualsiasi combinazione di flag INTERNET_FLAG_ *. Vedere [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl) per ulteriori informazioni su INTERNET_FLAG_\* flag.  
  
 `pstrView`  
 Un puntatore a una stringa di visualizzazione di file. Se diverse visualizzazioni del file esistono sul server, questo parametro specifica quale visualizzazione di file da aprire. Se `pstrView` è **NULL**, viene utilizzata la visualizzazione di file predefinita.  
  
 `dwContext`  
 L'ID del contesto per il file viene aperto. Vedere **osservazioni** per ulteriori informazioni su `dwContext`.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al [CGopherFile](../../mfc/reference/cgopherfile-class.md) oggetto da aprire.  
  
### <a name="remarks"></a>Note  
 Esegue l'override dell'impostazione predefinita `dwContext` per impostare l'identificatore di contesto su un valore di propria scelta. L'identificatore di contesto è associato a questa operazione specifica del `CGopherConnection` oggetto creato dal relativo [CInternetSession](../../mfc/reference/cinternetsession-class.md) oggetto. Viene restituito il valore di [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback) per fornire lo stato dell'operazione con cui viene identificato. Vedere l'articolo [prime operazioni in Internet: WinInet](../../mfc/wininet-basics.md) per ulteriori informazioni sull'identificatore di contesto.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CFtpConnection](../../mfc/reference/cftpconnection-class.md)   
 [CHttpConnection (classe)](../../mfc/reference/chttpconnection-class.md)   
 [Classe CInternetConnection](../../mfc/reference/cinternetconnection-class.md)   
 [Classe di oggetto CGopherLocator](../../mfc/reference/cgopherlocator-class.md)   
 [CGopherFile (classe)](../../mfc/reference/cgopherfile-class.md)   
 [Classe CInternetSession](../../mfc/reference/cinternetsession-class.md)
