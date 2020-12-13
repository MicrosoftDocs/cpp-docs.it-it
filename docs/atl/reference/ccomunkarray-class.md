---
description: 'Altre informazioni su: classe CComUnkArray'
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
ms.openlocfilehash: e03022fb751b487debb9f81d9e3d99ce46f1b9e7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142142"
---
# <a name="ccomunkarray-class"></a>Classe CComUnkArray

Questa classe archivia `IUnknown` i puntatori ed è progettata per essere utilizzata come parametro per la classe modello [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) .

## <a name="syntax"></a>Sintassi

```
template<unsigned int nMaxSize>
class CComUnkArray
```

#### <a name="parameters"></a>Parametri

*nMaxSize*<br/>
Numero massimo di `IUnknown` puntatori che possono essere conservati nella matrice statica.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CComUnkArray:: CComUnkArray](#ccomunkarray)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CComUnkArray:: Add](#add)|Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.|
|[CComUnkArray:: Begin](#begin)|Restituisce un puntatore al primo `IUnknown` puntatore della raccolta.|
|[CComUnkArray:: end](#end)|Restituisce un puntatore a un oggetto dopo l'ultimo `IUnknown` puntatore della raccolta.|
|[CComUnkArray:: GetCookie](#getcookie)|Chiamare questo metodo per ottenere il cookie associato a un `IUnknown` puntatore specificato.|
|[CComUnkArray:: getunknown](#getunknown)|Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un determinato cookie.|
|[CComUnkArray:: Remove](#remove)|Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.|

## <a name="remarks"></a>Commenti

`CComUnkArray` include un numero fisso di `IUnknown` puntatori, ognuno dei quali è un'interfaccia in un punto di connessione. `CComUnkArray` può essere utilizzato come parametro per la classe modello [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) . `CComUnkArray<1>` è una specializzazione di modello di `CComUnkArray` che è stata ottimizzata per un punto di connessione.

I `CComUnkArray` metodi [Begin](#begin) e [end](#end) possono essere usati per scorrere in ciclo tutti i punti di connessione (ad esempio, quando viene generato un evento).

Per informazioni dettagliate sull'automazione della creazione di proxy del punto di connessione, vedere [aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md) .

> [!NOTE]
> **Nota** La classe [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md) viene utilizzata dalla procedura guidata **Aggiungi classe** quando si crea un controllo con punti di connessione. Se si desidera specificare manualmente il numero di punti di connessione, modificare il riferimento da `CComDynamicUnkArray` a `CComUnkArray<` *n* `>` , dove *n* è il numero di punti di connessione richiesti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="ccomunkarrayadd"></a><a name="add"></a> CComUnkArray:: Add

Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.

```
DWORD Add(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato al puntatore appena aggiunto oppure 0 se la matrice non è sufficientemente grande da contenere il nuovo puntatore.

## <a name="ccomunkarraybegin"></a><a name="begin"></a> CComUnkArray:: Begin

Restituisce un puntatore all'inizio della raccolta di `IUnknown` puntatori a interfaccia.

```
IUnknown**
    begin();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `IUnknown` puntatore di interfaccia.

### <a name="remarks"></a>Commenti

La raccolta contiene i puntatori alle interfacce archiviate localmente come `IUnknown` . È possibile eseguire `IUnknown` il cast di ogni interfaccia al tipo di interfaccia reale e quindi chiamarla. Non è necessario eseguire prima una query per l'interfaccia.

Prima di usare l' `IUnknown` interfaccia, è consigliabile verificare che non sia null.

## <a name="ccomunkarrayccomunkarray"></a><a name="ccomunkarray"></a> CComUnkArray:: CComUnkArray

Costruttore.

```
CComUnkArray();
```

### <a name="remarks"></a>Commenti

Imposta la raccolta in modo da mantenere `nMaxSize` `IUnknown` i puntatori e inizializza i puntatori su null.

## <a name="ccomunkarrayend"></a><a name="end"></a> CComUnkArray:: end

Restituisce un puntatore a un oggetto dopo l'ultimo `IUnknown` puntatore della raccolta.

```
IUnknown**
    end();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `IUnknown` puntatore di interfaccia.

### <a name="remarks"></a>Commenti

I `CComUnkArray` metodi `begin` e `end` possono essere utilizzati per scorrere in ciclo tutti i punti di connessione, ad esempio quando viene generato un evento.

[!code-cpp[NVC_ATL_COM#44](../../atl/codesnippet/cpp/ccomunkarray-class_1.cpp)]

## <a name="ccomunkarraygetcookie"></a><a name="getcookie"></a> CComUnkArray:: GetCookie

Chiamare questo metodo per ottenere il cookie associato a un `IUnknown` puntatore specificato.

```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```

### <a name="parameters"></a>Parametri

*ppFind*<br/>
`IUnknown`Puntatore per il quale è richiesto il cookie associato.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato al `IUnknown` puntatore oppure 0 se non `IUnknown` viene trovato alcun puntatore corrispondente.

### <a name="remarks"></a>Commenti

Se è presente più di un'istanza dello stesso `IUnknown` puntatore, questa funzione restituisce il cookie per la prima.

## <a name="ccomunkarraygetunknown"></a><a name="getunknown"></a> CComUnkArray:: getunknown

Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un determinato cookie.

```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie*<br/>
Cookie per il quale `IUnknown` è richiesto il puntatore associato.

### <a name="return-value"></a>Valore restituito

Restituisce il `IUnknown` puntatore o null se non viene trovato alcun cookie corrispondente.

## <a name="ccomunkarrayremove"></a><a name="remove"></a> CComUnkArray:: Remove

Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.

```
BOOL Remove(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie*<br/>
Cookie che fa riferimento al `IUnknown` puntatore da rimuovere dalla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il puntatore è stato rimosso; in caso contrario, FALSE.

## <a name="see-also"></a>Vedi anche

[Classe CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
