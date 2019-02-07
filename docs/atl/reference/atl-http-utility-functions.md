---
title: Funzioni di utilità HTTP ATL
ms.date: 11/04/2016
ms.assetid: 4db57ef2-31fa-4696-bbeb-79a9035033ed
ms.openlocfilehash: be38dc8b8547574ea47021f8b14f21060a0755f0
ms.sourcegitcommit: bd637e9c39650cfd530520ea978a22fa4caa0e42
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/07/2019
ms.locfileid: "55849648"
---
# <a name="atl-http-utility-functions"></a>Funzioni di utilità HTTP ATL

Queste funzioni supportano manipolazione degli URL.

|||
|-|-|
|[AtlCanonicalizeUrl](#atlcanonicalizeurl)|Conversione in formato canonico un URL, inclusa la conversione spazi e caratteri non sicuri nelle sequenze di escape.|
|[AtlCombineUrl](#atlcombineurl)|Combina un URL di base e un URL relativo in un singolo URL canonico.|
|[AtlEscapeUrl](#atlescapeurl)|Converte tutti i caratteri non sicuri in sequenze di escape.|
|[AtlGetDefaultUrlPort](#atlgetdefaulturlport)|Ottiene il numero di porta predefinito associato a uno schema o protocollo Internet specifico.|
|[AtlIsUnsafeUrlChar](#atlisunsafeurlchar)|Determina se un carattere è sicuro per l'utilizzo in un URL.|
|[AtlUnescapeUrl](#atlunescapeurl)|Converte i caratteri di escape i valori originali.|
|[RGBToHtml](#rgbtohtml)|Converte un [COLORREF](/windows/desktop/gdi/colorref) valore nel testo HTML corrispondente al valore del colore.|
|[SystemTimeToHttpDate](#systemtimetohttpdate)|Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="atlcanonicalizeurl"></a> AtlCanonicalizeUrl

Chiamare questa funzione per convertire in formato canonico un URL, inclusa la conversione dei caratteri e degli spazi non sicuri nelle sequenze di escape.

```cpp
inline BOOL AtlCanonicalizeUrl(
   LPCTSTR szUrl,
   LPTSTR szCanonicalized,
   DWORD* pdwMaxLength,
   DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*szUrl*<br/>
URL a cui essere in forma canonica.

*szCanonicalized*<br/>
Buffer allocato dal chiamante di ricevere l'URL in forma canonica.

*pdwMaxLength*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri della *szCanonicalized*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer tra cui il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza richiesta in byte del buffer incluso lo spazio per il carattere di terminazione null.

*dwFlags*<br/>
ATL_URL flag che controllano il comportamento di questa funzione.

- ATL_URL_BROWSER_MODE non codificare o decodificare i caratteri successivi a "#" o "?" e non rimuove gli spazi finali dopo "?". Se questo valore viene omesso, l'intero URL è codificato e spazio vuoto finale viene rimosso.

- ATL_URL_DECODE converte tutte le sequenze XX % in caratteri, tra cui le sequenze di escape, prima che l'URL viene analizzato.

- Consente di codificare ATL_URL_ENCODE_PERCENT durante qualsiasi segni di percentuale. Per impostazione predefinita, i segni di percentuale non vengono codificati.

- Consente di codificare ATL_URL_ENCODE_SPACES_ONLY solo da spazi.

- ATL_URL_ESCAPE converte tutti i (% XX) le sequenze di escape nei caratteri corrispondenti.

- ATL_URL_NO_ENCODE non converte i caratteri non sicuri in sequenze di escape.

- ATL_URL_NO_META non rimuove le sequenze di metadati (ad esempio "."e"..") dall'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Si comporta come la versione corrente di [InternetCanonicalizeUrl](/windows/desktop/api/wininet/nf-wininet-internetcanonicalizeurla) ma non richiede WinInet o Internet Explorer per l'installazione.

## <a name="atlcombineurl"></a> AtlCombineUrl

Chiamare questa funzione per combinare un URL di base e un URL relativo all'interno di un singolo URL canonico.

```cpp
inline BOOL AtlCombineUrl(
   LPCTSTR szBaseUrl,
   LPCTSTR szRelativeUrl,
   LPTSTR szBuffer,
   DWORD* pdwMaxLength,
   DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*szBaseUrl*<br/>
L'URL di base.

*szRelativeUrl*<br/>
L'URL relativo URL di base.

*szBuffer*<br/>
Buffer allocato dal chiamante di ricevere l'URL in forma canonica.

*pdwMaxLength*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri della *szBuffer*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer tra cui il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza richiesta in byte del buffer incluso lo spazio per il carattere di terminazione null.

*dwFlags*<br/>
Flag che controllano il comportamento di questa funzione. Visualizzare [AtlCanonicalizeUrl](#atlcanonicalizeurl).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Si comporta come la versione corrente di [InternetCombineUrl](/windows/desktop/api/wininet/nf-wininet-internetcombineurla) ma non richiede WinInet o Internet Explorer per l'installazione.

## <a name="atlescapeurl"></a> AtlEscapeUrl

Chiamare questa funzione per convertire tutti i caratteri non sicuri in sequenze di escape.

```cpp
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

*lpszStringIn*<br/>
L'URL da convertire.

*lpszStringOut*<br/>
Buffer allocato dal chiamante a cui verrà scritto l'URL convertito.

*pdwStrLen*<br/>
Puntatore a una variabile di tipo DWORD. Se la funzione ha esito positivo, *pdwStrLen* riceve il numero di caratteri scritti nel buffer tra cui il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza richiesta in byte del buffer incluso lo spazio per il carattere di terminazione null. Quando si usa questo metodo, la versione a caratteri wide *pdwStrLen* riceve il numero di caratteri richiesti, non il numero di byte.

*dwMaxLength*<br/>
Le dimensioni del buffer *lpszStringOut*.

*dwFlags*<br/>
ATL_URL flag che controllano il comportamento di questa funzione. Visualizzare [ATLCanonicalizeUrl](#atlcanonicalizeurl) per i valori possibili.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

## <a name="atlgetdefaulturlport"></a> AtlGetDefaultUrlPort

Chiamare questa funzione per ottenere il numero di porta predefinito associato a uno schema o a un protocollo Internet specifico.

```
inline ATL_URL_PORT AtlGetDefaultUrlPort(ATL_URL_SCHEME m_nScheme) throw();
```

### <a name="parameters"></a>Parametri

*m_nScheme*<br/>
Il [ATL_URL_SCHEME](atl-url-scheme-enum.md) valore che identifica lo schema per il quale si desidera ottenere il numero di porta.

### <a name="return-value"></a>Valore restituito

Il [ATL_URL_PORT](atl-typedefs.md#atl_url_port) associati a schema specificato o ATL_URL_INVALID_PORT_NUMBER se lo schema non è riconosciuto.

## <a name="atlisunsafeurlchar"></a> AtlIsUnsafeUrlChar

Chiamare questa funzione per verificare se un carattere può essere utilizzato in sicurezza in un URL.

```
inline BOOL AtlIsUnsafeUrlChar(char chIn) throw();
```

### <a name="parameters"></a>Parametri

*chIn*<br/>
Carattere da testare per motivi di sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il carattere di input è unsafe, FALSE in caso contrario.

### <a name="remarks"></a>Note

I caratteri che non devono essere utilizzati negli URL possono essere testati con questa funzione e convertito mediante [AtlCanonicalizeUrl](#atlcanonicalizeurl).

## <a name="atlunescapeurl"></a> AtlUnescapeUrl

Chiamare questa funzione per convertire i caratteri di escape nei relativi valori originali.

```cpp
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

*lpszStringIn*<br/>
L'URL da convertire.

*lpszStringOut*<br/>
Buffer allocato dal chiamante a cui verrà scritto l'URL convertito.

*pdwStrLen*<br/>
Puntatore a una variabile di tipo DWORD. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer tra cui il carattere di terminazione null. Se la funzione ha esito negativo, la variabile riceve la lunghezza richiesta in byte del buffer incluso lo spazio per il carattere di terminazione null.

*dwMaxLength*<br/>
Le dimensioni del buffer *lpszStringOut*.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Inverte il processo di conversione applicato da [AtlEscapeUrl](#atlescapeurl).

## <a name="rgbtohtml"></a> RGBToHtml

Converte un [COLORREF](/windows/desktop/gdi/colorref) valore nel testo HTML corrispondente al valore del colore.

```cpp
bool inline RGBToHtml(
   COLORREF color,
   LPTSTR pbOut,
   long nBuffer);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Un valore di colore RGB.

*pbOut*<br/>
Buffer allocato dal chiamante che riceve il testo per il valore di colore HTML. Il buffer deve disporre di spazio per almeno 8 caratteri, incluso lo spazio per il carattere di terminazione null).

*nBuffer*<br/>
La dimensione in byte del buffer (incluso lo spazio per il carattere di terminazione null).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Un valore di colore HTML è un segno di cancelletto seguito da un valore esadecimale a 6 cifre con 2 cifre per ogni componente rossi, verde e blu del colore (ad esempio, #FFFFFF è bianca).

## <a name="systemtimetohttpdate"></a> SystemTimeToHttpDate

Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.

```cpp
inline void SystemTimeToHttpDate(
   const SYSTEMTIME& st,
   CStringA& strTime);
```

### <a name="parameters"></a>Parametri

*st*<br/>
L'ora di sistema devono essere ottenuti come una stringa di formato HTTP.

*strTime*<br/>
Un riferimento a una variabile di stringa per la ricezione HTTP data ora come definito in RFC 2616 ([http://www.ietf.org/rfc/rfc2616.txt](http://www.ietf.org/rfc/rfc2616.txt)) e RFC 1123 ([http://www.ietf.org/rfc/rfc1123.txt](http://www.ietf.org/rfc/rfc1123.txt)).

## <a name="see-also"></a>Vedere anche

[Concetti](../active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../atl-com-desktop-components.md)<br/>
[InternetCanonicalizeUrl](/windows/desktop/api/wininet/nf-wininet-internetcanonicalizeurla)
