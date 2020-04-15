---
title: Classe CA2CAEX
ms.date: 11/04/2016
f1_keywords:
- CA2CAEX
- ATLCONV/ATL::CA2CAEX
- ATLCONV/ATL::CA2CAEX::CA2CAEX
- ATLCONV/ATL::CA2CAEX::m_psz
helpviewer_keywords:
- CA2CAEX class
ms.assetid: 388e7c1d-a144-474c-a182-b15f69a74bd8
ms.openlocfilehash: e6c727993b2907aaa551421a5d2d23e372b68917
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319139"
---
# <a name="ca2caex-class"></a>Classe CA2CAEX

Questa classe viene utilizzata dalle macro di conversione delle stringhe CA2CTEX e CT2CAEX e dal typedef CA2CA.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<int t_nBufferLength = 128>
class CA2CAEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensione del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2CAEX::CA2CAEX](#ca2caex)|Costruttore.|
|[CA2CAEX::CA2CAEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2CAEX::operatore LPCSTR](#operator_lpcstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2CAEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|

## <a name="remarks"></a>Osservazioni

A meno che non siano necessarie funzionalità aggiuntive, utilizzare CA2CTEX, CT2CAEX o CA2CA nel codice.

Questa classe è sicura da usare nei cicli e non eseguirà l'overflow dello stack. Per impostazione predefinita, le classi e le macro di conversione ATL useranno la tabella codici ANSI del thread corrente per la conversione.

Le seguenti macro sono basate su questa classe:

- CA2CTEX (CA2CTEX)

- CT2CAEX

Il typedef seguente è basato su questa classe:The following typedef is based on this class:

- CA2CA

Per una descrizione di queste macro di conversione del testo, vedere Macro di [conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Per un esempio di utilizzo di queste macro di conversione delle stringhe, vedere Macro di conversione di stringhe [ATL e MFC.](string-conversion-macros.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv.h

## <a name="ca2caexca2caex"></a><a name="ca2caex"></a>CA2CAEX::CA2CAEX

Costruttore.

```
CA2CAEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2CAEX(LPCSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*Psz*<br/>
Stringa di testo da convertire.

*nPaginaclico*<br/>
Non utilizzato in questa classe.

### <a name="remarks"></a>Osservazioni

Crea il buffer necessario per la conversione.

## <a name="ca2caexca2caex"></a><a name="dtor"></a>CA2CAEX::CA2CAEX

Distruttore.

```
~CA2CAEX() throw();
```

### <a name="remarks"></a>Osservazioni

Libera il buffer allocato.

## <a name="ca2caexm_psz"></a><a name="m_psz"></a>CA2CAEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPCSTR m_psz;
```

## <a name="ca2caexoperator-lpcstr"></a><a name="operator_lpcstr"></a>CA2CAEX::operatore LPCSTR

Operatore di conversione.

```
operator LPCSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPCSTR.

## <a name="see-also"></a>Vedere anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
