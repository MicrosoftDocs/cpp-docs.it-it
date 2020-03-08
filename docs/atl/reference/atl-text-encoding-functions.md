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
ms.openlocfilehash: 1380d33c485c1ac895558bbcaf86c902c6074cd4
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78865031"
---
# <a name="atl-text-encoding-functions"></a>Funzioni di codifica del testo ATL

Queste funzioni supportano la codifica e la decodifica del testo.

|||
|-|-|
|[AtlGetHexValue](#atlgethexvalue)|Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.|
|[AtlGetVersion](#atlgetversion)|Chiamare questa funzione per ottenere la versione della libreria ATL in uso.  |
|[AtlHexDecode](#atlhexdecode)|Decodifica una stringa di dati codificata come testo esadecimale, ad esempio da una precedente chiamata a [AtlHexEncode](#atlhexencode).|
|[AtlHexDecodeGetRequiredLength](#atlhexdecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa esadecimale della lunghezza specificata.|
|[AtlHexEncode](#atlhexencode)|Chiamare questa funzione per codificare dei dati come stringa di testo esadecimale.|
|[AtlHexEncodeGetRequiredLength](#atlhexencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[AtlHexValue](#atlhexvalue)|Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale. |
|[AtlUnicodeToUTF8](#atlunicodetoutf8)|Chiamare questa funzione per convertire una stringa Unicode in UTF-8. |
|[BEncode](#bencode)|Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "B".|
|[BEncodeGetRequiredLength](#bencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[EscapeXML](#escapexml)|Chiamare questa funzione per convertire i caratteri non sicuri per l'utilizzo in XML nei relativi equivalenti specifici.|
|[GetExtendedChars](#getextendedchars)|Chiamare questa funzione per ottenere il numero di caratteri estesi in una stringa.|
|[IsExtendedChar](#isextendedchar)|Chiamare questa funzione per verificare se un carattere specificato è un carattere esteso (minore di 32, maggiore di 126 e non una tabulazione, un avanzamento riga o un ritorno a capo)|
|[QEncode](#qencode)|Chiamare questa funzione per convertire alcuni dati utilizzando la codifica "Q".  |
|[QEncodeGetRequiredLength](#qencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[QPDecode](#qpdecode)|Decodifica una stringa di dati codificata in formato stampabile tra virgolette, ad esempio da una precedente chiamata a [QPEncode](#qpencode).|
|[QPDecodeGetRequiredLength](#qpdecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata.|
|[QPEncode](#qpencode)|Chiamare questa funzione per codificare alcuni dati nel formato stampabile tra virgolette.|
|[QPEncodeGetRequiredLength](#qpencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[UUDecode](#uudecode)|Decodifica una stringa di dati UUencoded, ad esempio da una precedente chiamata a [uuencode](#uuencode).|
|[UUDecodeGetRequiredLength](#uudecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa uuencode della lunghezza specificata.|
|[UUEncode](#uuencode)|Chiamare questa funzione per convertire i dati in uuencode. |
|[UUEncodeGetRequiredLength](#uuencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlenc. h

## <a name="atlgethexvalue"></a>AtlGetHexValue

Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.

```
inline char AtlGetHexValue(char chIn) throw();
```

### <a name="parameters"></a>Parametri

*Mento*<br/>
Il carattere esadecimale ' 0'-' 9',' a-'F ' o ' a-'F '.

### <a name="return-value"></a>Valore restituito

Valore numerico del carattere di input interpretato come cifra esadecimale. Ad esempio, un input di ' 0' restituisce un valore pari a 0 e un input di ' A ' restituisce un valore pari a 10. Se il carattere di input non è una cifra esadecimale, questa funzione restituisce-1.

## <a name="atlgetversion"></a>AtlGetVersion

Chiamare questa funzione per ottenere la versione della libreria ATL in uso.

```
ATLAPI_(DWORD) AtlGetVersion(void* pReserved);
```

### <a name="parameters"></a>Parametri

*Mantenuto*<br/>
Puntatore riservato.

### <a name="return-value"></a>Valore restituito

Restituisce un valore integer DWORD della versione della libreria ATL che si sta compilando o eseguendo.

## <a name="example"></a>Esempio

La funzione deve essere chiamata come indicato di seguito.

[!code-cpp[NVC_ATL_Utilities#95](../../atl/codesnippet/cpp/atl-text-encoding-functions_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atlhexdecode"></a>AtlHexDecode

Decodifica una stringa di dati codificata come testo esadecimale, ad esempio da una precedente chiamata a [AtlHexEncode](#atlhexencode).

```
inline BOOL AtlHexDecode(
   LPCSTR pSrcData,
   int nSrcLen,
   LPBYTE pbDest,
   int* pnDestLen) throw();
```

### <a name="parameters"></a>Parametri

*pSrcData*<br/>
Stringa contenente i dati da decodificare.

*nSrcLen*<br/>
Lunghezza in caratteri di *pSrcData*.

*pbDest*<br/>
Buffer allocato dal chiamante per ricevere i dati decodificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza, in byte, di *pbDest*. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in byte del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

## <a name="atlhexdecodegetrequiredlength"></a>AtlHexDecodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa esadecimale della lunghezza specificata.

```
inline int AtlHexDecodeGetRequiredLength(int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di caratteri nella stringa codificata.

### <a name="return-value"></a>Valore restituito

Numero di byte necessari per un buffer che potrebbe memorizzare una stringa decodificata di caratteri *nSrcLen* .

## <a name="atlhexencode"></a>AtlHexEncode

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
Lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante per ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri di *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in caratteri del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Ogni byte di dati di origine è codificato come 2 caratteri esadecimali.

## <a name="atlhexencodegetrequiredlength"></a>AtlHexEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int AtlHexEncodeGetRequiredLength(int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di byte di dati da codificare.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può conservare dati codificati di *nSrcLen* byte.

## <a name="atlhexvalue"></a>AtlHexValue

Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.

```
inline short AtlHexValue(char chIn) throw();
```

### <a name="parameters"></a>Parametri

*Mento*<br/>
Il carattere esadecimale ' 0'-' 9',' a-'F ' o ' a-'F '.

### <a name="return-value"></a>Valore restituito

Valore numerico del carattere di input interpretato come cifra esadecimale. Ad esempio, un input di ' 0' restituisce un valore pari a 0 e un input di ' A ' restituisce un valore pari a 10. Se il carattere di input non è una cifra esadecimale, questa funzione restituisce-1.

## <a name="atlunicodetoutf8"></a>AtlUnicodeToUTF8

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
Stringa Unicode da convertire.

*nSrc*<br/>
Lunghezza in caratteri della stringa Unicode.

*szDest*<br/>
Buffer allocato dal chiamante per ricevere la stringa convertita.

*nDest*<br/>
Lunghezza, in byte, del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri per la stringa convertita.

### <a name="remarks"></a>Osservazioni

Per determinare le dimensioni del buffer necessarie per la stringa convertita, chiamare questa funzione passando 0 per *szDest* e *nDest*.

## <a name="bencode"></a>BEncode

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
Lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante per ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri di *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in caratteri del buffer.

*pszCharSet*<br/>
Set di caratteri da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Lo schema di codifica "B" è descritto nella specifica RFC 2047 ([https://www.ietf.org/rfc/rfc2047.txt](https://www.ietf.org/rfc/rfc2047.txt)).

## <a name="bencodegetrequiredlength"></a>BEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int BEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di byte di dati da codificare.

*nCharsetLen*<br/>
Lunghezza in caratteri del set di caratteri da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può conservare dati codificati di *nSrcLen* byte.

### <a name="remarks"></a>Osservazioni

Lo schema di codifica "B" è descritto nella specifica RFC 2047 ([https://www.ietf.org/rfc/rfc2047.txt](https://www.ietf.org/rfc/rfc2047.txt)).

## <a name="escapexml"></a>EscapeXML

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
Lunghezza in caratteri della stringa da convertire.

*szEsc*<br/>
Buffer allocato dal chiamante per ricevere la stringa convertita.

*nDestLen*<br/>
Lunghezza in caratteri del buffer allocato dal chiamante.

*dwFlags*<br/>
ATL_ESC flag che descrivono il modo in cui deve essere eseguita la conversione.

- ATL_ESC_FLAG_NONE comportamento predefinito. Le virgolette e gli apostrofi non vengono convertiti.
- ATL_ESC_FLAG_ATTR virgolette e gli apostrofi vengono convertiti rispettivamente in `&quot;` e `&apos;`.

### <a name="return-value"></a>Valore restituito

Lunghezza in caratteri della stringa convertita.

### <a name="remarks"></a>Osservazioni

Le conversioni possibili eseguite da questa funzione sono illustrate nella tabella:

|Source (Sorgente)|Destination|
|------------|-----------------|
|\<|&lt;|
|>|&gt;|
|&|&amp;|
|'|&apos;|
|"|&quot;|

## <a name="getextendedchars"></a>GetExtendedChars

Chiamare questa funzione per ottenere il numero di caratteri estesi in una stringa.

```
inline int GetExtendedChars(LPCSTR szSrc, int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*szSrc*<br/>
Stringa da analizzare.

*nSrcLen*<br/>
Lunghezza della stringa in caratteri.

### <a name="return-value"></a>Valore restituito

Restituisce il numero di caratteri estesi trovati all'interno della stringa come determinato da [IsExtendedChar](#isextendedchar).

## <a name="isextendedchar"></a>IsExtendedChar

Chiamare questa funzione per verificare se un carattere specificato è un carattere esteso (minore di 32, maggiore di 126 e non una tabulazione, un avanzamento riga o un ritorno a capo)

```
inline int IsExtendedChar(char ch) throw();
```

### <a name="parameters"></a>Parametri

*ch*<br/>
Carattere da testare

### <a name="return-value"></a>Valore restituito

TRUE se il carattere è esteso; in caso contrario, FALSE.

## <a name="qencode"></a>QEncode

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
Lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante per ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri di *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in caratteri del buffer.

*pszCharSet*<br/>
Set di caratteri da utilizzare per la conversione.

*pnNumEncoded*<br/>
Un puntatore a una variabile che restituisce un valore contenente il numero di caratteri non sicuri che è stato necessario convertire.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Lo schema di codifica "Q" è descritto nella specifica RFC 2047 ([https://www.ietf.org/rfc/rfc2047.txt](https://www.ietf.org/rfc/rfc2047.txt)).

## <a name="qencodegetrequiredlength"></a>QEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int QEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di byte di dati da codificare.

*nCharsetLen*<br/>
Lunghezza in caratteri del set di caratteri da utilizzare per la conversione.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può conservare dati codificati di *nSrcLen* byte.

### <a name="remarks"></a>Osservazioni

Lo schema di codifica "Q" è descritto nella specifica RFC 2047 ([https://www.ietf.org/rfc/rfc2047.txt](https://www.ietf.org/rfc/rfc2047.txt)).

## <a name="qpdecode"></a>QPDecode

Decodifica una stringa di dati codificata in formato stampabile tra virgolette, ad esempio da una precedente chiamata a [QPEncode](#qpencode).

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
in Buffer contenente i dati da decodificare.

*nSrcLen*<br/>
in Lunghezza, in byte, di *pbSrcData*.

*szDest*<br/>
out Buffer allocato dal chiamante per ricevere i dati decodificati.

*pnDestLen*<br/>
out Puntatore a una variabile che contiene la lunghezza, in byte, di *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in byte del buffer.

*dwFlags*<br/>
in ATLSMTP_QPENCODE flag che descrivono il modo in cui deve essere eseguita la conversione.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Lo schema di codifica racchiuso tra virgolette è descritto nella specifica RFC 2045 ([https://www.ietf.org/rfc/rfc2045.txt](https://www.ietf.org/rfc/rfc2045.txt)).

## <a name="qpdecodegetrequiredlength"></a>QPDecodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata.

```
inline int QPDecodeGetRequiredLength(int nSrcLen) throw();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di caratteri nella stringa codificata.

### <a name="return-value"></a>Valore restituito

Numero di byte necessari per un buffer che potrebbe memorizzare una stringa decodificata di caratteri *nSrcLen* .

### <a name="remarks"></a>Osservazioni

Lo schema di codifica racchiuso tra virgolette è descritto nella specifica RFC 2045 ([https://www.ietf.org/rfc/rfc2045.txt](https://www.ietf.org/rfc/rfc2045.txt)).

## <a name="qpencode"></a>QPEncode

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
Lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante per ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri di *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in caratteri del buffer.

*dwFlags*<br/>
ATLSMTP_QPENCODE flag che descrivono il modo in cui deve essere eseguita la conversione.

- ATLSMTP_QPENCODE_DOT se un punto viene visualizzato all'inizio di una riga, viene aggiunto all'output e codificato.

- ATLSMTP_QPENCODE_TRAILING_SOFT aggiunge `=\r\n` alla stringa codificata.

Lo schema di codifica racchiuso tra virgolette è descritto nella [specifica RFC 2045](https://www.ietf.org/rfc/rfc2045.txt).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Lo schema di codifica racchiuso tra virgolette è descritto nella specifica RFC 2045 ([https://www.ietf.org/rfc/rfc2045.txt](https://www.ietf.org/rfc/rfc2045.txt)).

## <a name="qpencodegetrequiredlength"></a>QPEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int QPEncodeGetRequiredLength(int nSrcLen) throw ();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di byte di dati da codificare.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può conservare dati codificati di *nSrcLen* byte.

### <a name="remarks"></a>Osservazioni

Lo schema di codifica racchiuso tra virgolette è descritto nella specifica RFC 2045 ([https://www.ietf.org/rfc/rfc2045.txt](https://www.ietf.org/rfc/rfc2045.txt)).

## <a name="uudecode"></a>UUDecode

Decodifica una stringa di dati UUencoded, ad esempio da una precedente chiamata a [uuencode](#uuencode).

```
inline BOOL UUDecode(
   BYTE* pbSrcData,
   int nSrcLen,
   BYTE* pbDest,
   int* pnDestLen) throw ();
```

### <a name="parameters"></a>Parametri

*pbSrcData*<br/>
Stringa contenente i dati da decodificare.

*nSrcLen*<br/>
Lunghezza, in byte, di *pbSrcData*.

*pbDest*<br/>
Buffer allocato dal chiamante per ricevere i dati decodificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza, in byte, di *pbDest*. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in byte del buffer.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa implementazione di uuencoding segue la specifica POSIX P 1003.2 b/D11.

## <a name="uudecodegetrequiredlength"></a>UUDecodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa uuencode della lunghezza specificata.

```
inline int UUDecodeGetRequiredLength(int nSrcLen) throw ();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di caratteri nella stringa codificata.

### <a name="return-value"></a>Valore restituito

Numero di byte necessari per un buffer che potrebbe memorizzare una stringa decodificata di caratteri *nSrcLen* .

### <a name="remarks"></a>Osservazioni

Questa implementazione di uuencoding segue la specifica POSIX P 1003.2 b/D11.

## <a name="uuencode"></a>UUEncode

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
Lunghezza in byte dei dati da codificare.

*szDest*<br/>
Buffer allocato dal chiamante per ricevere i dati codificati.

*pnDestLen*<br/>
Puntatore a una variabile che contiene la lunghezza in caratteri di *szDest*. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza necessaria in caratteri del buffer.

*lpszFile*<br/>
File da aggiungere all'intestazione quando ATLSMTP_UUENCODE_HEADER viene specificato in *dwFlags*.

*dwFlags*<br/>
Flag che controllano il comportamento di questa funzione.

- ATLSMTP_UUENCODE_HEADE l'intestazione verrà codificata.

- ATLSMTP_UUENCODE_END verrà codificata la fine.

- Verranno eseguite ATLSMTP_UUENCODE_DOT informazioni sui dati.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE in caso di esito positivo, FALSE in caso di errore.

### <a name="remarks"></a>Osservazioni

Questa implementazione di uuencoding segue la specifica POSIX P 1003.2 b/D11.

## <a name="uuencodegetrequiredlength"></a>UUEncodeGetRequiredLength

Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.

```
inline int UUEncodeGetRequiredLength(int nSrcLen) throw ();
```

### <a name="parameters"></a>Parametri

*nSrcLen*<br/>
Numero di byte di dati da codificare.

### <a name="return-value"></a>Valore restituito

Il numero di caratteri necessari per un buffer che può conservare dati codificati di *nSrcLen* byte.

### <a name="remarks"></a>Osservazioni

Questa implementazione di uuencoding segue la specifica POSIX P 1003.2 b/D11.

## <a name="see-also"></a>Vedere anche

[Concetti](../active-template-library-atl-concepts.md)<br/>
[Componenti Desktop COM ATL](../atl-com-desktop-components.md)
