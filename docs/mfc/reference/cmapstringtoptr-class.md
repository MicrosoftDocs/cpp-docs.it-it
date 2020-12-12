---
description: 'Altre informazioni su: classe CMapStringToPtr'
title: Classe CMapStringToPtr
ms.date: 11/04/2016
f1_keywords:
- CMapStringToPtr
- AFXCOLL/CMapStringToPtr
- AFXCOLL/CMapStringToPtr::CMapStringToPtr
- AFXCOLL/CMapStringToPtr::GetCount
- AFXCOLL/CMapStringToPtr::GetHashTableSize
- AFXCOLL/CMapStringToPtr::GetNextAssoc
- AFXCOLL/CMapStringToPtr::GetSize
- AFXCOLL/CMapStringToPtr::GetStartPosition
- AFXCOLL/CMapStringToPtr::HashKey
- AFXCOLL/CMapStringToPtr::InitHashTable
- AFXCOLL/CMapStringToPtr::IsEmpty
- AFXCOLL/CMapStringToPtr::Lookup
- AFXCOLL/CMapStringToPtr::LookupKey
- AFXCOLL/CMapStringToPtr::RemoveAll
- AFXCOLL/CMapStringToPtr::RemoveKey
- AFXCOLL/CMapStringToPtr::SetAt
helpviewer_keywords:
- CMapStringToPtr [MFC], CMapStringToPtr
- CMapStringToPtr [MFC], GetCount
- CMapStringToPtr [MFC], GetHashTableSize
- CMapStringToPtr [MFC], GetNextAssoc
- CMapStringToPtr [MFC], GetSize
- CMapStringToPtr [MFC], GetStartPosition
- CMapStringToPtr [MFC], HashKey
- CMapStringToPtr [MFC], InitHashTable
- CMapStringToPtr [MFC], IsEmpty
- CMapStringToPtr [MFC], Lookup
- CMapStringToPtr [MFC], LookupKey
- CMapStringToPtr [MFC], RemoveAll
- CMapStringToPtr [MFC], RemoveKey
- CMapStringToPtr [MFC], SetAt
ms.assetid: 1ac11143-eb0a-4511-a662-2df0d1d9005b
ms.openlocfilehash: 67b4f29b552c82ce6c8b9686ed043cbfc65f078e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207839"
---
# <a name="cmapstringtoptr-class"></a>Classe CMapStringToPtr

Supporta mappe di puntatori void con chiave fornita da oggetti `CString` .

## <a name="syntax"></a>Sintassi

```
class CMapStringToPtr : public CObject
```

## <a name="members"></a>Members

Le funzioni membro di `CMapStringToPtr` sono simili alle funzioni membro della classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CMapStringToOb`. Quando viene visualizzato un `CObject` puntatore come parametro di funzione o valore restituito, sostituire un puntatore a **`void`** .

`BOOL CMapStringToPtr::Lookup( LPCTSTR <key>, void*& <rValue> ) const;`

ad esempio, si converte in

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMapStringToPtr:: CMapStringToPtr](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMapStringToPtr:: GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToPtr:: GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|
|[CMapStringToPtr:: GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMapStringToPtr:: GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToPtr:: GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapStringToPtr:: HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapStringToPtr:: InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Inizializza la tabella hash.|
|[CMapStringToPtr:: IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Verifica la condizione di mappa vuota (nessun elemento).|
|[CMapStringToPtr:: Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Cerca un puntatore void in base alla chiave del puntatore void. Il valore del puntatore, non l'entità a cui punta, viene usato per il confronto delle chiavi.|
|[CMapStringToPtr:: LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Restituisce un riferimento alla chiave associata al valore di chiave specificato.|
|[CMapStringToPtr:: RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Rimuove tutti gli elementi dalla mappa.|
|[CMapStringToPtr:: RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapStringToPtr:: SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore \[ CMapStringToPtr:: \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserisce un elemento nella mappa, ovvero la sostituzione dell'operatore per `SetAt` .|

## <a name="remarks"></a>Commenti

`CMapStringToPtr` incorpora la macro IMPLEMENT_DYNAMIC per supportare l'accesso ai tipi in fase di esecuzione e il dump a un `CDumpContext` oggetto. Se è necessario un dump di singoli elementi della mappa, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Non è possibile serializzare le mappe da stringa a puntatore.

Quando un `CMapStringToPtr` oggetto viene eliminato o quando vengono rimossi gli elementi, gli `CString` oggetti chiave e le parole vengono rimossi.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
