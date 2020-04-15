---
title: Classe CMapStringToString
ms.date: 11/04/2016
f1_keywords:
- CMapStringToString
- AFXCOLL/CMapStringToString
- AFXCOLL/CMapStringToString::CPair
- AFXCOLL/CMapStringToString::CMapStringToString
- AFXCOLL/CMapStringToString::GetCount
- AFXCOLL/CMapStringToString::GetHashTableSize
- AFXCOLL/CMapStringToString::GetNextAssoc
- AFXCOLL/CMapStringToString::GetSize
- AFXCOLL/CMapStringToString::GetStartPosition
- AFXCOLL/CMapStringToString::HashKey
- AFXCOLL/CMapStringToString::InitHashTable
- AFXCOLL/CMapStringToString::IsEmpty
- AFXCOLL/CMapStringToString::Lookup
- AFXCOLL/CMapStringToString::LookupKey
- AFXCOLL/CMapStringToString::PGetFirstAssoc
- AFXCOLL/CMapStringToString::PGetNextAssoc
- AFXCOLL/CMapStringToString::PLookup
- AFXCOLL/CMapStringToString::RemoveAll
- AFXCOLL/CMapStringToString::RemoveKey
- AFXCOLL/CMapStringToString::SetAt
helpviewer_keywords:
- CMapStringToString [MFC], CPair
- CMapStringToString [MFC], CMapStringToString
- CMapStringToString [MFC], GetCount
- CMapStringToString [MFC], GetHashTableSize
- CMapStringToString [MFC], GetNextAssoc
- CMapStringToString [MFC], GetSize
- CMapStringToString [MFC], GetStartPosition
- CMapStringToString [MFC], HashKey
- CMapStringToString [MFC], InitHashTable
- CMapStringToString [MFC], IsEmpty
- CMapStringToString [MFC], Lookup
- CMapStringToString [MFC], LookupKey
- CMapStringToString [MFC], PGetFirstAssoc
- CMapStringToString [MFC], PGetNextAssoc
- CMapStringToString [MFC], PLookup
- CMapStringToString [MFC], RemoveAll
- CMapStringToString [MFC], RemoveKey
- CMapStringToString [MFC], SetAt
ms.assetid: b45794c2-fe6b-4edb-a8ca-faa03b57b4a8
ms.openlocfilehash: 544154569c50369b805ba296aa975849f245d4ad
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370124"
---
# <a name="cmapstringtostring-class"></a>Classe CMapStringToString

Supporta mappe di oggetti `CString` con chiave fornita da oggetti `CString` .

## <a name="syntax"></a>Sintassi

```
class CMapStringToString : public CObject
```

## <a name="members"></a>Membri

Le funzioni `CMapStringToString` membro di sono simili alle funzioni membro della classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CMapStringToOb`. Ovunque venga visualizzato `CObject` un puntatore come valore restituito o come parametro di funzione "output", sostituire un puntatore a **char**. Ovunque venga visualizzato `CObject` un puntatore come parametro di funzione "input", sostituire un puntatore a **char**.

`BOOL CMapStringToString::Lookup(LPCTSTR<key>, CString&<rValue>) const;`

ad esempio, si converte in

`BOOL CMapStringToOb::Lookup(const char*<key>, CObject*&<rValue>) const;`

### <a name="public-structures"></a>Strutture pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToString::CPair](#cpair)|Struttura annidata contenente un valore di chiave e il valore dell'oggetto stringa associato.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToString::CMapStringToString](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToString::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToString::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|
|[CMapStringToString::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMapStringToString::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToString::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapStringToString::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapStringToString::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Inizializza la tabella hash.|
|[CMapStringToString::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Verifica la condizione della mappa vuota (nessun elemento).|
|[CMapStringToString::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Cerca un puntatore void in base al tasto del puntatore void. Il valore del puntatore, non l'entità a cui punta, viene utilizzato per il confronto delle chiavi.|
|[CMapStringToString::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Restituisce un riferimento alla chiave associata al valore della chiave specificato.|
|[CMapStringToString::PGetFirstAssoc](#pgetfirstassoc)|Ottiene un puntatore `CString` al primo nella mappa.|
|[CMapStringToString::PGetNextAssoc](#pgetnextassoc)|Ottiene un puntatore `CString` al successivo per l'iterazione.|
|[CMapStringToString::PLookup](#plookup)|Restituisce un `CString` puntatore a un cui valore corrisponde al valore specificato.|
|[CMapStringToString::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Rimuove tutti gli elementi da questa mappa.|
|[CMapStringToString::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapStringToString::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserisce un elemento nella mappa; sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMapStringToString::operatore \[\]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserisce un elemento nella mappa, `SetAt`ovvero la sostituzione dell'operatore per .|

## <a name="remarks"></a>Osservazioni

`CMapStringToString` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Ogni elemento viene serializzato a sua volta se una mappa viene **<<** archiviata in `Serialize` un archivio, con l'operatore di inserimento di overload ( ) o con la funzione membro .

Se è necessario un `CString` -  `CString` dump di singoli elementi, è necessario impostare la profondità del contesto di dump su 1 o su un valore maggiore.

Quando `CMapStringToString` un oggetto viene eliminato o quando `CString` i relativi elementi vengono rimossi, gli oggetti vengono rimossi nel modo appropriato.

Per ulteriori `CMapStringToString`informazioni su , vedere l'articolo [Raccolte](../../mfc/collections.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToString`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxcoll.h

## <a name="cmapstringtostringcpair"></a><a name="cpair"></a>CMapStringToString::CPair

Contiene un valore di chiave e il valore dell'oggetto stringa associato.

### <a name="remarks"></a>Osservazioni

Si tratta di una struttura annidata all'interno della classe [CMapStringToString](../../mfc/reference/cmapstringtostring-class.md).

La struttura è composta da due campi:

- `key`Valore effettivo del tipo di chiave.

- `value`Valore dell'oggetto associato.

Viene utilizzato per archiviare i valori restituiti da [CMapStringToString::PLookup](#plookup), [CMapStringToString::PGetFirstAssoc](#pgetfirstassoc)e [CMapStringToString::PGetNextAssoc](#pgetnextassoc).

### <a name="example"></a>Esempio

  Per un esempio di utilizzo, vedere l'esempio per [CMapStringToString::PLookup](#plookup).

## <a name="cmapstringtostringpgetfirstassoc"></a><a name="pgetfirstassoc"></a>CMapStringToString::PGetFirstAssoc

Restituisce la prima voce dell'oggetto mappa.

```
const CPair* PGetFirstAssoc() const;

CPair* PGetFirstAssoc();
```

### <a name="return-value"></a>Valore restituito

Un puntatore alla prima voce nella mappa; vedere [CMapStringToString::CPair](#cpair). Se la mappa è vuota, il valore è NULL.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire un puntatore al primo elemento nell'oggetto mappa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#73](../../mfc/codesnippet/cpp/cmapstringtostring-class_1.cpp)]

## <a name="cmapstringtostringpgetnextassoc"></a><a name="pgetnextassoc"></a>CMapStringToString::PGetNextAssoc

Recupera l'elemento della mappa a cui punta *pAssocRec*.

```
const CPair *PGetNextAssoc(const CPair* pAssoc) const;

CPair *PGetNextAssoc(const CPair* pAssoc);
```

### <a name="parameters"></a>Parametri

*passoc*<br/>
Punta a una voce della mappa restituita da una precedente chiamata [PGetNextAssoc](#pgetnextassoc) o [PGetFirstAssoc.](#pgetfirstassoc)

### <a name="return-value"></a>Valore restituito

Un puntatore alla voce successiva nella mappa; vedere [CMapStringToString::CPair](#cpair). Se l'elemento è l'ultimo nella mappa, il valore è NULL.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per scorrere tutti gli elementi nella mappa. Recuperare il primo elemento `PGetFirstAssoc` con una chiamata a e `PGetNextAssoc`quindi scorrere la mappa con chiamate successive a .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMapStringToString::PGetFirstAssoc](#pgetfirstassoc).

## <a name="cmapstringtostringplookup"></a><a name="plookup"></a>CMapStringToString::PLookup

Cerca il valore mappato a una determinata chiave.

```
const CPair* PLookup(LPCTSTR key) const;

CPair* PLookup(LPCTSTR key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Puntatore alla chiave per l'elemento da cercare.

### <a name="return-value"></a>Valore restituito

Puntatore al tasto specificato.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per cercare un elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#74](../../mfc/codesnippet/cpp/cmapstringtostring-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
