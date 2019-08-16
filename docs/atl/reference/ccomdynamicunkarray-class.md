---
title: Classe CComDynamicUnkArray
ms.date: 11/04/2016
f1_keywords:
- CComDynamicUnkArray
- ATLCOM/ATL::CComDynamicUnkArray
- ATLCOM/ATL::CComDynamicUnkArray::CComDynamicUnkArray
- ATLCOM/ATL::CComDynamicUnkArray::Add
- ATLCOM/ATL::CComDynamicUnkArray::begin
- ATLCOM/ATL::CComDynamicUnkArray::clear
- ATLCOM/ATL::CComDynamicUnkArray::end
- ATLCOM/ATL::CComDynamicUnkArray::GetAt
- ATLCOM/ATL::CComDynamicUnkArray::GetCookie
- ATLCOM/ATL::CComDynamicUnkArray::GetSize
- ATLCOM/ATL::CComDynamicUnkArray::GetUnknown
- ATLCOM/ATL::CComDynamicUnkArray::Remove
helpviewer_keywords:
- connection points [C++], managing
- CComDynamicUnkArray class
ms.assetid: 202470d7-9a1b-498f-b96d-659d681acd65
ms.openlocfilehash: d55a6d6bfbcc6921fa0633753365f5799388dc27
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497238"
---
# <a name="ccomdynamicunkarray-class"></a>Classe CComDynamicUnkArray

Questa classe archivia una matrice di `IUnknown` puntatori.

## <a name="syntax"></a>Sintassi

```
class CComDynamicUnkArray
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComDynamicUnkArray::CComDynamicUnkArray](#ccomdynamicunkarray)|Costruttore. Inizializza i valori della raccolta su NULL e la dimensione della raccolta su zero.|
|[CComDynamicUnkArray::~CComDynamicUnkArray](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|DESCRIZIONE|
|----------|-----------------|
|[CComDynamicUnkArray::Add](#add)|Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.|
|[CComDynamicUnkArray::begin](#begin)|Restituisce un puntatore al primo `IUnknown` puntatore della raccolta.|
|[CComDynamicUnkArray::clear](#clear)|Svuota la matrice.|
|[CComDynamicUnkArray::end](#end)|Restituisce un puntatore a un oggetto dopo l' `IUnknown` ultimo puntatore della raccolta.|
|[CComDynamicUnkArray::GetAt](#getat)|Recupera l'elemento in corrispondenza dell'indice specificato.|
|[CComDynamicUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per ottenere il cookie associato a un puntatore `IUnknown` specificato.|
|[CComDynamicUnkArray::GetSize](#getsize)|Restituisce la lunghezza di una matrice.|
|[CComDynamicUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un determinato cookie.|
|[CComDynamicUnkArray::Remove](#remove)|Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.|

## <a name="remarks"></a>Note

`CComDynamicUnkArray`include una matrice di puntatori allocata in modo dinamico, ciascuna interfaccia in un punto di `IUnknown` connessione. `CComDynamicUnkArray`può essere utilizzato come parametro per la classe modello [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) .

I `CComDynamicUnkArray` metodi [Begin](#begin) e [end](#end) possono essere usati per scorrere in ciclo tutti i punti di connessione (ad esempio, quando viene generato un evento).

Per informazioni dettagliate sull'automazione della creazione di proxy del punto di connessione, vedere [aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md) .

> [!NOTE]
> **Nota** La classe `CComDynamicUnkArray` viene utilizzata dalla procedura guidata **Aggiungi classe** quando si crea un controllo con punti di connessione. Se si desidera specificare manualmente il numero di punti di connessione, modificare il riferimento da `CComDynamicUnkArray` a `CComUnkArray<` *n* `>`, dove *n* è il numero di punti di connessione richiesti.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="add"></a>  CComDynamicUnkArray::Add

Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.

```
DWORD Add(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
`IUnknown` Puntatore da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato al puntatore appena aggiunto.

##  <a name="begin"></a>  CComDynamicUnkArray::begin

Restituisce un puntatore all'inizio della raccolta di `IUnknown` puntatori a interfaccia.

```
IUnknown**
    begin();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `IUnknown` puntatore di interfaccia.

### <a name="remarks"></a>Note

La raccolta contiene i puntatori alle interfacce archiviate `IUnknown`localmente come. È possibile eseguire `IUnknown` il cast di ogni interfaccia al tipo di interfaccia reale e quindi chiamarla. Non è necessario eseguire prima una query per l'interfaccia.

Prima di usare `IUnknown` l'interfaccia, è consigliabile verificare che non sia null.

##  <a name="clear"></a>  CComDynamicUnkArray::clear

Svuota la matrice.

```
void clear();
```

##  <a name="ccomdynamicunkarray"></a>  CComDynamicUnkArray::CComDynamicUnkArray

Costruttore.

```
CComDynamicUnkArray();
```

### <a name="remarks"></a>Note

Imposta la dimensione della raccolta su zero e inizializza i valori su NULL. Se necessario, il distruttore libera la raccolta.

##  <a name="dtor"></a>  CComDynamicUnkArray::~CComDynamicUnkArray

Distruttore.

```
~CComDynamicUnkArray();
```

### <a name="remarks"></a>Note

Libera le risorse allocate dal costruttore della classe.

##  <a name="end"></a>  CComDynamicUnkArray::end

Restituisce un puntatore a un oggetto dopo l' `IUnknown` ultimo puntatore della raccolta.

```
IUnknown**
    end();
```

### <a name="return-value"></a>Valore restituito

Puntatore a un `IUnknown` puntatore di interfaccia.

##  <a name="getat"></a>  CComDynamicUnkArray::GetAt

Recupera l'elemento in corrispondenza dell'indice specificato.

```
IUnknown* GetAt(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento da recuperare.

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) .

##  <a name="getcookie"></a>  CComDynamicUnkArray::GetCookie

Chiamare questo metodo per ottenere il cookie associato a un puntatore `IUnknown` specificato.

```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```

### <a name="parameters"></a>Parametri

*ppFind*<br/>
`IUnknown` Puntatore per il quale è richiesto il cookie associato.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato `IUnknown` al puntatore oppure zero se non viene trovato alcun puntatore corrispondente. `IUnknown`

### <a name="remarks"></a>Note

Se è presente più di un'istanza dello stesso `IUnknown` puntatore, questa funzione restituisce il cookie per la prima.

##  <a name="getsize"></a>  CComDynamicUnkArray::GetSize

Restituisce la lunghezza di una matrice.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della matrice.

##  <a name="getunknown"></a>  CComDynamicUnkArray::GetUnknown

Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un determinato cookie.

```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie*<br/>
Cookie per il quale è richiesto `IUnknown` il puntatore associato.

### <a name="return-value"></a>Valore restituito

Restituisce il `IUnknown` puntatore o null se non viene trovato alcun cookie corrispondente.

##  <a name="remove"></a>  CComDynamicUnkArray::Remove

Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.

```
BOOL Remove(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie*<br/>
Cookie che fa riferimento `IUnknown` al puntatore da rimuovere dalla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il puntatore è stato rimosso. in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Classe CComUnkArray](../../atl/reference/ccomunkarray-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
