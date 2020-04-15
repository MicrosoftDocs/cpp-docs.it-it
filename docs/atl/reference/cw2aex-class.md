---
title: Classe CW2AEX
ms.date: 11/04/2016
f1_keywords:
- CW2AEX
- ATLCONV/ATL::CW2AEX
- ATLCONV/ATL::CW2AEX::CW2AEX
- ATLCONV/ATL::CW2AEX::m_psz
- ATLCONV/ATL::CW2AEX::m_szBuffer
helpviewer_keywords:
- CW2AEX class
ms.assetid: 44dc2cf5-dd30-440b-a9b9-b21b43f49843
ms.openlocfilehash: 849cbe5c26d7c7af7a8925a26057b5777554471d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330445"
---
# <a name="cw2aex-class"></a>Classe CW2AEX

Questa classe viene utilizzata dalle macro di conversione delle stringhe CT2AEX, CW2TEX, CW2CTEX e CT2CAEX e dal typedef CW2A.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<int t_nBufferLength = 128>
class CW2AEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensione del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2AEX::CW2AEX](#cw2aex)|Costruttore.|
|[CW2AEX:: CW2AEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2AEX::operatore LPSTR](#operator_lpstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2AEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CW2AEX::m_szBuffer](#m_szbuffer)|Buffer statico, utilizzato per archiviare la stringa convertita.|

## <a name="remarks"></a>Osservazioni

A meno che non siano necessarie funzionalità aggiuntive, utilizzare CT2AEX, CW2TEX, CW2CTEX, CT2CAEX o CW2A nel codice.

Questa classe contiene un buffer statico a dimensione fissa che viene utilizzato per archiviare il risultato della conversione. Se il risultato è troppo grande per essere inserito nel buffer statico, la classe alloca memoria utilizzando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza delle macro di conversione del testo disponibili nelle versioni precedenti di ATL, questa classe è sicura da utilizzare nei cicli e che non verrà eseguito l'overflow dello stack.

Se la classe tenta di allocare memoria nell'heap e ha esito negativo, chiamerà `AtlThrow` con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le macro e le classi di conversione ATL utilizzano la tabella codici ANSI del thread corrente per la conversione. Se si desidera eseguire l'override di tale comportamento per una conversione specifica, specificare la tabella codici come secondo parametro per il costruttore per la classe.

Le seguenti macro sono basate su questa classe:

- CT2AEX

- CW2TEX

- CW2CTEX

- CT2CAEX

Il typedef seguente è basato su questa classe:The following typedef is based on this class:

- CW2A

Per una descrizione di queste macro di conversione del testo, vedere Macro di [conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo di queste macro di conversione delle stringhe, vedere Macro di conversione di stringhe [ATL e MFC.](string-conversion-macros.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv.h

## <a name="cw2aexcw2aex"></a><a name="cw2aex"></a>CW2AEX::CW2AEX

Costruttore.

```
CW2AEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2AEX(LPCWSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
Stringa di testo da convertire.

*nPaginaclico*<br/>
Tabella codici utilizzata per eseguire la conversione. Vedere la discussione sui parametri della tabella codici per la funzione di Windows SDK [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar) per ulteriori dettagli.

### <a name="remarks"></a>Osservazioni

Alloca il buffer utilizzato nel processo di conversione.

## <a name="cw2aexcw2aex"></a><a name="dtor"></a>CW2AEX:: CW2AEX

Distruttore.

```
~CW2AEX() throw();
```

### <a name="remarks"></a>Osservazioni

Libera il buffer allocato.

## <a name="cw2aexm_psz"></a><a name="m_psz"></a>CW2AEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPSTR m_psz;
```

## <a name="cw2aexm_szbuffer"></a><a name="m_szbuffer"></a>CW2AEX::m_szBuffer

Buffer statico, utilizzato per archiviare la stringa convertita.

```
char m_szBuffer[t_nBufferLength];
```

## <a name="cw2aexoperator-lpstr"></a><a name="operator_lpstr"></a>CW2AEX::operatore LPSTR

Operatore di conversione.

```
operator LPSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPSTR.

## <a name="see-also"></a>Vedere anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)<br/>
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)<br/>
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
