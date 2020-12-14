---
description: 'Altre informazioni su: classe CTypedPtrMap'
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
ms.openlocfilehash: 25476a9195fe4a522ed31937dc1e2c5156ef6792
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344991"
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
Classe di base della classe della mappa del puntatore tipizzata; deve essere una classe della mappa del puntatore ( `CMapPtrToPtr` ,, `CMapPtrToWord` `CMapWordToPtr` o `CMapStringToPtr` ).

*KEY*<br/>
Classe dell'oggetto utilizzato come chiave per la mappa.

*VALUE*<br/>
Classe dell'oggetto archiviato nella mappa.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CTypedPtrMap:: GetNextAssoc](#getnextassoc)|Ottiene l'elemento successivo per l'iterazione.|
|[CTypedPtrMap:: Lookup](#lookup)|Restituisce un oggetto `KEY` basato su un oggetto `VALUE` .|
|[CTypedPtrMap:: RemoveKey](#removekey)|Rimuove un elemento specificato da una chiave.|
|[CTypedPtrMap:: SetAt](#setat)|Inserisce un elemento nella mappa. sostituisce un elemento esistente se viene trovata una chiave corrispondente.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[Operatore \[ CTypedPtrMap:: \]](#operator_at)|Inserisce un elemento nella mappa.|

## <a name="remarks"></a>Commenti

Quando si usa `CTypedPtrMap` , la funzionalità di controllo dei tipi C++ consente di eliminare gli errori causati da tipi di puntatore non corrispondenti.

Poiché tutte le `CTypedPtrMap` funzioni sono inline, l'uso di questo modello non influisce in modo significativo sulle dimensioni o sulla velocità del codice.

Per ulteriori informazioni sull'utilizzo di `CTypedPtrMap` , vedere gli articoli [raccolte](../../mfc/collections.md) e [classi basate su modello](../../mfc/template-based-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`BASE_CLASS`

`CTypedPtrMap`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxtempl.h

## <a name="ctypedptrmapgetnextassoc"></a><a name="getnextassoc"></a> CTypedPtrMap:: GetNextAssoc

Recupera l'elemento della mappa in corrispondenza di `rNextPosition` , quindi aggiorna `rNextPosition` per fare riferimento all'elemento successivo nella mappa.

```cpp
void GetNextAssoc(
    POSITION& rPosition,
    KEY& rKey,
    VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*rPosition*<br/>
Specifica un riferimento a un valore di posizione restituito da una `GetNextAssoc` chiamata precedente o `BASE_CLASS` **:: GetStartPosition** .

*KEY*<br/>
Parametro di modello che specifica il tipo di chiavi della mappa.

*rKey*<br/>
Specifica la chiave restituita dell'elemento recuperato.

*VALUE*<br/>
Parametro di modello che specifica il tipo dei valori della mappa.

*rValue*<br/>
Specifica il valore restituito dell'elemento recuperato.

### <a name="remarks"></a>Commenti

Questa funzione è particolarmente utile per scorrere tutti gli elementi della mappa. Si noti che la sequenza di posizione non è necessariamente identica alla sequenza di valori di chiave.

Se l'elemento recuperato è l'ultimo oggetto della mappa, il nuovo valore di `rNextPosition` viene impostato su null.

Questa funzione inline chiama `BASE_CLASS` **:: GetNextAssoc**.

## <a name="ctypedptrmaplookup"></a><a name="lookup"></a> CTypedPtrMap:: Lookup

`Lookup` Usa un algoritmo di hashing per trovare rapidamente l'elemento della mappa con una chiave che corrisponda esattamente a.

```
BOOL Lookup(BASE_CLASS ::BASE_ARG_KEY key, VALUE& rValue) const;
```

### <a name="parameters"></a>Parametri

*BASE_CLASS*<br/>
Parametro di modello che specifica la classe di base della classe della mappa.

*key*<br/>
Chiave dell'elemento da cercare.

*VALUE*<br/>
Parametro di modello che specifica il tipo di valori archiviati in questa mappa.

*rValue*<br/>
Specifica il valore restituito dell'elemento recuperato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'elemento è stato trovato. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Questa funzione inline chiama `BASE_CLASS` **:: Lookup**.

## <a name="ctypedptrmapoperator--"></a><a name="operator_at"></a> CTypedPtrMap:: operator []

Questo operatore può essere usato solo sul lato sinistro di un'istruzione di assegnazione (un l-value).

```
VALUE& operator[ ](base_class ::base_arg_key key);
```

### <a name="parameters"></a>Parametri

*VALUE*<br/>
Parametro di modello che specifica il tipo di valori archiviati in questa mappa.

*BASE_CLASS*<br/>
Parametro di modello che specifica la classe di base della classe della mappa.

*key*<br/>
Chiave dell'elemento da cercare o creare nella mappa.

### <a name="remarks"></a>Commenti

Se non è presente alcun elemento map con la chiave specificata, viene creato un nuovo elemento. Non esiste un "lato destro" (r-value) equivalente a questo operatore perché esiste la possibilità che una chiave non venga trovata nella mappa. Usare la `Lookup` funzione membro per il recupero di elementi.

## <a name="ctypedptrmapremovekey"></a><a name="removekey"></a> CTypedPtrMap:: RemoveKey

Questa funzione membro chiama `BASE_CLASS` **:: RemoveKey**.

```
BOOL RemoveKey(KEY key);
```

### <a name="parameters"></a>Parametri

*KEY*<br/>
Parametro di modello che specifica il tipo di chiavi della mappa.

*key*<br/>
Chiave per l'elemento da rimuovere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la voce è stata trovata e rimossa correttamente. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Per osservazioni più dettagliate, vedere [CMapStringToOb:: RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey).

## <a name="ctypedptrmapsetat"></a><a name="setat"></a> CTypedPtrMap:: SetAt

Questa funzione membro chiama `BASE_CLASS` **:: SetAt**.

```cpp
void SetAt(KEY key, VALUE newValue);
```

### <a name="parameters"></a>Parametri

*KEY*<br/>
Parametro di modello che specifica il tipo di chiavi della mappa.

*key*<br/>
Specifica il valore della chiave di newValue.

*newValue*<br/>
Specifica il puntatore all'oggetto che rappresenta il valore del nuovo elemento.

### <a name="remarks"></a>Commenti

Per osservazioni più dettagliate, vedere [CMapStringToOb:: SetAt](../../mfc/reference/cmapstringtoob-class.md#setat).

## <a name="see-also"></a>Vedi anche

[Esempio di raccolta MFC](../../overview/visual-cpp-samples.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CMapPtrToPtr](../../mfc/reference/cmapptrtoptr-class.md)<br/>
[Classe CMapPtrToWord](../../mfc/reference/cmapptrtoword-class.md)<br/>
[Classe CMapWordToPtr](../../mfc/reference/cmapwordtoptr-class.md)<br/>
[Classe CMapStringToPtr](../../mfc/reference/cmapstringtoptr-class.md)
