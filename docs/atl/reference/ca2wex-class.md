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
ms.openlocfilehash: 7bfce54253ffcd217bb98345893724a509879abc
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62247513"
---
# <a name="ca2wex-class"></a>Classe CA2WEX

Questa classe viene utilizzata la macro di conversione di stringhe CA2TEX, CA2CTEX, CT2WEX e CT2CWEX e typedef CA2W.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <int t_nBufferLength = 128>
class CA2WEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è di 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2WEX::CA2WEX](#ca2wex)|Costruttore.|
|[CA2WEX:: ~ CA2WEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2WEX::operator LPWSTR](#operator_lpwstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CA2WEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CA2WEX::m_szBuffer](#m_szbuffer)|Il buffer statico, usato per archiviare la stringa convertita.|

## <a name="remarks"></a>Note

A meno che non è necessaria la funzionalità aggiuntiva, usare CA2TEX, CA2CTEX, CT2WEX, CT2CWEX o CA2W nel codice.

Questa classe contiene un buffer statico di dimensione fissa che viene usato per archiviare il risultato della conversione. Se il risultato è troppo grande per il buffer statico, la classe alloca memoria usando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza del testo macro di conversione disponibili nelle versioni precedenti di ATL, questa classe sia sicura per l'uso nei cicli e che non eseguiranno l'overflow dello stack.

Se la classe tenta di allocare memoria sull'heap e ha esito negativo, chiamerà `AtlThrow` con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le classi di conversione ATL e le macro usano la tabella codici ANSI del thread corrente per la conversione. Se si desidera disattivare questo comportamento per una conversione specifica, specificare la tabella codici come secondo parametro del costruttore della classe.

Le macro seguenti si basano su questa classe:

- CA2TEX

- CA2CTEX

- CT2WEX

- CT2CWEX

Il typedef seguente si basa su questa classe:

- CA2W

Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md).

## <a name="example"></a>Esempio

Visualizzare [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md) per un esempio dell'uso di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

##  <a name="ca2wex"></a>  CA2WEX::CA2WEX

Costruttore.

```
CA2WEX(LPCSTR psz, UINT nCodePage) throw(...);
CA2WEX(LPCSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*psz*<br/>
La stringa di testo da convertire.

*nCodePage*<br/>
La tabella codici utilizzata per eseguire la conversione. Vedere la descrizione del parametro pagina codice della funzione di Windows SDK [MultiByteToWideChar](/windows/desktop/api/stringapiset/nf-stringapiset-multibytetowidechar) per altri dettagli.

### <a name="remarks"></a>Note

Consente di allocare il buffer utilizzato nel processo di conversione.

##  <a name="dtor"></a>  CA2WEX:: ~ CA2WEX

Distruttore.

```
~CA2WEX() throw();
```

### <a name="remarks"></a>Note

Consente di liberare il buffer allocato.

##  <a name="m_psz"></a>  CA2WEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPWSTR m_psz;
```

##  <a name="m_szbuffer"></a>  CA2WEX::m_szBuffer

Il buffer statico, usato per archiviare la stringa convertita.

```
wchar_t m_szBuffer[t_nBufferLength];
```

##  <a name="operator_lpwstr"></a>  CA2WEX::operator LPWSTR

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
[Panoramica della classe](../../atl/atl-class-overview.md)
