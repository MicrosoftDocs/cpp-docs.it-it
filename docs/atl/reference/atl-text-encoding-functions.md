---
title: Funzioni di codifica del testo ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
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
ms.openlocfilehash: 26eb0709c4009070e6255c6ee178f19d13d8a9c3
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-text-encoding-functions"></a>Funzioni di codifica del testo ATL
Queste funzioni supportano la codifica e decodifica di testo.

|||  
|-|-|  
|[AtlGetHexValue](#atlgethexvalue)|Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.|   
|[AtlGetVersion](#atlgetversion)|Chiamare questa funzione per ottenere la versione della libreria ATL che si sta utilizzando.  |  
|[AtlHexDecode](#atlhexdecode)|Decodifica una stringa di dati che codificati come testo esadecimale, ad esempio da una precedente chiamata a [AtlHexEncode](#atlhexencode).|
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
|[QPDecode](#qpdecode)|Decodifica una stringa di dati che sono stati codificati in formato stampabile tra virgolette, ad esempio da una precedente chiamata a [QPEncode](#qpencode).|
|[QPDecodeGetRequiredLength](#qpdecodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata.|
|[QPEncode](#qpencode)|Chiamare questa funzione per codificare alcuni dati nel formato stampabile tra virgolette.|
|[QPEncodeGetRequiredLength](#qpencodegetrequiredlength)|Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.|
|[UUDecode](#uudecode)|Decodifica una stringa di dati che sono stata convertita in UUEncode, ad esempio da una precedente chiamata a [UUEncode](#uuencode).|
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
 `chIn`  
 Il carattere esadecimale '0'-'9', 'A'-'F', o 'a'-'f'.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore numerico del carattere di input è interpretato come una cifra esadecimale. Ad esempio, un input di '0' restituisce un valore pari a 0 e un input di 'A' restituisce un valore pari a 10. Se il carattere di input non è una cifra esadecimale, questa funzione restituisce -1.  
  
## <a name="atlgetversion"></a> AtlGetVersion
Chiamare questa funzione per ottenere la versione della libreria ATL che si sta utilizzando.  
  
```  
ATLAPI_(DWORD) AtlGetVersion(void* pReserved);  
```  
  
### <a name="parameters"></a>Parametri  
 `pReserved`  
 Un puntatore riservato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un `DWORD` valore intero della versione della libreria ATL che si esegue la compilazione o in esecuzione.  
  
## <a name="example"></a>Esempio  
 La funzione deve essere chiamata come indicato di seguito.  
  
 [!code-cpp[NVC_ATL_Utilities#95](../../atl/codesnippet/cpp/atl-text-encoding-functions_1.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  

## <a name="atlhexdecode"></a> AtlHexDecode
Decodifica una stringa di dati che codificati come testo esadecimale, ad esempio da una precedente chiamata a [AtlHexEncode](#atlhexencode).  
  
```    
inline BOOL AtlHexDecode(  
   LPCSTR pSrcData,  
   int nSrcLen,  
   LPBYTE pbDest,  
   int* pnDestLen) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `pSrcData`  
 Stringa che contiene i dati che si desidera decodificare.  
  
 `nSrcLen`  
 La lunghezza in caratteri di `pSrcData`.  
  
 `pbDest`  
 Buffer allocata dal chiamante di ricevere i dati decodificati.  
  
 `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in byte di `pbDest`. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in byte del buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
## <a name="atlhexdecodegetrequiredlength"></a> AtlHexDecodeGetRequiredLength
Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa esadecimale della lunghezza specificata.  
  
```  
inline int AtlHexDecodeGetRequiredLength(int nSrcLen) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di caratteri nella stringa codificata.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte necessari per un buffer che può contenere una stringa decodificata di `nSrcLen` caratteri.  
  
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
 `pbSrcData`  
 Buffer contenente i dati da codificare.  
  
 `nSrcLen`  
 La lunghezza in byte dei dati da codificare.  
  
 `szDest`  
 Buffer allocata dal chiamante di ricevere i dati codificati.  
  
 `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in caratteri di `szDest`. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in caratteri del buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Ogni byte di dati di origine viene codificato come 2 caratteri esadecimali.  
  
## <a name="atlhexencodegetrequiredlength"></a> AtlHexEncodeGetRequiredLength
Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.  
  
```  
inline int AtlHexEncodeGetRequiredLength(int nSrcLen) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di byte di dati da codificare.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri necessari per un buffer che potrebbe contenere dati codificati di `nSrcLen` byte.  
  
## <a name="atlhexvalue"></a> AtlHexValue
Chiamare questa funzione per ottenere il valore numerico di una cifra esadecimale.  
  
```  
inline short AtlHexValue(char chIn) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `chIn`  
 Il carattere esadecimale '0'-'9', 'A'-'F', o 'a'-'f'.  
  
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
 *wszSrc*  
 Stringa Unicode da convertire  
  
 `nSrc`  
 La lunghezza in caratteri della stringa Unicode.  
  
 `szDest`  
 Buffer allocata dal chiamante di ricevere la stringa convertita.  
  
 `nDest`  
 La lunghezza in byte del buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di caratteri per la stringa convertita.  
  
### <a name="remarks"></a>Note  
 Per determinare le dimensioni del buffer necessaria per la stringa convertita, chiamare questa funzione, il valore 0 `szDest` e `nDest`.  
  
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
 `pbSrcData`  
 Buffer contenente i dati da codificare.  
  
 `nSrcLen`  
 La lunghezza in byte dei dati da codificare.  
  
 `szDest`  
 Buffer allocata dal chiamante di ricevere i dati codificati.  
  
 `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in caratteri di `szDest`. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in caratteri del buffer.  
  
 `pszCharSet`  
 Il set di caratteri da utilizzare per la conversione.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Lo schema di codifica "B" è descritto in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).  
  
## <a name="bencodegetrequiredlength"></a> BEncodeGetRequiredLength 
Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.  
  
```  
inline int BEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di byte di dati da codificare.  
  
 `nCharsetLen`  
 La lunghezza in caratteri del set da utilizzare per la conversione di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri necessari per un buffer che potrebbe contenere dati codificati di `nSrcLen` byte.  
  
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
 `szIn`  
 Stringa da convertire.  
  
 *nSrclen*  
 La lunghezza in caratteri della stringa da convertire.  
  
 *szEsc*  
 Buffer allocata dal chiamante di ricevere la stringa convertita.  
  
 *nDestLen*  
 La lunghezza in caratteri del buffer allocata dal chiamante.  
  
 `dwFlags`  
 Flag di ATL_ESC che descrivono la modalità è necessario eseguire la conversione. 

- `ATL_ESC_FLAG_NONE` Comportamento predefinito. Offerta contrassegni e apostrofi non vengono convertiti.
- `ATL_ESC_FLAG_ATTR` Offerta apostrofi e virgolette vengono convertiti in `&quot;` e `&apos;` rispettivamente.


  
### <a name="return-value"></a>Valore restituito  
 La lunghezza in caratteri della stringa convertita.  
  
### <a name="remarks"></a>Note  
 Le conversioni possibili eseguite da questa funzione vengono visualizzate nella tabella:  
  
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
 `szSrc`  
 Stringa da analizzare.  
  
 `nSrcLen`  
 La lunghezza della stringa in caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di caratteri estesi trovato all'interno della stringa, come determinato da [IsExtendedChar](#isextendedchar).  
  
## <a name="isextendedchar"></a> IsExtendedChar
Chiamare questa funzione per verificare se un carattere specificato è un carattere esteso (minore di 32, maggiore di 126 e non una scheda, un avanzamento riga o un ritorno a capo)  
  
```  
inline int IsExtendedChar(char ch) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 *ch*  
 Il carattere da testare  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il carattere è stato esteso, **FALSE** in caso contrario.  
  
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
 `pbSrcData`  
 Buffer contenente i dati da codificare.  
  
 `nSrcLen`  
 La lunghezza in byte dei dati da codificare.  
  
 `szDest`  
 Buffer allocata dal chiamante di ricevere i dati codificati.  
  
 `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in caratteri di `szDest`. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in caratteri del buffer.  
  
 `pszCharSet`  
 Il set di caratteri da utilizzare per la conversione.  
  
 *pnNumEncoded*  
 Un puntatore a una variabile che in fase di restituzione, contiene il numero di caratteri non sicuri che è stato possibile convertire.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Lo schema di codifica "Q" è descritto in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).  
  
## <a name="qencodegetrequiredlength"></a> QEncodeGetRequiredLength 
Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.  
  
```  
inline int QEncodeGetRequiredLength(int nSrcLen, int nCharsetLen) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di byte di dati da codificare.  
  
 `nCharsetLen`  
 La lunghezza in caratteri del set da utilizzare per la conversione di caratteri.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri necessari per un buffer che potrebbe contenere dati codificati di `nSrcLen` byte.  
  
### <a name="remarks"></a>Note  
 Lo schema di codifica "Q" è descritto in RFC 2047 ([http://www.ietf.org/rfc/rfc2047.txt](http://www.ietf.org/rfc/rfc2047.txt)).  
  
## <a name="qpdecode"></a> QPDecode
Decodifica una stringa di dati che sono stati codificati in formato stampabile tra virgolette, ad esempio da una precedente chiamata a [QPEncode](#qpencode).  
  
```  
inline BOOL QPDecode(  
   BYTE* pbSrcData,  
   int nSrcLen,  
   LPSTR szDest,  
   int* pnDestLen,  
   DWORD dwFlags = 0) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pbSrcData`  
 Buffer contenente i dati che si desidera decodificare.  
  
 [in] `nSrcLen`  
 La lunghezza in byte di `pbSrcData`.  
  
 [out] `szDest`  
 Buffer allocata dal chiamante di ricevere i dati decodificati.  
  
 [out] `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in byte di `szDest`. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in byte del buffer.  
  
 [in] `dwFlags`  
 Flag che descrivono la modalità è necessario eseguire la conversione. Vedere [ATLSMTP_QPENCODE flag](http://msdn.microsoft.com/library/6b15a3ab-8e57-49e4-8104-09b26ebb96c4).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` in caso di esito positivo, `FALSE` in caso di errore.  
  
### <a name="remarks"></a>Note  
 Lo schema di codifica stampabile tra virgolette è descritto nel documento RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).  
  
## <a name="qpdecodegetrequiredlength"></a> QPDecodeGetRequiredLength
Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa codificata stampabile tra virgolette della lunghezza specificata.  
  
```  
inline int QPDecodeGetRequiredLength(int nSrcLen) throw();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di caratteri nella stringa codificata.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte necessari per un buffer che può contenere una stringa decodificata di `nSrcLen` caratteri.  
  
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
 `pbSrcData`  
 Buffer contenente i dati da codificare.  
  
 `nSrcLen`  
 La lunghezza in byte dei dati da codificare.  
  
 `szDest`  
 Buffer allocata dal chiamante di ricevere i dati codificati.  
  
 `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in caratteri di `szDest`. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in caratteri del buffer.  
  
 `dwFlags`  
 Flag ATLSMTP_QPENCODE che descrivono la modalità è necessario eseguire la conversione. 
- `ATLSMTP_QPENCODE_DOT` Se un punto viene visualizzato all'inizio di una riga, si è aggiunta all'output, nonché con codifica.
- `ATLSMTP_QPENCODE_TRAILING_SOFT` Accoda `=\r\n` per la stringa codificata.

Viene descritto lo schema di codifica stampabile tra virgolette in [documento RFC 2045](http://www.ietf.org/rfc/rfc2045.txt).
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Lo schema di codifica stampabile tra virgolette è descritto nel documento RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).  
  
## <a name="qpencodegetrequiredlength"></a> QPEncodeGetRequiredLength
Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.  
  
```  
inline int QPEncodeGetRequiredLength(int nSrcLen) throw ();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di byte di dati da codificare.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri necessari per un buffer che potrebbe contenere dati codificati di `nSrcLen` byte.  
  
### <a name="remarks"></a>Note  
 Lo schema di codifica stampabile tra virgolette è descritto nel documento RFC 2045 ([http://www.ietf.org/rfc/rfc2045.txt](http://www.ietf.org/rfc/rfc2045.txt)).  
  
## <a name="uudecode"></a> UUDecode
Decodifica una stringa di dati che sono stata convertita in UUEncode, ad esempio da una precedente chiamata a [UUEncode](#uuencode).  
  
```  
inline BOOL UUDecode(  
   BYTE* pbSrcData,  
   int nSrcLen,  
   BYTE* pbDest,  
   int* pnDestLen) throw ();  
```  
  
### <a name="parameters"></a>Parametri  
 `pbSrcData`  
 Stringa che contiene i dati che si desidera decodificare.  
  
 `nSrcLen`  
 La lunghezza in byte di `pbSrcData`.  
  
 `pbDest`  
 Buffer allocata dal chiamante di ricevere i dati decodificati.  
  
 `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in byte di `pbDest`. Se la funzione ha esito positivo, la variabile riceve il numero di byte scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in byte del buffer.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa implementazione la UUEncode segue la specifica di P1003.2b/D11 POSIX.  
  
## <a name="uudecodegetrequiredlength"></a> UUDecodeGetRequiredLength
Chiamare questa funzione per ottenere la dimensione in byte di un buffer contenente dati decodificati da una stringa uuencode della lunghezza specificata.  
  
```  
inline int UUDecodeGetRequiredLength(int nSrcLen) throw ();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di caratteri nella stringa codificata.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di byte necessari per un buffer che può contenere una stringa decodificata di `nSrcLen` caratteri.  
  
### <a name="remarks"></a>Note  
 Questa implementazione la UUEncode segue la specifica di P1003.2b/D11 POSIX.  
  
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
 `pbSrcData`  
 Buffer contenente i dati da codificare.  
  
 `nSrcLen`  
 La lunghezza in byte dei dati da codificare.  
  
 `szDest`  
 Buffer allocata dal chiamante di ricevere i dati codificati.  
  
 `pnDestLen`  
 Puntatore a una variabile che contiene la lunghezza in caratteri di `szDest`. Se la funzione ha esito positivo, la variabile riceve il numero di caratteri scritti nel buffer. Se la funzione ha esito negativo, la variabile riceve la lunghezza in caratteri del buffer.  
  
 *lpszFile*  
 Il file da aggiungere all'intestazione quando si specifica ATLSMTP_UUENCODE_HEADER in `dwFlags`.  
  
 `dwFlags`  
 Flag che controllano il comportamento di questa funzione. 
- `ATLSMTP_UUENCODE_HEADE` L'intestazione verrà codificato.
- `ATLSMTP_UUENCODE_END` Alla fine verrà codificata.
- `ATLSMTP_UUENCODE_DOT` Verrà eseguita ripieno dati.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
### <a name="remarks"></a>Note  
 Questa implementazione la UUEncode segue la specifica di P1003.2b/D11 POSIX.  
  
## <a name="uuencodegetrequiredlength"></a> UUEncodeGetRequiredLength
Chiamare questa funzione per ottenere la dimensione in caratteri di un buffer contenente una stringa codificata da dati della lunghezza specificata.  
  
```  
inline int UUEncodeGetRequiredLength(int nSrcLen) throw ();  
```  
  
### <a name="parameters"></a>Parametri  
 `nSrcLen`  
 Il numero di byte di dati da codificare.  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di caratteri necessari per un buffer che potrebbe contenere dati codificati di `nSrcLen` byte.  
  
### <a name="remarks"></a>Note  
 Questa implementazione la UUEncode segue la specifica di P1003.2b/D11 POSIX.  
  
### <a name="see-also"></a>Vedere anche  
 [Concetti](../../atl/active-template-library-atl-concepts.md)   
 [Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)   