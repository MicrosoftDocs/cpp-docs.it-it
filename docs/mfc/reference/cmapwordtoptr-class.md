---
title: Classe CMapWordToPtr
ms.date: 11/04/2016
f1_keywords:
- CMapWordToPtr
- AFXCOLL/CMapWordToPtr
- AFXCOLL/CMapStringToOb::CMapStringToOb
- AFXCOLL/CMapStringToOb::GetCount
- AFXCOLL/CMapStringToOb::GetHashTableSize
- AFXCOLL/CMapStringToOb::GetNextAssoc
- AFXCOLL/CMapStringToOb::GetSize
- AFXCOLL/CMapStringToOb::GetStartPosition
- AFXCOLL/CMapStringToOb::HashKey
- AFXCOLL/CMapStringToOb::InitHashTable
- AFXCOLL/CMapStringToOb::IsEmpty
- AFXCOLL/CMapStringToOb::Lookup
- AFXCOLL/CMapStringToOb::LookupKey
- AFXCOLL/CMapStringToOb::RemoveAll
- AFXCOLL/CMapStringToOb::RemoveKey
- AFXCOLL/CMapStringToOb::SetAt
helpviewer_keywords:
- CMapStringToOb [MFC], CMapStringToOb
- CMapStringToOb [MFC], GetCount
- CMapStringToOb [MFC], GetHashTableSize
- CMapStringToOb [MFC], GetNextAssoc
- CMapStringToOb [MFC], GetSize
- CMapStringToOb [MFC], GetStartPosition
- CMapStringToOb [MFC], HashKey
- CMapStringToOb [MFC], InitHashTable
- CMapStringToOb [MFC], IsEmpty
- CMapStringToOb [MFC], Lookup
- CMapStringToOb [MFC], LookupKey
- CMapStringToOb [MFC], RemoveAll
- CMapStringToOb [MFC], RemoveKey
- CMapStringToOb [MFC], SetAt
ms.assetid: b204d87f-6427-43e1-93e3-a4b1bb41099f
ms.openlocfilehash: 5df8d9e853d934d8c83398cc266c6f49634fa9e6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50605140"
---
# <a name="cmapwordtoptr-class"></a>Classe CMapWordToPtr

Supporta mappe di puntatori void con chiave fornita da parole a 16 bit.

## <a name="syntax"></a>Sintassi

```
class CMapWordToPtr : public CObject
```

## <a name="members"></a>Membri

Le funzioni membro della `CMapWordToPtr` sono simili alle funzioni membro della classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CMapStringToOb`. Ogni volta che un `CObject` puntatore come parametro della funzione o valore restituito, sostituire un puntatore a **void**. Ogni volta che un `CString` o un **const** puntatore al **char** come parametro della funzione o valore restituito, sostituire con WORD.

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

ad esempio, si converte in

`BOOL CMapWordToPtr::Lookup( WORD <key>, void*& <rValue> ) const;`

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToOb::CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToOb::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToOb::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|
|[CMapStringToOb::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Ottiene l'elemento successivo per eseguire l'iterazione.|
|[CMapStringToOb::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToOb::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapStringToOb::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapStringToOb::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Inizializza la tabella hash.|
|[CMapStringToOb::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Verifica se la condizione vuota-map (nessun elemento).|
|[CMapStringToOb::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Cerca un puntatore void in base alla chiave di puntatore void. Il valore del puntatore, non le entità cui fa riferimento, viene utilizzato per il confronto delle chiavi.|
|[CMapStringToOb::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Restituisce un riferimento alla chiave associata al valore di chiave specificato.|
|[CMapStringToOb::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Rimuove tutti gli elementi da questa mappa.|
|[CMapStringToOb::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapStringToOb::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserisce un elemento nella mappa; sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[[] CMapStringToOb::operator](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserisce un elemento nella mappa, la sostituzione di operatore per `SetAt`.|

## <a name="remarks"></a>Note

`CMapWordToPtr` incorpora l'IMPLEMENT_DYNAMIC (macro) per supportare l'accesso di tipo in fase di esecuzione e il dump per un `CDumpContext` oggetto. Se è necessario un dump di singoli elementi della mappa, è necessario impostare la profondità del contesto di dump a 1 o versioni successive.

Mappe di Word a puntatore, non possono essere serializzate.

Quando un `CMapWordToPtr` oggetto viene eliminato o quando gli elementi vengono rimossi, vengono rimosse le parole e i puntatori. Le entità a cui fanno riferimento i puntatori non vengono rimossi.

Per ulteriori informazioni sul `CMapWordToPtr`, vedere l'articolo [raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapWordToPtr`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll. h

## <a name="see-also"></a>Vedere anche

[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)

