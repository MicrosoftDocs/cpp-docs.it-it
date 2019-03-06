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
ms.openlocfilehash: 85a8f1d41c6c54f94b500807a1e4ca504206f56a
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57425653"
---
# <a name="iaxwinambientdispatch-interface"></a>Interfaccia IAxWinAmbientDispatch

Questa interfaccia fornisce metodi per specificare le caratteristiche del controllo ospitato o del contenitore.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
interface IAxWinAmbientDispatch : IDispatch
```

## <a name="members"></a>Membri

### <a name="methods"></a>Metodi

|||
|-|-|
|[get_AllowContextMenu](#get_allowcontextmenu)|Il `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.|
|[get_AllowShowUI](#get_allowshowui)|Il `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.|
|[get_AllowWindowlessActivation](#get_allowwindowlessactivation)|Il `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.|
|[get_BackColor](#get_backcolor)|Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.|
|[get_DisplayAsDefault](#get_displayasdefault)|`DisplayAsDefault` è una proprietà di ambiente che consente a un controllo scoprire se è il controllo predefinito.|
|[get_DocHostDoubleClickFlags](#get_dochostdoubleclickflags)|Il `DocHostDoubleClickFlags` proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.|
|[get_DocHostFlags](#get_dochostflags)|Il `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.|
|[get_Font](#get_font)|Il `Font` proprietà specifica il tipo di carattere ambiente del contenitore.|
|[get_ForeColor](#get_forecolor)|Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.|
|[get_LocaleID](#get_localeid)|Il `LocaleID` proprietà specifica l'ID impostazioni locali di ambiente del contenitore.|
|[get_MessageReflect](#get_messagereflect)|Il `MessageReflect` proprietà di ambiente specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.|
|[get_OptionKeyPath](#get_optionkeypath)|Il `OptionKeyPath` proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni dell'utente.|
|[get_ShowGrabHandles](#get_showgrabhandles)|Il `ShowGrabHandles` proprietà di ambiente consente al controllo di scoprire se è necessario disegnare se stesso con quadratini di ridimensionamento.|
|[get_ShowHatching](#get_showhatching)|Il `ShowHatching` proprietà di ambiente consente di scoprire se è necessario disegnare se stesso nati il controllo.|
|[get_UserMode](#get_usermode)|Il `UserMode` proprietà specifica la modalità dell'ambiente utente del contenitore.|
|[put_AllowContextMenu](#put_allowcontextmenu)|Il `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.|
|[put_AllowShowUI](#put_allowshowui)|Il `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.|
|[put_AllowWindowlessActivation](#put_allowwindowlessactivation)|Il `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.|
|[put_BackColor](#put_backcolor)|Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.|
|[put_DisplayAsDefault](#put_displayasdefault)|`DisplayAsDefault` è una proprietà di ambiente che consente a un controllo scoprire se è il controllo predefinito.|
|[put_DocHostDoubleClickFlags](#put_dochostdoubleclickflags)|Il `DocHostDoubleClickFlags` proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.|
|[put_DocHostFlags](#put_dochostflags)|Il `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.|
|[put_Font](#put_font)|Il `Font` proprietà specifica il tipo di carattere ambiente del contenitore.|
|[put_ForeColor](#put_forecolor)|Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.|
|[put_LocaleID](#put_localeid)|Il `LocaleID` proprietà specifica l'ID impostazioni locali di ambiente del contenitore.|
|[put_MessageReflect](#put_messagereflect)|Il `MessageReflect` proprietà di ambiente specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.|
|[put_OptionKeyPath](#put_optionkeypath)|Il `OptionKeyPath` proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni dell'utente.|
|[put_UserMode](#put_usermode)|Il `UserMode` proprietà specifica la modalità dell'ambiente utente del contenitore.|

## <a name="remarks"></a>Note

Questa interfaccia viene esposta dal controllo ActiveX dell'ATL hosting di oggetti. Chiamare i metodi su questa interfaccia per impostare le proprietà di ambiente disponibili per il controllo ospitato o per specificare altri aspetti del comportamento del contenitore. Per integrare le proprietà fornite da `IAxWinAmbientDispatch`, usare [IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md).

<xref:System.Windows.Forms.AxHost> verrà effettuato un tentativo di caricare le informazioni sul tipo sul `IAxWinAmbientDispatch` e `IAxWinAmbientDispatchEx` dalla libreria dei tipi che contiene il codice.

Se ci si collega, Atl90 **AXHost** caricherà le informazioni sul tipo da libreria dei tipi nella DLL.

Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per altri dettagli.

## <a name="requirements"></a>Requisiti

La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella seguente.

|Tipo definizione|File|
|---------------------|----------|
|IDL|atliface.idl|
|Libreria dei tipi|ATL|
|C++|atliface.h (incluso anche in atlbase. H)|

##  <a name="get_allowcontextmenu"></a>  IAxWinAmbientDispatch::get_AllowContextMenu

Il `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.

```
STDMETHOD(get_AllowContextMenu)(VARIANT_BOOL* pbAllowContextMenu);
```

### <a name="parameters"></a>Parametri

*pbAllowContextMenu*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="get_allowshowui"></a>  IAxWinAmbientDispatch::get_AllowShowUI

Il `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.

```
STDMETHOD(get_AllowShowUI)(VARIANT_BOOL* pbAllowShowUI);
```

### <a name="parameters"></a>Parametri

*pbAllowShowUI*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="get_allowwindowlessactivation"></a>  IAxWinAmbientDispatch::get_AllowWindowlessActivation

Il `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.

```
STDMETHOD(get_AllowWindowlessActivation)(VARIANT_BOOL* pbAllowWindowless);
```

### <a name="parameters"></a>Parametri

*pbAllowWindowless*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="get_backcolor"></a>  IAxWinAmbientDispatch::get_BackColor

Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.

```
STDMETHOD(get_BackColor)(OLE_COLOR* pclrBackground);
```

### <a name="parameters"></a>Parametri

*pclrBackground*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa COLOR_BTNFACE o COLOR_WINDOW come valore predefinito di questa proprietà (a seconda se l'elemento padre della finestra host è una finestra di dialogo o No).

##  <a name="get_displayasdefault"></a>  IAxWinAmbientDispatch::get_DisplayAsDefault

`DisplayAsDefault` è una proprietà di ambiente che consente a un controllo scoprire se è il controllo predefinito.

```
STDMETHOD(get_DisplayAsDefault)(VARIANT_BOOL* pbDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*pbDisplayAsDefault*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="get_dochostdoubleclickflags"></a>  IAxWinAmbientDispatch::get_DocHostDoubleClickFlags

Il `DocHostDoubleClickFlags` proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.

```
STDMETHOD(get_DocHostDoubleClickFlags)(DWORD* pdwDocHostDoubleClickFlags);
```

### <a name="parameters"></a>Parametri

*pdwDocHostDoubleClickFlags*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa DOCHOSTUIDBLCLK_DEFAULT come valore predefinito di questa proprietà.

##  <a name="get_dochostflags"></a>  IAxWinAmbientDispatch::get_DocHostFlags

Il `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.

```
STDMETHOD(get_DocHostFlags)(DWORD* pdwDocHostFlags);
```

### <a name="parameters"></a>Parametri

*pdwDocHostFlags*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa DOCHOSTUIFLAG_NO3DBORDER come valore predefinito di questa proprietà.

##  <a name="get_font"></a>  IAxWinAmbientDispatch::get_Font

Il `Font` proprietà specifica il tipo di carattere ambiente del contenitore.

```
STDMETHOD(get_Font)(IFontDisp** pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
[out] L'indirizzo di un `IFontDisp` puntatore a interfaccia usato per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa il tipo di carattere predefinito GUI o al tipo di carattere come valore predefinito di questa proprietà.

##  <a name="get_forecolor"></a>  IAxWinAmbientDispatch::get_ForeColor

Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.

```
STDMETHOD(get_ForeColor)(OLE_COLOR* pclrForeground);
```

### <a name="parameters"></a>Parametri

*pclrForeground*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa il colore del testo finestra sistema come il valore predefinito di questa proprietà.

##  <a name="get_localeid"></a>  IAxWinAmbientDispatch::get_LocaleID

Il `LocaleID` proprietà specifica l'ID impostazioni locali di ambiente del contenitore.

```
STDMETHOD(get_LocaleID)(LCID* plcidLocaleID);
```

### <a name="parameters"></a>Parametri

*plcidLocaleID*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa le impostazioni locali predefinito dell'utente come valore predefinito di questa proprietà.

Con questo metodo è possibile individuare l'elemento LocalID ambiente, vale a dire, LocaleID del programma di controllo viene utilizzato. Quando si conosce il LocaleID, è possibile chiamare codice per caricare le didascalie specifiche delle impostazioni locali, testo del messaggio di errore, e così via da un file di risorse o una DLL satellite.

##  <a name="get_messagereflect"></a>  IAxWinAmbientDispatch::get_MessageReflect

Il `MessageReflect` proprietà di ambiente specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.

```
STDMETHOD(get_MessageReflect)(VARIANT_BOOL* pbMessageReflect);
```

### <a name="parameters"></a>Parametri

*pbMessageReflect*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="get_optionkeypath"></a>  IAxWinAmbientDispatch::get_OptionKeyPath

Il `OptionKeyPath` proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni dell'utente.

```
STDMETHOD(get_OptionKeyPath)(BSTR* pbstrOptionKeyPath);
```

### <a name="parameters"></a>Parametri

*pbstrOptionKeyPath*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="get_showgrabhandles"></a>  IAxWinAmbientDispatch::get_ShowGrabHandles

Il `ShowGrabHandles` proprietà di ambiente consente al controllo di scoprire se è necessario disegnare se stesso con quadratini di ridimensionamento.

```
STDMETHOD(get_ShowGrabHandles)(VARIANT_BOOL* pbShowGrabHandles);
```

### <a name="parameters"></a>Parametri

*pbShowGrabHandles*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Sempre l'implementazione ATL oggetto host restituisce VARIANT_FALSE come valore di questa proprietà.

##  <a name="get_showhatching"></a>  IAxWinAmbientDispatch::get_ShowHatching

Il `ShowHatching` proprietà di ambiente consente di scoprire se è necessario disegnare se stesso nati il controllo.

```
STDMETHOD(get_ShowHatching)(VARIANT_BOOL* pbShowHatching);
```

### <a name="parameters"></a>Parametri

*pbShowHatching*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

Sempre l'implementazione ATL oggetto host restituisce VARIANT_FALSE come valore di questa proprietà.

##  <a name="get_usermode"></a>  IAxWinAmbientDispatch::get_UserMode

Il `UserMode` proprietà specifica la modalità dell'ambiente utente del contenitore.

```
STDMETHOD(get_UserMode)(VARIANT_BOOL* pbUserMode);
```

### <a name="parameters"></a>Parametri

*pbUserMode*<br/>
[out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_allowcontextmenu"></a>  IAxWinAmbientDispatch::put_AllowContextMenu

Il `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.

```
STDMETHOD(put_AllowContextMenu)(VARIANT_BOOL bAllowContextMenu);
```

### <a name="parameters"></a>Parametri

*bAllowContextMenu*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_allowshowui"></a>  IAxWinAmbientDispatch::put_AllowShowUI

Il `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.

```
STDMETHOD(put_AllowShowUI)(VARIANT_BOOL bAllowShowUI);
```

### <a name="parameters"></a>Parametri

*bAllowShowUI*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="put_allowwindowlessactivation"></a>  IAxWinAmbientDispatch::put_AllowWindowlessActivation

Il `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.

```
STDMETHOD(put_AllowWindowlessActivation)(VARIANT_BOOL bAllowWindowless);
```

### <a name="parameters"></a>Parametri

*bAllowWindowless*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_backcolor"></a>  IAxWinAmbientDispatch::put_BackColor

Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.

```
STDMETHOD(put_BackColor)(OLE_COLOR clrBackground);
```

### <a name="parameters"></a>Parametri

*clrBackground*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa COLOR_BTNFACE o COLOR_WINDOW come valore predefinito di questa proprietà (a seconda se l'elemento padre della finestra host è una finestra di dialogo o No).

##  <a name="put_displayasdefault"></a>  IAxWinAmbientDispatch::put_DisplayAsDefault

`DisplayAsDefault` è una proprietà di ambiente che consente a un controllo scoprire se è il controllo predefinito.

```
STDMETHOD(put_DisplayAsDefault)(VARIANT_BOOL bDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*bDisplayAsDefault*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="put_dochostdoubleclickflags"></a>  IAxWinAmbientDispatch::put_DocHostDoubleClickFlags

Il `DocHostDoubleClickFlags` proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.

```
STDMETHOD(put_DocHostDoubleClickFlags)(DWORD dwDocHostDoubleClickFlags);
```

### <a name="parameters"></a>Parametri

*dwDocHostDoubleClickFlags*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa DOCHOSTUIDBLCLK_DEFAULT come valore predefinito di questa proprietà.

##  <a name="put_dochostflags"></a>  IAxWinAmbientDispatch::put_DocHostFlags

Il `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.

```
STDMETHOD(put_DocHostFlags)(DWORD dwDocHostFlags);
```

### <a name="parameters"></a>Parametri

*dwDocHostFlags*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa DOCHOSTUIFLAG_NO3DBORDER come valore predefinito di questa proprietà.

##  <a name="put_font"></a>  IAxWinAmbientDispatch::put_Font

Il `Font` proprietà specifica il tipo di carattere ambiente del contenitore.

```
STDMETHOD(put_Font)(IFontDisp* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa il tipo di carattere predefinito GUI o al tipo di carattere come valore predefinito di questa proprietà.

##  <a name="put_forecolor"></a>  IAxWinAmbientDispatch::put_ForeColor

Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.

```
STDMETHOD(put_ForeColor)(OLE_COLOR clrForeground);
```

### <a name="parameters"></a>Parametri

*clrForeground*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa il colore del testo finestra sistema come il valore predefinito di questa proprietà.

##  <a name="put_localeid"></a>  IAxWinAmbientDispatch::put_LocaleID

Il `LocaleID` proprietà specifica l'ID impostazioni locali di ambiente del contenitore.

```
STDMETHOD(put_LocaleID)(LCID lcidLocaleID);
```

### <a name="parameters"></a>Parametri

*lcidLocaleID*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa le impostazioni locali predefinito dell'utente come valore predefinito di questa proprietà.

##  <a name="put_messagereflect"></a>  IAxWinAmbientDispatch::put_MessageReflect

Il `MessageReflect` proprietà di ambiente specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.

```
STDMETHOD(put_MessageReflect)(VARIANT_BOOL bMessageReflect);
```

### <a name="parameters"></a>Parametri

*bMessageReflect*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_optionkeypath"></a>  IAxWinAmbientDispatch::put_OptionKeyPath

Il `OptionKeyPath` proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni dell'utente.

```
STDMETHOD(put_OptionKeyPath)(BSTR bstrOptionKeyPath);
```

### <a name="parameters"></a>Parametri

*bstrOptionKeyPath*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

##  <a name="put_usermode"></a>  IAxWinAmbientDispatch::put_UserMode

Il `UserMode` proprietà specifica la modalità dell'ambiente utente del contenitore.

```
STDMETHOD(put_UserMode)(VARIANT_BOOL bUserMode);
```

### <a name="parameters"></a>Parametri

*bUserMode*<br/>
[in] Il nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Un valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.

## <a name="see-also"></a>Vedere anche

[Interfaccia IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md)<br/>
[Interfaccia IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md)<br/>
[CAxWindow::QueryHost](../../atl/reference/caxwindow-class.md#queryhost)<br/>
[AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)
