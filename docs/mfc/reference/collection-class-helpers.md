---
title: Supporti delle classi Collection
ms.date: 11/04/2016
helpviewer_keywords:
- DestructElements function
- ConstructElements function
- SerializeElements function
- collection classes [MFC], helper functions
- helper functions collection class [MFC]
ms.assetid: bc3a2368-9edd-4748-9e6a-13cba79517ca
ms.openlocfilehash: 04b142cde12a9795f217559f875eef7fcec3b0f2
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88841428"
---
# <a name="collection-class-helpers"></a>Supporti delle classi Collection

Le classi di raccolta `CMap` , `CList` e `CArray` usano funzioni helper globali basate su modelli per scopi quali il confronto, la copia e la serializzazione degli elementi. Come parte dell'implementazione delle classi basate su `CMap` , `CList` e `CArray` , è necessario eseguire l'override di queste funzioni secondo necessità con le versioni personalizzate per il tipo di dati archiviati nella mappa, nell'elenco o nella matrice. Per informazioni sull'override di funzioni helper come `SerializeElements` , vedere l'articolo [Raccolte: come creare una raccolta indipendente dai tipi](../../mfc/how-to-make-a-type-safe-collection.md). Si noti che `ConstructElements` e `DestructElements` sono stati deprecati.

Il libreria Microsoft Foundation Class fornisce le funzioni globali seguenti in afxtempl. h per semplificare la personalizzazione delle classi di raccolte:

### <a name="collection-class-helpers"></a>Supporti delle classi Collection

|Nome|Descrizione|
|-|-|
|[CompareElements](#compareelements)|Indica se gli elementi sono uguali.|
|[CopyElements](#copyelements)|Copia gli elementi da una matrice a un'altra.|
|[DumpElements](#dumpelements)|Fornisce l'output di diagnostica orientato al flusso.|
|[HashKey](#hashkey)|Calcola una chiave hash.|
|[SerializeElements](#serializeelements)|Archivia o recupera gli elementi da o verso un archivio.|

## <a name="compareelements"></a><a name="compareelements"></a> CompareElements

Chiamato direttamente da [CList:: find] (CList-Class. MD # not_found. MD # clist__find e indirettamente da [cmap__lookup](cmap-class.md#lookup) e [cmap__operator &#91;&#93;](cmap-class.md#operator_at).

```
template<class TYPE, class ARG_TYPE>
BOOL AFXAPI
CompareElements(
    const TYPE* pElement1,
    const ARG_TYPE* pElement2);
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Tipo del primo elemento da confrontare.

*pElement1*<br/>
Puntatore al primo elemento da confrontare.

*ARG_TYPE*<br/>
Tipo del secondo elemento da confrontare.

*pElement2*<br/>
Puntatore al secondo elemento da confrontare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto a cui fa riferimento *pElement1* è uguale all'oggetto a cui punta *pElement2*; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Le `CMap` chiamate utilizzano la `CMap` *chiave* dei parametri del modello e *ARG_KEY*.

L'implementazione predefinita restituisce il risultato del confronto tra * \* pElement1* e * \* pElement2*. Eseguire l'override di questa funzione in modo che confronti gli elementi in modo appropriato per l'applicazione.

Il linguaggio C++ definisce l'operatore di confronto ( `==` ) per i tipi semplici ( **`char`** , **`int`** , **`float`** e così via), ma non definisce un operatore di confronto per classi e strutture. Se si desidera utilizzare `CompareElements` o per creare un'istanza di una delle classi di raccolta che la utilizza, è necessario definire l'operatore di confronto o l'overload `CompareElements` con una versione che restituisce i valori appropriati.

### <a name="requirements"></a>Requisiti

   **Intestazione:** afxtempl.h

## <a name="copyelements"></a><a name="copyelements"></a> CopyElements

Questa funzione viene chiamata direttamente da [CArray:: Append](carray-class.md#append) e [CArray:: Copy](carray-class.md#copy).

```
template<class TYPE>
void AFXAPI CopyElements(
    TYPE* pDest,
    const TYPE* pSrc,
    INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo di elementi da copiare.

*pDest*<br/>
Puntatore alla destinazione in cui gli elementi verranno copiati.

*pSrc*<br/>
Puntatore all'origine degli elementi da copiare.

*nCount*<br/>
Numero di elementi da copiare.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita usa l'operatore di assegnazione semplice ( **=** ) per eseguire l'operazione di copia. Se il tipo che viene copiato non dispone di un operator= in overload, l'implementazione predefinita esegue una copia bit per bit.

Per informazioni sull'implementazione di questa e di altre funzioni di supporto, vedere l'articolo [Raccolte: come creare una raccolta indipendente dai tipi](../how-to-make-a-type-safe-collection.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxtempl. h

## <a name="dumpelements"></a><a name="dumpelements"></a> DumpElements

Fornisce l'output di diagnostica orientato al flusso in formato testo per gli elementi della raccolta quando ne viene eseguito l'override.

```
template<class TYPE>
void  AFXAPI DumpElements(
    CDumpContext& dc,
    const TYPE* pElements,
    INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*DC*<br/>
Contesto di dump per gli elementi di dump.

*TYPE*<br/>
Parametro di modello che specifica il tipo degli elementi.

*pEle*<br/>
Puntatore agli elementi di cui eseguire il dump.

*nCount*<br/>
Numero di elementi di cui eseguire il dump.

### <a name="remarks"></a>Osservazioni

Le `CArray::Dump` `CList::Dump` funzioni, e `CMap::Dump` chiamano questo se la profondità del dump è maggiore di 0.

L'implementazione predefinita non esegue alcuna operazione. Se gli elementi della raccolta sono derivati da `CObject` , l'override in genere scorre gli elementi della raccolta, chiamando `Dump` per ogni elemento a sua volta.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxtempl. h

## <a name="hashkey"></a><a name="hashkey"></a> HashKey

Calcola un valore hash per la chiave specificata.

```
template<class ARG_KEY>
AFX_INLINE UINT AFXAPI HashKey(ARG_KEY  key);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo di dati utilizzato per accedere alle chiavi della mappa.

*key*<br/>
Chiave il cui valore hash deve essere calcolato.

### <a name="return-value"></a>Valore restituito

Valore hash della chiave.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata direttamente da [CMap:: RemoveKey](cmap-class.md#removekey) e indirettamente da [CMap:: Lookup](cmap-class.md#lookup) e [CMap:: operator &#91;&#93;](cmap-class.md#operator_at).

L'implementazione predefinita crea un valore hash spostando la *chiave* a destra di quattro posizioni. Eseguire l'override di questa funzione in modo che restituisca i valori hash appropriati per l'applicazione.

### <a name="example"></a>Esempio

```cpp
template <> UINT AFXAPI HashKey(unsigned __int64 key)
{
   // Generate the hash value by XORing the lower 32 bits of the number
   // with the upper 32 bits
   return(UINT(key) ^ UINT(key >> 32));
}
```

### <a name="requirements"></a>Requisiti

  **Intestazione** afxtempl. h

## <a name="serializeelements"></a><a name="serializeelements"></a> SerializeElements

[CArray](carray-class.md), [CList](clist-class.md)e [CMap](cmap-class.md) chiamano questa funzione per serializzare gli elementi.

```
template<class TYPE>
void AFXAPI SerializeElements(CArchive& ar, TYPE* pElements, INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*TYPE*<br/>
Parametro di modello che specifica il tipo degli elementi.

*AR*<br/>
Oggetto Archive da cui archiviare o.

*pEle*<br/>
Puntatore agli elementi da archiviare.

*nCount*<br/>
Numero di elementi da archiviare

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita esegue una lettura o scrittura bit per bit.

Per informazioni sull'implementazione di questa e di altre funzioni di supporto, vedere l'articolo [Raccolte: come creare una raccolta indipendente dai tipi](../how-to-make-a-type-safe-collection.md).

### <a name="example"></a>Esempio

Vedere l'esempio nell'articolo [Raccolte: come creare una raccolta indipendente dai tipi](../how-to-make-a-type-safe-collection.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxtempl. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Classe CMap](cmap-class.md)<br/>
[Classe CList](clist-class.md)<br/>
[CArray (classe)](carray-class.md)
