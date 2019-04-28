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
ms.openlocfilehash: 39f137f199db1d7519801c19375baea6cd08db93
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62259482"
---
# <a name="ccomdynamicunkarray-class"></a>Classe CComDynamicUnkArray

Questa classe archivia una matrice di `IUnknown` puntatori.

## <a name="syntax"></a>Sintassi

```
class CComDynamicUnkArray
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComDynamicUnkArray::CComDynamicUnkArray](#ccomdynamicunkarray)|Costruttore. Inizializza i valori della raccolta su NULL e le dimensioni dell'insieme di zero.|
|[CComDynamicUnkArray::~CComDynamicUnkArray](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CComDynamicUnkArray::Add](#add)|Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.|
|[CComDynamicUnkArray::begin](#begin)|Restituisce un puntatore al primo `IUnknown` puntatore nella raccolta.|
|[CComDynamicUnkArray::clear](#clear)|Svuota la matrice.|
|[CComDynamicUnkArray::end](#end)|Restituisce un puntatore alla prima posizione oltre l'ultimo `IUnknown` puntatore nella raccolta.|
|[CComDynamicUnkArray::GetAt](#getat)|Recupera l'elemento in corrispondenza dell'indice specificato.|
|[CComDynamicUnkArray::GetCookie](#getcookie)|Chiamare questo metodo per recuperare il cookie associato un determinato `IUnknown` puntatore.|
|[CComDynamicUnkArray::GetSize](#getsize)|Restituisce la lunghezza della matrice.|
|[CComDynamicUnkArray::GetUnknown](#getunknown)|Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un cookie specificato.|
|[CComDynamicUnkArray::Remove](#remove)|Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.|

## <a name="remarks"></a>Note

`CComDynamicUnkArray` contiene una matrice allocata in modo dinamico di `IUnknown` puntatori, ogni punto di un'interfaccia in una connessione. `CComDynamicUnkArray` può essere utilizzato come parametro per il [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md) classe modello.

Il `CComDynamicUnkArray` metodi [begin](#begin) e [end](#end) può essere utilizzato per scorrere tutti i punti di connessione (ad esempio, quando viene generato un evento).

Visualizzare [aggiunta di punti di connessione a un oggetto](../../atl/adding-connection-points-to-an-object.md) punto proxy di per informazioni dettagliate su come automatizzare la creazione della connessione.

> [!NOTE]
> **Nota** della classe `CComDynamicUnkArray` viene usato per il **Aggiungi classe** guidata durante la creazione di un controllo che offre punti di connessione. Se si desidera specificare manualmente il numero di punti di connessione, modificare il riferimento dal `CComDynamicUnkArray` al `CComUnkArray<` *n* `>`, dove *n* è il numero di punti di connessione Obbligatorio.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="add"></a>  CComDynamicUnkArray::Add

Chiamare questo metodo per aggiungere un `IUnknown` puntatore alla matrice.

```
DWORD Add(IUnknown* pUnk);
```

### <a name="parameters"></a>Parametri

*pUnk*<br/>
Il `IUnknown` puntatore da aggiungere alla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato il puntatore appena aggiunto.

##  <a name="begin"></a>  CComDynamicUnkArray::begin

Restituisce un puntatore all'inizio della raccolta di `IUnknown` puntatori a interfaccia.

```
IUnknown**
    begin();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un `IUnknown` puntatore a interfaccia.

### <a name="remarks"></a>Note

La raccolta contiene i puntatori alle interfacce archiviati in locale come `IUnknown`. Si esegue il cast di ogni `IUnknown` interfaccia per il tipo di interfaccia reale e quindi chiamare attraverso di esso. Non è necessaria eseguire una query per l'interfaccia prima di tutto.

Prima di usare il `IUnknown` interfaccia, è necessario verificare che non è NULL.

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

Imposta le dimensioni dell'insieme di zero e inizializza i valori null. Il distruttore libera la raccolta, se necessario.

##  <a name="dtor"></a>  CComDynamicUnkArray::~CComDynamicUnkArray

Distruttore.

```
~CComDynamicUnkArray();
```

### <a name="remarks"></a>Note

Libera le risorse allocate dal costruttore di classe.

##  <a name="end"></a>  CComDynamicUnkArray::end

Restituisce un puntatore alla prima posizione oltre l'ultimo `IUnknown` puntatore nella raccolta.

```
IUnknown**
    end();
```

### <a name="return-value"></a>Valore restituito

Un puntatore a un `IUnknown` puntatore a interfaccia.

##  <a name="getat"></a>  CComDynamicUnkArray::GetAt

Recupera l'elemento in corrispondenza dell'indice specificato.

```
IUnknown* GetAt(int nIndex);
```

### <a name="parameters"></a>Parametri

*nIndex*<br/>
Indice dell'elemento da recuperare.

### <a name="return-value"></a>Valore restituito

Un puntatore a un [IUnknown](/windows/desktop/api/unknwn/nn-unknwn-iunknown) interfaccia.

##  <a name="getcookie"></a>  CComDynamicUnkArray::GetCookie

Chiamare questo metodo per recuperare il cookie associato un determinato `IUnknown` puntatore.

```
DWORD WINAPI GetCookie(IUnknown** ppFind);
```

### <a name="parameters"></a>Parametri

*ppFind*<br/>
Il `IUnknown` puntatore per cui è richiesto il cookie associato.

### <a name="return-value"></a>Valore restituito

Restituisce il cookie associato con il `IUnknown` puntatore, oppure zero se non corrisponde ad alcuna `IUnknown` puntatore viene trovato.

### <a name="remarks"></a>Note

Se sono presenti più istanze dello stesso `IUnknown` puntatore, questa funzione restituisce il cookie per il primo.

##  <a name="getsize"></a>  CComDynamicUnkArray::GetSize

Restituisce la lunghezza della matrice.

```
int GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Lunghezza della matrice.

##  <a name="getunknown"></a>  CComDynamicUnkArray::GetUnknown

Chiamare questo metodo per ottenere il `IUnknown` puntatore associato a un cookie specificato.

```
IUnknown* WINAPI GetUnknown(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie*<br/>
Per il quale il cookie associato `IUnknown` puntatore è obbligatorio.

### <a name="return-value"></a>Valore restituito

Restituisce il `IUnknown` puntatore, o NULL se nessun cookie corrisponda viene trovato.

##  <a name="remove"></a>  CComDynamicUnkArray::Remove

Chiamare questo metodo per rimuovere un `IUnknown` puntatore dalla matrice.

```
BOOL Remove(DWORD dwCookie);
```

### <a name="parameters"></a>Parametri

*dwCookie*<br/>
Il cookie che fa riferimento il `IUnknown` puntatore da rimuovere dalla matrice.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il puntatore viene rimosso; in caso contrario, FALSE.

## <a name="see-also"></a>Vedere anche

[Classe CComUnkArray](../../atl/reference/ccomunkarray-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
