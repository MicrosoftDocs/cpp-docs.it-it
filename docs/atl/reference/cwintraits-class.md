---
description: 'Altre informazioni su: classe CWinTraits'
title: Classe CWinTraits
ms.date: 11/04/2016
f1_keywords:
- CWinTraits
- ATLWIN/ATL::CWinTraits
- ATLWIN/ATL::CWinTraits::GetWndExStyle
- ATLWIN/ATL::CWinTraits::GetWndStyle
helpviewer_keywords:
- CMDIChildWinTraits class
- window styles, default values for ATL
- CWinTraits class
- CFrameWinTraits class
- CControlWinTraits class
ms.assetid: f78f486e-6d9c-42c6-8e86-371e05aa7e59
ms.openlocfilehash: 3f23342cae58d70a602ebce1dcbe7efcddf36781
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140088"
---
# <a name="cwintraits-class"></a>Classe CWinTraits

Questa classe fornisce un metodo per la standardizzazione degli stili utilizzati durante la creazione di un oggetto finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <DWORD t_dwStyle = 0, DWORD t_dwExStyle = 0>  class CWinTraits
```

#### <a name="parameters"></a>Parametri

*t_dwStyle*<br/>
Stili predefiniti della finestra standard.

*t_dwExStyle*<br/>
Stili predefiniti delle finestre estese.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWinTraits:: GetWndExStyle](#getwndexstyle)|Statico Recupera gli stili estesi per l' `CWinTraits` oggetto.|
|[CWinTraits:: GetWndStyle](#getwndstyle)|Statico Recupera gli stili standard per l' `CWinTraits` oggetto.|

## <a name="remarks"></a>Commenti

Questa classe di [tratti della finestra](../../atl/understanding-window-traits.md) fornisce un metodo semplice per la standardizzazione degli stili utilizzati per la creazione di un oggetto finestra ATL. Usare una specializzazione di questa classe come parametro di modello per [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un'altra delle classi finestra di ATL per specificare gli stili standard e estesi predefiniti usati per le istanze di tale classe di finestra.

Utilizzare questo modello quando si desidera fornire stili di finestra predefiniti che verranno utilizzati solo quando nessun altro stile viene specificato nella chiamata a [CWindowImpl:: create](../../atl/reference/cwindowimpl-class.md#create).

ATL offre tre specializzazioni predefinite di questo modello per le combinazioni di stili di finestra usate di frequente:

- `CControlWinTraits`

   Progettato per una finestra di controllo standard. Vengono utilizzati gli stili standard seguenti: WS_CHILD, WS_VISIBLE, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Non sono disponibili stili estesi.

- `CFrameWinTraits`

   Progettato per una finestra cornice standard. Gli stili standard usati includono: WS_OVERLAPPEDWINDOW, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Gli stili estesi usati includono: WS_EX_APPWINDOW e WS_EX_WINDOWEDGE.

- `CMDIChildWinTraits`

   Progettato per una finestra figlio MDI standard. Gli stili standard usati includono: WS_OVERLAPPEDWINDOW, WS_CHILD, WS_VISIBLE, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Gli stili estesi usati includono: WS_EX_MDICHILD.

Per assicurarsi che determinati stili siano impostati per tutte le istanze della classe della finestra, consentendo in tal modo l'impostazione di altri stili in base all'istanza, usare invece [CWinTraitsOR](../../atl/reference/cwintraitsor-class.md) .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="cwintraitsgetwndstyle"></a><a name="getwndstyle"></a> CWinTraits:: GetWndStyle

Chiamare questa funzione per recuperare gli stili standard dell' `CWinTraits` oggetto.

```
static DWORD GetWndStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*dwStyle*<br/>
Stili standard utilizzati per la creazione di una finestra. Se *dwStyle* è 0, vengono restituiti i valori di stile del modello ( `t_dwStyle` ). Se *dwStyle* è diverso da zero, viene restituito *dwStyle* .

### <a name="return-value"></a>Valore restituito

Stili di finestra standard dell'oggetto.

## <a name="cwintraitsgetwndexstyle"></a><a name="getwndexstyle"></a> CWinTraits:: GetWndExStyle

Chiamare questa funzione per recuperare gli stili estesi dell' `CWinTraits` oggetto.

```
static DWORD GetWndExStyle(DWORD dwExStyle);
```

### <a name="parameters"></a>Parametri

*dwExStyle*<br/>
Stili estesi usati per la creazione di una finestra. Se *dwExStyle* è 0, vengono restituiti i valori di stile del modello ( `t_dwExStyle` ). Se *dwExStyle* è diverso da zero, viene restituito *dwExStyle* .

### <a name="return-value"></a>Valore restituito

Stili della finestra estesa dell'oggetto.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Informazioni sui tratti della finestra](../../atl/understanding-window-traits.md)
