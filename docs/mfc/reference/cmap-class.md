---
title: Classe CMap
ms.date: 11/04/2016
f1_keywords:
- CMap
- AFXTEMPL/CMap
- AFXTEMPL/CMap::CPair
- AFXTEMPL/CMap::CMap
- AFXTEMPL/CMap::GetCount
- AFXTEMPL/CMap::GetHashTableSize
- AFXTEMPL/CMap::GetNextAssoc
- AFXTEMPL/CMap::GetSize
- AFXTEMPL/CMap::GetStartPosition
- AFXTEMPL/CMap::InitHashTable
- AFXTEMPL/CMap::IsEmpty
- AFXTEMPL/CMap::Lookup
- AFXTEMPL/CMap::PGetFirstAssoc
- AFXTEMPL/CMap::PGetNextAssoc
- AFXTEMPL/CMap::PLookup
- AFXTEMPL/CMap::RemoveAll
- AFXTEMPL/CMap::RemoveKey
- AFXTEMPL/CMap::SetAt
helpviewer_keywords:
- CMap [MFC], CPair
- CMap [MFC], CMap
- CMap [MFC], GetCount
- CMap [MFC], GetHashTableSize
- CMap [MFC], GetNextAssoc
- CMap [MFC], GetSize
- CMap [MFC], GetStartPosition
- CMap [MFC], InitHashTable
- CMap [MFC], IsEmpty
- CMap [MFC], Lookup
- CMap [MFC], PGetFirstAssoc
- CMap [MFC], PGetNextAssoc
- CMap [MFC], PLookup
- CMap [MFC], RemoveAll
- CMap [MFC], RemoveKey
- CMap [MFC], SetAt
ms.assetid: 640a45ab-0993-4def-97ec-42cc78eb10b9
ms.openlocfilehash: 9a3c92a0a8c3d40e4cc3d289cc0221ff7cdb2e11
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370101"
---
# <a name="cmap-class"></a>Classe CMap

Classe Collection dizionario che esegue il mapping delle chiavi univoche ai valori.

## <a name="syntax"></a>Sintassi

```
template<class KEY, class ARG_KEY, class VALUE, class ARG_VALUE>class CMap : public CObject
```

#### <a name="parameters"></a>Parametri

*Chiave*<br/>
Classe dell'oggetto utilizzata come chiave della mappa.

*ARG_KEY*<br/>
Tipo di dati utilizzato per gli argomenti *KEY;* di solito un riferimento a *KEY*.

*Valore*<br/>
Classe dell'oggetto memorizzato nella mappa.

*ARG_VALUE*<br/>
Tipo di dati utilizzato per gli argomenti *VALUE;* di solito un riferimento a *VALUE*.

## <a name="members"></a>Membri

### <a name="public-structures"></a>Strutture pubbliche

|Nome|Descrizione|
|----------|-----------------|
|[CMap::CPair](#cpair)|Struttura annidata contenente un valore di chiave e il valore dell'oggetto associato.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMap::CMap](#cmap)|Costruisce una raccolta che esegue il mapping delle chiavi ai valori.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMap::GetCount](#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMap::GetHashTableSize](#gethashtablesize)|Restituisce il numero di elementi nella tabella hash.|
|[Mappa::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CMap::GetSize](#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMap::GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMap::InitHashTable](#inithashtable)|Inizializza la tabella hash e ne specifica le dimensioni.|
|[CMap::IsEmpty](#isempty)|Verifica la condizione della mappa vuota (nessun elemento).|
|[CMappa::Ricerca](#lookup)|Cerca il valore mappato a una determinata chiave.|
|[CMappa::PGetFirstAssoc](#pgetfirstassoc)|Restituisce un puntatore al primo elemento.|
|[Mappa::PGetNextAssoc](#pgetnextassoc)|Ottiene un puntatore all'elemento successivo per l'iterazione.|
|[RicercadiCMap::P](#plookup)|Restituisce un puntatore a una chiave il cui valore corrisponde al valore specificato.|
|[CMap::RemoveAll](#removeall)|Rimuove tutti gli elementi da questa mappa.|
|[CMap::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMap::SetAt](#setat)|Inserisce un elemento nella mappa; sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMap::operatore \[\]](#operator_at)|Inserisce un elemento nella mappa, `SetAt`ovvero la sostituzione dell'operatore per .|

## <a name="remarks"></a>Osservazioni

Dopo aver inserito una coppia chiave-valore (elemento) nella mappa, è possibile recuperare o eliminare in modo efficiente la coppia utilizzando la chiave per accedervi. È inoltre possibile scorrere tutti gli elementi nella mappa.

Una variabile di tipo POSITION viene utilizzata per l'accesso alternativo alle voci. È possibile utilizzare un POSITION per "ricordare" una voce e per scorrere la mappa. Si potrebbe pensare che questa iterazione è sequenziale per valore della chiave; non lo è. La sequenza degli elementi recuperati è indeterminata.

Alcune funzioni membro di questa classe chiamano funzioni di supporto `CMap` globali che devono essere personalizzate per la maggior parte degli utilizzi della classe. Vedere [Helper di classi Collection](../../mfc/reference/collection-class-helpers.md) nella sezione Macro e globali di Riferimento a **MFC**.

`CMap`esegue l'override di [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) per supportare la serializzazione e il dump dei relativi elementi. Se una mappa viene archiviata in un archivio utilizzando `Serialize`, ogni elemento della mappa viene serializzato a sua volta. L'implementazione `SerializeElements` predefinita della funzione di supporto esegue una scrittura bit per bit. Per informazioni sulla serializzazione di `CObject` elementi della raccolta di puntatori derivati da o da altri tipi definiti dall'utente, vedere [Procedura: creare una](../../mfc/how-to-make-a-type-safe-collection.md)raccolta indipendente dai tipi .

Se è necessario un dump diagnostico dei singoli elementi nella mappa (chiavi e valori), è necessario impostare la profondità del contesto di dump su 1 o su un valore maggiore.

Quando `CMap` un oggetto viene eliminato o quando i relativi elementi vengono rimossi, le chiavi e i valori vengono rimossi entrambi.

La derivazione della classe mappa è simile alla derivazione dell'elenco. Vedere l'articolo [Raccolte](../../mfc/collections.md) per un'illustrazione della derivazione di una classe di elenco per scopi speciali.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="cmapcmap"></a><a name="cmap"></a>CMap::CMap

Costruisce una mappa vuota.

```
CMap(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize (dimensioni di blocco)*<br/>
Specifica la granularità di allocazione della memoria per l'estensione della mappa.

### <a name="remarks"></a>Osservazioni

Man mano che la mappa cresce, la memoria viene allocata in unità di voci *nBlockSize.*

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#56](../../mfc/codesnippet/cpp/cmap-class_1.cpp)]

## <a name="cmapcpair"></a><a name="cpair"></a>CMap::CPair

Contiene un valore di chiave e il valore dell'oggetto associato.

### <a name="remarks"></a>Osservazioni

Si tratta di una struttura annidata all'interno della classe [CMap](../../mfc/reference/cmap-class.md).

La struttura è composta da due campi:

- `key`Valore effettivo del tipo di chiave.

- `value`Valore dell'oggetto associato.

Viene utilizzato per archiviare i valori restituiti da [CMap::PLookup](#plookup), [CMap::PGetFirstAssoc](#pgetfirstassoc)e [CMap::PGetNextAssoc](#pgetnextassoc).

### <a name="example"></a>Esempio

Per un esempio di utilizzo, vedere l'esempio per [CMap::PLookup](#plookup).

## <a name="cmapgetcount"></a><a name="getcount"></a>CMap::GetCount

Recupera il numero di elementi nella mappa.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::Lookup](#lookup).

## <a name="cmapgethashtablesize"></a><a name="gethashtablesize"></a>CMap::GetHashTableSize

Determina il numero di elementi nella tabella hash per la mappa.

```
UINT GetHashTableSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella tabella hash.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#57](../../mfc/codesnippet/cpp/cmap-class_2.cpp)]

## <a name="cmapgetnextassoc"></a><a name="getnextassoc"></a>Mappa::GetNextAssoc

Recupera l'elemento `rNextPosition`della mappa `rNextPosition` in , quindi viene aggiornato per fare riferimento all'elemento successivo nella mappa.

```
void GetNextAssoc(
    POSITION& rNextPosition,
    KEY& rKey,
    VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*rNextPosition*<br/>
Specifica un riferimento a un valore POSITION `GetNextAssoc` `GetStartPosition` restituito da una chiamata o precedente.

*Chiave*<br/>
Parametro di modello che specifica il tipo della chiave della mappa.

*Rkey*<br/>
Specifica la chiave restituita dell'elemento recuperato.

*Valore*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

*Rvalue*<br/>
Specifica il valore restituito dell'elemento recuperato.

### <a name="remarks"></a>Osservazioni

Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa. Si noti che la sequenza di posizione non è necessariamente la stessa della sequenza di valori chiave.

Se l'elemento recuperato è l'ultimo nella mappa, il nuovo valore di *rNextPosition* è impostato su NULL.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::SetAt](#setat).

## <a name="cmapgetsize"></a><a name="getsize"></a>CMap::GetSize

Restituisce il numero di elementi della mappa.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi nella mappa.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

## <a name="cmapgetstartposition"></a><a name="getstartposition"></a>CMap::GetStartPosition

Avvia un'iterazione della mappa restituendo un `GetNextAssoc` valore POSITION che può essere passato a una chiamata.

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che indica una posizione iniziale per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Osservazioni

La sequenza di iterazione non è prevedibile. pertanto, il "primo elemento nella mappa" non ha un significato speciale.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::SetAt](#setat).

## <a name="cmapinithashtable"></a><a name="inithashtable"></a>CMap::InitHashTable

Inizializza la tabella hash.

```
void InitHashTable(UINT hashSize, BOOL  bAllocNow = TRUE);
```

### <a name="parameters"></a>Parametri

*hashSize (Dimensioni hash)*<br/>
Numero di voci nella tabella hash.

*bAllocNow*<br/>
Se TRUE, alloca la tabella hash al momento dell'inizializzazione; in caso contrario, la tabella viene allocata quando necessario.

### <a name="remarks"></a>Osservazioni

Per ottenere prestazioni ottimali, la dimensione della tabella hash deve essere un numero primo. Per ridurre al minimo le collisioni, le dimensioni devono essere maggiori di circa il 20% rispetto al set di dati previsto più grande.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::Lookup](#lookup).

## <a name="cmapisempty"></a><a name="isempty"></a>CMap::IsEmpty

Determina se la mappa è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questa mappa non contiene elementi; in caso contrario 0.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::RemoveAll](#removeall).

## <a name="cmaplookup"></a><a name="lookup"></a>CMappa::Ricerca

Cerca il valore mappato a una determinata chiave.

```
BOOL Lookup(ARG_KEY key, VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo del valore della *chiave.*

*Chiave*<br/>
Specifica la chiave che identifica l'elemento da cercare.

*Valore*<br/>
Specifica il tipo di valore da cercare.

*Rvalue*<br/>
Riceve il valore cercato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

`Lookup`utilizza un algoritmo hash per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

## <a name="cmapoperator--"></a><a name="operator_at"></a>CMap::operator [ ]

Un comodo sostituto per la `SetAt` funzione membro.

```
VALUE& operator[](arg_key key);
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo del valore della chiave.

*Chiave*<br/>
Chiave utilizzata per recuperare il valore dalla mappa.

### <a name="remarks"></a>Osservazioni

In questo modo può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non è presente alcun elemento della mappa con la chiave specificata, viene creato un nuovo elemento.

Non esiste un "lato destro" (r-value) equivalente a questo operatore perché è possibile che una chiave non venga trovata nella mappa. Utilizzare `Lookup` la funzione membro per il recupero degli elementi.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::Lookup](#lookup).

## <a name="cmappgetfirstassoc"></a><a name="pgetfirstassoc"></a>CMappa::PGetFirstAssoc

Restituisce la prima voce dell'oggetto mappa.

```
const CPair* PGetFirstAssoc() const;
CPair* PGetFirstAssoc();
```

### <a name="return-value"></a>Valore restituito

Un puntatore alla prima voce nella mappa; vedere [CMap::CPair](#cpair). Se la mappa non contiene voci, il valore è NULL.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per restituire un puntatore al primo elemento nell'oggetto mappa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#59](../../mfc/codesnippet/cpp/cmap-class_4.cpp)]

## <a name="cmappgetnextassoc"></a><a name="pgetnextassoc"></a>Mappa::PGetNextAssoc

Recupera l'elemento della mappa a cui punta *pAssocRec*.

```
const CPair *PGetNextAssoc(const CPair* pAssocRet) const;

CPair *PGetNextAssoc(const CPair* pAssocRet);
```

### <a name="parameters"></a>Parametri

*pAssocRet*<br/>
Punta a una voce della mappa restituita da una precedente chiamata [PGetNextAssoc](#pgetnextassoc) o [CMap::PGetFirstAssoc.](#pgetfirstassoc)

### <a name="return-value"></a>Valore restituito

Un puntatore alla voce successiva nella mappa; vedere [CMap::CPair](#cpair). Se l'elemento è l'ultimo nella mappa, il valore è NULL.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per scorrere tutti gli elementi nella mappa. Recuperare il primo elemento `PGetFirstAssoc` con una chiamata a e `PGetNextAssoc`quindi scorrere la mappa con chiamate successive a .

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::PGetFirstAssoc](#pgetfirstassoc).

## <a name="cmapplookup"></a><a name="plookup"></a>RicercadiCMap::P

Trova il valore mappato a una chiave specificata.

```
const CPair* PLookup(ARG_KEY key) const;
CPair* PLookup(ARG_KEY key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Chiave per l'elemento da cercare.

### <a name="return-value"></a>Valore restituito

Un puntatore a una struttura di chiavi; vedere [CMap::CPair](#cpair). Se non viene `CMap::PLookup` trovata alcuna corrispondenza, restituisce NULL.

### <a name="remarks"></a>Osservazioni

Chiamare questo metodo per cercare un elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#60](../../mfc/codesnippet/cpp/cmap-class_5.cpp)]

## <a name="cmapremoveall"></a><a name="removeall"></a>CMap::RemoveAll

Rimuove tutti i valori da questa mappa `DestructElements`chiamando la funzione di supporto globale .

```
void RemoveAll();
```

### <a name="remarks"></a>Osservazioni

La funzione funziona correttamente se la mappa è già vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#61](../../mfc/codesnippet/cpp/cmap-class_6.cpp)]

## <a name="cmapremovekey"></a><a name="removekey"></a>CMap::RemoveKey

Cerca la voce della mappa corrispondente alla chiave fornita; quindi, se la chiave viene trovata, rimuove la voce.

```
BOOL RemoveKey(ARG_KEY key);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo della chiave.

*Chiave*<br/>
Chiave per l'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimossa correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

La `DestructElements` funzione di supporto viene utilizzata per rimuovere la voce.

### <a name="example"></a>Esempio

Vedere l'esempio per [CMap::SetAt](#setat).

## <a name="cmapsetat"></a><a name="setat"></a>CMap::SetAt

Il mezzo principale per inserire un elemento in una mappa.

```
void SetAt(ARG_KEY key, ARG_VALUE newValue);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo del parametro *chiave.*

*Chiave*<br/>
Specifica la chiave del nuovo elemento.

*ARG_VALUE*<br/>
Parametro di modello che specifica il tipo del parametro *newValue.*

*newValue*<br/>
Specifica il valore del nuovo elemento.

### <a name="remarks"></a>Osservazioni

In primo luogo, la chiave viene cercata. Se la chiave viene trovata, il valore corrispondente viene modificato; in caso contrario, viene creata una nuova coppia chiave-valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#62](../../mfc/codesnippet/cpp/cmap-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
