---
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
ms.openlocfilehash: fd73f733e4eff21da92937d1e1b0cce21552a48c
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330305"
---
# <a name="cwintraits-class"></a>Classe CWinTraits

Questa classe fornisce un metodo per standardizzare gli stili utilizzati durante la creazione di un oggetto finestra.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
template <DWORD t_dwStyle = 0, DWORD t_dwExStyle = 0>  class CWinTraits
```

#### <a name="parameters"></a>Parametri

*t_dwStyle*<br/>
Stili di finestra standard predefiniti.

*t_dwExStyle*<br/>
Stili di finestra estesa predefiniti.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinTraits::GetWndExStyle](#getwndexstyle)|(Statico) Recupera gli stili estesi `CWinTraits` per l'oggetto.|
|[CWinTraits::GetWndStyle](#getwndstyle)|(Statico) Recupera gli stili standard `CWinTraits` per l'oggetto.|

## <a name="remarks"></a>Osservazioni

Questa classe [traits](../../atl/understanding-window-traits.md) della finestra fornisce un metodo semplice per standardizzare gli stili utilizzati per la creazione di un oggetto finestra ATL. Utilizzare una specializzazione di questa classe come parametro di modello per [CWindowImpl](../../atl/reference/cwindowimpl-class.md) o un'altra delle classi finestra di ATL per specificare gli stili standard ed estesi predefiniti utilizzati per le istanze di tale classe finestra.

Utilizzare questo modello quando si desidera fornire stili di finestra predefiniti che verranno utilizzati solo quando nella chiamata a [CWindowImpl::Create](../../atl/reference/cwindowimpl-class.md#create)non sono specificati altri stili .

ATL fornisce tre specializzazioni predefinite di questo modello per le combinazioni di stili di finestra di uso comune:

- `CControlWinTraits`

   Progettato per una finestra di controllo standard. Vengono utilizzati i seguenti stili standard: WS_CHILD, WS_VISIBLE, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Non esistono stili estesi.

- `CFrameWinTraits`

   Progettato per una finestra cornice standard. Gli stili standard utilizzati includono: WS_OVERLAPPEDWINDOW, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Gli stili estesi utilizzati includono: WS_EX_APPWINDOW e WS_EX_WINDOWEDGE.

- `CMDIChildWinTraits`

   Progettato per una finestra figlio MDI standard. Gli stili standard utilizzati includono: WS_OVERLAPPEDWINDOW, WS_CHILD, WS_VISIBLE, WS_CLIPCHILDREN e WS_CLIPSIBLINGS. Gli stili estesi utilizzati includono: WS_EX_MDICHILD.

Se si desidera assicurarsi che determinati stili vengono impostati per tutte le istanze della classe della finestra, consentendo altri stili da impostare in base all'istanza, utilizzare [CWinTraitsOR](../../atl/reference/cwintraitsor-class.md) invece.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="cwintraitsgetwndstyle"></a><a name="getwndstyle"></a>CWinTraits::GetWndStyle

Chiamare questa funzione per recuperare `CWinTraits` gli stili standard dell'oggetto.

```
static DWORD GetWndStyle(DWORD dwStyle);
```

### <a name="parameters"></a>Parametri

*DwStyle (in stile dwStyle)*<br/>
Stili standard utilizzati per la creazione di una finestra. Se *dwStyle* è 0, vengono`t_dwStyle`restituiti i valori dello stile del modello ( ). Se *dwStyle* è diverso da zero, viene restituito *dwStyle.*

### <a name="return-value"></a>Valore restituito

Stili di finestra standard dell'oggetto.

## <a name="cwintraitsgetwndexstyle"></a><a name="getwndexstyle"></a>CWinTraits::GetWndExStyle

Chiamare questa funzione per recuperare `CWinTraits` gli stili estesi dell'oggetto.

```
static DWORD GetWndExStyle(DWORD dwExStyle);
```

### <a name="parameters"></a>Parametri

*DwExStyle (in stile dwExStyle)*<br/>
Stili estesi utilizzati per la creazione di una finestra. Se *dwExStyle* è 0, vengono`t_dwExStyle`restituiti i valori dello stile del modello ( ). Se *dwExStyle* è diverso da zero, viene restituito *dwExStyle.*

### <a name="return-value"></a>Valore restituito

Stili di finestra estesi dell'oggetto.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Informazioni sui tratti delle finestreUnderstanding Window Traits](../../atl/understanding-window-traits.md)
