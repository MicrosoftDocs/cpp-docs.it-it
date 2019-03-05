---
title: Classe u_rect
ms.date: 11/04/2016
f1_keywords:
- ATL::_U_RECT
- _U_RECT
- ATL._U_RECT
helpviewer_keywords:
- U_RECT class
- _U_RECT class
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
ms.openlocfilehash: 306092a00a1e119263f4563eea181d7d3ee2b4b2
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57326374"
---
# <a name="urect-class"></a>Classe u_rect

Classe dell'adattatore in questo argomento consente `RECT` puntatori o riferimenti da passare a una funzione che viene implementata in termini di puntatori.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class _U_RECT
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[_U_RECT::_U_RECT](#_u_rect___u_rect)|Costruttore.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[_U_RECT::m_lpRect](#_u_rect__m_lprect)|Puntatore a un `RECT`.|

## <a name="remarks"></a>Note

La classe definisce due overload del costruttore: uno accetta un **RECT &** argomento e l'altro accetta un `LPRECT` argomento. Il primo costruttore archivia l'indirizzo dell'argomento di riferimento nel membro dati della classe, [m_lpRect](#_u_rect__m_lprect). L'argomento del costruttore di puntatore verrà archiviato direttamente, senza conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="_u_rect__m_lprect"></a>  _U_RECT::m_lpRect

La classe contiene il valore passato a uno dei relativi costruttori come pubblica `LPRECT` (membro dati).

```
LPRECT m_lpRect;
```

##  <a name="_u_rect___u_rect"></a>  _U_RECT::_U_RECT

L'indirizzo dell'argomento di riferimento è archiviato nel membro dati della classe, [m_lpRect](#_u_rect__m_lprect).

```
_U_RECT(RECT& rc);
_U_RECT(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*rc*<br/>
Oggetto `RECT` riferimento.

*lpRect*<br/>
Oggetto `RECT` puntatore.

### <a name="remarks"></a>Note

L'argomento del costruttore di puntatore verrà archiviato direttamente, senza conversione.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
