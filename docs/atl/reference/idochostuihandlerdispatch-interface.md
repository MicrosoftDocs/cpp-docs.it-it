---
title: Interfaccia IDocHostUIHandlerDispatch
ms.date: 11/04/2016
f1_keywords:
- IDocHostUIHandlerDispatch
- atlbase/ATL::IDocHostUIHandlerDispatch
helpviewer_keywords:
- IDocHostUIHandlerDispatch interface
ms.assetid: 6963a301-601a-4ac3-8bef-f7b252ea2fc6
ms.openlocfilehash: 5bf405f66bdef54f354f9e6c230207d2933ee352
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50483632"
---
# <a name="idochostuihandlerdispatch-interface"></a>Interfaccia IDocHostUIHandlerDispatch

Interfaccia per il motore di rendering e l'analisi HTML di Microsoft.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
interface IDocHostUIHandlerDispatch : IDispatch
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

> [!NOTE]
>  I collegamenti nella tabella seguente sono per gli argomenti di riferimento INet SDK per i membri del [IDocUIHostHandler](https://msdn.microsoft.com/library/aa753260.aspx) interfaccia. `IDocHostUIHandlerDispatch` ha la stessa funzionalità `IDocUIHostHandler`, con la differenza è che `IDocHostUIHandlerDispatch` è un'interfaccia dispatch mentre `IDocUIHostHandler` è un'interfaccia personalizzata.

|||
|-|-|
|[EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx)|Chiamato da un'implementazione MSHTML di [IOleInPlaceActiveObject::EnableModeless](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-enablemodeless). Chiamato anche quando MSHTML Visualizza l'interfaccia utente modale.|
|[FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx)|Chiamato sull'host da MSHTML per consentire all'host di sostituire l'oggetto dati MSHTML.|
|[GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx)|Chiamata eseguita dal MSHTML quando utilizzato come destinazione di trascinamento per consentire all'host di fornire un'alternativa [IDropTarget](/windows/desktop/api/oleidl/nn-oleidl-idroptarget).|
|[GetExternal](https://msdn.microsoft.com/library/aa753256.aspx)|Chiamata eseguita dal MSHTML per ottenere l'interfaccia IDispatch dell'host.|
|[GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx)|Recupera le funzionalità dell'interfaccia utente dell'host MSHTML.|
|[GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx)|Restituisce la chiave del Registro di sistema in cui MSHTML archivia le preferenze dell'utente.|
|[HideUI](https://msdn.microsoft.com/library/aa753259.aspx)|Chiamata eseguita quando MSHTML rimuove i menu e barre degli strumenti.|
|[OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx)|Chiamato da un'implementazione MSHTML di [OnDocWindowActivate](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-ondocwindowactivate).|
|[OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx)|Chiamato da un'implementazione MSHTML di [IOleInPlaceActiveObject:: OnFrameWindowActivate](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-onframewindowactivate).|
|[ResizeBorder](https://msdn.microsoft.com/library/aa753263.aspx)|Chiamato da un'implementazione MSHTML di [IOleInPlaceActiveObject:: ResizeBorder](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-resizeborder).|
|[ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx)|Chiamato da MSHTML per visualizzare un menu di scelta rapida.|
|[ShowUI](https://msdn.microsoft.com/library/aa753265.aspx)|Consente all'host di sostituire MSHTML menu e barre degli strumenti.|
|[TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx)|Chiamato da MSHTML quando [IOleInPlaceActiveObject:: TranslateAccelerator](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-translateaccelerator) oppure [IOleControlSite:: TranslateAccelerator](/windows/desktop/api/ocidl/nf-ocidl-iolecontrolsite-translateaccelerator) viene chiamato.|
|[TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx)|Chiamata eseguita dal MSHTML per consentire all'host la possibilità di modificare l'URL da caricare.|
|[UpdateUI](https://msdn.microsoft.com/library/aa753268.aspx)|Notifica all'host che lo stato del comando è stato modificato.|

## <a name="remarks"></a>Note

Un host può sostituire il menu, barre degli strumenti e menu di scelta rapida utilizzati per il motore di rendering (MSHTML) e l'analisi HTML Microsoft implementando questa interfaccia.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile come file IDL o C++, come illustrato di seguito.

|Tipo definizione|File|
|---------------------|----------|
|IDL|ATLIFace.idl|
|C++|ATLIFace.h (incluso anche in atlbase. H)|

## <a name="see-also"></a>Vedere anche

[IDocUIHostHandler](https://msdn.microsoft.com/library/aa753260.aspx)

