---
description: 'Altre informazioni su: classe CA2WEX'
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
ms.openlocfilehash: 59d0624176f01ee266b8162060b281202ef977c6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165095"
---
# <a name="ca2wex-class"></a>Classe CA2WEX

Questa classe viene utilizzata dalle macro di conversione di stringhe CA2TEX, CA2CTEX, CT2WEX e CT2CWEX e typedef CA2W.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template <int t_nBufferLength = 128>
class CA2WEX
```

### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensioni del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CA2WEX::CA2WEX](#ca2wex)|Costruttore.|
|[CA2WEX:: ~ CA2WEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CA2WEX:: operator LPWSTR](#operator_lpwstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CA2WEX:: m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CA2WEX:: m_szBuffer](#m_szbuffer)|Buffer statico utilizzato per archiviare la stringa convertita.|

## <a name="remarks"></a>Commenti

A meno che non sia necessaria una funzionalità aggiuntiva, usare CA2TEX, CA2CTEX, CT2WEX, CT2CWEX o CA2W nel codice.

Questa classe contiene un buffer statico di dimensioni fisse usato per archiviare il risultato della conversione. Se il risultato è troppo grande per essere inserito nel buffer statico, la classe alloca memoria utilizzando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza delle macro di conversione del testo disponibili nelle versioni precedenti di ATL, questa classe è sicura per l'utilizzo in cicli e che non si inun overflow dello stack.

Se la classe tenta di allocare memoria nell'heap e ha esito negativo, verrà chiamata `AtlThrow` con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le classi e le macro di conversione ATL utilizzano la tabella codici ANSI del thread corrente per la conversione. Se si desidera eseguire l'override di tale comportamento per una conversione specifica, specificare la tabella codici come secondo parametro per il costruttore della classe.

Le macro seguenti sono basate su questa classe:

- CA2TEX

- CA2CTEX

- CT2WEX

- CT2CWEX

Il typedef seguente si basa su questa classe:

- CA2W

Per una descrizione di queste macro di conversione del testo, vedere le [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Vedere [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md) per un esempio di utilizzo di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

## <a name="ca2wexca2wex"></a><a name="ca2wex"></a> CA2WEX::CA2WEX

Costruttore.

```cpp
CA2WEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2WEX(LPCSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*PSZ*<br/>
Stringa di testo da convertire.

*nCodePage*<br/>
Tabella codici utilizzata per eseguire la conversione. Per informazioni dettagliate, vedere la descrizione del parametro della tabella codici per la funzione Windows SDK [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar) .

### <a name="remarks"></a>Commenti

Alloca il buffer utilizzato nel processo di conversione.

## <a name="ca2wexca2wex"></a><a name="dtor"></a> CA2WEX:: ~ CA2WEX

Distruttore.

```cpp
~CA2WEX() throw();
```

### <a name="remarks"></a>Commenti

Libera il buffer allocato.

## <a name="ca2wexm_psz"></a><a name="m_psz"></a> CA2WEX:: m_psz

Membro dati che archivia la stringa di origine.

```cpp
LPWSTR m_psz;
```

## <a name="ca2wexm_szbuffer"></a><a name="m_szbuffer"></a> CA2WEX:: m_szBuffer

Buffer statico utilizzato per archiviare la stringa convertita.

```cpp
wchar_t m_szBuffer[t_nBufferLength];
```

## <a name="ca2wexoperator-lpwstr"></a><a name="operator_lpwstr"></a> CA2WEX:: operator LPWSTR

Operatore di conversione.

```cpp
operator LPWSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPWSTR.

## <a name="see-also"></a>Vedi anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
