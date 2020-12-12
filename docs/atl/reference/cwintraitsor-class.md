---
description: 'Altre informazioni su: classe CWinTraitsOR'
title: Classe CWinTraitsOR
ms.date: 11/04/2016
f1_keywords:
- CWinTraitsOR
- ATLWIN/ATL::CWinTraitsOR
- ATLWIN/ATL::CWinTraitsOR::GetWndExStyle
- ATLWIN/ATL::CWinTraitsOR::GetWndStyle
helpviewer_keywords:
- CWinTraitsOR class
- window styles, default values for ATL
ms.assetid: 1eb7b1e8-a9bd-411b-a30a-35a8a10af989
ms.openlocfilehash: 1d0a7ff8a78ebbdc416bdace2a1ea1f0199c292f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140062"
---
# <a name="cwintraitsor-class"></a>Classe CWinTraitsOR

Questa classe fornisce un metodo per la standardizzazione degli stili utilizzati durante la creazione di un oggetto finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <DWORD t_dwStyle = 0,
          DWORD t_dwExStyle = 0,
          class TWinTraits = CControlWinTraits>
class CWinTraitsOR
```

#### <a name="parameters"></a>Parametri

*t_dwStyle*<br/>
Stili predefiniti della finestra.

*t_dwExStyle*<br/>
Stili predefiniti delle finestre estese.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWinTraitsOR:: GetWndExStyle](#getwndexstyle)|Recupera gli stili estesi per l' `CWinTraitsOR` oggetto.|
|[CWinTraitsOR:: GetWndStyle](#getwndstyle)|Recupera gli stili standard per l' `CWinTraitsOR` oggetto.|

## <a name="remarks"></a>Commenti

Questa classe di [tratti della finestra](../../atl/understanding-window-traits.md) fornisce un metodo semplice per la standardizzazione degli stili utilizzati per la creazione di un oggetto finestra ATL. Usare una specializzazione di questa classe come parametro di modello per [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un'altra delle classi finestra di ATL per specificare il set minimo di stili standard ed estesi da usare per le istanze di tale classe di finestra.

Utilizzare una specializzazione del modello se si desidera assicurarsi che determinati stili siano impostati per tutte le istanze della classe della finestra, consentendo allo stesso tempo l'impostazione di altri stili in base all'istanza nella chiamata a [CWindowImpl:: create](../../atl/reference/cwindowimpl-class.md#create).

Se si desidera fornire stili di finestra predefiniti che verranno utilizzati solo quando non vengono specificati altri stili nella chiamata a `CWindowImpl::Create` , utilizzare [CWinTraits](../../atl/reference/cwintraits-class.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="cwintraitsorgetwndstyle"></a><a name="getwndstyle"></a> CWinTraitsOR:: GetWndStyle

Chiamare questa funzione per recuperare una combinazione (usando l'operatore logico OR) degli stili standard dell' `CWinTraits` oggetto e gli stili predefiniti specificati da *t_dwStyle*.

```
static DWORD GetWndStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Stili utilizzati per la creazione di una finestra.

### <a name="return-value"></a>Valore restituito

Combinazione di stili passati in *dwStyle* e quelli predefiniti specificati da `t_dwStyle` , utilizzando l'operatore logico OR.

## <a name="cwintraitsorgetwndexstyle"></a><a name="getwndexstyle"></a> CWinTraitsOR:: GetWndExStyle

Chiamare questa funzione per recuperare una combinazione (usando l'operatore logico OR) degli stili estesi dell' `CWinTraits` oggetto e gli stili predefiniti specificati da `t_dwStyle` .

```
static DWORD GetWndExStyle(DWORD dwExStyle);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Stili estesi usati per la creazione di una finestra.

### <a name="return-value"></a>Valore restituito

Combinazione di stili estesi passati in *dwExStyle* e quelli predefiniti specificati da `t_dwExStyle` , utilizzando l'operatore logico OR.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Informazioni sui tratti della finestra](../../atl/understanding-window-traits.md)
