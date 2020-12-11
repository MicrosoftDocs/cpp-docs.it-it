---
description: 'Altre informazioni su: Classe CA2CAEX'
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
ms.openlocfilehash: 89709280e94e07c549d179dc9a9863bd4bf2cbaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158595"
---
# <a name="ca2caex-class"></a>Classe CA2CAEX

Questa classe viene utilizzata dalle macro di conversione di stringa CA2CTEX e CT2CAEX e typedef CA2CA.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```cpp
template<int t_nBufferLength = 128>
class CA2CAEX
```

### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensioni del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CA2CAEX::CA2CAEX](#ca2caex)|Costruttore.|
|[CA2CAEX:: ~ CA2CAEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[CA2CAEX:: operator LPCSTR](#operator_lpcstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CA2CAEX:: m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|

## <a name="remarks"></a>Commenti

A meno che non sia necessaria una funzionalità aggiuntiva, usare CA2CTEX, CT2CAEX o CA2CA nel proprio codice.

Questa classe è sicura per l'uso in cicli e non esegue l'overflow dello stack. Per impostazione predefinita, le classi e le macro di conversione ATL useranno la tabella codici ANSI del thread corrente per la conversione.

Le macro seguenti sono basate su questa classe:

- CA2CTEX

- CT2CAEX

Il typedef seguente si basa su questa classe:

- CA2CA

Per una descrizione di queste macro di conversione del testo, vedere le [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Vedere [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md) per un esempio di utilizzo di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

## <a name="ca2caexca2caex"></a><a name="ca2caex"></a> CA2CAEX::CA2CAEX

Costruttore.

```cpp
CA2CAEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2CAEX(LPCSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*PSZ*<br/>
Stringa di testo da convertire.

*nCodePage*<br/>
Non usato in questa classe.

### <a name="remarks"></a>Commenti

Crea il buffer necessario per la traduzione.

## <a name="ca2caexca2caex"></a><a name="dtor"></a> CA2CAEX:: ~ CA2CAEX

Distruttore.

```cpp
~CA2CAEX() throw();
```

### <a name="remarks"></a>Commenti

Libera il buffer allocato.

## <a name="ca2caexm_psz"></a><a name="m_psz"></a> CA2CAEX:: m_psz

Membro dati che archivia la stringa di origine.

```cpp
LPCSTR m_psz;
```

## <a name="ca2caexoperator-lpcstr"></a><a name="operator_lpcstr"></a> CA2CAEX:: operator LPCSTR

Operatore di conversione.

```cpp
operator LPCSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPCSTR.

## <a name="see-also"></a>Vedi anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)<br/>
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
