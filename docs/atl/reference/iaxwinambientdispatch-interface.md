---
title: Interfaccia IAxWinAmbientDispatch
ms.date: 11/04/2016
f1_keywords:
- IAxWinAmbientDispatch
- ATLIFACE/ATL::IAxWinAmbientDispatch
- ATLIFACE/ATL::get_AllowContextMenu
- ATLIFACE/ATL::get_AllowShowUI
- ATLIFACE/ATL::get_AllowWindowlessActivation
- ATLIFACE/ATL::get_BackColor
- ATLIFACE/ATL::get_DisplayAsDefault
- ATLIFACE/ATL::get_DocHostDoubleClickFlags
- ATLIFACE/ATL::get_DocHostFlags
- ATLIFACE/ATL::get_Font
- ATLIFACE/ATL::get_ForeColor
- ATLIFACE/ATL::get_LocaleID
- ATLIFACE/ATL::get_MessageReflect
- ATLIFACE/ATL::get_OptionKeyPath
- ATLIFACE/ATL::get_ShowGrabHandles
- ATLIFACE/ATL::get_ShowHatching
- ATLIFACE/ATL::get_UserMode
- ATLIFACE/ATL::put_AllowContextMenu
- ATLIFACE/ATL::put_AllowShowUI
- ATLIFACE/ATL::put_AllowWindowlessActivation
- ATLIFACE/ATL::put_BackColor
- ATLIFACE/ATL::put_DisplayAsDefault
- ATLIFACE/ATL::put_DocHostDoubleClickFlags
- ATLIFACE/ATL::put_DocHostFlags
- ATLIFACE/ATL::put_Font
- ATLIFACE/ATL::put_ForeColor
- ATLIFACE/ATL::put_LocaleID
- ATLIFACE/ATL::put_MessageReflect
- ATLIFACE/ATL::put_OptionKeyPath
- ATLIFACE/ATL::put_UserMode
helpviewer_keywords:
- IAxWinAmbientDispatch interface
ms.assetid: 55ba6f7b-7a3c-4792-ae47-c8a84b683ca9
ms.openlocfilehash: 6a4f5322d957b1e978bd123db3b4796be6b300da
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330004"
---
# <a name="iaxwinambientdispatch-interface"></a>Interfaccia IAxWinAmbientDispatch

Questa interfaccia fornisce metodi per specificare le caratteristiche del contenitore o del controllo ospitato.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
interface IAxWinAmbientDispatch : IDispatch
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[get_AllowContextMenu](#get_allowcontextmenu)|La `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.|
|[get_AllowShowUI](#get_allowshowui)|La `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.|
|[get_AllowWindowlessActivation](#get_allowwindowlessactivation)|La `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.|
|[get_BackColor](#get_backcolor)|La `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.|
|[get_DisplayAsDefault](#get_displayasdefault)|`DisplayAsDefault`è una proprietà di ambiente che consente a un controllo di individuare se è il controllo predefinito.|
|[get_DocHostDoubleClickFlags](#get_dochostdoubleclickflags)|La `DocHostDoubleClickFlags` proprietà specifica l'operazione che deve essere eseguita in risposta a un doppio clic.|
|[get_DocHostFlags](#get_dochostflags)|La `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.|
|[get_Font](#get_font)|La `Font` proprietà specifica il tipo di carattere ambiente del contenitore.|
|[get_ForeColor](#get_forecolor)|La `ForeColor` proprietà specifica il colore di primo piano di ambiente del contenitore.|
|[get_LocaleID](#get_localeid)|La `LocaleID` proprietà specifica l'ID delle impostazioni locali di ambiente del contenitore.|
|[get_MessageReflect](#get_messagereflect)|La `MessageReflect` proprietà di ambiente specifica se il contenitore rifletterà i messaggi nel controllo ospitato.|
|[get_OptionKeyPath](#get_optionkeypath)|La `OptionKeyPath` proprietà specifica il percorso della chiave del registro di sistema per le impostazioni utente.|
|[get_ShowGrabHandles](#get_showgrabhandles)|La `ShowGrabHandles` proprietà di ambiente consente al controllo di determinare se deve disegnarsi con handle di ridimensionamento.|
|[get_ShowHatching](#get_showhatching)|La `ShowHatching` proprietà di ambiente consente al controllo di determinare se deve essere disegnato.|
|[get_UserMode](#get_usermode)|La `UserMode` proprietà specifica la modalità utente di ambiente del contenitore.|
|[put_AllowContextMenu](#put_allowcontextmenu)|La `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.|
|[put_AllowShowUI](#put_allowshowui)|La `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.|
|[put_AllowWindowlessActivation](#put_allowwindowlessactivation)|La `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.|
|[put_BackColor](#put_backcolor)|La `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.|
|[put_DisplayAsDefault](#put_displayasdefault)|`DisplayAsDefault`è una proprietà di ambiente che consente a un controllo di individuare se è il controllo predefinito.|
|[put_DocHostDoubleClickFlags](#put_dochostdoubleclickflags)|La `DocHostDoubleClickFlags` proprietà specifica l'operazione che deve essere eseguita in risposta a un doppio clic.|
|[put_DocHostFlags](#put_dochostflags)|La `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.|
|[put_Font](#put_font)|La `Font` proprietà specifica il tipo di carattere ambiente del contenitore.|
|[put_ForeColor](#put_forecolor)|La `ForeColor` proprietà specifica il colore di primo piano di ambiente del contenitore.|
|[put_LocaleID](#put_localeid)|La `LocaleID` proprietà specifica l'ID delle impostazioni locali di ambiente del contenitore.|
|[put_MessageReflect](#put_messagereflect)|La `MessageReflect` proprietà di ambiente specifica se il contenitore rifletterà i messaggi nel controllo ospitato.|
|[put_OptionKeyPath](#put_optionkeypath)|La `OptionKeyPath` proprietà specifica il percorso della chiave del registro di sistema per le impostazioni utente.|
|[put_UserMode](#put_usermode)|La `UserMode` proprietà specifica la modalità utente di ambiente del contenitore.|

## <a name="remarks"></a>Osservazioni

Questa interfaccia è esposta dagli oggetti di hosting del controllo ActiveX di ATL. Chiamare i metodi su questa interfaccia per impostare le proprietà di ambiente disponibili per il controllo ospitato o per specificare altri aspetti del comportamento del contenitore. Per integrare le proprietà fornite da `IAxWinAmbientDispatch`, utilizzare [IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md).

<xref:System.Windows.Forms.AxHost>proverà a caricare le informazioni sul `IAxWinAmbientDispatch` tipo `IAxWinAmbientDispatchEx` relative a e dalla libreria dei tipi che contiene il codice.

Se ci si collega a ATL90. dll, **AxHost** caricherà le informazioni sul tipo dalla libreria dei tipi nella dll.

Per ulteriori informazioni, vedere l' [hosting di controlli ActiveX con ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella seguente.

|Tipo di definizione|File|
|---------------------|----------|
|IDL|Atliface. idl|
|Libreria di tipi|ATL. dll|
|C++|Atliface. h (incluso anche in ATLBase. h)|

## <a name="iaxwinambientdispatchget_allowcontextmenu"></a><a name="get_allowcontextmenu"></a>IAxWinAmbientDispatch:: get_AllowContextMenu

La `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.

```
STDMETHOD(get_AllowContextMenu)(VARIANT_BOOL* pbAllowContextMenu);
```

### <a name="parameters"></a>Parametri

*pbAllowContextMenu*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_allowshowui"></a><a name="get_allowshowui"></a>IAxWinAmbientDispatch:: get_AllowShowUI

La `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.

```
STDMETHOD(get_AllowShowUI)(VARIANT_BOOL* pbAllowShowUI);
```

### <a name="parameters"></a>Parametri

*pbAllowShowUI*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_allowwindowlessactivation"></a><a name="get_allowwindowlessactivation"></a>IAxWinAmbientDispatch:: get_AllowWindowlessActivation

La `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.

```
STDMETHOD(get_AllowWindowlessActivation)(VARIANT_BOOL* pbAllowWindowless);
```

### <a name="parameters"></a>Parametri

*pbAllowWindowless*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_backcolor"></a><a name="get_backcolor"></a>IAxWinAmbientDispatch:: get_BackColor

La `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.

```
STDMETHOD(get_BackColor)(OLE_COLOR* pclrBackground);
```

### <a name="parameters"></a>Parametri

*pclrBackground*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza COLOR_BTNFACE o COLOR_WINDOW come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra host sia o meno una finestra di dialogo).

## <a name="iaxwinambientdispatchget_displayasdefault"></a><a name="get_displayasdefault"></a>IAxWinAmbientDispatch:: get_DisplayAsDefault

`DisplayAsDefault`è una proprietà di ambiente che consente a un controllo di individuare se è il controllo predefinito.

```
STDMETHOD(get_DisplayAsDefault)(VARIANT_BOOL* pbDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*pbDisplayAsDefault*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_dochostdoubleclickflags"></a><a name="get_dochostdoubleclickflags"></a>IAxWinAmbientDispatch:: get_DocHostDoubleClickFlags

La `DocHostDoubleClickFlags` proprietà specifica l'operazione che deve essere eseguita in risposta a un doppio clic.

```
STDMETHOD(get_DocHostDoubleClickFlags)(DWORD* pdwDocHostDoubleClickFlags);
```

### <a name="parameters"></a>Parametri

*pdwDocHostDoubleClickFlags*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIDBLCLK_DEFAULT come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_dochostflags"></a><a name="get_dochostflags"></a>IAxWinAmbientDispatch:: get_DocHostFlags

La `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.

```
STDMETHOD(get_DocHostFlags)(DWORD* pdwDocHostFlags);
```

### <a name="parameters"></a>Parametri

*pdwDocHostFlags*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIFLAG_NO3DBORDER come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_font"></a><a name="get_font"></a>IAxWinAmbientDispatch:: get_Font

La `Font` proprietà specifica il tipo di carattere ambiente del contenitore.

```
STDMETHOD(get_Font)(IFontDisp** pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
out Indirizzo di un `IFontDisp` puntatore a interfaccia utilizzato per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL USA il tipo di carattere predefinito della GUI o il tipo di carattere del sistema come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_forecolor"></a><a name="get_forecolor"></a>IAxWinAmbientDispatch:: get_ForeColor

La `ForeColor` proprietà specifica il colore di primo piano di ambiente del contenitore.

```
STDMETHOD(get_ForeColor)(OLE_COLOR* pclrForeground);
```

### <a name="parameters"></a>Parametri

*pclrForeground*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza il colore del testo della finestra di sistema come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_localeid"></a><a name="get_localeid"></a>IAxWinAmbientDispatch:: get_LocaleID

La `LocaleID` proprietà specifica l'ID delle impostazioni locali di ambiente del contenitore.

```
STDMETHOD(get_LocaleID)(LCID* plcidLocaleID);
```

### <a name="parameters"></a>Parametri

*plcidLocaleID*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza le impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.

Con questo metodo è possibile individuare l'ambiente localizzato, ovvero il LocaleID del programma in cui viene usato il controllo. Quando si conosce il LocaleID, è possibile chiamare il codice per caricare didascalie specifiche delle impostazioni locali, testo del messaggio di errore e così via da un file di risorse o da una DLL satellite.

## <a name="iaxwinambientdispatchget_messagereflect"></a><a name="get_messagereflect"></a>IAxWinAmbientDispatch:: get_MessageReflect

La `MessageReflect` proprietà di ambiente specifica se il contenitore rifletterà i messaggi nel controllo ospitato.

```
STDMETHOD(get_MessageReflect)(VARIANT_BOOL* pbMessageReflect);
```

### <a name="parameters"></a>Parametri

*pbMessageReflect*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchget_optionkeypath"></a><a name="get_optionkeypath"></a>IAxWinAmbientDispatch:: get_OptionKeyPath

La `OptionKeyPath` proprietà specifica il percorso della chiave del registro di sistema per le impostazioni utente.

```
STDMETHOD(get_OptionKeyPath)(BSTR* pbstrOptionKeyPath);
```

### <a name="parameters"></a>Parametri

*pbstrOptionKeyPath*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinambientdispatchget_showgrabhandles"></a><a name="get_showgrabhandles"></a>IAxWinAmbientDispatch:: get_ShowGrabHandles

La `ShowGrabHandles` proprietà di ambiente consente al controllo di determinare se deve disegnarsi con handle di ridimensionamento.

```
STDMETHOD(get_ShowGrabHandles)(VARIANT_BOOL* pbShowGrabHandles);
```

### <a name="parameters"></a>Parametri

*pbShowGrabHandles*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL restituisce sempre VARIANT_FALSE come valore di questa proprietà.

## <a name="iaxwinambientdispatchget_showhatching"></a><a name="get_showhatching"></a>IAxWinAmbientDispatch:: get_ShowHatching

La `ShowHatching` proprietà di ambiente consente al controllo di determinare se deve essere disegnato.

```
STDMETHOD(get_ShowHatching)(VARIANT_BOOL* pbShowHatching);
```

### <a name="parameters"></a>Parametri

*pbShowHatching*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL restituisce sempre VARIANT_FALSE come valore di questa proprietà.

## <a name="iaxwinambientdispatchget_usermode"></a><a name="get_usermode"></a>IAxWinAmbientDispatch:: get_UserMode

La `UserMode` proprietà specifica la modalità utente di ambiente del contenitore.

```
STDMETHOD(get_UserMode)(VARIANT_BOOL* pbUserMode);
```

### <a name="parameters"></a>Parametri

*pbUserMode*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_allowcontextmenu"></a><a name="put_allowcontextmenu"></a>IAxWinAmbientDispatch: ut_AllowContextMenu:p

La `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.

```
STDMETHOD(put_AllowContextMenu)(VARIANT_BOOL bAllowContextMenu);
```

### <a name="parameters"></a>Parametri

*bAllowContextMenu*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_allowshowui"></a><a name="put_allowshowui"></a>IAxWinAmbientDispatch: ut_AllowShowUI:p

La `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.

```
STDMETHOD(put_AllowShowUI)(VARIANT_BOOL bAllowShowUI);
```

### <a name="parameters"></a>Parametri

*bAllowShowUI*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_allowwindowlessactivation"></a><a name="put_allowwindowlessactivation"></a>IAxWinAmbientDispatch: ut_AllowWindowlessActivation:p

La `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.

```
STDMETHOD(put_AllowWindowlessActivation)(VARIANT_BOOL bAllowWindowless);
```

### <a name="parameters"></a>Parametri

*bAllowWindowless*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_backcolor"></a><a name="put_backcolor"></a>IAxWinAmbientDispatch: ut_BackColor:p

La `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.

```
STDMETHOD(put_BackColor)(OLE_COLOR clrBackground);
```

### <a name="parameters"></a>Parametri

*clrBackground*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza COLOR_BTNFACE o COLOR_WINDOW come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra host sia o meno una finestra di dialogo).

## <a name="iaxwinambientdispatchput_displayasdefault"></a><a name="put_displayasdefault"></a>IAxWinAmbientDispatch: ut_DisplayAsDefault:p

`DisplayAsDefault`è una proprietà di ambiente che consente a un controllo di individuare se è il controllo predefinito.

```
STDMETHOD(put_DisplayAsDefault)(VARIANT_BOOL bDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*bDisplayAsDefault*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_dochostdoubleclickflags"></a><a name="put_dochostdoubleclickflags"></a>IAxWinAmbientDispatch: ut_DocHostDoubleClickFlags:p

La `DocHostDoubleClickFlags` proprietà specifica l'operazione che deve essere eseguita in risposta a un doppio clic.

```
STDMETHOD(put_DocHostDoubleClickFlags)(DWORD dwDocHostDoubleClickFlags);
```

### <a name="parameters"></a>Parametri

*dwDocHostDoubleClickFlags*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIDBLCLK_DEFAULT come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_dochostflags"></a><a name="put_dochostflags"></a>IAxWinAmbientDispatch: ut_DocHostFlags:p

La `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.

```
STDMETHOD(put_DocHostFlags)(DWORD dwDocHostFlags);
```

### <a name="parameters"></a>Parametri

*dwDocHostFlags*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIFLAG_NO3DBORDER come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_font"></a><a name="put_font"></a>IAxWinAmbientDispatch: ut_Font:p

La `Font` proprietà specifica il tipo di carattere ambiente del contenitore.

```
STDMETHOD(put_Font)(IFontDisp* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL USA il tipo di carattere predefinito della GUI o il tipo di carattere del sistema come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_forecolor"></a><a name="put_forecolor"></a>IAxWinAmbientDispatch: ut_ForeColor:p

La `ForeColor` proprietà specifica il colore di primo piano di ambiente del contenitore.

```
STDMETHOD(put_ForeColor)(OLE_COLOR clrForeground);
```

### <a name="parameters"></a>Parametri

*clrForeground*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza il colore del testo della finestra di sistema come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_localeid"></a><a name="put_localeid"></a>IAxWinAmbientDispatch: ut_LocaleID:p

La `LocaleID` proprietà specifica l'ID delle impostazioni locali di ambiente del contenitore.

```
STDMETHOD(put_LocaleID)(LCID lcidLocaleID);
```

### <a name="parameters"></a>Parametri

*lcidLocaleID*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza le impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_messagereflect"></a><a name="put_messagereflect"></a>IAxWinAmbientDispatch: ut_MessageReflect:p

La `MessageReflect` proprietà di ambiente specifica se il contenitore rifletterà i messaggi nel controllo ospitato.

```
STDMETHOD(put_MessageReflect)(VARIANT_BOOL bMessageReflect);
```

### <a name="parameters"></a>Parametri

*bMessageReflect*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="iaxwinambientdispatchput_optionkeypath"></a><a name="put_optionkeypath"></a>IAxWinAmbientDispatch: ut_OptionKeyPath:p

La `OptionKeyPath` proprietà specifica il percorso della chiave del registro di sistema per le impostazioni utente.

```
STDMETHOD(put_OptionKeyPath)(BSTR bstrOptionKeyPath);
```

### <a name="parameters"></a>Parametri

*bstrOptionKeyPath*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

## <a name="iaxwinambientdispatchput_usermode"></a><a name="put_usermode"></a>IAxWinAmbientDispatch: ut_UserMode:p

La `UserMode` proprietà specifica la modalità utente di ambiente del contenitore.

```
STDMETHOD(put_UserMode)(VARIANT_BOOL bUserMode);
```

### <a name="parameters"></a>Parametri

*bUserMode*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Osservazioni

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="see-also"></a>Vedere anche

[Interfaccia IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md)<br/>
[Interfaccia IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md)<br/>
[CAxWindow:: QueryHost](../../atl/reference/caxwindow-class.md#queryhost)<br/>
[AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)
