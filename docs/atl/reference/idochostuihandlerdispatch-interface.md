---
title: Interfaccia IDocHostUIHandlerDispatch
ms.date: 07/02/2019
f1_keywords:
- IDocHostUIHandlerDispatch
- atlbase/ATL::IDocHostUIHandlerDispatch
helpviewer_keywords:
- IDocHostUIHandlerDispatch interface
ms.assetid: 6963a301-601a-4ac3-8bef-f7b252ea2fc6
ms.openlocfilehash: 4d80934a5768eda917c90345ddeeff017edf0eae
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88835441"
---
# <a name="idochostuihandlerdispatch-interface"></a>Interfaccia IDocHostUIHandlerDispatch

Interfaccia per il motore di analisi e rendering HTML Microsoft.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
interface IDocHostUIHandlerDispatch : IDispatch
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

> [!NOTE]
> I collegamenti nella tabella seguente sono gli argomenti di riferimento di INet SDK per i membri dell'interfaccia [IDocUIHostHandler](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753260\(v=vs.85\)) . `IDocHostUIHandlerDispatch` ha la stessa funzionalità di `IDocUIHostHandler` , con la differenza che `IDocHostUIHandlerDispatch` è un'interfaccia dispatch mentre `IDocUIHostHandler` è un'interfaccia personalizzata.

|Nome|Descrizione|
|-|-|
|[EnableModeless](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753253\(v=vs.85\))|Chiamata eseguita dall'implementazione MSHTML di [IOleInPlaceActiveObject:: EnableModeless](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-enablemodeless). Chiamato anche quando MSHTML Visualizza l'interfaccia utente modale.|
|[FilterDataObject](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753254\(v=vs.85\))|Chiamato sull'host da MSHTML per consentire all'host di sostituire l'oggetto dati di MSHTML.|
|[GetDropTarget](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753255\(v=vs.85\))|Chiamato da MSHTML quando viene usato come destinazione di rilascio per consentire all'host di fornire un oggetto [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget)alternativo.|
|[GetExternal](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753256\(v=vs.85\))|Chiamato da MSHTML per ottenere l'interfaccia IDispatch dell'host.|
|[GetHostInfo](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753257\(v=vs.85\))|Recupera le funzionalità dell'interfaccia utente dell'host MSHTML.|
|[GetOptionKeyPath](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753258\(v=vs.85\))|Restituisce la chiave del registro di sistema in cui MSHTML archivia le preferenze dell'utente.|
|[HideUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753259\(v=vs.85\))|Chiamato quando MSHTML rimuove i menu e le barre degli strumenti.|
|[OnDocWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753261\(v=vs.85\))|Chiamata eseguita dall'implementazione MSHTML di [IOleInPlaceActiveObject:: OnDocWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-ondocwindowactivate).|
|[OnFrameWindowActivate](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753262\(v=vs.85\))|Chiamata eseguita dall'implementazione MSHTML di [IOleInPlaceActiveObject:: OnFrameWindowActivate](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-onframewindowactivate).|
|[ResizeBorder](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753263\(v=vs.85\))|Chiamata eseguita dall'implementazione MSHTML di [IOleInPlaceActiveObject:: ResizeBorder](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-resizeborder).|
|[ShowContextMenu](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753264\(v=vs.85\))|Chiamato da MSHTML per visualizzare un menu di scelta rapida.|
|[ShowUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753265\(v=vs.85\))|Consente all'host di sostituire i menu e le barre degli strumenti di MSHTML.|
|[TranslateAccelerator](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753266\(v=vs.85\))|Chiamato da MSHTML quando viene chiamato [IOleInPlaceActiveObject:: TranslateAccelerator](/windows/win32/api/oleidl/nf-oleidl-ioleinplaceactiveobject-translateaccelerator) o [IOleControlSite:: TranslateAccelerator](/windows/win32/api/ocidl/nf-ocidl-iolecontrolsite-translateaccelerator) .|
|[TranslateUrl](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753267\(v=vs.85\))|Chiamato da MSHTML per consentire all'host la possibilità di modificare l'URL da caricare.|
|[UpdateUI](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753268\(v=vs.85\))|Notifica all'host che lo stato del comando è stato modificato.|

## <a name="remarks"></a>Osservazioni

Un host può sostituire i menu, le barre degli strumenti e i menu di scelta rapida usati da Microsoft HTML parsing and rendering Engine (MSHTML) implementando questa interfaccia.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile come IDL o C++, come illustrato di seguito.

|Tipo definizione|File|
|---------------------|----------|
|IDL|ATLIFace. idl|
|C++|ATLIFace. h (incluso anche in ATLBase. h)|

## <a name="see-also"></a>Vedere anche

[IDocUIHostHandler](/previous-versions/windows/internet-explorer/ie-developer/platform-apis/aa753260\(v=vs.85\))
