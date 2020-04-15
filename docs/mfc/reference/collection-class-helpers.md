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
ms.openlocfilehash: 05fe49a4d8e6de92c584d40f3871f3efb906c7c8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374820"
---
# <a name="collection-class-helpers"></a>Supporti delle classi Collection

Le classi `CMap` `CList`di `CArray` raccolta , , e utilizzare funzioni di supporto globali basate su modelli per scopi quali il confronto, la copia e la serializzazione di elementi. Come parte dell'implementazione `CMap`di `CList`classi `CArray`basate su , e , è necessario eseguire l'override di queste funzioni in base alle esigenze con versioni personalizzate per il tipo di dati archiviati nella mappa, nell'elenco o nella matrice. Per informazioni sull'override di `SerializeElements`funzioni di supporto quali , vedere l'articolo [Raccolte: creazione](../../mfc/how-to-make-a-type-safe-collection.md)di una raccolta indipendente dai tipi . Si `ConstructElements` noti che e `DestructElements` sono stati deprecati.

La libreria Microsoft Foundation Class fornisce le seguenti funzioni globali in afxtempl.h che consentono di personalizzare le classi di raccolta:

### <a name="collection-class-helpers"></a>Supporti delle classi Collection

|||
|-|-|
|[CompareElements](#compareelements)|Indica se gli elementi sono uguali.|
|[CopyElements](#copyelements)|Copia gli elementi da una matrice a un'altra.|
|[DumpElements](#dumpelements)|Fornisce l'output di diagnostica orientato al flusso.|
|[HashKey](#hashkey)|Calcola una chiave hash.|
|[SerializeElements](#serializeelements)|Archivia o recupera elementi da o verso un archivio.|

## <a name="compareelements"></a><a name="compareelements"></a>CompareElements

Chiamato direttamente da [CList::Find](clist-class.md'not_found.md'clist__find e indirettamente da [cmap__lookup](cmap-class.md#lookup) e [cmap__operator &#91;&#93;](cmap-class.md#operator_at).

```
template<class TYPE, class ARG_TYPE>
BOOL AFXAPI
CompareElements(
    const TYPE* pElement1,
    const ARG_TYPE* pElement2);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Tipo del primo elemento da confrontare.

*pElemento1*<br/>
Puntatore al primo elemento da confrontare.

*ARG_TYPE*<br/>
Tipo del secondo elemento da confrontare.

*pElemento2*<br/>
Puntatore al secondo elemento da confrontare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'oggetto a cui punta *pElement1* è uguale all'oggetto a cui punta *pElement2*; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Le `CMap` chiamate `CMap` utilizzano i parametri del modello *KEY* e *ARG_KEY*.

L'implementazione predefinita restituisce il risultato del confronto di * \*pElement1* e * \*pElement2*. Eseguire l'override di questa funzione in modo che confronti gli elementi in modo appropriato per l'applicazione.

L'operatore di confronto `==`( ) per i tipi semplici (**char**, **int**, **float**e così via, il linguaggio C, viene definito, ma non viene definito un operatore di confronto per classi e strutture. Se si desidera `CompareElements` utilizzare o creare un'istanza di una delle classi di `CompareElements` raccolta che lo utilizza, è necessario definire l'operatore di confronto o l'overload con una versione che restituisce i valori appropriati.

### <a name="requirements"></a>Requisiti

   **Intestazione:** afxtempl.h

## <a name="copyelements"></a><a name="copyelements"></a>CopiaElementi

Questa funzione viene chiamata direttamente da [CArray::Append](carray-class.md#append) e [CArray::Copy](carray-class.md#copy).

```
template<class TYPE>
void AFXAPI CopyElements(
    TYPE* pDest,
    const TYPE* pSrc,
    INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo di elementi da copiare.

*pDest*<br/>
Puntatore alla destinazione in cui gli elementi verranno copiati.

*pSrc*<br/>
Puntatore all'origine degli elementi da copiare.

*nConteggio*<br/>
Numero di elementi da copiare.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita utilizza **=** l'operatore di assegnazione semplice ( ) per eseguire l'operazione di copia. Se il tipo che viene copiato non dispone di un operator= in overload, l'implementazione predefinita esegue una copia bit per bit.

Per informazioni sull'implementazione di questa e di altre funzioni di supporto, vedere l'articolo [Raccolte: come creare una](../how-to-make-a-type-safe-collection.md)raccolta indipendente dai tipi .

### <a name="requirements"></a>Requisiti

  **Intestazione** afxtempl.h

## <a name="dumpelements"></a><a name="dumpelements"></a>DumpElements

Fornisce l'output di diagnostica orientato al flusso in formato testo per gli elementi della raccolta quando sottoposto a override.

```
template<class TYPE>
void  AFXAPI DumpElements(
    CDumpContext& dc,
    const TYPE* pElements,
    INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
Contesto di dump per gli elementi di dump.

*TIPO*<br/>
Parametro di modello che specifica il tipo degli elementi.

*pElements (informazioni in base al t*<br/>
Puntatore agli elementi da eseguire il dump.

*nConteggio*<br/>
Numero di elementi da scaricare.

### <a name="remarks"></a>Osservazioni

Le `CArray::Dump` `CList::Dump`funzioni `CMap::Dump` , e chiamano this se la profondità del dump è maggiore di 0.

L'implementazione predefinita non esegue alcuna operazione. Se gli elementi dell'insieme `CObject`sono derivati da , l'override `Dump` in genere scorrerà gli elementi della raccolta, chiamando per ogni elemento a sua volta.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxtempl.h

## <a name="hashkey"></a><a name="hashkey"></a>HashKey

Calcola un valore hash per la chiave specificata.

```
template<class ARG_KEY>
AFX_INLINE UINT AFXAPI HashKey(ARG_KEY  key);
```

### <a name="parameters"></a>Parametri

*ARG_KEY*<br/>
Parametro di modello che specifica il tipo di dati utilizzato per accedere alle chiavi della mappa.

*Chiave*<br/>
Chiave di cui deve essere calcolato il valore hash.

### <a name="return-value"></a>Valore restituito

Valore hash della chiave.

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata direttamente da [CMap::RemoveKey](cmap-class.md#removekey) e indirettamente da [CMap::Lookup](cmap-class.md#lookup) e [CMap::Operator &#91;&#93;](cmap-class.md#operator_at).

L'implementazione predefinita crea un valore hash spostando *la chiave* a destra di quattro posizioni. Eseguire l'override di questa funzione in modo che restituisca valori hash appropriati per l'applicazione.

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

  **Intestazione** afxtempl.h

## <a name="serializeelements"></a><a name="serializeelements"></a>SerializeElements

[CArray](carray-class.md), [CList](clist-class.md)e [CMap](cmap-class.md) chiamano questa funzione per serializzare gli elementi.

```
template<class TYPE>
void AFXAPI SerializeElements(CArchive& ar, TYPE* pElements, INT_PTR nCount);
```

### <a name="parameters"></a>Parametri

*TIPO*<br/>
Parametro di modello che specifica il tipo degli elementi.

*Ar*<br/>
Oggetto archivio da archiviare o da cui archiviare.

*pElements (informazioni in base al t*<br/>
Puntatore agli elementi archiviati.

*nConteggio*<br/>
Numero di elementi da archiviare

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita esegue una lettura o scrittura bit per bit.

Per informazioni sull'implementazione di questa e di altre funzioni di supporto, vedere l'articolo [Raccolte: come creare una](../how-to-make-a-type-safe-collection.md)raccolta indipendente dai tipi .

### <a name="example"></a>Esempio

Vedere l'esempio nell'articolo [Raccolte: come creare una](../how-to-make-a-type-safe-collection.md)raccolta indipendente dai tipi .

### <a name="requirements"></a>Requisiti

  **Intestazione** afxtempl.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Classe CMap](cmap-class.md)<br/>
[Classe CList](clist-class.md)<br/>
[Classe CArray](carray-class.md)
