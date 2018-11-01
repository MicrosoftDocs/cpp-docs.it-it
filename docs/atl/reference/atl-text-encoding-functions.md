---
title: Funzioni di codifica del testo ATL
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::AtlGetHexValue
- atlbase/ATL::AtlGetVersion
- atlenc/ATL::AtlHexDecode
- atlenc/ATL::AtlHexDecodeGetRequiredLength
- atlenc/ATL::AtlHexEncode
- atlenc/ATL::AtlHexEncodeGetRequiredLength
- atlenc/ATL::AtlHexValue
- atlenc/ATL::BEncode
- atlenc/ATL::BEncodeGetRequiredLength
- atlenc/ATL::EscapeXML
- atlenc/ATL::GetExtendedChars
- atlenc/ATL::IsExtendedChar
- atlenc/ATL::QEncode
- atlenc/ATL::QEncodeGetRequiredLength
- atlenc/ATL::QPDecode
- atlenc/ATL::QPDecodeGetRequiredLength
- atlenc/ATL::QPEncode
- atlenc/ATL::QPEncodeGetRequiredLength
- atlenc/ATL::UUDecode
- atlenc/ATL::UUDecodeGetRequiredLength
- atlenc/ATL::UUEncode
- atlenc/ATL::UUEncodeGetRequiredLength
ms.assetid: 2ae1648b-2b87-4112-92aa-0069fcfd23da
ms.openlocfilehash: 5fbd3b1c4e0ca1c09e34c3e04a4d0b0613e45e73
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50430414"
---
# <a name="atl-text-encoding-functions"></a>Funzioni di codifica del testo ATL

Queste funzioni supportano testo la codifica e decodifica.

|||
|-|-|
|[AtlGetHexValue](#atlgethexvalue)|Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.|
|[AtlGetVersion](#atlgetversion)|Chiamare questa funzione per ottenere la versione della libreria ATL che si sta utilizzando.  |
|[AtlHexDecode](#atlhexdecode)|Decodifica una stringa di dati che codificati come testo esadecimale, ad esempio da una chiamata precedente a [AtlHexEncode](#atlhexencode).|
|[AtlHexDecodeGetRequiredLength](#atlhexdecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa esadecimale della lunghezza specificata.|
|[AtlHexEncode](#atlhexencode)|Chiamare questa funzione per codificare dei dati come stringa di testo esadecimale.|
|[AtlHexEncodeGetRequiredLength](#atlhexencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[AtlHexValue](#atlhexvalue)|Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale. |
|[AtlUnicodeToUTF8](#atlunicodetoutf8)|Chiamare questa funzione per convertire una stringa Unicode in UTF-8. |
|[BEncode](#bencode)|Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "B".|
|[BEncodeGetRequiredLength](#bencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[EscapeXML](#escapexml)|Chiamare questa funzione per convertire i caratteri non sicuri per l'utilizzo in XML nei relativi equivalenti specifici.|
|[GetExtendedChars](#getextendedchars)|Chiamare questa funzione per ottenere il numero di caratteri estesi in una stringa.|
|[IsExtendedChar](#isextendedchar)|Chiamare questa funzione per verificare se un carattere specificato è un carattere esteso (minore di 32, maggiore di 126 e non una scheda, un avanzamento riga o un ritorno a capo)|
|[QEncode](#qencode)|Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "Q".  |
|[QEncodeGetRequiredLength](#qencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[QPDecode](#qpdecode)|Decodifica una stringa di dati che codificati in formato stampabile tra virgolette, ad esempio da una chiamata precedente a [QPEncode](#qpencode).|
|[QPDecodeGetRequiredLength](#qpdecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata.|
|[QPEncode](#qpencode)|Chiamare questa funzione per codificare alcuni dati nel formato stampabile tra virgolette.|
|[QPEncodeGetRequiredLength](#qpencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[UUDecode](#uudecode)|Decodifica una stringa di dati UUEncode, ad esempio da una chiamata precedente a [UUEncode](#uuencode).|
|[UUDecodeGetRequiredLength](#uudecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa uuencode della lunghezza specificata.|
|[UUEncode](#uuencode)|Chiamare questa funzione per convertire i dati in uuencode. |
|[UUEncodeGetRequiredLength](#uuencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlenc. h

## <a name="atlgethexvalue"></a> AtlGetHexValue

Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.

```
inline char AtlGetHexValue(char chIn) throw();
```

### <a name="parameters"></a>Parametri

*mento*<br/>
Il carattere esadecimale '0'-'9', 'A'-'F', o da 'a'-'f'.

### <a name="return-value"></a>Valore restituito

Il valore numerico del carattere di input è interpretato come una cifra esadecimale. Ad esempio, un input di '0' restituisce un valore pari a 0 e un input di 'A' restituisce un valore pari a 10. Se il carattere di input non è una cifra esadecimale, questa funzione restituisce -1.

## <a name="atlgetversion"></a> AtlGetVersion

Chiamare questa funzione per ottenere la versione della libreria ATL che si sta utilizzando.

```
ATLAPI_(DWORD) AtlGetVersion(void* pReserved);
```

### <a name="parameters"></a>Parametri

*mantenuti*<br/>
Un puntatore riservato.

### <a name="return-value"></a>Valore restituito

Restituisce un valore integer di valore DWORD della versione della libreria ATL in fase di compilazione o in esecuzione.

## <a name="example"></a>Esempio

La funzione deve essere chiamata come indicato di seguito.

[!code-cpp[NVC_ATL_Utilities#95](../../atl/codesnippet/cpp/atl-text-encoding-functions_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atlhexdecode"></a> AtlHexDecode

Decodifica una stringa di dati che codificati come testo esadecimale, ad esempio da una chiamata precedente a [AtlHexEncode](#atlhexencode).

```
inline BOOL AtlHexDecode(
   LPCSTR pSrcData,
   int nSrcLen,
   LPBYTE pbDest,
   int* pnDestLen) throw();
```

### <a name="parameters"></a>Parametri

*pSrcData*<br/>
Stringa che contiene i dati da decodificare.

*nSrcLen*<br/>
La lunghezza in caratteri della *pSrcData*.

*pbDest*<br/>
Buffer allocato dal chiamante di ricevere i dati decodificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in byte del *pbDest*. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza richiesta in byte del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

## <a name="atlhexdecodegetrequiredlength"></a> AtlHexDecodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa esadecimale della lunghezza specificata.

```
inline int AtlHexDecodeGetRequiredLength(int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di caratteri nella stringa codificata.

### <a name="return-value"></a>Valore restituito

Il numero di byte necessari per un buffer che può contenere una stringa decodificata del *nSrcLen* caratteri.

## <a name="atlhexencode"></a> AtlHexEncode

Chiamare questa funzione per codificare dei dati come stringa di testo esadecimale.

```
inline BOOL AtlHexEncode(
   const BYTE * pbSrcData,
   int nSrcLen,
   LPSTR szDest,
int * pnDestLen) throw();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
Buffer contenente i dati da codificare.

*nSrcLen*<br/>
La lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante di ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri della *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza obbligatoria in caratteri del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Ogni byte di dati di origine viene codificato come 2 caratteri esadecimali.

## <a name="atlhexencodegetrequiredlength"></a> AtlHexEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int AtlHexEncodeGetRequiredLength(int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di byte di dati da codificare.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può contenere i dati con codificati dei *nSrcLen* byte.

## <a name="atlhexvalue"></a> AtlHexValue

Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.

```
inline short AtlHexValue(char chIn) throw();
```

### <a name="parameters"></a>Parametri

*mento*<br/>
Il carattere esadecimale '0'-'9', 'A'-'F', o da 'a'-'f'.

### <a name="return-value"></a>Valore restituito

Il valore numerico del carattere di input è interpretato come una cifra esadecimale. Ad esempio, un input di '0' restituisce un valore pari a 0 e un input di 'A' restituisce un valore pari a 10. Se il carattere di input non è una cifra esadecimale, questa funzione restituisce -1.

## <a name="atlunicodetoutf8"></a> AtlUnicodeToUTF8

Chiamare questa funzione per convertire una stringa Unicode in UTF-8.

```
ATL_NOINLINE inline int AtlUnicodeToUTF8(
   LPCWSTR wszSrc,
   int nSrc,
   LPSTR szDest,
   int nDest) throw();
```

### <a name="parameters"></a>Parametri

*wszSrc*<br/>
La stringa Unicode da convertire

*nSrc*<br/>
La lunghezza in caratteri della stringa Unicode.

*szDest*<br/>
Buffer allocato dal chiamante di ricevere la stringa convertita.

*nDest*<br/>
La lunghezza in byte del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri per la stringa convertita.

### <a name="remarks"></a>Note

Per determinare le dimensioni del buffer necessaria per la stringa convertita, chiamare questa funzione con valore 0 *szDest* e *nDest*.

## <a name="bencode"></a> BEncode

Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "B".

```
inline BOOL BEncode(
   BYTE* pbSrcData,
   int nSrcLen,
   LPSTR szDest,
   int* pnDestLen,
   LPCSTR pszCharSet) throw();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
Buffer contenente i dati da codificare.

*nSrcLen*<br/>
La lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante di ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri della *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza obbligatoria in caratteri del buffer.

*pszCharSet*<br/>
Il set di caratteri da usare per la conversione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Lo schema di codifica "B" è descritto in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).

## <a name="bencodegetrequiredlength"></a> BEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int BEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di byte di dati da codificare.

*nCharsetLen*<br/>
La lunghezza in caratteri del set da utilizzare per la conversione di caratteri.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può contenere i dati con codificati dei *nSrcLen* byte.

### <a name="remarks"></a>Note

Lo schema di codifica "B" è descritto in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).

## <a name="escapexml"></a> EscapeXML

Chiamare questa funzione per convertire i caratteri non sicuri per l'utilizzo in XML nei relativi equivalenti specifici.

```
inline int EscapeXML(
   const wchar_t * szIn,
   int nSrcLen,
   wchar_t * szEsc,
   int nDestLen,
   DWORD dwFlags = ATL_ESC_FLAG_NONE) throw();
```

### <a name="parameters"></a>Parametri

*szIn*<br/>
Stringa da convertire.

*nSrclen*<br/>
La lunghezza in caratteri della stringa da convertire.

*szEsc*<br/>
Buffer allocato dal chiamante di ricevere la stringa convertita.

*nDestLen*<br/>
La lunghezza in caratteri del buffer allocato dal chiamante.

*dwFlags*<br/>
ATL_ESC flag che descrivono come viene eseguita la conversione da eseguire.

- Comportamento ATL_ESC_FLAG_NONE predefinito. Racchiudere tra virgolette non vengono convertiti gli apostrofi e virgolette.
- ATL_ESC_FLAG_ATTR racchiudere tra virgolette singole e apostrofi vengono convertiti `&quot;` e `&apos;` rispettivamente.

### <a name="return-value"></a>Valore restituito

La lunghezza in caratteri della stringa convertita.

### <a name="remarks"></a>Note

Possibili conversioni eseguite da questa funzione sono illustrate nella tabella:

|Origine|Destinazione|
|------------|-----------------|
|\<|&lt;|
|>|&gt;|
|&|&amp;|
|'|&apos;|
|"|&quot;|

## <a name="getextendedchars"></a> GetExtendedChars

Chiamare questa funzione per ottenere il numero di caratteri estesi in una stringa.

```
inline int GetExtendedChars(LPCSTR szSrc, int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*szSrc*<br/>
La stringa da analizzare.

*nSrcLen*<br/>
La lunghezza della stringa in caratteri.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri estesi trovato all'interno della stringa, come determinato dalla [IsExtendedChar](#isextendedchar).

## <a name="isextendedchar"></a> IsExtendedChar

Chiamare questa funzione per verificare se un carattere specificato è un carattere esteso (minore di 32, maggiore di 126 e non una scheda, un avanzamento riga o un ritorno a capo)

```
inline int IsExtendedChar(char ch) throw();
```

### <a name="parameters"></a>Parametri

*ch*<br/>
Il carattere da testare

### <a name="return-value"></a>Valore restituito

TRUE se il carattere è stato esteso, FALSE in caso contrario.

## <a name="qencode"></a> QEncode

Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "Q".

```
inline BOOL QEncode(
   BYTE* pbSrcData,
   int nSrcLen,
   LPSTR szDest,
   int* pnDestLen,
   LPCSTR pszCharSet,
   int* pnNumEncoded = NULL) throw();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
Buffer contenente i dati da codificare.

*nSrcLen*<br/>
La lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante di ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri della *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza obbligatoria in caratteri del buffer.

*pszCharSet*<br/>
Il set di caratteri da usare per la conversione.

*pnNumEncoded*<br/>
Un puntatore a una variabile che in fase di restituzione, contiene il numero di caratteri non sicuri che dovevano essere convertito.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Lo schema di codifica "Q" è descritto in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).

## <a name="qencodegetrequiredlength"></a> QEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int QEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di byte di dati da codificare.

*nCharsetLen*<br/>
La lunghezza in caratteri del set da utilizzare per la conversione di caratteri.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può contenere i dati con codificati dei *nSrcLen* byte.

### <a name="remarks"></a>Note

Lo schema di codifica "Q" è descritto in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).

## <a name="qpdecode"></a> QPDecode

Decodifica una stringa di dati che codificati in formato stampabile tra virgolette, ad esempio da una chiamata precedente a [QPEncode](#qpencode).

```
inline BOOL QPDecode(
   BYTE* pbSrcData,
   int nSrcLen,
   LPSTR szDest,
   int* pnDestLen,
   DWORD dwFlags = 0) throw();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
[in] Buffer contenente i dati da decodificare.

*nSrcLen*<br/>
[in] La lunghezza in byte del *pbSrcData*.

*szDest*<br/>
[out] Buffer allocato dal chiamante di ricevere i dati decodificati.

*pnDestLen*<br/>
[out] Puntatore a una variabile che contiene la lunghezza in byte del *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza richiesta in byte del buffer.

*dwFlags*<br/>
[in] ATLSMTP_QPENCODE flag che descrivono come viene eseguita la conversione da eseguire.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Lo schema di codifica stampabile tra virgolette è descritto nel documento RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).

## <a name="qpdecodegetrequiredlength"></a> QPDecodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata.

```
inline int QPDecodeGetRequiredLength(int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di caratteri nella stringa codificata.

### <a name="return-value"></a>Valore restituito

Il numero di byte necessari per un buffer che può contenere una stringa decodificata del *nSrcLen* caratteri.

### <a name="remarks"></a>Note

Lo schema di codifica stampabile tra virgolette è descritto nel documento RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).

## <a name="qpencode"></a> QPEncode

Chiamare questa funzione per codificare alcuni dati nel formato stampabile tra virgolette.

```
inline BOOL QPEncode(
   BYTE* pbSrcData,
   int nSrcLen,
   LPSTR szDest,
   int* pnDestLen,
   DWORD dwFlags = 0) throw ();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
Buffer contenente i dati da codificare.

*nSrcLen*<br/>
La lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante di ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri della *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza obbligatoria in caratteri del buffer.

*dwFlags*<br/>
ATLSMTP_QPENCODE flag che descrivono come viene eseguita la conversione da eseguire.

- ATLSMTP_QPENCODE_DOT se un punto viene visualizzato all'inizio di una riga, viene aggiunta all'output, nonché con codifica.

- Accoda ATLSMTP_QPENCODE_TRAILING_SOFT `=\r\n` alla stringa codificata.

Lo schema di codifica stampabile tra virgolette è descritto nella [RFC 2045](http://www.ietf.org/rfc/rfc2045.txt).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Lo schema di codifica stampabile tra virgolette è descritto nel documento RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).

## <a name="qpencodegetrequiredlength"></a> QPEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int QPEncodeGetRequiredLength(int nSrcLen) throw ();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di byte di dati da codificare.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può contenere i dati con codificati dei *nSrcLen* byte.

### <a name="remarks"></a>Note

Lo schema di codifica stampabile tra virgolette è descritto nel documento RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).

## <a name="uudecode"></a> UUDecode

Decodifica una stringa di dati UUEncode, ad esempio da una chiamata precedente a [UUEncode](#uuencode).

```
inline BOOL UUDecode(
   BYTE* pbSrcData,
   int nSrcLen,
   BYTE* pbDest,
   int* pnDestLen) throw ();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
Stringa che contiene i dati da decodificare.

*nSrcLen*<br/>
La lunghezza in byte del *pbSrcData*.

*pbDest*<br/>
Buffer allocato dal chiamante di ricevere i dati decodificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in byte del *pbDest*. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza richiesta in byte del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questa implementazione la UUEncode segue la specifica P1003.2b/D11 POSIX.

## <a name="uudecodegetrequiredlength"></a> UUDecodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa uuencode della lunghezza specificata.

```
inline int UUDecodeGetRequiredLength(int nSrcLen) throw ();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di caratteri nella stringa codificata.

### <a name="return-value"></a>Valore restituito

Il numero di byte necessari per un buffer che può contenere una stringa decodificata del *nSrcLen* caratteri.

### <a name="remarks"></a>Note

Questa implementazione la UUEncode segue la specifica P1003.2b/D11 POSIX.

## <a name="uuencode"></a> UUEncode

Chiamare questa funzione per convertire i dati in uuencode.

```
inline BOOL UUEncode(
   const BYTE* pbSrcData,
   int nSrcLen,
   LPSTR szDest,
   int* pnDestLen,
   LPCTSTR lpszFile = _T("file"),
   DWORD dwFlags = 0) throw ();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
Buffer contenente i dati da codificare.

*nSrcLen*<br/>
La lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante di ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri della *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza obbligatoria in caratteri del buffer.

*lpszFile*<br/>
Il file da aggiungere all'intestazione quando ATLSMTP_UUENCODE_HEADER viene specificato in *dwFlags*.

*dwFlags*<br/>
Flag che controllano il comportamento di questa funzione.

- ATLSMTP_UUENCODE_HEADE l'intestazione verrà codificato.

- ATLSMTP_UUENCODE_END alla fine verrà codificata.

- Piegassero ATLSMTP_UUENCODE_DOT dati verrà eseguita.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'operazione riesce, FALSE in caso di errore.

### <a name="remarks"></a>Note

Questa implementazione la UUEncode segue la specifica P1003.2b/D11 POSIX.

## <a name="uuencodegetrequiredlength"></a> UUEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int UUEncodeGetRequiredLength(int nSrcLen) throw ();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Il numero di byte di dati da codificare.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può contenere i dati con codificati dei *nSrcLen* byte.

### <a name="remarks"></a>Note

Questa implementazione la UUEncode segue la specifica P1003.2b/D11 POSIX.

### <a name="see-also"></a>Vedere anche

[Concetti](../../atl/active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)
