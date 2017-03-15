---
title: URL Internet globali di analisi | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.isapi
dev_langs:
- C++
helpviewer_keywords:
- parsing, URLs
- URLs, parsing
ms.assetid: 46c6384f-e4a6-4dbd-9196-219c19040ec5
caps.latest.revision: 14
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 3aec259acae2f5e9c9b65ac4e5c898ca57ff3d52
ms.lasthandoff: 02/24/2017

---
# <a name="internet-url-parsing-globals"></a>Funzioni globali di analisi degli URL Internet
Quando un client invia una query al server Internet, è possibile utilizzare l'URL globali di analisi per estrarre informazioni sul client.  
  
### <a name="internet-url-parsing-globals"></a>Funzioni globali di analisi degli URL Internet  
  
|||  
|-|-|  
|[AfxParseURL](#afxparseurl)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.|  
|[AfxParseURLEx](#afxparseurlex)|Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, nonché fornendo il nome utente e password.|  
  
##  <a name="a-nameafxparseurla--afxparseurl"></a><a name="afxparseurl"></a>AfxParseURL  
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
 Il primo segmento dell'URL dopo il tipo di servizio.  
  
 `strObject`  
 Oggetto che si intende l'URL (può essere vuota).  
  
 `nPort`  
 Determinato dal Server o oggetto parti dell'URL, se esiste.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'URL è stato analizzato correttamente; in caso contrario, 0 se è vuoto o non contiene un tipo di servizio Internet noto.  
  
### <a name="remarks"></a>Note  
 Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti.  
  
 Ad esempio, `AfxParseURL` analizza gli URL nel formato **service://server/dir/dir/object.ext:port** e restituisce i relativi componenti archiviate come segue:  
  
 `strServer`= = "server"  
  
 `strObject`= = "/ dir/dir/object/object.ext"  
  
 `nPort`= = #port  
  
 `dwServiceType`= = # #service  
  
> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxinet. h  
  
##  <a name="a-nameafxparseurlexa--afxparseurlex"></a><a name="afxparseurlex"></a>AfxParseURLEx  
 Questa funzione globale è la versione estesa del [AfxParseURL](#afxparseurl) e viene utilizzato in [CInternetSession:: OpenURL](../../mfc/reference/cinternetsession-class.md#openurl).  
  
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
 Il primo segmento dell'URL dopo il tipo di servizio.  
  
 `strObject`  
 Oggetto che si intende l'URL (può essere vuota).  
  
 `nPort`  
 Determinato dal Server o oggetto parti dell'URL, se esiste.  
  
 *strUsername*  
 Un riferimento a un `CString` oggetto contenente il nome dell'utente.  
  
 `strPassword`  
 Un riferimento a un `CString` oggetto contenente la password dell'utente.  
  
 `dwFlags`  
 I flag che controllano la modalità per analizzare l'URL. Può essere una combinazione dei valori seguenti:  
  
|Valore|Significato|  
|-----------|-------------|  
|**ICU_DECODE**|Convertire le sequenze di escape % XX in caratteri.|  
|**ICU_NO_ENCODE**|Non convertire i caratteri non sicuri in sequenza di escape.|  
|**ICU_NO_META**|Non rimuovere le sequenze di metadati (ad esempio, "\". e "\"...) dall'URL.|  
|**ICU_ENCODE_SPACES_ONLY**|Codificare solo da spazi.|  
|**ICU_BROWSER_MODE**|Non codificare o decodificare caratteri dopo '#' o ' e non rimuovere lo spazio vuoto finale dopo '. Se questo valore viene omesso, viene codificato l'intero URL e lo spazio vuoto finale viene rimosso.|  
  
 Se si utilizza il valore predefinito MFC, ovvero nessun flag, la funzione converte tutti i caratteri non sicuri e le sequenze di metadati (ad esempio \\., \..., e \\...) per eseguire l'escape sequenze.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'URL è stato analizzato correttamente; in caso contrario, 0 se è vuoto o non contiene un tipo di servizio Internet noto.  
  
### <a name="remarks"></a>Note  
 Analizza una stringa URL e restituisce il tipo di servizio e i relativi componenti, nonché fornire nome e la password dell'utente. I flag indicano caratteri non sicuri come vengono gestiti.  
  
> [!NOTE]
>  Per chiamare questa funzione, il progetto deve includere AFXINET. H.  

### <a name="requirements"></a>Requisiti  
  **Intestazione** afxinet. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

