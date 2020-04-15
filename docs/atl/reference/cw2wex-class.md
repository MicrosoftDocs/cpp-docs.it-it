---
title: Classe CW2WEX
ms.date: 11/04/2016
f1_keywords:
- CW2WEX
- ATLCONV/ATL::CW2WEX
- ATLCONV/ATL::CW2WEX::CW2WEX
- ATLCONV/ATL::CW2WEX::m_psz
- ATLCONV/ATL::CW2WEX::m_szBuffer
helpviewer_keywords:
- CW2WEX class
ms.assetid: 46262e56-e0d2-41fe-855b-0b67ecc8fcd7
ms.openlocfilehash: b116775a595f9fb3612d46e19526cf1396f85002
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330341"
---
# <a name="cw2wex-class"></a>Classe CW2WEX

Questa classe viene utilizzata dalle macro di conversione delle stringhe CW2TEX e CT2WEX e dal typedef CW2W.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <int t_nBufferLength = 128>
class CW2WEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensione del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2WEX::CW2WEX](#cw2wex)|Costruttore.|
|[CW2WEX: : CW2WEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2WEX::operatore LPWSTR](#operator_lpwstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2WEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CW2WEX::m_szBuffer](#m_szbuffer)|Buffer statico, utilizzato per archiviare la stringa convertita.|

## <a name="remarks"></a>Osservazioni

A meno che non siano necessarie funzionalità aggiuntive, utilizzare CW2TEX, CT2WEX o CW2W nel codice.

Questa classe contiene un buffer statico a dimensione fissa che viene utilizzato per archiviare il risultato della conversione. Se il risultato è troppo grande per essere inserito nel buffer statico, la classe alloca memoria utilizzando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza delle macro di conversione del testo disponibili nelle versioni precedenti di ATL, questa classe è sicura da utilizzare nei cicli e che non verrà eseguito l'overflow dello stack.

Se la classe tenta di allocare memoria nell'heap e ha esito negativo, chiamerà `AtlThrow` con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le macro e le classi di conversione ATL utilizzano la tabella codici ANSI del thread corrente per la conversione.

Le seguenti macro sono basate su questa classe:

- CW2TEX

- CT2WEX

Il typedef seguente è basato su questa classe:The following typedef is based on this class:

- CW2W

Per una descrizione di queste macro di conversione del testo, vedere Macro di [conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo di queste macro di conversione delle stringhe, vedere Macro di conversione di stringhe [ATL e MFC.](string-conversion-macros.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv.h

## <a name="cw2wexcw2wex"></a><a name="cw2wex"></a>CW2WEX::CW2WEX

Costruttore.

```
CW2WEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2WEX( LPCWSTR  psz) throw(...);
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
Stringa di testo da convertire.

*nPaginaclico*<br/>
Tabella codici. Non utilizzato in questa classe.

### <a name="remarks"></a>Osservazioni

Crea il buffer necessario per la conversione.

## <a name="cw2wexcw2wex"></a><a name="dtor"></a>CW2WEX: : CW2WEX

Il distruttore..

```
~CW2WEX() throw();
```

### <a name="remarks"></a>Osservazioni

Libera il buffer allocato.

## <a name="cw2wexm_psz"></a><a name="m_psz"></a>CW2WEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPWSTR m_psz;
```

## <a name="cw2wexm_szbuffer"></a><a name="m_szbuffer"></a>CW2WEX::m_szBuffer

Buffer statico, utilizzato per archiviare la stringa convertita.

```
wchar_t m_szBuffer[t_nBufferLength];
```

## <a name="cw2wexoperator-lpwstr"></a><a name="operator_lpwstr"></a>CW2WEX::operatore LPWSTR

Operatore di cast.

```
operator LPWSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPWSTR.

## <a name="see-also"></a>Vedere anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)<br/>
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
