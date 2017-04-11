---
title: "Funzioni di utilità ATL HTTP | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 4db57ef2-31fa-4696-bbeb-79a9035033ed
caps.latest.revision: 4
author: mikeblome
ms.author: mblome
translationtype: Machine Translation
ms.sourcegitcommit: d2d39abf526a58b8442107b5ee816f316ae841f5
ms.openlocfilehash: 0f55ad2529ac32647d72336b426e0790f5617561
ms.lasthandoff: 03/31/2017

---
# <a name="atl-http-utility-functions"></a>Funzioni di utilità HTTP ATL

Queste funzioni supportano la manipolazione degli URL.

|||  
|-|-|  
|[AtlCanonicalizeUrl](#atlcanonicalizeurl)|Conversione in formato canonico un URL, inclusa la conversione di caratteri non sicuri e gli spazi nelle sequenze di escape.|  
|[AtlCombineUrl](#atlcombineurl)|Combina un URL di base e un URL relativo in un singolo URL canonico.|  
|[AtlEscapeUrl](#atlescapeurl)|Converte tutti i caratteri non sicuri in sequenze di escape.|  
|[AtlGetDefaultUrlPort](#atlgetdefaulturlport)|Ottiene il numero di porta predefinito associato a uno schema o protocollo Internet specifico.|  
|[AtlIsUnsafeUrlChar](#atlisunsafeurlchar)|Determina se un carattere è sicuro per l'utilizzo in un URL.|  
|[AtlUnescapeUrl](#atlunescapeurl)|Converte i caratteri di escape i relativi valori originali.|  
|[RGBToHtml](#rgbtohtml)|Converte un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore nel testo HTML corrispondente al valore del colore.|
|[SystemTimeToHttpDate](#systemtimetohttpdate)|Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.|

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlutil. h  

## <a name="atlcanonicalizeurl"></a>AtlCanonicalizeUrl
Chiamare questa funzione per convertire in formato canonico un URL, inclusa la conversione dei caratteri e degli spazi non sicuri nelle sequenze di escape.  
  
```    
inline BOOL AtlCanonicalizeUrl(  
   LPCTSTR szUrl,  
   LPTSTR szCanonicalized,  
   DWORD* pdwMaxLength,  
   DWORD dwFlags = 0) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `szUrl`  
 URL da convertire in forma canonica.  
  
 `szCanonicalized`  
 Buffer allocata dal chiamante di ricevere l'URL in forma canonica.  
  
 `pdwMaxLength`  
 Puntatore a una variabile che contiene la lunghezza in caratteri di `szCanonicalized`. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer, escluso il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza in byte del buffer incluso lo spazio per il carattere di terminazione null.  
  
 `dwFlags`  
 Flag ATL_URL che controllano il comportamento di questa funzione. 

- `ATL_URL_BROWSER_MODE`Non codificare o decodificare i caratteri dopo "#" o "?" e non rimuove gli spazi finali dopo "?". Se questo valore viene omesso, l'intero URL è codificato e spazio vuoto finale viene rimosso.
- `ATL_URL_DECODE`Converte tutte le sequenze di % XX in caratteri, inclusi le sequenze di escape, prima che l'URL viene analizzato.
- `ATL_URL_ENCODE_PERCENT`Codifica qualsiasi durante i segni di percentuale. Per impostazione predefinita, non vengono codificati i segni di percentuale.
- `ATL_URL_ENCODE_SPACES_ONLY`Codifica solo da spazi.
- `ATL_URL_ESCAPE`Converte tutte le sequenze di escape (% XX) per i corrispondenti caratteri.
- `ATL_URL_NO_ENCODE`Non converte i caratteri non sicuri in sequenze di escape.
- `ATL_URL_NO_META`Non rimuove le sequenze di metadati (ad esempio "."e"...") dall'URL. 
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Si comporta come la versione corrente di [InternetCanonicalizeUrl](http://msdn.microsoft.com/library/windows/desktop/aa384342) ma non richiede WinInet o Internet Explorer per l'installazione.  
  
### <a name="see-also"></a>Vedere anche  
 [InternetCanonicalizeUrl](http://msdn.microsoft.com/library/windows/desktop/aa384342)

 ## <a name="atlcombineurl"></a>AtlCombineUrl
 Chiamare questa funzione per combinare un URL di base e un URL relativo all'interno di un singolo URL canonico.  
  
```    
inline BOOL AtlCombineUrl(  
   LPCTSTR szBaseUrl,  
   LPCTSTR szRelativeUrl,  
   LPTSTR szBuffer,  
   DWORD* pdwMaxLength,  
   DWORD dwFlags = 0) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *szBaseUrl*  
 L'URL di base.  
  
 *szRelativeUrl*  
 L'URL relativo all'URL di base.  
  
 `szBuffer`  
 Buffer allocata dal chiamante di ricevere l'URL in forma canonica.  
  
 `pdwMaxLength`  
 Puntatore a una variabile che contiene la lunghezza in caratteri di `szBuffer`. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer, escluso il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza in byte del buffer incluso lo spazio per il carattere di terminazione null.  
  
 `dwFlags`  
 Flag che controllano il comportamento di questa funzione. Vedere [ATL_URL flag](http://msdn.microsoft.com/library/76e8cc5c-4e17-4eb1-ac29-a94d5256c4a7).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Si comporta come la versione corrente di [InternetCombineUrl](http://msdn.microsoft.com/library/windows/desktop/aa384355) ma non richiede WinInet o Internet Explorer per l'installazione.  
  
## <a name="atlescapeurl"></a>AtlEscapeUrl
 Chiamare questa funzione per convertire tutti i caratteri non sicuri in sequenze di escape.  
  
```    
inline BOOL AtlEscapeUrl(  
   LPCSTR szStringIn,  
   LPSTR szStringOut,  
   DWORD* pdwStrLen,  
   DWORD dwMaxLength,  
   DWORD dwFlags = 0) throw();  
   
inline BOOL AtlEscapeUrl(  
   LPCWSTR szStringIn,  
   LPWSTR szStringOut,  
   DWORD* pdwStrLen,  
   DWORD dwMaxLength,  
   DWORD dwFlags = 0) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszStringIn`  
 L'URL da convertire.  
  
 `lpszStringOut`  
 Buffer allocata dal chiamante a cui verrà scritto l'URL convertito.  
  
 `pdwStrLen`  
 Puntatore a una variabile di tipo DWORD. Se la funzione ha esito positivo, `pdwStrLen` riceve il numero di caratteri scritti nel buffer, escluso il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza in byte del buffer incluso lo spazio per il carattere di terminazione null. Quando si utilizza la versione a caratteri "wide" di questo metodo, `pdwStrLen` riceve il numero di caratteri richiesti, non il numero di byte.  
  
 `dwMaxLength`  
 Le dimensioni del buffer `lpszStringOut`.  
  
 `dwFlags`  
 Flag ATL_URL che controllano il comportamento di questa funzione. Vedere [ATLCanonicalizeUrl](#atlcanonicalizeurl) per i valori possibili.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
## <a name="atlgetdefaulturlport"></a> 
 Chiamare questa funzione per ottenere il numero di porta predefinito associato a uno schema o a un protocollo Internet specifico.  
  
```  
inline ATL_URL_PORT AtlGetDefaultUrlPort(ATL_URL_SCHEME m_nScheme) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *m_nScheme*  
 Il [ATL_URL_SCHEME](atl-url-scheme-enum.md) valore che identifica lo schema per il quale si desidera ottenere il numero di porta.  
  
### <a name="return-value"></a>Valore restituito  
 Il [ATL_URL_PORT](atl-typedefs.md#atl_url_port) associata con lo schema specificato o ATL_URL_INVALID_PORT_NUMBER se lo schema non è riconosciuto.  

## <a name="atlisunsafeurlchar"></a>AtlIsUnsafeUrlChar
 Chiamare questa funzione per verificare se un carattere può essere utilizzato in sicurezza in un URL.  
  
```  
inline BOOL AtlIsUnsafeUrlChar(char chIn) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `chIn`  
 Carattere da testare per la sicurezza.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** se il carattere di input è sicuro, **FALSE** in caso contrario.  
  
### <a name="remarks"></a>Note  
 I caratteri che non devono essere utilizzati negli URL può essere testati mediante questa funzione e convertire mediante [AtlCanonicalizeUrl](#atlcanonicalizeurl).  
  
## <a name="atlunescapeurl"></a>AtlUnescapeUrl
 Chiamare questa funzione per convertire i caratteri di escape nei relativi valori originali.  
  
```    
inline BOOL AtlUnescapeUrl(  
   LPCSTR szStringIn,  
   LPSTR szStringOut,  
   LPDWORD pdwStrLen,  
   DWORD dwMaxLength) throw();  

inline BOOL AtlUnescapeUrl(  
   LPCWSTR szStringIn,  
   LPWSTR szStringOut,  
   LPDWORD pdwStrLen,  
   DWORD dwMaxLength) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszStringIn`  
 L'URL da convertire.  
  
 `lpszStringOut`  
 Buffer allocata dal chiamante a cui verrà scritto l'URL convertito.  
  
 `pdwStrLen`  
 Puntatore a una variabile di tipo DWORD. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer, escluso il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza in byte del buffer incluso lo spazio per il carattere di terminazione null.  
  
 `dwMaxLength`  
 Le dimensioni del buffer `lpszStringOut`.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Inverte il processo di conversione applicato da [AtlEscapeUrl](#atlescapeurl).  
  
## <a name="rgbtohtml"></a>RGBToHtml
Converte un [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) valore nel testo HTML corrispondente al valore del colore.  
  
```  
bool inline RGBToHtml(  
   COLORREF color,  
   LPTSTR pbOut,  
   long nBuffer);  
```  
  
### <a name="parameters"></a>Parametri  
 `color`  
 Un valore di colore RGB.  
  
 `pbOut`  
 Buffer allocata dal chiamante che riceve il testo per il valore di colore HTML. Il buffer deve disporre di spazio per almeno 8 caratteri, incluso lo spazio per una terminazione null).  
  
 *nBuffer*  
 Le dimensioni in byte del buffer (incluso lo spazio per il carattere di terminazione null).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Un valore di colore HTML è un segno di cancelletto seguito da un valore esadecimale a 6 cifre con 2 cifre per ognuno dei componenti rossi, verde e blu del colore (ad esempio, #FFFFFF è bianco).  
  
## <a name="systemtimetohttpdate"></a>SystemTimeToHttpDate
Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.  
  
```  
inline void SystemTimeToHttpDate( 
   const SYSTEMTIME& st,  
   CStringA& strTime);  
```  
  
### <a name="parameters"></a>Parametri  
 `st`  
 L'ora di sistema per essere ottenuti come una stringa di formato HTTP.  
  
 *strTime*  
 Un riferimento a una variabile di stringa per la ricezione ora HTTP come definito in RFC 2616 ([http://www.ietf.org/rfc/rfc2616.txt](http://www.ietf.org/rfc/rfc2616.txt)) e lo standard RFC 1123 ([http://www.ietf.org/rfc/rfc1123.txt](http://www.ietf.org/rfc/rfc1123.txt)).  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../../atl/active-template-library-atl-concepts.md)   
 [Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)   


