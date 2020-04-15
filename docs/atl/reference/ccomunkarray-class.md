---
title: Classe CComUnkArray
ms.date: 11/04/2016
f1_keywords:
- CComUnkArray
- ATLCOM/ATL::CComUnkArray
- ATLCOM/ATL::CComUnkArray::CComUnkArray
- ATLCOM/ATL::CComUnkArray::Add
- ATLCOM/ATL::CComUnkArray::begin
- ATLCOM/ATL::CComUnkArray::end
- ATLCOM/ATL::CComUnkArray::GetCookie
- ATLCOM/ATL::CComUnkArray::GetUnknown
- ATLCOM/ATL::CComUnkArray::Remove
helpviewer_keywords:
- connection points [C++], managing
- CComUnkArray class
ms.assetid: 5fd4b378-a7b5-4cc1-8866-8ab72a73639e
ms.openlocfilehash: c1d2f0296394d3979ef4f152e3f902c89adf5b45
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327309"
---
# <a name="ccomunkarray-class"></a>Classe CComUnkArray

Questa classe `IUnknown` archivia i puntatori ed è progettata per essere utilizzata come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.

## <a name="syntax"></a>Sintassi

```
template<unsigned int nMaxSize>
class CComUnkArray
```

#### <a name="parameters"></a>Parametri

*nMaxSize (dimensioni in cui è max)*<br/>
Numero massimo `IUnknown` di puntatori che possono essere mantenuti nella matrice statica.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComUnkArray::CComUnkArray](#ccomunkarray)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComUnkArray::Aggiunta](#add)|Chiamare questo metodo `IUnknown` per aggiungere un puntatore alla matrice.|
|[CComUnkArray::begin](#begin)|Restituisce un puntatore al primo `IUnknown` puntatore nella raccolta.|
|[CComUnkArray::end](#end)|Restituisce un puntatore `IUnknown` a un'ultima volta l'ultimo puntatore della raccolta.|
|[CComUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per ottenere il `IUnknown` cookie associato a un puntatore specificato.|
|[CComUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo `IUnknown` per ottenere il puntatore associato a un cookie specificato.|
|[CComUnkArray::Rimuovi](#remove)|Chiamare questo metodo `IUnknown` per rimuovere un puntatore dalla matrice.|

## <a name="remarks"></a>Osservazioni

`CComUnkArray`contiene un numero `IUnknown` fisso di puntatori, ognuno un'interfaccia su un punto di connessione. `CComUnkArray`può essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello. `CComUnkArray<1>`è una specializzazione `CComUnkArray` di modello che è stata ottimizzata per un punto di connessione.

I `CComUnkArray` metodi [begin](#begin) e [end](#end) possono essere utilizzati per scorrere in ciclo tutti i punti di connessione (ad esempio, quando viene generato un evento).

Vedere [Aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md) per informazioni dettagliate sull'automazione della creazione di proxy di punti di connessione.

> [!NOTE]
> **Nota:** La classe [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md) viene utilizzata dalla procedura guidata **Aggiungi classe** durante la creazione di un controllo con punti di connessione. Se si desidera specificare manualmente il numero di `CComDynamicUnkArray` `CComUnkArray<` punti di connessione, modificare il riferimento da *n* `>`, dove *n* è il numero di punti di connessione necessari.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomunkarrayadd"></a><a name="add"></a>CComUnkArray::Aggiunta

Chiamare questo metodo `IUnknown` per aggiungere un puntatore alla matrice.

```
DWORD Add(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
Chiamare questo metodo `IUnknown` per aggiungere un puntatore alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato al puntatore appena aggiunto oppure 0 se la matrice non è sufficientemente grande per contenere il nuovo puntatore.

## <a name="ccomunkarraybegin"></a><a name="begin"></a>CComUnkArray::begin

Restituisce un puntatore all'inizio della raccolta di `IUnknown` puntatori a interfaccia.

```
IUnknown**
    begin();
```

### <a name="return-value"></a>Valore restituito

Puntatore a `IUnknown` un puntatore a interfaccia.

### <a name="remarks"></a>Osservazioni

L'insieme contiene puntatori a `IUnknown`interfacce archiviate localmente come . Si esegue `IUnknown` il cast di ogni interfaccia al tipo di interfaccia reale e quindi chiamare attraverso di essa. Non è necessario eseguire prima una query per l'interfaccia.

Prima di `IUnknown` utilizzare l'interfaccia, è necessario verificare che non sia NULL.

## <a name="ccomunkarrayccomunkarray"></a><a name="ccomunkarray"></a>CComUnkArray::CComUnkArray

Costruttore.

```
CComUnkArray();
```

### <a name="remarks"></a>Osservazioni

Imposta la raccolta `nMaxSize` `IUnknown` per contenere i puntatori e inizializza i puntatori su NULL.

## <a name="ccomunkarrayend"></a><a name="end"></a>CComUnkArray::end

Restituisce un puntatore `IUnknown` a un'ultima volta l'ultimo puntatore della raccolta.

```
IUnknown**
    end();
```

### <a name="return-value"></a>Valore restituito

Puntatore a `IUnknown` un puntatore a interfaccia.

### <a name="remarks"></a>Osservazioni

I `CComUnkArray` `begin` metodi `end` e possono essere utilizzati per scorrere in ciclo tutti i punti di connessione, ad esempio quando viene generato un evento.

[!code-cpp[NVC_ATL_COM#44](../../atl/codesnippet/cpp/ccomunkarray-class_1.cpp)]

## <a name="ccomunkarraygetcookie"></a><a name="getcookie"></a>CComUnkArray::GetCookie

Chiamare questo metodo per ottenere il `IUnknown` cookie associato a un puntatore specificato.

```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```

### <a name="parameters"></a>Parametri

*ppTrova*<br/>
Puntatore `IUnknown` per il quale è richiesto il cookie associato.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie `IUnknown` associato al puntatore `IUnknown` oppure 0 se non viene trovato alcun puntatore corrispondente.

### <a name="remarks"></a>Osservazioni

Se è presente più di `IUnknown` un'istanza dello stesso puntatore, questa funzione restituisce il cookie per la prima.

## <a name="ccomunkarraygetunknown"></a><a name="getunknown"></a>CComUnkArray::GetUnknown

Chiamare questo metodo `IUnknown` per ottenere il puntatore associato a un cookie specificato.

```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie (Cookie)*<br/>
Cookie per il `IUnknown` quale è richiesto il puntatore associato.

### <a name="return-value"></a>Valore restituito

Restituisce `IUnknown` il puntatore o NULL se non viene trovato alcun cookie corrispondente.

## <a name="ccomunkarrayremove"></a><a name="remove"></a>CComUnkArray::Rimuovi

Chiamare questo metodo `IUnknown` per rimuovere un puntatore dalla matrice.

```
BOOL Remove(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie (Cookie)*<br/>
Cookie che fa `IUnknown` riferimento al puntatore da rimuovere dalla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il puntatore viene rimosso, FALSE in caso contrario.

## <a name="see-also"></a>Vedere anche

[CComDynamicUnkArray (classe)](../../atl/reference/ccomdynamicunkarray-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
