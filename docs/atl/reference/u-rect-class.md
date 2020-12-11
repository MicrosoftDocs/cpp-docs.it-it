---
description: 'Altre informazioni su: _U_RECT Class'
title: Classe _U_RECT
ms.date: 11/04/2016
f1_keywords:
- ATL::_U_RECT
- _U_RECT
- ATL._U_RECT
helpviewer_keywords:
- U_RECT class
- _U_RECT class
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
ms.openlocfilehash: b3720107d1b64f930b4c64dff269de041d9b928c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157607"
---
# <a name="_u_rect-class"></a>Classe _U_RECT

Questa classe di adattatori di argomenti consente di `RECT` passare puntatori o riferimenti a una funzione implementata in termini di puntatori.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class _U_RECT
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[_U_RECT:: _U_RECT](#_u_rect___u_rect)|Costruttore.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[_U_RECT:: m_lpRect](#_u_rect__m_lprect)|Puntatore a un oggetto `RECT` .|

## <a name="remarks"></a>Commenti

La classe definisce due overload del costruttore: uno accetta un argomento **&Rect** e l'altro accetta un `LPRECT` argomento. Il primo costruttore archivia l'indirizzo dell'argomento di riferimento nel singolo membro dati della classe [m_lpRect](#_u_rect__m_lprect). L'argomento per il costruttore del puntatore viene archiviato direttamente senza conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="_u_rectm_lprect"></a><a name="_u_rect__m_lprect"></a> _U_RECT:: m_lpRect

La classe include il valore passato a uno dei relativi costruttori come `LPRECT` membro dati pubblico.

```
LPRECT m_lpRect;
```

## <a name="_u_rect_u_rect"></a><a name="_u_rect___u_rect"></a> _U_RECT:: _U_RECT

L'indirizzo dell'argomento di riferimento viene archiviato nel singolo membro dati della classe [m_lpRect](#_u_rect__m_lprect).

```
_U_RECT(RECT& rc);
_U_RECT(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*RC*<br/>
Riferimento `RECT`.

*lpRect*<br/>
`RECT`Puntatore.

### <a name="remarks"></a>Commenti

L'argomento per il costruttore del puntatore viene archiviato direttamente senza conversione.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
