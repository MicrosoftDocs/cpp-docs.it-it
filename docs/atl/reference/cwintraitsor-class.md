---
title: Classe CWinTraitsOR | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CWinTraitsOR
- ATLWIN/ATL::CWinTraitsOR
- ATLWIN/ATL::CWinTraitsOR::GetWndExStyle
- ATLWIN/ATL::CWinTraitsOR::GetWndStyle
dev_langs:
- C++
helpviewer_keywords:
- CWinTraitsOR class
- window styles, default values for ATL
ms.assetid: 1eb7b1e8-a9bd-411b-a30a-35a8a10af989
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 48303c6115ac1d2314e3038556b8f98330a6182e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46062670"
---
# <a name="cwintraitsor-class"></a>Classe CWinTraitsOR

Questa classe fornisce un metodo per la standardizzazione con gli stili usati durante la creazione di un oggetto finestra.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
template <DWORD t_dwStyle = 0,
          DWORD t_dwExStyle = 0, 
          class TWinTraits = CControlWinTraits>
class CWinTraitsOR
```

#### <a name="parameters"></a>Parametri

*t_dwStyle*<br/>
Stili di finestra predefinito.

*t_dwExStyle*<br/>
Stili finestra estesi per impostazione predefinita.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinTraitsOR::GetWndExStyle](#getwndexstyle)|Recupera gli stili estesi per il `CWinTraitsOR` oggetto.|
|[CWinTraitsOR::GetWndStyle](#getwndstyle)|Recupera gli stili di standard per il `CWinTraitsOR` oggetto.|

## <a name="remarks"></a>Note

Ciò [tratti delle finestre](../../atl/understanding-window-traits.md) classe fornisce un metodo semplice per la standardizzazione con gli stili usati per la creazione di un oggetto di finestra ATL. Usare una specializzazione della classe come parametro di modello per [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un'altra delle classi di finestra di ATL per specificare il set minimo di stili estesi e standard da utilizzare per le istanze di tale classe della finestra.

Usare una specializzazione di questo modello se si desidera garantire che alcuni stili siano impostate per tutte le istanze della classe della finestra mentre altri devono essere impostate in una base per istanza nella chiamata a [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create).

Se si desidera fornire stili di finestra che verranno utilizzati solo se nessun altri stili vengono specificati nella chiamata a predefiniti `CWindowImpl::Create`, usare [CWinTraits](../../atl/reference/cwintraits-class.md) invece.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="getwndstyle"></a>  CWinTraitsOR::GetWndStyle

Chiamare questa funzione per recuperare una combinazione (tramite l'operatore OR logico) degli stili di standard di `CWinTraits` oggetto e gli stili predefiniti specificati da *t_dwStyle*.

```
static DWORD GetWndStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Stili utilizzati per la creazione di una finestra.

### <a name="return-value"></a>Valore restituito

Una combinazione degli stili passati *dwStyle* e il valore predefinito di quelli specificati dal `t_dwStyle`, usando l'operatore logico OR.

##  <a name="getwndexstyle"></a>  CWinTraitsOR::GetWndExStyle

Chiamare questa funzione per recuperare una combinazione (tramite l'operatore logico OR) degli stili estesi del `CWinTraits` oggetto e gli stili predefiniti specificati dal `t_dwStyle`.

```
static DWORD GetWndExStyle(DWORD dwExStyle);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Stili estesi utilizzati per la creazione di una finestra.

### <a name="return-value"></a>Valore restituito

Una combinazione degli stili estesi che vengono passati *dwExStyle* e quelle specificate dal predefinite `t_dwExStyle`, usando l'operatore logico OR

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[Informazioni sui tratti delle finestre](../../atl/understanding-window-traits.md)

