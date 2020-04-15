---
title: Classe CA2WEX
ms.date: 11/04/2016
f1_keywords:
- CA2WEX
- ATLCONV/ATL::CA2WEX
- ATLCONV/ATL::CA2WEX::CA2WEX
- ATLCONV/ATL::CA2WEX::m_psz
- ATLCONV/ATL::CA2WEX::m_szBuffer
helpviewer_keywords:
- CA2WEX class
ms.assetid: 317d9ffb-e84f-47e8-beda-57e28fb19124
ms.openlocfilehash: c9123e163ca828fa71fe217e46537ceb18e6f549
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319124"
---
# <a name="ca2wex-class"></a>Classe CA2WEX

Questa classe viene utilizzata dalle macro di conversione delle stringhe CA2TEX, CA2CTEX, CT2WEX e CT2CWEX e dal typedef CA2W.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <int t_nBufferLength = 128>
class CA2WEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensione del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2WEX::CA2WEX (informazioni in due)](#ca2wex)|Costruttore.|
|[CA2WEX: : : CA2WEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2WEX::operatore LPWSTR](#operator_lpwstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2WEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CA2WEX::m_szBuffer](#m_szbuffer)|Buffer statico, utilizzato per archiviare la stringa convertita.|

## <a name="remarks"></a>Osservazioni

A meno che non siano necessarie funzionalità aggiuntive, utilizzare CA2TEX, CA2CTEX, CT2WEX, CT2CWEX o CA2W nel codice.

Questa classe contiene un buffer statico a dimensione fissa che viene utilizzato per archiviare il risultato della conversione. Se il risultato è troppo grande per essere inserito nel buffer statico, la classe alloca memoria utilizzando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza delle macro di conversione del testo disponibili nelle versioni precedenti di ATL, questa classe è sicura da utilizzare nei cicli e che non verrà eseguito l'overflow dello stack.

Se la classe tenta di allocare memoria nell'heap e ha esito negativo, chiamerà `AtlThrow` con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le macro e le classi di conversione ATL utilizzano la tabella codici ANSI del thread corrente per la conversione. Se si desidera eseguire l'override di tale comportamento per una conversione specifica, specificare la tabella codici come secondo parametro per il costruttore per la classe.

Le seguenti macro sono basate su questa classe:

- CA2TEX

- CA2CTEX (CA2CTEX)

- CT2WEX

- CT2CWEX

Il typedef seguente è basato su questa classe:The following typedef is based on this class:

- CA2W (caffè

Per una descrizione di queste macro di conversione del testo, vedere Macro di [conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo di queste macro di conversione delle stringhe, vedere Macro di conversione di stringhe [ATL e MFC.](string-conversion-macros.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv.h

## <a name="ca2wexca2wex"></a><a name="ca2wex"></a>CA2WEX::CA2WEX (informazioni in due)

Costruttore.

```
CA2WEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2WEX(LPCSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
Stringa di testo da convertire.

*nPaginaclico*<br/>
Tabella codici utilizzata per eseguire la conversione. Vedere la discussione sui parametri della tabella codici per la funzione di Windows SDK [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar) per ulteriori dettagli.

### <a name="remarks"></a>Osservazioni

Alloca il buffer utilizzato nel processo di conversione.

## <a name="ca2wexca2wex"></a><a name="dtor"></a>CA2WEX: : : CA2WEX

Distruttore.

```
~CA2WEX() throw();
```

### <a name="remarks"></a>Osservazioni

Libera il buffer allocato.

## <a name="ca2wexm_psz"></a><a name="m_psz"></a>CA2WEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPWSTR m_psz;
```

## <a name="ca2wexm_szbuffer"></a><a name="m_szbuffer"></a>CA2WEX::m_szBuffer

Buffer statico, utilizzato per archiviare la stringa convertita.

```
wchar_t m_szBuffer[t_nBufferLength];
```

## <a name="ca2wexoperator-lpwstr"></a><a name="operator_lpwstr"></a>CA2WEX::operatore LPWSTR

Operatore di conversione.

```
operator LPWSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPWSTR.

## <a name="see-also"></a>Vedere anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
