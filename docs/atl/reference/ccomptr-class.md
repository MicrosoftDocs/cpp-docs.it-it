---
title: Classe CComPtr
description: Guida di riferimento alla classe CComPtr della libreria ASP (Active Template Library) di Microsoft C.
ms.date: 02/07/2020
f1_keywords:
- CComPtr
- ATLBASE/ATL::CComPtr
- ATLBASE/ATL::CComPtr::CComPtr
helpviewer_keywords:
- CComPtr class
ms.assetid: 22d9ea8d-ed66-4c34-940f-141db11e83bd
ms.openlocfilehash: 855466225db2672755658dcbbc9a266d09e0e7be
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327531"
---
# <a name="ccomptr-class"></a>Classe CComPtr

Una classe di puntatori intelligenti per la gestione dei puntatori a interfaccia COM.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class CComPtr
```

### <a name="parameters"></a>Parametri

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
|[CComPtr::operatore](#operator_eq)|Assegna un puntatore al puntatore del membro.|

## <a name="remarks"></a>Osservazioni

ATL `CComPtr` utilizza e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) per gestire i puntatori a interfaccia COM. Entrambi derivano da [CComPtrBase](../../atl/reference/ccomptrbase-class.md)ed entrambi eseguono il conteggio automatico dei riferimenti.

Le `CComPtr` classi e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) consentono di eliminare le perdite di memoria eseguendo il conteggio automatico dei riferimenti.  Le funzioni seguenti eseguono entrambe le stesse operazioni logiche. Tuttavia, la seconda versione può essere meno `CComPtr` soggetta a errori perché utilizza la classe:

[!code-cpp[NVC_ATL_Utilities#130](../../atl/codesnippet/cpp/ccomptr-class_1.cpp)]

[!code-cpp[NVC_ATL_Utilities#131](../../atl/codesnippet/cpp/ccomptr-class_2.cpp)]

Nelle build di debug, link atlsd.lib per l'analisi del codice.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComPtrBase](../../atl/reference/ccomptrbase-class.md)

`CComPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomptrccomptr"></a><a name="ccomptr"></a>CComPtr::CComPtr

Costruttore.

```cpp
CComPtr() throw ();
CComPtr(T* lp) throw ();
CComPtr (const CComPtr<T>& lp) throw ();
```

### <a name="parameters"></a>Parametri

*Lp*<br/>
Utilizzato per inizializzare il puntatore a interfaccia.

*T*<br/>
Un'interfaccia COM.

### <a name="remarks"></a>Osservazioni

I costruttori che accettano una chiamata `AddRef` di argomento su *lp*, se non è un puntatore null. Un oggetto di proprietà `Release` non null ottiene una chiamata sulla distruzione dell'oggetto CComPtr o se un nuovo oggetto viene assegnato all'oggetto CComPtr.

## <a name="ccomptroperator-"></a><a name="operator_eq"></a>CComPtr::operatore

Operatore di assegnazione.

```cpp
T* operator= (T* lp) throw ();
T* operator= (const CComPtr<T>& lp) throw ();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto aggiornato `CComPtr`

### <a name="remarks"></a>Osservazioni

Questa operazione AddRefs il nuovo oggetto e rilascia l'oggetto esistente, se presente.

## <a name="see-also"></a>Vedere anche

[CComPtr::CComPtr](#ccomptr)<br/>
[CComQIPtr::CComQIPtr](../../atl/reference/ccomqiptr-class.md#ccomqiptr)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
