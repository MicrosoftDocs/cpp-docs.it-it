---
title: classe _U_RECT
ms.date: 11/04/2016
f1_keywords:
- ATL::_U_RECT
- _U_RECT
- ATL._U_RECT
helpviewer_keywords:
- U_RECT class
- _U_RECT class
ms.assetid: 5f880a2d-09cf-4327-bf32-a3519c4dcd63
ms.openlocfilehash: 8a4d5b2a770b3f0ecfe10be0fbad22a702aa0531
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81325806"
---
# <a name="_u_rect-class"></a>classe _U_RECT

Questa classe di `RECT` adattatori di argomento consente di passare puntatori o riferimenti a una funzione implementata in termini di puntatori.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

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
|[_U_RECT::m_lpRect](#_u_rect__m_lprect)|Puntatore `RECT`a un oggetto .|

## <a name="remarks"></a>Osservazioni

La classe definisce due overload del costruttore: uno accetta un `LPRECT` argomento&**RECT** e l'altro accetta un argomento. Il primo costruttore archivia l'indirizzo dell'argomento di riferimento nel singolo membro dati della classe, [m_lpRect](#_u_rect__m_lprect). L'argomento per il costruttore del puntatore viene archiviato direttamente senza conversione.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="_u_rectm_lprect"></a><a name="_u_rect__m_lprect"></a>_U_RECT::m_lpRect

La classe contiene il valore passato a uno `LPRECT` dei relativi costruttori come membro dati pubblico.

```
LPRECT m_lpRect;
```

## <a name="_u_rect_u_rect"></a><a name="_u_rect___u_rect"></a>_U_RECT::_U_RECT

L'indirizzo dell'argomento di riferimento viene archiviato nel singolo membro dati della classe, [m_lpRect](#_u_rect__m_lprect).

```
_U_RECT(RECT& rc);
_U_RECT(LPRECT lpRect);
```

### <a name="parameters"></a>Parametri

*Rc*<br/>
Riferimento `RECT`.

*Lprect*<br/>
Un `RECT` puntatore.

### <a name="remarks"></a>Osservazioni

L'argomento per il costruttore del puntatore viene archiviato direttamente senza conversione.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
