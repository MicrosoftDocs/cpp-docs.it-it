---
description: 'Altre informazioni su: classe CMapStringToString'
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
ms.openlocfilehash: ba82647a6e81e82b4d977e4de3beee1bfd0b7c4e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97207813"
---
# <a name="cmapstringtostring-class"></a>Classe CMapStringToString

Supporta mappe di oggetti `CString` con chiave fornita da oggetti `CString` .

## <a name="syntax"></a>Sintassi

```
class CMapStringToString : public CObject
```

## <a name="members"></a>Members

Le funzioni membro di `CMapStringToString` sono simili alle funzioni membro della classe [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Grazie a questa somiglianza, per le specifiche delle funzioni membro è possibile usare la documentazione di riferimento di `CMapStringToOb`. Ogni volta che viene visualizzato un `CObject` puntatore come valore restituito o parametro di funzione "output", sostituire un puntatore a **`char`** . Quando viene visualizzato un `CObject` puntatore come parametro di funzione "input", sostituire un puntatore a **`char`** .

`BOOL CMapStringToString::Lookup(LPCTSTR<key>, CString&<rValue>) const;`

ad esempio, si converte in

`BOOL CMapStringToOb::Lookup(const char*<key>, CObject*&<rValue>) const;`

### <a name="public-structures"></a>Strutture pubbliche

|Nome|Description|
|----------|-----------------|
|[CMapStringToString:: CPair](#cpair)|Struttura annidata contenente un valore di chiave e il valore dell'oggetto stringa associato.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CMapStringToString:: CMapStringToString](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Costruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMapStringToString:: GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToString:: GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determina il numero corrente di elementi nella tabella hash.|
|[CMapStringToString:: GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMapStringToString:: GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMapStringToString:: GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMapStringToString:: HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calcola il valore hash di una chiave specificata.|
|[CMapStringToString:: InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Inizializza la tabella hash.|
|[CMapStringToString:: IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Verifica la condizione di mappa vuota (nessun elemento).|
|[CMapStringToString:: Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Cerca un puntatore void in base alla chiave del puntatore void. Il valore del puntatore, non l'entità a cui punta, viene usato per il confronto delle chiavi.|
|[CMapStringToString:: LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Restituisce un riferimento alla chiave associata al valore di chiave specificato.|
|[CMapStringToString::P GetFirstAssoc](#pgetfirstassoc)|Ottiene un puntatore al primo oggetto `CString` nella mappa.|
|[CMapStringToString::P GetNextAssoc](#pgetnextassoc)|Ottiene un puntatore all'oggetto successivo `CString` per l'iterazione.|
|[CMapStringToString: ricerca:P](#plookup)|Restituisce un puntatore a un oggetto `CString` il cui valore corrisponde al valore specificato.|
|[CMapStringToString:: RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Rimuove tutti gli elementi dalla mappa.|
|[CMapStringToString:: RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMapStringToString:: SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore \[ CMapStringToString:: \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserisce un elemento nella mappa, ovvero la sostituzione dell'operatore per `SetAt` .|

## <a name="remarks"></a>Commenti

`CMapStringToString` incorpora la macro `IMPLEMENT_SERIAL` per supportare la serializzazione e il dump dei relativi elementi. Ogni elemento viene serializzato a sua volta se una mappa viene archiviata in un archivio, con l'operatore di inserimento ( **<<** ) di overload o con la `Serialize` funzione membro.

Se è necessario un dump di singoli `CString` -  `CString` elementi, è necessario impostare la profondità del contesto di dump su 1 o su un valore superiore.

Quando un `CMapStringToString` oggetto viene eliminato o quando vengono rimossi gli elementi, gli `CString` oggetti vengono rimossi in base alle esigenze.

Per ulteriori informazioni su `CMapStringToString` , vedere le [raccolte](../../mfc/collections.md)di articoli.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToString`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXCOLL. h

## <a name="cmapstringtostringcpair"></a><a name="cpair"></a> CMapStringToString:: CPair

Contiene un valore di chiave e il valore dell'oggetto stringa associato.

### <a name="remarks"></a>Commenti

Si tratta di una struttura annidata all'interno della classe [CMapStringToString](../../mfc/reference/cmapstringtostring-class.md).

La struttura è costituita da due campi:

- `key` Valore effettivo del tipo di chiave.

- `value` Valore dell'oggetto associato.

Viene usato per archiviare i valori restituiti da [CMapStringToString::P Lookup](#plookup), [CMapStringToString::P getfirstassoc](#pgetfirstassoc)e [CMapStringToString::P GetNextAssoc](#pgetnextassoc).

### <a name="example"></a>Esempio

  Per un esempio di utilizzo, vedere l'esempio per [CMapStringToString: ricerca:P](#plookup).

## <a name="cmapstringtostringpgetfirstassoc"></a><a name="pgetfirstassoc"></a> CMapStringToString::P GetFirstAssoc

Restituisce la prima voce dell'oggetto map.

```
const CPair* PGetFirstAssoc() const;

CPair* PGetFirstAssoc();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla prima voce della mappa; vedere [CMapStringToString:: CPair](#cpair). Se la mappa è vuota, il valore è NULL.

### <a name="remarks"></a>Commenti

Chiamare questa funzione per restituire un puntatore al primo elemento dell'oggetto map.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#73](../../mfc/codesnippet/cpp/cmapstringtostring-class_1.cpp)]

## <a name="cmapstringtostringpgetnextassoc"></a><a name="pgetnextassoc"></a> CMapStringToString::P GetNextAssoc

Recupera l'elemento della mappa a cui punta *pAssocRec*.

```
const CPair *PGetNextAssoc(const CPair* pAssoc) const;

CPair *PGetNextAssoc(const CPair* pAssoc);
```

### <a name="parameters"></a>Parametri

*pAssoc*<br/>
Punta a una voce della mappa restituita da una chiamata a [PGetNextAssoc](#pgetnextassoc) o [PGetFirstAssoc](#pgetfirstassoc) precedente.

### <a name="return-value"></a>Valore restituito

Puntatore alla voce successiva nella mappa; vedere [CMapStringToString:: CPair](#cpair). Se l'elemento è l'ultimo oggetto della mappa, il valore è NULL.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per scorrere tutti gli elementi nella mappa. Recuperare il primo elemento con una chiamata a `PGetFirstAssoc` e quindi scorrere la mappa con le chiamate successive a `PGetNextAssoc` .

### <a name="example"></a>Esempio

  Vedere l'esempio per [CMapStringToString::P getfirstassoc](#pgetfirstassoc).

## <a name="cmapstringtostringplookup"></a><a name="plookup"></a> CMapStringToString: ricerca:P

Cerca il valore mappato a una chiave specificata.

```
const CPair* PLookup(LPCTSTR key) const;

CPair* PLookup(LPCTSTR key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Puntatore alla chiave per l'elemento di cui eseguire la ricerca.

### <a name="return-value"></a>Valore restituito

Puntatore alla chiave specificata.

### <a name="remarks"></a>Commenti

Chiamare questo metodo per cercare un elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#74](../../mfc/codesnippet/cpp/cmapstringtostring-class_2.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
