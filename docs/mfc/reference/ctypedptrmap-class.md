---
title: Classe CTypedPtrMap
ms.date: 11/04/2016
f1_keywords:
- CTypedPtrMap
- AFXTEMPL/CTypedPtrMap
- AFXTEMPL/CTypedPtrMap::GetNextAssoc
- AFXTEMPL/CTypedPtrMap::Lookup
- AFXTEMPL/CTypedPtrMap::RemoveKey
- AFXTEMPL/CTypedPtrMap::SetAt
helpviewer_keywords:
- CTypedPtrMap [MFC], GetNextAssoc
- CTypedPtrMap [MFC], Lookup
- CTypedPtrMap [MFC], RemoveKey
- CTypedPtrMap [MFC], SetAt
ms.assetid: 9f377385-c6e9-4471-8b40-8fe220c50164
ms.openlocfilehash: 410f0101fd0f8cda271fe0f2353b06b9e8d773b8
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81754369"
---
# <a name="ctypedptrmap-class"></a>Classe CTypedPtrMap

Fornisce un "wrapper" indipendente dai tipi per gli oggetti delle classi mappa di puntatori `CMapPtrToPtr`, `CMapPtrToWord`, `CMapWordToPtr`e `CMapStringToPtr`.

## <a name="syntax"></a>Sintassi

```
template<class BASE_CLASS, class KEY, class VALUE>
class CTypedPtrMap : public BASE_CLASS
```

#### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Classe base della classe della mappa del puntatore tipizzata; deve essere una classe `CMapPtrToPtr` `CMapPtrToWord`della `CMapWordToPtr`mappa `CMapStringToPtr`del puntatore ( , , , o ).

*Chiave*<br/>
Classe dell'oggetto utilizzata come chiave della mappa.

*Valore*<br/>
Classe dell'oggetto memorizzato nella mappa.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTypedPtrMap::GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CTypedPtrMap::Ricerca](#lookup)|Restituisce `KEY` un `VALUE`oggetto basato su un oggetto .|
|[CTypedPtrMap::RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CTypedPtrMap::SetAt](#setat)|Inserisce un elemento nella mappa; sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CTypedPtrMap::operatore \[\]](#operator_at)|Inserisce un elemento nella mappa.|

## <a name="remarks"></a>Osservazioni

Quando si `CTypedPtrMap`utilizza , la funzionalità di controllo dei tipi di C, consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.

Poiché `CTypedPtrMap` tutte le funzioni sono inline, l'utilizzo di questo modello non influisce in modo significativo sulle dimensioni o sulla velocità del codice.

Per ulteriori informazioni `CTypedPtrMap`sull'utilizzo di , vedere gli articoli [Raccolte](../../mfc/collections.md) e [classi basate su modelli](../../mfc/template-based-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BASE_CLASS`

`CTypedPtrMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="ctypedptrmapgetnextassoc"></a><a name="getnextassoc"></a>CTypedPtrMap::GetNextAssoc

Recupera l'elemento `rNextPosition`della mappa `rNextPosition` in , quindi viene aggiornato per fare riferimento all'elemento successivo nella mappa.

```cpp
void GetNextAssoc(
    POSITION& rPosition,
    KEY& rKey,
    VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*rPosizione*<br/>
Specifica un riferimento a un valore POSITION `GetNextAssoc` `BASE_CLASS`restituito da una chiamata precedente o **::GetStartPosition.**

*Chiave*<br/>
Parametro di modello che specifica il tipo delle chiavi della mappa.

*Rkey*<br/>
Specifica la chiave restituita dell'elemento recuperato.

*Valore*<br/>
Parametro di modello che specifica il tipo dei valori della mappa.

*Rvalue*<br/>
Specifica il valore restituito dell'elemento recuperato.

### <a name="remarks"></a>Osservazioni

Questa funzione è particolarmente utile per scorrere tutti gli elementi nella mappa. Si noti che la sequenza di posizione non è necessariamente la stessa della sequenza di valori chiave.

Se l'elemento recuperato è l'ultimo nella `rNextPosition` mappa, il nuovo valore di è impostato su NULL.

Questa funzione inline chiama `BASE_CLASS` **::GetNextAssoc**.

## <a name="ctypedptrmaplookup"></a><a name="lookup"></a>CTypedPtrMap::Ricerca

`Lookup`utilizza un algoritmo hash per trovare rapidamente l'elemento della mappa con una chiave che corrisponde esattamente.

```
BOOL Lookup(BASE_CLASS ::BASE_ARG_KEY key, VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Parametro di modello che specifica la classe di base della classe della mappa.

*key*<br/>
Chiave dell'elemento da cercare.

*Valore*<br/>
Parametro di modello che specifica il tipo di valori archiviati in questa mappa.

*Rvalue*<br/>
Specifica il valore restituito dell'elemento recuperato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione inline chiama `BASE_CLASS` **::Lookup**.

## <a name="ctypedptrmapoperator--"></a><a name="operator_at"></a>CTypedPtrMap::operator [ ]

Questo operatore può essere utilizzato solo sul lato sinistro di un'istruzione di assegnazione (un l-value).

```
VALUE& operator[ ](base_class ::base_arg_key key);
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Parametro di modello che specifica il tipo di valori archiviati in questa mappa.

*BASE_CLASS*<br/>
Parametro di modello che specifica la classe di base della classe della mappa.

*key*<br/>
Chiave dell'elemento da cercare o creare nella mappa.

### <a name="remarks"></a>Osservazioni

Se non è presente alcun elemento della mappa con la chiave specificata, viene creato un nuovo elemento. Non esiste un "lato destro" (r-value) equivalente a questo operatore perché è possibile che una chiave non venga trovata nella mappa. Utilizzare `Lookup` la funzione membro per il recupero degli elementi.

## <a name="ctypedptrmapremovekey"></a><a name="removekey"></a>CTypedPtrMap::RemoveKey

Questa funzione `BASE_CLASS`membro chiama **::RemoveKey**.

```
BOOL RemoveKey(KEY key);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Parametro di modello che specifica il tipo delle chiavi della mappa.

*key*<br/>
Chiave per l'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimossa correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CMapStringToOb::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey).

## <a name="ctypedptrmapsetat"></a><a name="setat"></a>CTypedPtrMap::SetAt

Questa funzione `BASE_CLASS`membro chiama **::SetAt**.

```cpp
void SetAt(KEY key, VALUE newValue);
```

### <a name="parameters"></a>Parametri

*Chiave*<br/>
Parametro di modello che specifica il tipo delle chiavi della mappa.

*key*<br/>
Specifica il valore della chiave di newValue.

*newValue*<br/>
Specifica il puntatore all'oggetto che è il valore del nuovo elemento.

### <a name="remarks"></a>Osservazioni

Per osservazioni più dettagliate, vedere [CMapStringToOb::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat).

## <a name="see-also"></a>Vedere anche

[Raccolta di campioni MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)<br/>
[Classe CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)<br/>
[CMapWordToPtr (classe)](../../mfc/reference/cmapwordtoptr-class.md)<br/>
[CMapStringToPtr (classe)](../../mfc/reference/cmapstringtoptr-class.md)
