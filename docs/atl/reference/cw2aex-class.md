---
title: Classe CW2AEX | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CW2AEX
- ATLCONV/ATL::CW2AEX
- ATLCONV/ATL::CW2AEX::CW2AEX
- ATLCONV/ATL::CW2AEX::m_psz
- ATLCONV/ATL::CW2AEX::m_szBuffer
dev_langs:
- C++
helpviewer_keywords:
- CW2AEX class
ms.assetid: 44dc2cf5-dd30-440b-a9b9-b21b43f49843
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2cd88555ee28b7bdddef51371ba2774047464678
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43759483"
---
# <a name="cw2aex-class"></a>Classe CW2AEX

Questa classe viene utilizzata la macro di conversione di stringhe CT2AEX, CW2TEX, CW2CTEX e CT2CAEX e typedef CW2A.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template<int t_nBufferLength = 128>  
class CW2AEX
```

#### <a name="parameters"></a>Parametri

*t_nBufferLength*  
Le dimensioni del buffer utilizzato nel processo di traduzione. La lunghezza predefinita è di 128 byte.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2AEX::CW2AEX](#cw2aex)|Costruttore.|
|[CW2AEX:: ~ CW2AEX](#dtor)|Distruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2AEX::operator LPSTR](#operator_lpstr)|Operatore di conversione.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CW2AEX::m_psz](#m_psz)|Membro dati che archivia la stringa di origine.|
|[CW2AEX::m_szBuffer](#m_szbuffer)|Il buffer statico, usato per archiviare la stringa convertita.|

## <a name="remarks"></a>Note

A meno che non è necessaria la funzionalità aggiuntiva, usare CT2AEX, CW2TEX, CW2CTEX, CT2CAEX o CW2A nel codice.

Questa classe contiene un buffer statico di dimensione fissa che viene usato per archiviare il risultato della conversione. Se il risultato è troppo grande per il buffer statico, la classe alloca memoria usando **malloc**, liberando la memoria quando l'oggetto esce dall'ambito. Ciò garantisce che, a differenza del testo macro di conversione disponibili nelle versioni precedenti di ATL, questa classe sia sicura per l'uso nei cicli e che non eseguiranno l'overflow dello stack.

Se la classe tenta di allocare memoria sull'heap e ha esito negativo, chiamerà `AtlThrow` con un argomento di E_OUTOFMEMORY.

Per impostazione predefinita, le classi di conversione ATL e le macro usano la tabella codici ANSI del thread corrente per la conversione. Se si desidera disattivare questo comportamento per una conversione specifica, specificare la tabella codici come secondo parametro del costruttore della classe.

Le macro seguenti si basano su questa classe:

- CT2AEX

- CW2TEX

- CW2CTEX

- CT2CAEX

Il typedef seguente si basa su questa classe:

- CW2A

Per una descrizione di queste macro di conversione di testo, vedere [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md).

## <a name="example"></a>Esempio

Visualizzare [macro di conversione di stringhe MFC e ATL](string-conversion-macros.md) per un esempio dell'uso di queste macro di conversione di stringhe.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlconv. h

##  <a name="cw2aex"></a>  CW2AEX::CW2AEX

Costruttore.

```
CW2AEX(LPCWSTR psz, UINT nCodePage) throw(...);  
CW2AEX(LPCWSTR psz) throw(...);
```

### <a name="parameters"></a>Parametri

*psz*  
La stringa di testo da convertire.

*nCodePage*  
La tabella codici utilizzata per eseguire la conversione. Vedere la descrizione del parametro pagina codice della funzione di Windows SDK [MultiByteToWideChar](/windows/desktop/api/stringapiset/nf-stringapiset-multibytetowidechar) per altri dettagli.

### <a name="remarks"></a>Note

Consente di allocare il buffer utilizzato nel processo di conversione.

##  <a name="dtor"></a>  CW2AEX:: ~ CW2AEX

Distruttore.

```
~CW2AEX() throw();
```

### <a name="remarks"></a>Note

Consente di liberare il buffer allocato.

##  <a name="m_psz"></a>  CW2AEX::m_psz

Membro dati che archivia la stringa di origine.

```
LPSTR m_psz;
```

##  <a name="m_szbuffer"></a>  CW2AEX::m_szBuffer

Il buffer statico, usato per archiviare la stringa convertita.

```
char m_szBuffer[t_nBufferLength];
```

##  <a name="operator_lpstr"></a>  CW2AEX::operator LPSTR

Operatore di conversione.

```  
operator LPSTR() const throw();
```

### <a name="return-value"></a>Valore restituito

Restituisce la stringa di testo come tipo LPSTR.

## <a name="see-also"></a>Vedere anche

[Classe CA2AEX](../../atl/reference/ca2aex-class.md)   
[Classe CA2CAEX](../../atl/reference/ca2caex-class.md)   
[Classe CA2WEX](../../atl/reference/ca2wex-class.md)   
[Classe CW2CWEX](../../atl/reference/cw2cwex-class.md)   
[Classe CW2WEX](../../atl/reference/cw2wex-class.md)   
[Panoramica della classe](../../atl/atl-class-overview.md)
