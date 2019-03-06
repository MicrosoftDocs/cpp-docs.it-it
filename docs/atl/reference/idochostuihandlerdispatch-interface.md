---
title: Interfaccia IDocHostUIHandlerDispatch
ms.date: 11/04/2016
f1_keywords:
- IDocHostUIHandlerDispatch
- atlbase/ATL::IDocHostUIHandlerDispatch
helpviewer_keywords:
- IDocHostUIHandlerDispatch interface
ms.assetid: 6963a301-601a-4ac3-8bef-f7b252ea2fc6
ms.openlocfilehash: 6ce3532e99dc1d0ff0151285766aa5d78c2b9e9d
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57421882"
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
|[EnableModeless](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753253\(v=vs.85\))|Chiamato da un'implementazione MSHTML di [IOleInPlaceActiveObject::EnableModeless](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-enablemodeless). Chiamato anche quando MSHTML Visualizza l'interfaccia utente modale.|
|[FilterDataObject](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753254\(v=vs.85\))|Chiamato sull'host da MSHTML per consentire all'host di sostituire l'oggetto dati MSHTML.|
|[GetDropTarget](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753255\(v=vs.85\))|Chiamata eseguita dal MSHTML quando utilizzato come destinazione di trascinamento per consentire all'host di fornire un'alternativa [IDropTarget](/windows/desktop/api/oleidl/nn-oleidl-idroptarget).|
|[GetExternal](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753256\(v=vs.85\))|Chiamata eseguita dal MSHTML per ottenere l'interfaccia IDispatch dell'host.|
|[GetHostInfo](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753257\(v=vs.85\))|Recupera le funzionalità dell'interfaccia utente dell'host MSHTML.|
|[GetOptionKeyPath](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753258\(v=vs.85\))|Restituisce la chiave del Registro di sistema in cui MSHTML archivia le preferenze dell'utente.|
|[HideUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753259\(v=vs.85\))|Chiamata eseguita quando MSHTML rimuove i menu e barre degli strumenti.|
|[OnDocWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753261\(v=vs.85\))|Chiamato da un'implementazione MSHTML di [OnDocWindowActivate](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-ondocwindowactivate).|
|[OnFrameWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753262\(v=vs.85\))|Chiamato da un'implementazione MSHTML di [IOleInPlaceActiveObject:: OnFrameWindowActivate](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-onframewindowactivate).|
|[ResizeBorder](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753263\(v=vs.85\))|Chiamato da un'implementazione MSHTML di [IOleInPlaceActiveObject:: ResizeBorder](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-resizeborder).|
|[ShowContextMenu](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753264\(v=vs.85\))|Chiamato da MSHTML per visualizzare un menu di scelta rapida.|
|[ShowUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753265\(v=vs.85\))|Consente all'host di sostituire MSHTML menu e barre degli strumenti.|
|[TranslateAccelerator](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753266\(v=vs.85\))|Chiamato da MSHTML quando [IOleInPlaceActiveObject:: TranslateAccelerator](/windows/desktop/api/oleidl/nf-oleidl-ioleinplaceactiveobject-translateaccelerator) oppure [IOleControlSite:: TranslateAccelerator](/windows/desktop/api/ocidl/nf-ocidl-iolecontrolsite-translateaccelerator) viene chiamato.|
|[TranslateUrl](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753267\(v=vs.85\))|Chiamata eseguita dal MSHTML per consentire all'host la possibilità di modificare l'URL da caricare.|
|[UpdateUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753268\(v=vs.85\))|Notifica all'host che lo stato del comando è stato modificato.|

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
