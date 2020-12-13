---
description: 'Altre informazioni su: Classe CW2CWEX'
title: Classe CW2CWEX
ms.date: 11/04/2016
f1_keywords:
- CW2CWEX
- ATLCONV/ATL::CW2CWEX
- ATLCONV/ATL::CW2CWEX::CW2CWEX
- ATLCONV/ATL::CW2CWEX::m_psz
helpviewer_keywords:
- CW2CWEX class
ms.assetid: d654b22b-05a6-410f-a0ec-9a2cbbb4cca7
ms.openlocfilehash: 769dcedf1a9dc15129b09e3305330de33242562e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140231"
---
# <a name="cw2cwex-class"></a>Classe CW2CWEX

Questa classe viene utilizzata dalle macro di conversione di stringa CW2CTEX e CT2CWEX e typedef CW2W.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<int t_nBufferLength = 128>
class CW2CWEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensioni del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CW2CWEX::CW2CWEX](#cw2cwex)|Costruttore.|
|[CW2CWEX:: ~ CW2CWEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CW2CWEX:: operator LPCWSTR](#operator_lpcwstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CW2CWEX:: m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|

## <a name="remarks"></a>Commenti

A meno che non sia necessaria una funzionalità aggiuntiva, usare CW2CTEX, CT2CWEX o CW2W nel codice.

Questa classe è sicura per l'uso in cicli e non esegue l'overflow dello stack. Per impostazione predefinita, le classi e le macro di conversione ATL utilizzano la tabella codici ANSI del thread corrente per la conversione.

Le macro seguenti sono basate su questa classe:

- CW2CTEX

- CT2CWEX

Il typedef seguente si basa su questa classe:

- CW2W

Per una descrizione di queste macro di conversione del testo, vedere le [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Vedere [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md) per un esempio di utilizzo di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

## <a name="cw2cwexcw2cwex"></a><a name="cw2cwex"></a> CW2CWEX::CW2CWEX

Costruttore.

```
CW2CWEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2CWEX(LPCWSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*PSZ*<br/>
Stringa di testo da convertire.

*nCodePage*<br/>
Tabella codici. Non utilizzato in questa classe.

### <a name="remarks"></a>Commenti

Alloca il buffer utilizzato nel processo di conversione.

## <a name="cw2cwexcw2cwex"></a><a name="dtor"></a> CW2CWEX:: ~ CW2CWEX

Distruttore.

```
~CW2CWEX() throw();
```

### <a name="remarks"></a>Commenti

Libera il buffer allocato.

## <a name="cw2cwexm_psz"></a><a name="m_psz"></a> CW2CWEX:: m_psz

Membro dati che archivia la stringa di origine.

```
LPCWSTR m_psz;
```

## <a name="cw2cwexoperator-lpcwstr"></a><a name="operator_lpcwstr"></a> CW2CWEX:: operator LPCWSTR

Operatore di conversione.

```
operator LPCWSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPCWSTR.

## <a name="see-also"></a>Vedi anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)<br/>
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
