---
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
ms.openlocfilehash: 825f79190c6f68cd1372154e4e02f430f545aa48
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330275"
---
# <a name="cwintraitsor-class"></a>Classe CWinTraitsOR

Questa classe fornisce un metodo per standardizzare gli stili utilizzati durante la creazione di un oggetto finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <DWORD t_dwStyle = 0,
          DWORD t_dwExStyle = 0,
          class TWinTraits = CControlWinTraits>
class CWinTraitsOR
```

#### <a name="parameters"></a>Parametri

*t_dwStyle*<br/>
Stili di finestra predefiniti.

*t_dwExStyle*<br/>
Stili di finestra estesa predefiniti.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinTraitsOR::GetWndExStyle](#getwndexstyle)|Recupera gli stili estesi `CWinTraitsOR` per l'oggetto.|
|[CWinTraitsOR::GetWndStyle](#getwndstyle)|Recupera gli stili standard `CWinTraitsOR` per l'oggetto.|

## <a name="remarks"></a>Osservazioni

Questa classe [traits](../../atl/understanding-window-traits.md) della finestra fornisce un metodo semplice per standardizzare gli stili utilizzati per la creazione di un oggetto finestra ATL. Utilizzare una specializzazione di questa classe come parametro di modello per [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un'altra delle classi finestra di ATL per specificare il set minimo di stili standard ed estesi da utilizzare per le istanze di tale classe finestra.

Utilizzare una specializzazione di questo modello se si desidera assicurarsi che determinati stili vengano impostati per tutte le istanze della classe della finestra, consentendo l'impostazione di altri stili in base all'istanza nella chiamata a [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create).

Se si desidera fornire stili di finestra predefiniti che verranno utilizzati `CWindowImpl::Create`solo quando non sono specificati altri stili nella chiamata a , utilizzare invece [CWinTraits.](../../atl/reference/cwintraits-class.md)

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="cwintraitsorgetwndstyle"></a><a name="getwndstyle"></a>CWinTraitsOR::GetWndStyle

Chiamare questa funzione per recuperare una combinazione (utilizzando l'operatore logico OR) degli stili standard dell'oggetto `CWinTraits` e degli stili predefiniti specificati da *t_dwStyle*.

```
static DWORD GetWndStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Stili utilizzati per la creazione di una finestra.

### <a name="return-value"></a>Valore restituito

Combinazione di stili passati in *dwStyle* e `t_dwStyle`quelli predefiniti specificati da , utilizzando l'operatore logico OR.

## <a name="cwintraitsorgetwndexstyle"></a><a name="getwndexstyle"></a>CWinTraitsOR::GetWndExStyle

Chiamare questa funzione per recuperare una combinazione (utilizzando l'operatore logico OR) degli stili estesi dell'oggetto `CWinTraits` e degli stili predefiniti specificati da `t_dwStyle`.

```
static DWORD GetWndExStyle(DWORD dwExStyle);
```

### <a name="parameters"></a>Parametri

*DwExStyle (in stile dwExStyle)*<br/>
Stili estesi utilizzati per la creazione di una finestra.

### <a name="return-value"></a>Valore restituito

Combinazione di stili estesi passati in *dwExStyle* `t_dwExStyle`e quelli predefiniti specificati da , utilizzando l'operatore logico OR

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Informazioni sui tratti delle finestreUnderstanding Window Traits](../../atl/understanding-window-traits.md)
