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
ms.openlocfilehash: 4dda1cb9e54c44f7940475660bc629192b9ead61
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496272"
---
# <a name="cw2aex-class"></a>Classe CW2AEX

Questa classe viene utilizzata dalle macro di conversione di stringhe CT2AEX, CW2TEX, CW2CTEX e CT2CAEX e typedef CW2A.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template<int t_nBufferLength = 128>
class CW2AEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*<br/>
Dimensioni del buffer utilizzato nel processo di conversione. La lunghezza predefinita è 128 byte.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CW2AEX:: CW2AEX](#cw2aex)|Costruttore.|
|[CW2AEX:: ~ CW2AEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2AEX:: operator LPSTR](#operator_lpstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|DESCRIZIONE|
|----------|-----------------|
|[CW2AEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CW2AEX::m_szBuffer](#m_szbuffer)|Buffer statico utilizzato per archiviare la stringa convertita.|

## <a name="remarks"></a>Note

A meno che non sia necessaria una funzionalità aggiuntiva, usare CT2AEX, CW2TEX, CW2CTEX, CT2CAEX o CW2A nel codice.

Questa classe contiene un buffer statico di dimensioni fisse usato per archiviare il risultato della conversione. Se il risultato è troppo grande per essere inserito nel buffer statico, la classe alloca memoria utilizzando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza delle macro di conversione del testo disponibili nelle versioni precedenti di ATL, questa classe è sicura per l'utilizzo in cicli e che non si inun overflow dello stack.

Se la classe tenta di allocare memoria nell'heap e ha esito negativo, `AtlThrow` viene chiamato con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le classi e le macro di conversione ATL utilizzano la tabella codici ANSI del thread corrente per la conversione. Se si desidera eseguire l'override di tale comportamento per una conversione specifica, specificare la tabella codici come secondo parametro per il costruttore della classe.

Le macro seguenti sono basate su questa classe:

- CT2AEX

- CW2TEX

- CW2CTEX

- CT2CAEX

Il typedef seguente si basa su questa classe:

- CW2A

Per una descrizione di queste macro di conversione del testo, vedere le [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md).

## <a name="example"></a>Esempio

Vedere [macro di conversione di stringhe ATL e MFC](string-conversion-macros.md) per un esempio di utilizzo di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

##  <a name="cw2aex"></a>CW2AEX:: CW2AEX

Costruttore.

```
CW2AEX(LPCWSTR psz, UINT nCodePage) throw(...);
CW2AEX(LPCWSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*psz*<br/>
Stringa di testo da convertire.

*nCodePage*<br/>
Tabella codici utilizzata per eseguire la conversione. Per informazioni dettagliate, vedere la descrizione del parametro della tabella codici per la funzione Windows SDK [MultiByteToWideChar](/windows/win32/api/stringapiset/nf-stringapiset-multibytetowidechar) .

### <a name="remarks"></a>Note

Alloca il buffer utilizzato nel processo di conversione.

##  <a name="dtor"></a>CW2AEX:: ~ CW2AEX

Distruttore.

```
~CW2AEX() throw();
```

### <a name="remarks"></a>Note

Libera il buffer allocato.

##  <a name="m_psz"></a>CW2AEX:: m_psz

Membro dati che archivia la stringa di origine.

```
LPSTR m_psz;
```

##  <a name="m_szbuffer"></a>CW2AEX:: m_szBuffer

Buffer statico utilizzato per archiviare la stringa convertita.

```
char m_szBuffer[t_nBufferLength];
```

##  <a name="operator_lpstr"></a>CW2AEX:: operator LPSTR

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
[Panoramica della classe](../../atl/atl-class-overview.md)
