---
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
ms.openlocfilehash: 22b031ee83e6c0e01401f6d5ed19d83532443b64
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50556938"
---
# <a name="cw2cwex-class"></a>Classe CW2CWEX

Questa classe viene utilizzata la macro di conversione di stringhe CW2CTEX e CT2CWEX e typedef CW2W.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<int t_nBufferLength = 128>
class CW2CWEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è di 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2CWEX::CW2CWEX](#cw2cwex)|Costruttore.|
|[CW2CWEX:: ~ CW2CWEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2CWEX::operator LPCWSTR](#operator_lpcwstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2CWEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|

## <a name="remarks"></a>Note

A meno che non è necessaria la funzionalità aggiuntiva, usare CW2CTEX, CT2CWEX o CW2W nel codice.

Questa classe sia sicura per l'uso nei cicli e non eseguiranno l'overflow dello stack. Per impostazione predefinita, le classi di conversione ATL e le macro usano la tabella codici ANSI del thread corrente per la conversione.

Le macro seguenti si basano su questa classe:

- CW2CTEX

- CT2CWEX

Il typedef seguente si basa su questa classe:

- CW2W

Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md).

## <a name="example"></a>Esempio

Visualizzare [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md) per un esempio dell'uso di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

##  <a name="cw2cwex"></a>  CW2CWEX::CW2CWEX

Costruttore.

```
CW2CWEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2CWEX(LPCWSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*psz*<br/>
La stringa di testo da convertire.

*nCodePage*<br/>
La tabella codici. Non utilizzato in questa classe.

### <a name="remarks"></a>Note

Consente di allocare il buffer utilizzato nel processo di conversione.

##  <a name="dtor"></a>  CW2CWEX:: ~ CW2CWEX

Distruttore.

```
~CW2CWEX() throw();
```

### <a name="remarks"></a>Note

Consente di liberare il buffer allocato.

##  <a name="m_psz"></a>  CW2CWEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPCWSTR m_psz;
```

##  <a name="operator_lpcwstr"></a>  CW2CWEX::operator LPCWSTR

Operatore di conversione.

```
operator LPCWSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPCWSTR.

## <a name="see-also"></a>Vedere anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)<br/>
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
