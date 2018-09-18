---
title: Classe CA2AEX | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CA2AEX
- ATLCONV/ATL::CA2AEX
- ATLCONV/ATL::CA2AEX::CA2AEX
- ATLCONV/ATL::CA2AEX::m_psz
- ATLCONV/ATL::CA2AEX::m_szBuffer
dev_langs:
- C++
helpviewer_keywords:
- CA2AEX class
ms.assetid: 57dc65df-d9cf-4a84-99d3-6e031dde3664
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 49e364e2676242ad75f185792faa545bbb90ef1e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46071211"
---
# <a name="ca2aex-class"></a>Classe CA2AEX

Questa classe viene utilizzata la macro di conversione di stringhe CA2TEX e CT2AEX e typedef CA2A.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <int t_nBufferLength = 128>
class CA2AEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è di 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2AEX::CA2AEX](#ca2aex)|Costruttore.|
|[CA2AEX:: ~ CA2AEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2AEX::operator LPSTR](#operator_lpstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2AEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CA2AEX::m_szBuffer](#m_szbuffer)|Il buffer statico, usato per archiviare la stringa convertita.|

## <a name="remarks"></a>Note

A meno che non è necessaria la funzionalità aggiuntiva, usare CA2TEX, CT2AEX o CA2A nel proprio codice.

Questa classe contiene un buffer statico di dimensione fissa che viene usato per archiviare il risultato della conversione. Se il risultato è troppo grande per il buffer statico, la classe alloca memoria usando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza del testo macro di conversione disponibili nelle versioni precedenti di ATL, questa classe sia sicura per l'uso nei cicli e che non eseguiranno l'overflow dello stack.

Se la classe tenta di allocare memoria sull'heap e ha esito negativo, chiamerà `AtlThrow` con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le classi di conversione ATL e le macro usano la tabella codici ANSI del thread corrente per la conversione.

Le macro seguenti si basano su questa classe:

- CA2TEX

- CT2AEX

Il typedef seguente si basa su questa classe:

- CA2A

Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md).

## <a name="example"></a>Esempio

Visualizzare [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md) per un esempio dell'uso di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

##  <a name="ca2aex"></a>  CA2AEX::CA2AEX

Costruttore.

```
CA2AEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2AEX(LPCSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*psz*<br/>
La stringa di testo da convertire.

*nCodePage*<br/>
Non utilizzato in questa classe.

### <a name="remarks"></a>Note

Crea il buffer della traduzione.

##  <a name="dtor"></a>  CA2AEX:: ~ CA2AEX

Distruttore.

```
~CA2AEX() throw();
```

### <a name="remarks"></a>Note

Consente di liberare il buffer allocato.

##  <a name="m_psz"></a>  CA2AEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPSTR m_psz;
```

##  <a name="m_szbuffer"></a>  CA2AEX::m_szBuffer

Il buffer statico, usato per archiviare la stringa convertita.

```
char m_szBuffer[ t_nBufferLength];
```

##  <a name="operator_lpstr"></a>  CA2AEX::operator LPSTR

Operatore di conversione.

```
operator LPSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPSTR.

## <a name="see-also"></a>Vedere anche

[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)<br/>
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)<br/>
[Classe CW2AEX](../../atl/reference/cw2aex-class.md)<br/>
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)<br/>
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)