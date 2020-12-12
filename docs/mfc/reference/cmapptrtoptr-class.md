---
description: 'Altre informazioni su: classe CMapPtrToPtr'
title: Classe CMapPtrToPtr
ms.date: 11/04/2016
f1_keywords:
- CMapPtrToPtr
- AFXCOLL/CMapPtrToPtr
- AFXCOLL/CMapPtrToPtr::CMapPtrToPtr
- AFXCOLL/CMapPtrToPtr::GetCount
- AFXCOLL/CMapPtrToPtr::GetHashTableSize
- AFXCOLL/CMapPtrToPtr::GetNextAssoc
- AFXCOLL/CMapPtrToPtr::GetSize
- AFXCOLL/CMapPtrToPtr::GetStartPosition
- AFXCOLL/CMapPtrToPtr::HashKey
- AFXCOLL/CMapPtrToPtr::InitHashTable
- AFXCOLL/CMapPtrToPtr::IsEmpty
- AFXCOLL/CMapPtrToPtr::Lookup
- AFXCOLL/CMapPtrToPtr::LookupKey
- AFXCOLL/CMapPtrToPtr::RemoveAll
- AFXCOLL/CMapPtrToPtr::RemoveKey
- AFXCOLL/CMapPtrToPtr::SetAt
helpviewer_keywords:
- CMapPtrToPtr [MFC], CMapPtrToPtr
- CMapPtrToPtr [MFC], GetCount
- CMapPtrToPtr [MFC], GetHashTableSize
- CMapPtrToPtr [MFC], GetNextAssoc
- CMapPtrToPtr [MFC], GetSize
- CMapPtrToPtr [MFC], GetStartPosition
- CMapPtrToPtr [MFC], HashKey
- CMapPtrToPtr [MFC], InitHashTable
- CMapPtrToPtr [MFC], IsEmpty
- CMapPtrToPtr [MFC], Lookup
- CMapPtrToPtr [MFC], LookupKey
- CMapPtrToPtr [MFC], RemoveAll
- CMapPtrToPtr [MFC], RemoveKey
- CMapPtrToPtr [MFC], SetAt
ms.assetid: 23cbbaec-9d64-48f2-92ae-5e24fa64b926
ms.openlocfilehash: 3cc561f7420e9c3c7bc2b2f6460536a80d7ef7cd
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97259539"
---
# <a name="cmapptrtoptr-class"></a>Classe CMapPtrToPtr

Supporta mappe di puntatori void con chiave fornita da puntatori void.

## <a name="syntax"></a>Sintassi

```
class CMapPtrToPtr : public CObject
```

## <a name="members"></a>Members

Le funzioni membro di `CMapPtrToPtr` sono simili alle funzioni membro della classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CMapStringToOb`. Quando viene visualizzato un `CObject` puntatore come parametro di funzione o valore restituito, sostituire un puntatore a **`void`** . Ogni volta che si visualizza un oggetto `CString` o un **`const`** puntatore a **`char`** come un parametro di funzione o un valore restituito, sostituire un puntatore a **`void`** .

`BOOL CMapPtrToPtr::Lookup( void* <key>, void*& <rValue> ) const;`

ad esempio, si converte in

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMapPtrToPtr:: CMapPtrToPtr](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMapPtrToPtr:: GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMapPtrToPtr:: GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|
|[CMapPtrToPtr:: GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMapPtrToPtr:: GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapPtrToPtr:: GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapPtrToPtr:: HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapPtrToPtr:: InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Inizializza la tabella hash.|
|[CMapPtrToPtr:: IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Verifica la condizione di mappa vuota (nessun elemento).|
|[CMapPtrToPtr:: Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Cerca un puntatore void in base alla chiave del puntatore void. Il valore del puntatore, non l'entità a cui punta, viene usato per il confronto delle chiavi.|
|[CMapPtrToPtr:: LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Restituisce un riferimento alla chiave associata al valore di chiave specificato.|
|[CMapPtrToPtr:: RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Rimuove tutti gli elementi dalla mappa.|
|[CMapPtrToPtr:: RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapPtrToPtr:: SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore \[ CMapPtrToPtr:: \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserisce un elemento nella mappa, ovvero la sostituzione dell'operatore per `SetAt` .|

## <a name="remarks"></a>Commenti

`CMapPtrToPtr` incorpora la macro IMPLEMENT_DYNAMIC per supportare l'accesso ai tipi in fase di esecuzione e il dump a un `CDumpContext` oggetto. Se è necessario un dump di singoli elementi della mappa (valori di puntatore), è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Le mappe puntatore a puntatore non possono essere serializzate.

Quando un oggetto `CMapPtrToPtr` viene eliminato oppure quando gli elementi vengono rimossi, vengono eliminati solo i puntatori e non le entità che referenziano.

Per ulteriori informazioni su `CMapPtrToPtr` , vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapPtrToPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

## <a name="see-also"></a>Vedi anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
