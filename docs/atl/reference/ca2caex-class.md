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
ms.openlocfilehash: 88389d4fe913a31fce43e3c8cc95605f99701695
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62261195"
---
# <a name="ca2caex-class"></a>Classe CA2CAEX

Questa classe viene utilizzata dalle macro di conversione di stringhe CA2CTEX e CT2CAEX e typedef CA2CA.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<int t_nBufferLength = 128>
class CA2CAEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è di 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2CAEX::CA2CAEX](#ca2caex)|Costruttore.|
|[CA2CAEX:: ~ CA2CAEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2CAEX::operator LPCSTR](#operator_lpcstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2CAEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|

## <a name="remarks"></a>Note

A meno che non è necessaria la funzionalità aggiuntiva, usare CA2CTEX, CT2CAEX o CA2CA nel proprio codice.

Questa classe sia sicura per l'uso nei cicli e non eseguiranno l'overflow dello stack. Per impostazione predefinita, le classi e le macro di conversione ATL useranno la tabella codici ANSI del thread corrente per la conversione.

Le macro seguenti si basano su questa classe:

- CA2CTEX

- CT2CAEX

Il typedef seguente si basa su questa classe:

- CA2CA

Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md).

## <a name="example"></a>Esempio

Visualizzare [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md) per un esempio dell'uso di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

##  <a name="ca2caex"></a>  CA2CAEX::CA2CAEX

Costruttore.

```
CA2CAEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2CAEX(LPCSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*psz*<br/>
La stringa di testo da convertire.

*nCodePage*<br/>
Non utilizzato in questa classe.

### <a name="remarks"></a>Note

Crea il buffer della traduzione.

##  <a name="dtor"></a>  CA2CAEX:: ~ CA2CAEX

Distruttore.

```
~CA2CAEX() throw();
```

### <a name="remarks"></a>Note

Consente di liberare il buffer allocato.

##  <a name="m_psz"></a>  CA2CAEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPCSTR m_psz;
```

##  <a name="operator_lpcstr"></a>  CA2CAEX::operator LPCSTR

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
[Panoramica della classe](../../atl/atl-class-overview.md)
