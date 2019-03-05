---
title: Classe CComPtr
ms.date: 11/04/2016
f1_keywords:
- CComPtr
- ATLBASE/ATL::CComPtr
- ATLBASE/ATL::CComPtr::CComPtr
helpviewer_keywords:
- CComPtr class
ms.assetid: 22d9ea8d-ed66-4c34-940f-141db11e83bd
ms.openlocfilehash: 5e3e510291daa50ddcf5d63451edef0428d66ed1
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57280466"
---
# <a name="ccomptr-class"></a>Classe CComPtr

Una classe del puntatore intelligente per la gestione dei puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```
template<class T>
class CComPtr
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Un'interfaccia COM che specifica il tipo di puntatore da archiviare.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtr::CComPtr](#ccomptr)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtr::operator =](#operator_eq)|Assegna un puntatore al puntatore a membro.|

## <a name="remarks"></a>Note

Usa ATL `CComPtr` e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) per gestire i puntatori a interfaccia COM. Entrambi derivano da [CComPtrBase](../../atl/reference/ccomptrbase-class.md), ed entrambi eseguire il conteggio dei riferimenti automatico.

Il `CComPtr` e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) classi consentono di eliminare le perdite di memoria eseguendo il conteggio dei riferimenti automatico.  Le funzioni seguenti entrambi eseguono le stesse operazioni logiche; Tuttavia, si noti come la seconda versione potrebbe essere meno soggetta a errori tramite il `CComPtr` classe:

[!code-cpp[NVC_ATL_Utilities#130](../../atl/codesnippet/cpp/ccomptr-class_1.cpp)]

[!code-cpp[NVC_ATL_Utilities#131](../../atl/codesnippet/cpp/ccomptr-class_2.cpp)]

Nelle build di Debug, collegare atlsd. lib per la traccia del codice.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComPtrBase](../../atl/reference/ccomptrbase-class.md)

`CComPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="ccomptr"></a>  CComPtr::CComPtr

Costruttore.

```
CComPtr() throw ();
CComPtr(T* lp) throw ();
CComPtr (const CComPtr<T>& lp) throw ();
```

### <a name="parameters"></a>Parametri

*lp*<br/>
Utilizzato per inizializzare il puntatore di interfaccia.

*T*<br/>
Un'interfaccia COM.

##  <a name="operator_eq"></a>  CComPtr::operator =

Operatore di assegnazione.

```
T* operator= (T* lp) throw ();
T* operator= (const CComPtr<T>& lp) throw ();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore a aggiornato `CComPtr` oggetto

### <a name="remarks"></a>Note

Questa operazione AddRefs il nuovo oggetto e rilascia l'oggetto esistente, se uno è presente.

## <a name="see-also"></a>Vedere anche

[CComPtr::CComPtr](#ccomptr)<br/>
[CComQIPtr::CComQIPtr](../../atl/reference/ccomqiptr-class.md#ccomqiptr)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
