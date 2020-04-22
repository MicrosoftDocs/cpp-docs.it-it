---
title: CComDynamicUnkArray (classe)
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
ms.openlocfilehash: 51b1d7e81c98bd5dbcf957b1705e7a717bfb9ab0
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81747985"
---
# <a name="ccomdynamicunkarray-class"></a>CComDynamicUnkArray (classe)

Questa classe archivia `IUnknown` una matrice di puntatori.

## <a name="syntax"></a>Sintassi

```
class CComDynamicUnkArray
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComDynamicUnkArray::CComDynamicUnkArray](#ccomdynamicunkarray)|Costruttore. Inizializza i valori della raccolta su NULL e la dimensione della raccolta su zero.|
|[CComDynamicUnkArray:: CComDynamicUnkArray](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComDynamicUnkArray::Aggiunta](#add)|Chiamare questo metodo `IUnknown` per aggiungere un puntatore alla matrice.|
|[CComDynamicUnkArray::begin](#begin)|Restituisce un puntatore al primo `IUnknown` puntatore nella raccolta.|
|[CComDynamicUnkArray::clear](#clear)|Svuota l'array.|
|[CComDynamicUnkArray::end](#end)|Restituisce un puntatore `IUnknown` a un'ultima volta l'ultimo puntatore della raccolta.|
|[CComDynamicUnkArray::GetAt](#getat)|Recupera l'elemento in corrispondenza dell'indice specificato.|
|[CComDynamicUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per ottenere il `IUnknown` cookie associato a un puntatore specificato.|
|[CComDynamicUnkArray::GetSize](#getsize)|Restituisce la lunghezza di una matrice.|
|[CComDynamicUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo `IUnknown` per ottenere il puntatore associato a un cookie specificato.|
|[CComDynamicUnkArray::Rimuovere](#remove)|Chiamare questo metodo `IUnknown` per rimuovere un puntatore dalla matrice.|

## <a name="remarks"></a>Osservazioni

`CComDynamicUnkArray`contiene una matrice `IUnknown` allocata dinamicamente di puntatori, ognuno un'interfaccia su un punto di connessione. `CComDynamicUnkArray`può essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.

I `CComDynamicUnkArray` metodi [begin](#begin) e [end](#end) possono essere utilizzati per scorrere in ciclo tutti i punti di connessione (ad esempio, quando viene generato un evento).

Vedere [Aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md) per informazioni dettagliate sull'automazione della creazione di proxy di punti di connessione.

> [!NOTE]
> **Nota:** La `CComDynamicUnkArray` classe viene utilizzata dalla procedura guidata **Aggiungi classe** durante la creazione di un controllo con punti di connessione. Se si desidera specificare manualmente il numero di `CComDynamicUnkArray` `CComUnkArray<` punti di connessione, modificare il riferimento da *n* `>`, dove *n* è il numero di punti di connessione necessari.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="ccomdynamicunkarrayadd"></a><a name="add"></a>CComDynamicUnkArray::Aggiunta

Chiamare questo metodo `IUnknown` per aggiungere un puntatore alla matrice.

```
DWORD Add(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*Punk*<br/>
Puntatore `IUnknown` da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato al puntatore appena aggiunto.

## <a name="ccomdynamicunkarraybegin"></a><a name="begin"></a>CComDynamicUnkArray::begin

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

## <a name="ccomdynamicunkarrayclear"></a><a name="clear"></a>CComDynamicUnkArray::clear

Svuota l'array.

```cpp
void clear();
```

## <a name="ccomdynamicunkarrayccomdynamicunkarray"></a><a name="ccomdynamicunkarray"></a>CComDynamicUnkArray::CComDynamicUnkArray

Costruttore.

```
CComDynamicUnkArray();
```

### <a name="remarks"></a>Osservazioni

Imposta la dimensione della raccolta su zero e inizializza i valori su NULL. Il distruttore libera la raccolta, se necessario.

## <a name="ccomdynamicunkarrayccomdynamicunkarray"></a><a name="dtor"></a>CComDynamicUnkArray:: CComDynamicUnkArray

Distruttore.

```
~CComDynamicUnkArray();
```

### <a name="remarks"></a>Osservazioni

Libera le risorse allocate dal costruttore della classe.

## <a name="ccomdynamicunkarrayend"></a><a name="end"></a>CComDynamicUnkArray::end

Restituisce un puntatore `IUnknown` a un'ultima volta l'ultimo puntatore della raccolta.

```
IUnknown**
    end();
```

### <a name="return-value"></a>Valore restituito

Puntatore a `IUnknown` un puntatore a interfaccia.

## <a name="ccomdynamicunkarraygetat"></a><a name="getat"></a>CComDynamicUnkArray::GetAt

Recupera l'elemento in corrispondenza dell'indice specificato.

```
IUnknown* GetAt(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento da recuperare.

### <a name="return-value"></a>Valore restituito

Puntatore a un'interfaccia [IUnknown.](/windows/win32/api/unknwn/nn-unknwn-iunknown)

## <a name="ccomdynamicunkarraygetcookie"></a><a name="getcookie"></a>CComDynamicUnkArray::GetCookie

Chiamare questo metodo per ottenere il `IUnknown` cookie associato a un puntatore specificato.

```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```

### <a name="parameters"></a>Parametri

*ppTrova*<br/>
Puntatore `IUnknown` per il quale è richiesto il cookie associato.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie `IUnknown` associato al puntatore `IUnknown` oppure zero se non viene trovato alcun puntatore corrispondente.

### <a name="remarks"></a>Osservazioni

Se è presente più di `IUnknown` un'istanza dello stesso puntatore, questa funzione restituisce il cookie per la prima.

## <a name="ccomdynamicunkarraygetsize"></a><a name="getsize"></a>CComDynamicUnkArray::GetSize

Restituisce la lunghezza di una matrice.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della matrice.

## <a name="ccomdynamicunkarraygetunknown"></a><a name="getunknown"></a>CComDynamicUnkArray::GetUnknown

Chiamare questo metodo `IUnknown` per ottenere il puntatore associato a un cookie specificato.

```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie (Cookie)*<br/>
Cookie per il `IUnknown` quale è richiesto il puntatore associato.

### <a name="return-value"></a>Valore restituito

Restituisce `IUnknown` il puntatore o NULL se non viene trovato alcun cookie corrispondente.

## <a name="ccomdynamicunkarrayremove"></a><a name="remove"></a>CComDynamicUnkArray::Rimuovere

Chiamare questo metodo `IUnknown` per rimuovere un puntatore dalla matrice.

```
BOOL Remove(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie (Cookie)*<br/>
Cookie che fa `IUnknown` riferimento al puntatore da rimuovere dalla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il puntatore viene rimosso; in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Classe CComUnkArray](../../atl/reference/ccomunkarray-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
