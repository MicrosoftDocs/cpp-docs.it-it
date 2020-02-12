---
title: Classe CComPtr
description: Guida di riferimento alla classe C++ Microsoft Active Template Library (ATL) CComPtr.
ms.date: 02/07/2020
f1_keywords:
- CComPtr
- ATLBASE/ATL::CComPtr
- ATLBASE/ATL::CComPtr::CComPtr
helpviewer_keywords:
- CComPtr class
ms.assetid: 22d9ea8d-ed66-4c34-940f-141db11e83bd
ms.openlocfilehash: 74a12b460f55a782fa2747b02f7d00287786fae6
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77127405"
---
# <a name="ccomptr-class"></a>Classe CComPtr

Classe di puntatore intelligente per la gestione dei puntatori di interfaccia COM.

## <a name="syntax"></a>Sintassi

```cpp
template<class T>
class CComPtr
```

### <a name="parameters"></a>Parametri

*T*<br/>
Interfaccia COM che specifica il tipo di puntatore da archiviare.

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtr:: CComPtr](#ccomptr)|Costruttore.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComPtr:: operator =](#operator_eq)|Assegna un puntatore al puntatore del membro.|

## <a name="remarks"></a>Osservazioni

ATL utilizza `CComPtr` e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) per gestire i puntatori all'interfaccia com. Entrambi sono derivati da [CComPtrBase](../../atl/reference/ccomptrbase-class.md)ed entrambi eseguono il conteggio automatico dei riferimenti.

Le classi `CComPtr` e [CComQIPtr](../../atl/reference/ccomqiptr-class.md) consentono di eliminare le perdite di memoria eseguendo il conteggio automatico dei riferimenti.  Le funzioni seguenti eseguono entrambe le stesse operazioni logiche. Tuttavia, la seconda versione può essere meno soggetta a errori perché usa la classe `CComPtr`:

[!code-cpp[NVC_ATL_Utilities#130](../../atl/codesnippet/cpp/ccomptr-class_1.cpp)]

[!code-cpp[NVC_ATL_Utilities#131](../../atl/codesnippet/cpp/ccomptr-class_2.cpp)]

Nelle build di debug, collegare Atlsd. lib per la traccia del codice.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CComPtrBase](../../atl/reference/ccomptrbase-class.md)

`CComPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccomptr"></a>CComPtr:: CComPtr

Costruttore.

```cpp
CComPtr() throw ();
CComPtr(T* lp) throw ();
CComPtr (const CComPtr<T>& lp) throw ();
```

### <a name="parameters"></a>Parametri

*LP*<br/>
Utilizzato per inizializzare il puntatore di interfaccia.

*T*<br/>
Interfaccia COM.

### <a name="remarks"></a>Osservazioni

I costruttori che accettano un argomento chiamano `AddRef` su *LP*, se non è un puntatore null. Un oggetto di proprietà non null ottiene una chiamata `Release` alla distruzione dell'oggetto CComPtr o se un nuovo oggetto viene assegnato all'oggetto CComPtr.

## <a name="operator_eq"></a>CComPtr:: operator =

Operatore di assegnazione.

```cpp
T* operator= (T* lp) throw ();
T* operator= (const CComPtr<T>& lp) throw ();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto `CComPtr` aggiornato.

### <a name="remarks"></a>Osservazioni

Questa operazione AddRefs il nuovo oggetto e rilascia l'oggetto esistente, se ne esiste uno.

## <a name="see-also"></a>Vedere anche

[CComPtr:: CComPtr](#ccomptr)<br/>
[CComQIPtr:: CComQIPtr](../../atl/reference/ccomqiptr-class.md#ccomqiptr)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
