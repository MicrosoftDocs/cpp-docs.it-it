---
title: Funzioni di utilità HTTP ATL
ms.date: 11/04/2016
ms.assetid: 4db57ef2-31fa-4696-bbeb-79a9035033ed
ms.openlocfilehash: d2e30f940ded0bf355000cd42ff46a67662b54f5
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833985"
---
# <a name="atl-http-utility-functions"></a>Funzioni di utilità HTTP ATL

Queste funzioni supportano la manipolazione degli URL.

|Funzione|Descrizione|
|-|-|
|[AtlCanonicalizeUrl](#atlcanonicalizeurl)|Canonicalizes un URL, che include la conversione di caratteri e spazi non sicuri in sequenze di escape.|
|[AtlCombineUrl](#atlcombineurl)|Combina un URL di base e un URL relativo in un singolo URL canonico.|
|[AtlEscapeUrl](#atlescapeurl)|Converte tutti i caratteri non sicuri in sequenze di escape.|
|[AtlGetDefaultUrlPort](#atlgetdefaulturlport)|Ottiene il numero di porta predefinito associato a uno schema o a un protocollo Internet specifico.|
|[AtlIsUnsafeUrlChar](#atlisunsafeurlchar)|Determina se un carattere è sicuro per l'utilizzo in un URL.|
|[AtlUnescapeUrl](#atlunescapeurl)|Converte i caratteri di escape nei valori originali.|
|[RGBToHtml](#rgbtohtml)|Converte un valore [COLORREF](/windows/win32/gdi/colorref) nel testo HTML corrispondente a tale valore di colore.|
|[SystemTimeToHttpDate](#systemtimetohttpdate)|Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="atlcanonicalizeurl"></a><a name="atlcanonicalizeurl"></a> AtlCanonicalizeUrl

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
URL da convertire in forma canonica.

*szCanonicalized*<br/>
Buffer allocato dal chiamante per ricevere l'URL canonico.

*pdwMaxLength*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri di *szCanonicalized*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer, incluso il carattere null di terminazione. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in byte del buffer, incluso lo spazio per il carattere null di terminazione.

*dwFlags*<br/>
ATL_URL flag che controllano il comportamento di questa funzione.

- ATL_URL_BROWSER_MODE non codifica né decodifica i caratteri dopo "#" o "?" e non rimuove lo spazio vuoto finale dopo "?". Se questo valore non viene specificato, l'intero URL viene codificato e gli spazi vuoti finali vengono rimossi.

- ATL_URL_DECODE converte tutte le sequenze% XX in caratteri, incluse le sequenze di escape, prima dell'analisi dell'URL.

- ATL_URL_ENCODE_PERCENT codifica tutti i segni di percentuale rilevati. Per impostazione predefinita, i segni di percentuale non sono codificati.

- ATL_URL_ENCODE_SPACES_ONLY codifica solo gli spazi.

- ATL_URL_ESCAPE converte tutte le sequenze di escape (% XX) nei caratteri corrispondenti.

- ATL_URL_NO_ENCODE non converte i caratteri unsafe in sequenze di escape.

- ATL_URL_NO_META non rimuove le metasequenze (ad esempio "." e "..") dall'URL.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Si comporta come la versione corrente di [InternetCanonicalizeUrl](/windows/win32/api/wininet/nf-wininet-internetcanonicalizeurlw) , ma non richiede l'installazione di WinInet o Internet Explorer.

## <a name="atlcombineurl"></a><a name="atlcombineurl"></a> AtlCombineUrl

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
URL di base.

*szRelativeUrl*<br/>
URL relativo all'URL di base.

*szBuffer*<br/>
Buffer allocato dal chiamante per ricevere l'URL canonico.

*pdwMaxLength*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri di *szBuffer*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer, incluso il carattere null di terminazione. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in byte del buffer, incluso lo spazio per il carattere null di terminazione.

*dwFlags*<br/>
Flag che controllano il comportamento di questa funzione. Vedere [AtlCanonicalizeUrl](#atlcanonicalizeurl).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Si comporta come la versione corrente di [InternetCombineUrl](/windows/win32/api/wininet/nf-wininet-internetcombineurlw) , ma non richiede l'installazione di WinInet o Internet Explorer.

## <a name="atlescapeurl"></a><a name="atlescapeurl"></a> AtlEscapeUrl

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
URL da convertire.

*lpszStringOut*<br/>
Buffer allocato dal chiamante in cui verrà scritto l'URL convertito.

*pdwStrLen*<br/>
Puntatore a una variabile DWORD. Se la funzione ha esito positivo, *pdwStrLen* riceve il numero di caratteri scritti nel buffer, incluso il carattere null di terminazione. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in byte del buffer, incluso lo spazio per il carattere null di terminazione. Quando si usa la versione a caratteri wide di questo metodo, *pdwStrLen* riceve il numero di caratteri necessari, non il numero di byte.

*dwMaxLength*<br/>
Dimensione del buffer *lpszStringOut*.

*dwFlags*<br/>
ATL_URL flag che controllano il comportamento di questa funzione. Per i valori possibili, vedere [ATLCanonicalizeUrl](#atlcanonicalizeurl) .

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="atlgetdefaulturlport"></a><a name="atlgetdefaulturlport"></a> AtlGetDefaultUrlPort

Chiamare questa funzione per ottenere il numero di porta predefinito associato a uno schema o a un protocollo Internet specifico.

```cpp
inline ATL_URL_PORT AtlGetDefaultUrlPort(ATL_URL_SCHEME m_nScheme) throw();
```

### <a name="parameters"></a>Parametri

*m_nScheme*<br/>
Valore [ATL_URL_SCHEME](atl-url-scheme-enum.md) che identifica lo schema per il quale si desidera ottenere il numero di porta.

### <a name="return-value"></a>Valore restituito

Il [ATL_URL_PORT](atl-typedefs.md#atl_url_port) associato allo schema o al ATL_URL_INVALID_PORT_NUMBER specificato se lo schema non è riconosciuto.

## <a name="atlisunsafeurlchar"></a><a name="atlisunsafeurlchar"></a> AtlIsUnsafeUrlChar

Chiamare questa funzione per verificare se un carattere può essere utilizzato in sicurezza in un URL.

```cpp
inline BOOL AtlIsUnsafeUrlChar(char chIn) throw();
```

### <a name="parameters"></a>Parametri

*Mento*<br/>
Carattere di cui verificare la sicurezza.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il carattere di input non è sicuro; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

I caratteri che non devono essere usati negli URL possono essere testati usando questa funzione e convertiti usando [AtlCanonicalizeUrl](#atlcanonicalizeurl).

## <a name="atlunescapeurl"></a><a name="atlunescapeurl"></a> AtlUnescapeUrl

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
URL da convertire.

*lpszStringOut*<br/>
Buffer allocato dal chiamante in cui verrà scritto l'URL convertito.

*pdwStrLen*<br/>
Puntatore a una variabile DWORD. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer, incluso il carattere null di terminazione. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in byte del buffer, incluso lo spazio per il carattere null di terminazione.

*dwMaxLength*<br/>
Dimensione del buffer *lpszStringOut*.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Inverte il processo di conversione applicato da [AtlEscapeUrl](#atlescapeurl).

## <a name="rgbtohtml"></a><a name="rgbtohtml"></a> RGBToHtml

Converte un valore [COLORREF](/windows/win32/gdi/colorref) nel testo HTML corrispondente a tale valore di colore.

```cpp
bool inline RGBToHtml(
   COLORREF color,
   LPTSTR pbOut,
   long nBuffer);
```

### <a name="parameters"></a>Parametri

*color*<br/>
Valore di colore RGB.

*pbOut*<br/>
Buffer allocato dal chiamante per ricevere il testo per il valore del colore HTML. Il buffer deve contenere spazio per almeno 8 caratteri, incluso lo spazio per il carattere di terminazione null.

*nBuffer*<br/>
Dimensioni in byte del buffer (incluso lo spazio per il carattere di terminazione null).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Un valore di colore HTML è un segno di cancelletto seguito da un valore esadecimale a 6 cifre che usa 2 cifre per ogni componente rosso, verde e blu del colore, ad esempio #FFFFFF è bianco.

## <a name="systemtimetohttpdate"></a><a name="systemtimetohttpdate"></a> SystemTimeToHttpDate

Chiamare questa funzione per convertire l'ora di sistema in una stringa in un formato appropriato da utilizzare nelle intestazioni HTTP.

```cpp
inline void SystemTimeToHttpDate(
   const SYSTEMTIME& st,
   CStringA& strTime);
```

### <a name="parameters"></a>Parametri

*St*<br/>
Ora di sistema da ottenere come stringa di formato HTTP.

*strTime*<br/>
Riferimento a una variabile di stringa per ricevere la data e l'ora HTTP come definito in RFC 2616 ( [https://www.ietf.org/rfc/rfc2616.txt](https://www.ietf.org/rfc/rfc2616.txt) ) e rfc 1123 ( [https://www.ietf.org/rfc/rfc1123.txt](https://www.ietf.org/rfc/rfc1123.txt) ).

## <a name="see-also"></a>Vedere anche

[Concetti](../active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../atl-com-desktop-components.md)<br/>
[InternetCanonicalizeUrl](/windows/win32/api/wininet/nf-wininet-internetcanonicalizeurlw)
