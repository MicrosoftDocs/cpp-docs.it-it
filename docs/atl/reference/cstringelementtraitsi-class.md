---
title: Classe CStringElementTraitsI | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CStringElementTraitsI
- ATLCOLL/ATL::CStringElementTraitsI
- ATLCOLL/ATL::CStringElementTraitsI::INARGTYPE
- ATLCOLL/ATL::CStringElementTraitsI::OUTARGTYPE
- ATLCOLL/ATL::CStringElementTraitsI::CompareElements
- ATLCOLL/ATL::CStringElementTraitsI::CompareElementsOrdered
- ATLCOLL/ATL::CStringElementTraitsI::Hash
dev_langs:
- C++
helpviewer_keywords:
- CStringElementTraitsI class
ms.assetid: c23f92b1-91e5-400f-96ed-258b02622b7a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 29df4bd550a5de232b5ced0510e8dbfc68e59d42
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50060754"
---
# <a name="cstringelementtraitsi-class"></a>Classe CStringElementTraitsI

Questa classe fornisce funzioni statiche relative alle stringhe negli oggetti di classe di raccolta. È simile a [CStringElementTraits](../../atl/reference/cstringelementtraits-class.md), ma esegue i confronti tra maiuscole e minuscole.

## <a name="syntax"></a>Sintassi

```
template <typename T, class CharTraits = CDefaultCharTraits<T ::XCHAR>>
class CStringElementTraitsI : public CElementTraitsBase<T>
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati da archiviare nella raccolta.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringElementTraitsI::INARGTYPE](#inargtype)|Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.|
|[CStringElementTraitsI::OUTARGTYPE](#outargtype)|Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CStringElementTraitsI::CompareElements](#compareelements)|Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza, ignorando tra maiuscole e minuscole.|
|[CStringElementTraitsI::CompareElementsOrdered](#compareelementsordered)|Chiamare questa funzione statica per confrontare due elementi della stringa, ignorando tra maiuscole e minuscole.|
|[CStringElementTraitsI::Hash](#hash)|Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.|

## <a name="remarks"></a>Note

Questa classe fornisce funzioni statiche per il confronto di stringhe e per la creazione di un valore hash. Queste funzioni sono utili quando si usa una classe di raccolta per archiviare i dati basati su stringa. Uso [CStringRefElementTraits](../../atl/reference/cstringrefelementtraits-class.md) quando gli oggetti stringa devono essere con affrontati come riferimenti.

Per altre informazioni, vedere [classi Collection ATL](../../atl/atl-collection-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)

`CStringElementTraitsI`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcoll. h

##  <a name="compareelements"></a>  CStringElementTraitsI::CompareElements

Chiamare questa funzione statica per confrontare due elementi della stringa per verificarne l'uguaglianza, ignorando tra maiuscole e minuscole.

```
static bool CompareElements(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Il primo elemento di stringa.

*str2*<br/>
Il secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce true se gli elementi sono uguali e false in caso contrario.

### <a name="remarks"></a>Note

I confronti sono maiuscole e minuscole.

##  <a name="compareelementsordered"></a>  CStringElementTraitsI::CompareElementsOrdered

Chiamare questa funzione statica per confrontare due elementi della stringa, ignorando tra maiuscole e minuscole.

```
static int CompareElementsOrdered(INARGTYPE str1, INARGTYPE str2) throw();
```

### <a name="parameters"></a>Parametri

*str1*<br/>
Il primo elemento di stringa.

*str2*<br/>
Il secondo elemento di stringa.

### <a name="return-value"></a>Valore restituito

Zero se le stringhe sono identiche, < 0 se *str1* è minore di *str2*, o > 0 se *str1* è maggiore di quella *str2*. Il [CStringT::Compare](../../atl-mfc-shared/reference/cstringt-class.md#compare) metodo viene utilizzato per eseguire i confronti.

### <a name="remarks"></a>Note

I confronti sono maiuscole e minuscole.

##  <a name="hash"></a>  CStringElementTraitsI::Hash

Chiamare questa funzione statica per calcolare un valore hash per l'elemento di stringa specificata.

```
static ULONG Hash(INARGTYPE str) throw();
```

### <a name="parameters"></a>Parametri

*str*<br/>
L'elemento di stringa.

### <a name="return-value"></a>Valore restituito

Restituisce un valore hash, calcolato usando il contenuto della stringa.

##  <a name="inargtype"></a>  CStringElementTraitsI::INARGTYPE

Il tipo di dati da utilizzare per l'aggiunta di elementi per l'oggetto di classe di raccolta.

```
typedef T::PCXSTR INARGTYPE;
```

##  <a name="outargtype"></a>  CStringElementTraitsI::OUTARGTYPE

Il tipo di dati da utilizzare per recuperare gli elementi dall'oggetto di classe della raccolta.

```
typedef T& OUTARGTYPE;
```

## <a name="see-also"></a>Vedere anche

[Classe CElementTraitsBase](../../atl/reference/celementtraitsbase-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Classe CStringElementTraits](../../atl/reference/cstringelementtraits-class.md)
