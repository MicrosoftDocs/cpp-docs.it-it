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
ms.openlocfilehash: 4d9d0b403e572d6fdea65355702467c89587cc3a
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87219079"
---
# <a name="cstrbuft-class"></a>Classe CStrBufT

Questa classe fornisce la pulizia automatica delle risorse per `GetBuffer` e `ReleaseBuffer` chiama su un `CStringT` oggetto esistente.

## <a name="syntax"></a>Sintassi

```
template<typename TCharType>
class CStrBufT
```

#### <a name="parameters"></a>Parametri

*TCharType*<br/>
Tipo di carattere della `CStrBufT` classe. Può essere uno dei valori seguenti:

- **`char`**(per le stringhe di caratteri ANSI)

- **`wchar_t`**(per le stringhe di caratteri Unicode)

- TCHAR (per stringhe di caratteri ANSI e Unicode)

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|PCXSTR|Puntatore a una stringa costante.|
|PXSTR|Puntatore a una stringa.|
|`StringType`|Tipo di stringa il cui buffer deve essere modificato dalle specializzazioni di questo modello di classe.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT:: CStrBufT](#cstrbuft)|Costruttore per l'oggetto buffer di stringa.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT:: tolength](#setlength)|Imposta la lunghezza del buffer di caratteri dell'oggetto stringa associato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT:: operator PCXSTR](#operator_pcxstr)|Recupera un **`const`** puntatore al buffer di caratteri dell'oggetto stringa associato.|
|[CStrBufT:: operator PXSTR](#operator_pxstr)|Recupera un puntatore al buffer di caratteri dell'oggetto stringa associato.|

### <a name="public-constants"></a>Costanti pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[CStrBufT:: AUTO_LENGTH](#auto_length)|Determina automaticamente la nuova lunghezza della stringa in fase di rilascio.|
|[CStrBufT:: SET_LENGTH](#set_length)|Imposta la lunghezza dell'oggetto stringa in fase GetBuffer|

## <a name="remarks"></a>Osservazioni

Questa classe viene usata come classe wrapper per sostituire le chiamate a [GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [ReleaseBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer), o [GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) e `ReleaseBuffer` .

Progettato principalmente come classe helper, fornisce agli `CStrBufT` sviluppatori un modo pratico per lavorare con il buffer di caratteri di un oggetto stringa senza doversi preoccupare di come o quando chiamare `ReleaseBuffer` . Questo è possibile perché l'oggetto wrapper esula naturalmente dall'ambito nel caso di un'eccezione o di più percorsi di codice in uscita. causa del distruttore per liberare la risorsa di tipo stringa.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpstr. h

## <a name="cstrbuftauto_length"></a><a name="auto_length"></a>CStrBufT:: AUTO_LENGTH

Determina automaticamente la nuova lunghezza della stringa in fase di rilascio.

```
static const DWORD AUTO_LENGTH = 0x01;
```

### <a name="remarks"></a>Osservazioni

Determina automaticamente la nuova lunghezza della stringa in fase di rilascio. La stringa deve essere con terminazione null.

## <a name="cstrbuftcstrbuft"></a><a name="cstrbuft"></a>CStrBufT:: CStrBufT

Costruisce un oggetto buffer.

```
CStrBufT(StringType& str, int nMinLength, DWORD dwFlags = AUTO_LENGTH) throw(...);
explicit CStrBufT(StringType& str) throw(...);
```

### <a name="parameters"></a>Parametri

*str*<br/>
Oggetto stringa associato al buffer. In genere, lo sviluppatore utilizzerà i typedef predefiniti di `CStrBuf` (TCHAR Variant), `CStrBufA` ( **`char`** Variant) e `CStrBufW` ( **`wchar_t`** Variant).

*nMinLength*<br/>
Lunghezza minima del buffer di caratteri.

*dwFlags*<br/>
Determina se la lunghezza della stringa viene determinata automaticamente. Può essere uno dei valori seguenti:

- La lunghezza della stringa AUTO_LENGTH viene determinata automaticamente quando viene chiamato [CSimpleStringT:: Release](../../atl-mfc-shared/reference/csimplestringt-class.md#releasebuffer) . La stringa deve essere con terminazione null. Valore predefinito.

- La lunghezza della stringa SET_LENGTH viene impostata quando viene chiamato [CSimpleStringT:: GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) .

### <a name="remarks"></a>Osservazioni

Crea un buffer di stringa per l'oggetto stringa associato. Durante la costruzione, viene chiamato [CSimpleStringT:: GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) o [CSimpleStringT:: GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) .

Si noti che il costruttore di copia è **`private`** .

## <a name="cstrbuftoperator-pcxstr"></a><a name="operator_pcxstr"></a>CStrBufT:: operator PCXSTR

Accede direttamente ai caratteri archiviati nell'oggetto stringa associato come stringa di tipo C.

```
operator PCXSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore di caratteri ai dati della stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto String. Non è possibile modificare il contenuto dell'oggetto stringa con questo puntatore.

## <a name="cstrbuftoperator-pxstr"></a><a name="operator_pxstr"></a>CStrBufT:: operator PXSTR

Accede direttamente ai caratteri archiviati nell'oggetto stringa associato come stringa di tipo C.

```
operator PXSTR() throw();
```

### <a name="return-value"></a>Valore restituito

Puntatore di caratteri ai dati della stringa.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire un puntatore al buffer di caratteri di un oggetto String. Lo sviluppatore può modificare il contenuto dell'oggetto stringa con questo puntatore.

## <a name="cstrbuftpcxstr"></a><a name="pcxstr"></a>CStrBufT::P CXSTR

Puntatore a una stringa costante.

```
typedef CSimpleStringT<TCharType>::PCXSTR PCXSTR;
```

## <a name="cstrbuftpxstr"></a><a name="pxstr"></a>CStrBufT::P XSTR

Puntatore a una stringa.

```
typedef CSimpleStringT<TCharType>::PXSTR PXSTR;
```

## <a name="cstrbuftset_length"></a><a name="set_length"></a>CStrBufT:: SET_LENGTH

Imposta la lunghezza dell'oggetto stringa al `GetBuffer` momento.

```
static const DWORD SET_LENGTH = 0x02;
```

### <a name="remarks"></a>Osservazioni

Imposta la lunghezza dell'oggetto stringa in fase GetBuffer.

Determina se [CSimpleStringT:: GetBuffer](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffer) e [CSimpleStringT:: GetBufferSetLength](../../atl-mfc-shared/reference/csimplestringt-class.md#getbuffersetlength) vengono chiamati quando viene costruito l'oggetto buffer di stringa.

## <a name="cstrbuftsetlength"></a><a name="setlength"></a>CStrBufT:: tolength

Imposta la lunghezza del buffer di caratteri.

```cpp
void SetLength(int nLength);
```

### <a name="parameters"></a>Parametri

*nLength*<br/>
Nuova lunghezza del buffer di caratteri dell'oggetto stringa.

> [!NOTE]
> Deve essere minore o uguale alla lunghezza minima del buffer specificata nel costruttore di `CStrBufT` .

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per impostare la lunghezza della stringa rappresentata dall'oggetto buffer.

## <a name="cstrbuftstringtype"></a><a name="stringtype"></a>CStrBufT:: StringType

Tipo di stringa il cui buffer deve essere modificato dalle specializzazioni di questo modello di classe.

```
typedef CSimpleStringT<TCharType> StringType;
```

### <a name="remarks"></a>Osservazioni

`TCharType`è il tipo di carattere utilizzato per specializzare il modello di classe.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classi condivise ATL/MFC](../../atl-mfc-shared/atl-mfc-shared-classes.md)
