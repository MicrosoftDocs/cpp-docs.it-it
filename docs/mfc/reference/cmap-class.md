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
ms.openlocfilehash: 88ca218d4cb4e70dcc46ba04bbdfb7a9d12eb808
ms.sourcegitcommit: 53f75afaf3c0b3ed481c5503357ed2b7b87aac6d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2018
ms.locfileid: "53657578"
---
# <a name="cmap-class"></a>Classe CMap

Classe Collection dizionario che esegue il mapping delle chiavi univoche ai valori.

## <a name="syntax"></a>Sintassi

```
template<class KEY, class ARG_KEY, class VALUE, class ARG_VALUE>class CMap : public CObject
```

#### <a name="parameters"></a>Parametri

*KEY*<br/>
Classe dell'oggetto usato come chiave per la mappa.

*ARG_KEY*<br/>
Tipo di dati usato per *KEY* gli argomenti, in genere un riferimento a *chiave*.

*VALORE*<br/>
Classe dell'oggetto archiviato nella mappa.

*ARG_VALUE*<br/>
Tipo di dati usato per *valore* gli argomenti, in genere un riferimento a *valore*.

## <a name="members"></a>Membri

### <a name="public-structures"></a>Strutture pubbliche

|nome|Descrizione|
|----------|-----------------|
|[CMap::CPair](#cpair)|Una struttura annidata che contiene un valore di chiave e il valore dell'oggetto associato.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMap::CMap](#cmap)|Costruisce una raccolta che esegue il mapping ai valori delle chiavi.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMap::GetCount](#getcount)|Restituisce il numero di elementi in questa mappa.|
|[CMap::GetHashTableSize](#gethashtablesize)|Restituisce il numero di elementi nella tabella hash.|
|[CMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per eseguire l'iterazione.|
|[CMap::GetSize](#getsize)|Restituisce il numero di elementi in questa mappa.|
|[CMap::GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento.|
|[CMap::InitHashTable](#inithashtable)|Inizializza la tabella hash e specifica le dimensioni.|
|[CMap::IsEmpty](#isempty)|Verifica se la condizione vuota-map (nessun elemento).|
|[CMap::Lookup](#lookup)|Cerca il valore mappato a una chiave specificata.|
|[CMap::PGetFirstAssoc](#pgetfirstassoc)|Restituisce un puntatore al primo elemento.|
|[CMap::PGetNextAssoc](#pgetnextassoc)|Ottiene un puntatore all'elemento successivo per eseguire l'iterazione.|
|[CMap::PLookup](#plookup)|Restituisce un puntatore a una chiave il cui valore corrisponde al valore specificato.|
|[CMap::RemoveAll](#removeall)|Rimuove tutti gli elementi da questa mappa.|
|[CMap::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CMap::SetAt](#setat)|Inserisce un elemento nella mappa; sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMap::operator \[ \]](#operator_at)|Inserisce un elemento nella mappa, la sostituzione di operatore per `SetAt`.|

## <a name="remarks"></a>Note

Dopo aver inserito una coppia chiave-valore (elemento) nella mappa, è possibile recuperare in modo efficiente o eliminare la coppia usando la chiave di accesso. È anche possibile scorrere tutti gli elementi della mappa.

Una variabile del tipo di che posizione viene utilizzata per l'accesso alternativo per le voci. È possibile utilizzare una posizione a "ricorda" una voce e per scorrere la mappa. Si potrebbe pensare che questa iterazione è sequenziale in base al valore di chiave non è. La sequenza di elementi recuperati è indeterminata.

Alcune funzioni membro di questa classe chiamano funzioni di supporto globale che devono essere personalizzati per la maggior parte degli utilizzi del `CMap` classe. Visualizzare [supporti delle classi Collection](../../mfc/reference/collection-class-helpers.md) nella sezione macro e funzioni globali delle **riferimento MFC**.

`CMap` esegue l'override [CObject:: Serialize](../../mfc/reference/cobject-class.md#serialize) per supportare la serializzazione e il dump dei relativi elementi. Se una mappa è archiviata in un archivio usando `Serialize`, ogni elemento della mappa viene serializzato a turno. L'implementazione predefinita del `SerializeElements` funzione helper esegue un'operazione OR bit per bit di scrittura. Per informazioni sulla serializzazione di elementi della raccolta puntatore derivano da `CObject` o altri tipi definiti dall'utente, vedere [come: Creazione di una raccolta indipendente dai tipi](../../mfc/how-to-make-a-type-safe-collection.md).

Se è necessario un dump di diagnostica dei singoli elementi della mappa (chiavi e valori), è necessario impostare la profondità del contesto di dump a 1 o versioni successive.

Quando un `CMap` oggetto viene eliminato o quando gli elementi vengono rimossi, vengono rimosse le chiavi e valori.

Derivazione della classe Map è simile alla derivazione di elenco. Vedere l'articolo [raccolte](../../mfc/collections.md) per un'illustrazione di derivazione di una classe di elenco di scopi specifici.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

`CMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

##  <a name="cmap"></a>  CMap::CMap

Costruisce una mappa vuota.

```
CMap(INT_PTR nBlockSize = 10);
```

### <a name="parameters"></a>Parametri

*nBlockSize*<br/>
Specifica la granularità di allocazione della memoria per l'estensione della mappa.

### <a name="remarks"></a>Note

Man mano che aumenta la mappa, la memoria viene allocata in unità pari *nBlockSize* voci.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#56](../../mfc/codesnippet/cpp/cmap-class_1.cpp)]

##  <a name="cpair"></a>  CMap::CPair

Contiene un valore di chiave e il valore dell'oggetto associato.

### <a name="remarks"></a>Note

Si tratta di una struttura annidata all'interno di classi [CMap](../../mfc/reference/cmap-class.md).

La struttura è costituita da due campi:

- `key` Il valore effettivo del tipo di chiave.

- `value` Il valore dell'oggetto associato.

Viene usato per archiviare i valori restituiti da [CMap::PLookup](#plookup), [CMap::PGetFirstAssoc](#pgetfirstassoc), e [CMap::PGetNextAssoc](#pgetnextassoc).

### <a name="example"></a>Esempio

Per un esempio di utilizzo, vedere l'esempio relativo [CMap::PLookup](#plookup).

##  <a name="getcount"></a>  CMap::GetCount

Recupera il numero di elementi nella mappa.

```
INT_PTR GetCount() const;
```

### <a name="return-value"></a>Valore restituito

Numero di elementi.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::Lookup](#lookup).

##  <a name="gethashtablesize"></a>  CMap::GetHashTableSize

Determina il numero di elementi nella tabella hash per la mappa.

```
UINT GetHashTableSize() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nella tabella hash.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#57](../../mfc/codesnippet/cpp/cmap-class_2.cpp)]

##  <a name="getnextassoc"></a>  CMap::GetNextAssoc

Recupera l'elemento della mappa in corrispondenza `rNextPosition`, quindi Aggiorna `rNextPosition` per fare riferimento all'elemento successivo nella mappa.

```
void GetNextAssoc(
    POSITION& rNextPosition,
    KEY& rKey,
    VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*rNextPosition*<br/>
Specifica un riferimento a un valore di posizione restituito da una precedente `GetNextAssoc` o `GetStartPosition` chiamare.

*KEY*<br/>
Parametro di modello che specifica il tipo di chiave della mappa.

*rKey*<br/>
Specifica la chiave dell'elemento recuperato restituita.

*VALORE*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

*rValue*<br/>
Specifica il valore restituito dell'elemento recuperato.

### <a name="remarks"></a>Note

Questa funzione è particolarmente utile per l'iterazione di tutti gli elementi della mappa. Si noti che la sequenza di posizione non è necessariamente quello utilizzato per la sequenza di valori chiave.

Se l'elemento recuperato è l'ultimo nella mappa, quindi il nuovo valore della *rNextPosition* è impostato su NULL.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::SetAt](#setat).

##  <a name="getsize"></a>  CMap::GetSize

Restituisce il numero di elementi della mappa.

```
INT_PTR GetSize() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di elementi nella mappa.

### <a name="remarks"></a>Note

Chiamare questo metodo per recuperare il numero di elementi nella mappa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

##  <a name="getstartposition"></a>  CMap::GetStartPosition

Inizia un'iterazione di mappa, restituendo un valore di posizione che può essere passato a un `GetNextAssoc` chiamare.

```
POSITION GetStartPosition() const;
```

### <a name="return-value"></a>Valore restituito

Un valore di posizione che indica una posizione di inizio per l'iterazione della mappa; o NULL se la mappa è vuota.

### <a name="remarks"></a>Note

La sequenza di iterazione non è stimabile; Pertanto, il "primo elemento nella mappa" non ha alcun significato speciale.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::SetAt](#setat).

##  <a name="inithashtable"></a>  CMap::InitHashTable

Inizializza la tabella hash.

```
void InitHashTable(UINT hashSize, BOOL  bAllocNow = TRUE);
```

### <a name="parameters"></a>Parametri

*hashSize*<br/>
Numero di voci nella tabella hash.

*bAllocNow*<br/>
Se TRUE, consente di allocare la tabella hash in fase di inizializzazione; in caso contrario, la tabella viene allocata quando necessario.

### <a name="remarks"></a>Note

Per prestazioni ottimali, le dimensioni della tabella hash devono essere un numero primo. Per ridurre al minimo i conflitti, la dimensione deve essere circa il 20% di dimensioni superiori a set di dati più grande previsto.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::Lookup](#lookup).

##  <a name="isempty"></a>  CMap::IsEmpty

Determina se la mappa è vuota.

```
BOOL IsEmpty() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se questa mappa non contiene elementi; in caso contrario 0.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::RemoveAll](#removeall).

##  <a name="lookup"></a>  CMap::Lookup

Cerca il valore mappato a una chiave specificata.

```
BOOL Lookup(ARG_KEY key, VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Specificare il tipo di parametro di modello i *chiave* valore.

*key*<br/>
Specifica la chiave che identifica l'elemento per essere cercato.

*VALORE*<br/>
Specifica il tipo del valore da essere cercato.

*rValue*<br/>
Riceve il valore cercato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato. in caso contrario 0.

### <a name="remarks"></a>Note

`Lookup` Usa un algoritmo di hash per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

##  <a name="operator_at"></a>  [] CMap::operator

Sostituiscono il pratico di `SetAt` funzione membro.

```
VALUE& operator[](arg_key key);
```

### <a name="parameters"></a>Parametri

*VALORE*<br/>
Parametro di modello che specifica il tipo del valore della mappa.

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo del valore della chiave.

*key*<br/>
Chiave utilizzata per recuperare il valore dalla mappa.

### <a name="remarks"></a>Note

In questo modo può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value). Se non è presente alcun elemento della mappa con la chiave specificata, viene creato un nuovo elemento.

Non c'è alcun "destra" (r-value) equivalente a questo operatore perché è possibile che non può essere trovata una chiave nella mappa. Usare il `Lookup` funzione membro per il recupero dell'elemento.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::Lookup](#lookup).

##  <a name="pgetfirstassoc"></a>  CMap::PGetFirstAssoc

Restituisce la prima voce dell'oggetto map.

```
const CPair* PGetFirstAssoc() const;
CPair* PGetFirstAssoc();
```

### <a name="return-value"></a>Valore restituito

Un puntatore alla prima voce nella mappa; visualizzare [CMap::CPair](#cpair). Se la mappa non contiene voci, il valore è NULL.

### <a name="remarks"></a>Note

Chiamare questa funzione per restituire un puntatore al primo elemento nell'oggetto map.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#59](../../mfc/codesnippet/cpp/cmap-class_4.cpp)]

##  <a name="pgetnextassoc"></a>  CMap::PGetNextAssoc

Recupera l'elemento della mappa a cui punta *pAssocRec*.

```
const CPair *PGetNextAssoc(const CPair* pAssocRet) const;

CPair *PGetNextAssoc(const CPair* pAssocRet);
```

### <a name="parameters"></a>Parametri

*pAssocRet*<br/>
Punta a una voce di mapping restituita da una precedente [PGetNextAssoc](#pgetnextassoc) oppure [CMap::PGetFirstAssoc](#pgetfirstassoc) chiamare.

### <a name="return-value"></a>Valore restituito

Un puntatore alla voce successiva nella mappa; visualizzare [CMap::CPair](#cpair). Se l'elemento è l'ultimo nella mappa, il valore è NULL.

### <a name="remarks"></a>Note

Chiamare questo metodo per scorrere tutti gli elementi della mappa. Recuperare il primo elemento con una chiamata a `PGetFirstAssoc` e quindi eseguire l'iterazione attraverso la mappa con le chiamate successive a `PGetNextAssoc`.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::PGetFirstAssoc](#pgetfirstassoc).

##  <a name="plookup"></a>  CMap::PLookup

Trova il valore mappato a una chiave specificata.

```
const CPair* PLookup(ARG_KEY key) const;
CPair* PLookup(ARG_KEY key);
```

### <a name="parameters"></a>Parametri

*key*<br/>
Chiave per l'elemento da cercare.

### <a name="return-value"></a>Valore restituito

Un puntatore a una struttura di chiavi; visualizzare [CMap::CPair](#cpair). Se viene trovata alcuna corrispondenza, `CMap::PLookup` restituisce NULL.

### <a name="remarks"></a>Note

Chiamare questo metodo per cercare un elemento della mappa con una chiave che corrisponde esattamente alla chiave specificata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#60](../../mfc/codesnippet/cpp/cmap-class_5.cpp)]

##  <a name="removeall"></a>  CMap::RemoveAll

Rimuove tutti i valori da questa mappa chiamando la funzione di supporto globale `DestructElements`.

```
void RemoveAll();
```

### <a name="remarks"></a>Note

La funzione funziona correttamente se la mappa è vuota.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#61](../../mfc/codesnippet/cpp/cmap-class_6.cpp)]

##  <a name="removekey"></a>  CMap::RemoveKey

Cerca la voce della mappa corrispondente alla chiave fornita; quindi, se la chiave viene trovata, rimuove la voce.

```
BOOL RemoveKey(ARG_KEY key);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo della chiave.

*key*<br/>
Chiave per l'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimosso correttamente. in caso contrario 0.

### <a name="remarks"></a>Note

Il `DestructElements` funzione helper viene utilizzata per rimuovere la voce.

### <a name="example"></a>Esempio

Vedere l'esempio relativo [CMap::SetAt](#setat).

##  <a name="setat"></a>  CMap::SetAt

Strumento fondamentale per inserire un elemento in una mappa.

```
void SetAt(ARG_KEY key, ARG_VALUE newValue);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Specificare il tipo di parametro di modello i *chiave* parametro.

*key*<br/>
Specifica la chiave del nuovo elemento.

*ARG_VALUE*<br/>
Specificare il tipo di parametro di modello i *newValue* parametro.

*newValue*<br/>
Specifica il valore del nuovo elemento.

### <a name="remarks"></a>Note

In primo luogo, viene cercata la chiave. Se la chiave viene trovata, il valore corrispondente è stato modificato; in caso contrario, viene creata una nuova coppia chiave-valore.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#62](../../mfc/codesnippet/cpp/cmap-class_7.cpp)]

## <a name="see-also"></a>Vedere anche

[Esempio MFC COLLECT](../../visual-cpp-samples.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)
