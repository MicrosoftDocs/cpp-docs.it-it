---
title: Classe CStrBufT
ms.date: 10/18/2018
f1_keywords:
- CStrBufT
- ATLSIMPSTR/ATL::CStrBufT
- ATLSIMPSTR/ATL::CStrBufT::CStrBufT
- ATLSIMPSTR/ATL::CStrBufT::SetLength
- ATLSIMPSTR/ATL::CStrBufT::AUTO_LENGTH
- ATLSIMPSTR/ATL::CStrBufT::SET_LENGTH
helpviewer_keywords:
- strings [C++], custom memory management
- CStrBufT class
- shared classes, CStrBufT
ms.assetid: 6b50fa8f-87e8-4ed4-a229-157ce128710f
ms.openlocfilehash: 84c67aa8ea819f420368a72a2374f800f3d89055
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81317640"
---
# <a name="cstrbuft-class"></a>Classe CStrBufT

Questa classe fornisce la `GetBuffer` `ReleaseBuffer` pulizia automatica `CStringT` delle risorse e le chiamate su un oggetto esistente.

## <a name="syntax"></a>Sintassi

```
template<typename TCharType>
class CStrBufT
```

#### <a name="parameters"></a>Parametri

*TCharType (tipo TChar)*<br/>
Tipo di carattere della `CStrBufT` classe. Può essere uno dei valori seguenti:

- **char** (per le stringhe di caratteri ANSI)

- **wchar_t** (per stringhe di caratteri Unicode)

- TCHAR (per stringhe di caratteri ANSI e Unicode)

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|PCXSTR (in formato PCXSTR)|Puntatore a una stringa costante.|
|PXSTR|Puntatore a una stringa.|
|`StringType`|Tipo di stringa il cui buffer deve essere modificato dalle specializzazioni di questo modello di classe.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT::CStrBufT](#cstrbuft)|Costruttore per l'oggetto buffer di stringa.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT::SetLength](#setlength)|Imposta la lunghezza del buffer di caratteri dell'oggetto stringa associato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT::operator PCXSTR](#operator_pcxstr)|Recupera un puntatore **const** al buffer di caratteri dell'oggetto stringa associato.|
|[CStrBufT::operatorPXSTR](#operator_pxstr)|Recupera un puntatore al buffer di caratteri dell'oggetto stringa associato.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT::AUTO_LENGTH](#auto_length)|Determinare automaticamente la nuova lunghezza della stringa al momento del rilascio.|
|[CStrBufT::SET_LENGTH](#set_length)|Impostare la lunghezza dell'oggetto stringa in fase GetBufferSet the length of the string object at GetBuffer time|

## <a name="remarks"></a>Osservazioni

Questa classe viene utilizzata come classe wrapper per la sostituzione di chiamate a `ReleaseBuffer` [GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [ReleaseBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer)o [GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) e .

Progettato principalmente come classe `CStrBufT` helper, fornisce un modo pratico per uno sviluppatore di lavorare con `ReleaseBuffer`il buffer di caratteri di un oggetto stringa senza preoccuparsi di come o quando chiamare . Ciò è possibile perché l'oggetto wrapper esce dall'ambito naturalmente nel caso di un'eccezione o più percorsi di codice in uscita; causando il distruttore per liberare la risorsa stringa.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr.h

## <a name="cstrbuftauto_length"></a><a name="auto_length"></a>CStrBufT::AUTO_LENGTH

Determinare automaticamente la nuova lunghezza della stringa al momento del rilascio.

```
static const DWORD AUTO_LENGTH = 0x01;
```

### <a name="remarks"></a>Osservazioni

Determinare automaticamente la nuova lunghezza della stringa al momento del rilascio. La stringa deve essere con terminazione null.

## <a name="cstrbuftcstrbuft"></a><a name="cstrbuft"></a>CStrBufT::CStrBufT

Costruisce un oggetto buffer.

```
CStrBufT(StringType& str, int nMinLength, DWORD dwFlags = AUTO_LENGTH) throw(...);
explicit CStrBufT(StringType& str) throw(...);
```

### <a name="parameters"></a>Parametri

*Str*<br/>
Oggetto stringa associato al buffer. In genere, lo sviluppatore utilizzerà `CStrBuf` i typedef `CStrBufA` predefiniti di (variante TCHAR), (variante**char)** e `CStrBufW` **(wchar_t** variant).

*nMinLunghezza*<br/>
Lunghezza minima del buffer dei caratteri.

*dwFlags*<br/>
Determina se la lunghezza della stringa viene determinata automaticamente. Può essere uno dei valori seguenti:

- AUTO_LENGTH lunghezza della stringa viene determinata automaticamente quando viene chiamato [CSimpleStringT::Release.AUTO_LENGTH](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) String length is automatically determined when CSimpleStringT::Release is called. La stringa deve essere con terminazione null. Valore predefinito.

- SET_LENGTH lunghezza della stringa viene impostata quando viene chiamato [CSimpleStringT::GetBuffer.SET_LENGTH](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) String length is set when CSimpleStringT::GetBuffer is called.

### <a name="remarks"></a>Osservazioni

Crea un buffer di stringa per l'oggetto stringa associato. Durante la costruzione, viene chiamato [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) o [CSimpleStringT::GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) .

Si noti che il costruttore di copia è **privato.**

## <a name="cstrbuftoperator-pcxstr"></a><a name="operator_pcxstr"></a>CStrBufT::operator PCXSTR

Accede direttamente ai caratteri archiviati nell'oggetto stringa associato come stringa di tipo C.

```
operator PCXSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore a i caratteri ai dati della stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto stringa. Il contenuto dell'oggetto stringa non può essere modificato con questo puntatore.

## <a name="cstrbuftoperator-pxstr"></a><a name="operator_pxstr"></a>CStrBufT::operatorPXSTR

Accede direttamente ai caratteri archiviati nell'oggetto stringa associato come stringa di tipo C.

```
operator PXSTR() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore a i caratteri ai dati della stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto stringa. Lo sviluppatore può modificare il contenuto dell'oggetto stringa con questo puntatore.

## <a name="cstrbuftpcxstr"></a><a name="pcxstr"></a>CStrBufT::PCXSTR

Puntatore a una stringa costante.

```
typedef CSimpleStringT<TCharType>::PCXSTR PCXSTR;
```

## <a name="cstrbuftpxstr"></a><a name="pxstr"></a>CStrBufT::PXSTR

Puntatore a una stringa.

```
typedef CSimpleStringT<TCharType>::PXSTR PXSTR;
```

## <a name="cstrbuftset_length"></a><a name="set_length"></a>CStrBufT::SET_LENGTH

Impostare la lunghezza dell'oggetto stringa in `GetBuffer` tempo.

```
static const DWORD SET_LENGTH = 0x02;
```

### <a name="remarks"></a>Osservazioni

Impostare la lunghezza dell'oggetto stringa in fase GetBuffer.

Determina se [CSimpleStringT::GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT::GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) vengono chiamati quando viene costruito l'oggetto buffer di stringa.

## <a name="cstrbuftsetlength"></a><a name="setlength"></a>CStrBufT::SetLength

Imposta la lunghezza del buffer di caratteri.

```
void SetLength(int nLength);
```

### <a name="parameters"></a>Parametri

*nLunghezza*<br/>
Nuova lunghezza del buffer di caratteri dell'oggetto stringa.

> [!NOTE]
> Deve essere minore o uguale alla lunghezza minima `CStrBufT`del buffer specificata nel costruttore di .

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per impostare la lunghezza della stringa rappresentata dall'oggetto buffer.

## <a name="cstrbuftstringtype"></a><a name="stringtype"></a>CStrBufT::StringType

Tipo di stringa il cui buffer deve essere modificato dalle specializzazioni di questo modello di classe.

```
typedef CSimpleStringT<TCharType> StringType;
```

### <a name="remarks"></a>Osservazioni

`TCharType`è il tipo di carattere utilizzato per specializzare il modello di classe.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
