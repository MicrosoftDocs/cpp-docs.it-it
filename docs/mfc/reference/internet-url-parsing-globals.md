---
title: Funzioni globali di analisi di URL Internet e helper | Documenti Microsoft
ms.custom: 
ms.date: 04/03/2017
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.mfc.macros.isapi
dev_langs: C++
helpviewer_keywords:
- parsing, URLs
- URLs, parsing
ms.assetid: 46c6384f-e4a6-4dbd-9196-219c19040ec5
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e29ae754e7f5b078c23f0cdf27c0a280cd28b40a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="internet-url-parsing-globals-and-helpers"></a>Gli helper e funzioni globali di analisi di URL Internet
Quando un client invia una query al server Internet, è possibile utilizzare l'URL globali di analisi per estrarre le informazioni sul client. Le funzioni di supporto forniscono altre funzionalità di internet.
  
## <a name="internet-url-parsing-globals"></a>Funzioni globali di analisi degli URL Internet  
  
|||  
|-|-|  
|[AfxParseURL](#afxparseurl)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.|  
|[AfxParseURLEx](#afxparseurlex)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, nonché fornire il nome utente e password.|  

## <a name="other-internet-helpers"></a>Altri helper Internet
|||
|-|-|
|[AfxThrowInternetException](#afxthrowinternetexception)|Genera un'eccezione relativa alla connessione internet.|
|[AfxGetInternetHandleType](#afxgetinternethandletype)|Determina il tipo di un handle di Internet.|
  
##  <a name="afxparseurl"></a>AfxParseURL  
 Viene utilizzato questo globale [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
```   
BOOL AFXAPI AfxParseURL(
    LPCTSTR pstrURL,  
    DWORD& dwServiceType,  
    CString& strServer,  
    CString& strObject,  
    INTERNET_PORT& nPort); 
```  
  
### <a name="parameters"></a>Parametri  
 *pstrURL*  
 Un puntatore a una stringa contenente l'URL deve essere analizzato.  
  
 `dwServiceType`  
 Indica il tipo di servizio Internet. I valori possibili sono i seguenti:  
  
-   AFX_INET_SERVICE_FTP  
  
-   AFX_INET_SERVICE_HTTP  
  
-   AFX_INET_SERVICE_HTTPS  
  
-   AFX_INET_SERVICE_GOPHER  
  
-   AFX_INET_SERVICE_FILE  
  
-   AFX_INET_SERVICE_MAILTO  
  
-   AFX_INET_SERVICE_NEWS  
  
-   AFX_INET_SERVICE_NNTP  
  
-   AFX_INET_SERVICE_TELNET  
  
-   AFX_INET_SERVICE_WAIS  
  
-   AFX_INET_SERVICE_MID  
  
-   AFX_INET_SERVICE_CID  
  
-   AFX_INET_SERVICE_PROSPERO  
  
-   AFX_INET_SERVICE_AFS  
  
-   AFX_INET_SERVICE_UNK  
  
 `strServer`  
 Il primo segmento di URL che segue il tipo di servizio.  
  
 `strObject`  
 Oggetto che si intende l'URL (può essere vuoto).  
  
 `nPort`  
 Determinato dal Server o oggetto parti dell'URL, se esiste.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'URL è stato analizzato correttamente; in caso contrario, 0 se è vuoto o non contiene un tipo di servizio noto di Internet.  
  
### <a name="remarks"></a>Note  
 Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.  
  
 Ad esempio, `AfxParseURL` analizza URL nel formato **service://server/dir/dir/object.ext:port** e restituisce i relativi componenti, come illustrato di seguito:  
  
 `strServer`= = "server"  
  
 `strObject`= = "/ dir/dir/object/object.ext"  
  
 `nPort`= = #port  
  
 `dwServiceType`= = #service  
  
> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxinet. h  
  
##  <a name="afxparseurlex"></a>AfxParseURLEx  
 Questa funzione globale è la versione estesa del [AfxParseURL](#afxparseurl) e viene utilizzata per [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
```   
BOOL AFXAPI AfxParseURLEx(
    LPCTSTR pstrURL,  
    DWORD& dwServiceType,  
    CString& strServer,  
    CString& strObject,  
    INTERNET_PORT& nPort,  
    CString& strUsername,  
    CString& strPassword,  
    DWORD dwFlags = 0); 
```  
  
### <a name="parameters"></a>Parametri  
 *pstrURL*  
 Un puntatore a una stringa contenente l'URL deve essere analizzato.  
  
 `dwServiceType`  
 Indica il tipo di servizio Internet. I valori possibili sono i seguenti:  
  
-   AFX_INET_SERVICE_FTP  
  
-   AFX_INET_SERVICE_HTTP  
  
-   AFX_INET_SERVICE_HTTPS  
  
-   AFX_INET_SERVICE_GOPHER  
  
-   AFX_INET_SERVICE_FILE  
  
-   AFX_INET_SERVICE_MAILTO  
  
-   AFX_INET_SERVICE_NEWS  
  
-   AFX_INET_SERVICE_NNTP  
  
-   AFX_INET_SERVICE_TELNET  
  
-   AFX_INET_SERVICE_WAIS  
  
-   AFX_INET_SERVICE_MID  
  
-   AFX_INET_SERVICE_CID  
  
-   AFX_INET_SERVICE_PROSPERO  
  
-   AFX_INET_SERVICE_AFS  
  
-   AFX_INET_SERVICE_UNK  
  
 `strServer`  
 Il primo segmento di URL che segue il tipo di servizio.  
  
 `strObject`  
 Oggetto che si intende l'URL (può essere vuoto).  
  
 `nPort`  
 Determinato dal Server o oggetto parti dell'URL, se esiste.  
  
 *strUsername*  
 Un riferimento a un `CString` oggetto contenente il nome dell'utente.  
  
 `strPassword`  
 Un riferimento a un `CString` oggetto contenente la password dell'utente.  
  
 `dwFlags`  
 Il flag che controllano come analizzare l'URL. Può essere una combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|**ICU_DECODE**|Consente di convertire le sequenze di escape % XX caratteri.|  
|**ICU_NO_ENCODE**|Convertire i caratteri non sicuri sequenza di escape.|  
|**ICU_NO_META**|Non rimuovere le sequenze di metadati (ad esempio, "\". e "\"...) dall'URL.|  
|**ICU_ENCODE_SPACES_ONLY**|Codificare solo da spazi.|  
|**ICU_BROWSER_MODE**|Non codificare o decodificare i caratteri dopo '#' o ' e non rimuovere spazio vuoto finale dopo '. Se questo valore viene omesso, l'intero URL è codificato e spazio vuoto finale viene rimosso.|  
  
 Se si utilizza il valore predefinito MFC, vale a non dire alcun flag, la funzione converte tutti i caratteri non sicuri e le sequenze di metadati (ad esempio \\., \..., e \\...) sequenze di escape.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'URL è stato analizzato correttamente; in caso contrario, 0 se è vuoto o non contiene un tipo di servizio noto di Internet.  
  
### <a name="remarks"></a>Note  
 Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, nonché fornire nome e la password dell'utente. I flag indicano come unsafe caratteri vengono gestiti.  
  
> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxinet. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
 
## <a name="afxgetinternethandletype"></a>AfxGetInternetHandleType
Utilizzare questa funzione globale per determinare il tipo di un handle di Internet.  
   
### <a name="syntax"></a>Sintassi  
  ```
DWORD AFXAPI AfxGetInternetHandleType(  HINTERNET hQuery );  
```
### <a name="parameters"></a>Parametri  
 `hQuery`  
 Handle per una query di Internet.  
   
### <a name="return-value"></a>Valore restituito  
 Qualsiasi valore definiti da WININET i tipi di servizi Internet. H. Vedere la sezione Osservazioni per un elenco di questi servizi Internet. Se l'handle è NULL o non riconosciuto, la funzione restituisce AFX_INET_SERVICE_UNK.  
   
### <a name="remarks"></a>Note  
 Nell'elenco seguente include i possibili tipi Internet restituiti da `AfxGetInternetHandleType`.  
  
-   INTERNET_HANDLE_TYPE_INTERNET  
  
-   INTERNET_HANDLE_TYPE_CONNECT_FTP  
  
-   INTERNET_HANDLE_TYPE_CONNECT_GOPHER  
  
-   INTERNET_HANDLE_TYPE_CONNECT_HTTP  
  
-   INTERNET_HANDLE_TYPE_FTP_FIND  
  
-   INTERNET_HANDLE_TYPE_FTP_FIND_HTML  
  
-   INTERNET_HANDLE_TYPE_FTP_FILE  
  
-   INTERNET_HANDLE_TYPE_FTP_FILE_HTML  
  
-   INTERNET_HANDLE_TYPE_GOPHER_FIND  
  
-   INTERNET_HANDLE_TYPE_GOPHER_FIND_HTML  
  
-   INTERNET_HANDLE_TYPE_GOPHER_FILE  
  
-   INTERNET_HANDLE_TYPE_GOPHER_FILE_HTML  
  
-   INTERNET_HANDLE_TYPE_HTTP_REQUEST  
  
> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [AfxParseURL](internet-url-parsing-globals.md#afxparseurl)
 
## <a name="afxthrowinternetexception"></a>AfxThrowInternetException
Genera un'eccezione di Internet.  
   
### <a name="syntax"></a>Sintassi    
```
   void AFXAPI AfxThrowInternetException(  DWORD dwContext,  DWORD dwError = 0 );  
```
### <a name="parameters"></a>Parametri  
 `dwContext`  
 L'identificatore di contesto per l'operazione che ha causato l'errore. Il valore predefinito di `dwContext` specificato originariamente nel [CInternetSession](cinternetsession-class.md) e viene passato a [CInternetConnection](cinternetconnection-class.md)- e [CInternetFile](cinternetfile-class.md)-classi derivate. Per le operazioni eseguite su una connessione o un file specifiche, è in genere sostituire il valore predefinito con un `dwContext` personalizzati. Questo valore viene quindi restituito al [CInternetSession:: OnStatusCallback](cinternetsession-class.md#onstatuscallback) per identificare lo stato dell'operazione specifica. 
  
 `dwError`  
 Errore che ha causato l'eccezione.  
   
### <a name="remarks"></a>Note  
 È responsabile per determinare la causa in base al codice di errore del sistema operativo.  
  
> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [Classe CInternetException](cinternetexception-class.md)   
 [THROW](#throw)
 
