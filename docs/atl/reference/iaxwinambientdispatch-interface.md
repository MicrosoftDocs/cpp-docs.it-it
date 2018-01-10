---
title: Interfaccia IAxWinAmbientDispatch | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
dev_langs: C++
helpviewer_keywords: IAxWinAmbientDispatch interface
ms.assetid: 55ba6f7b-7a3c-4792-ae47-c8a84b683ca9
caps.latest.revision: "24"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e9d53dc257920e40dbf6a2f360d1289676d121fd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="iaxwinambientdispatch-interface"></a>Interfaccia IAxWinAmbientDispatch
Questa interfaccia fornisce metodi per specificare le caratteristiche del controllo ospitato o del contenitore.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
interface IAxWinAmbientDispatch : IDispatch
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[get_AllowContextMenu](#get_allowcontextmenu)|Il **AllowContextMenu** proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.|  
|[get_AllowShowUI](#get_allowshowui)|Il **AllowShowUI** proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.|  
|[get_AllowWindowlessActivation](#get_allowwindowlessactivation)|Il **AllowWindowlessActivation** proprietà specifica se il contenitore consentirà l'attivazione senza finestra.|  
|[get_BackColor](#get_backcolor)|Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.|  
|[get_DisplayAsDefault](#get_displayasdefault)|**DisplayAsDefault** è una proprietà di ambiente che consente a un controllo sapere se è il controllo predefinito.|  
|[get_DocHostDoubleClickFlags](#get_dochostdoubleclickflags)|Il **DocHostDoubleClickFlags** proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.|  
|[get_DocHostFlags](#get_dochostflags)|Il **DocHostFlags** proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.|  
|[get_Font](#get_font)|Il **carattere** proprietà specifica il tipo di carattere ambiente del contenitore.|  
|[get_ForeColor](#get_forecolor)|Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.|  
|[get_LocaleID](#get_localeid)|Il **LocaleID** proprietà specifica l'ID impostazioni locali di ambiente del contenitore.|  
|[get_MessageReflect](#get_messagereflect)|Il **MessageReflect** ambiente proprietà specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.|  
|[get_OptionKeyPath](#get_optionkeypath)|Il **OptionKeyPath** proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni utente.|  
|[get_ShowGrabHandles](#get_showgrabhandles)|Il **ShowGrabHandles** proprietà ambiente consente il controllo sapere se è necessario disegnare se stesso con quadratini di ridimensionamento.|  
|[get_ShowHatching](#get_showhatching)|Il **ShowHatching** proprietà ambiente consente il controllo sapere se deve essere disegnato stesso tratteggio.|  
|[get_UserMode](#get_usermode)|Il **UserMode** proprietà specifica la modalità dell'ambiente utente del contenitore.|  
|[put_AllowContextMenu](#put_allowcontextmenu)|Il **AllowContextMenu** proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.|  
|[put_AllowShowUI](#put_allowshowui)|Il **AllowShowUI** proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.|  
|[put_AllowWindowlessActivation](#put_allowwindowlessactivation)|Il **AllowWindowlessActivation** proprietà specifica se il contenitore consentirà l'attivazione senza finestra.|  
|[put_BackColor](#put_backcolor)|Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.|  
|[put_DisplayAsDefault](#put_displayasdefault)|**DisplayAsDefault** è una proprietà di ambiente che consente a un controllo sapere se è il controllo predefinito.|  
|[put_DocHostDoubleClickFlags](#put_dochostdoubleclickflags)|Il **DocHostDoubleClickFlags** proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.|  
|[put_DocHostFlags](#put_dochostflags)|Il **DocHostFlags** proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.|  
|[put_Font](#put_font)|Il **carattere** proprietà specifica il tipo di carattere ambiente del contenitore.|  
|[put_ForeColor](#put_forecolor)|Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.|  
|[put_LocaleID](#put_localeid)|Il **LocaleID** proprietà specifica l'ID impostazioni locali di ambiente del contenitore.|  
|[put_MessageReflect](#put_messagereflect)|Il **MessageReflect** ambiente proprietà specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.|  
|[put_OptionKeyPath](#put_optionkeypath)|Il **OptionKeyPath** proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni utente.|  
|[put_UserMode](#put_usermode)|Il **UserMode** proprietà specifica la modalità dell'ambiente utente del contenitore.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene esposta dal controllo ActiveX ATL che ospita gli oggetti. Chiamare i metodi su questa interfaccia per impostare le proprietà di ambiente disponibili per il controllo contenuto o per specificare altri aspetti del comportamento del contenitore. Per integrare le proprietà fornite da `IAxWinAmbientDispatch`, utilizzare [IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md).  
  
 [AXHost](https://msdn.microsoft.com/library/system.windows.forms.axhost.aspx) tenterà di caricare le informazioni sul tipo su `IAxWinAmbientDispatch` e `IAxWinAmbientDispatchEx` dalla libreria dei tipi che contiene il codice.  
  
 Se si collega a ATL90, **AXHost** caricherà le informazioni sul tipo da libreria dei tipi nella DLL.  
  
 Vedere [Hosting ActiveX controlli tramite ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) per altri dettagli.  
  
## <a name="requirements"></a>Requisiti  
 La definizione di questa interfaccia è disponibile in diversi formati, come illustrato nella tabella seguente.  
  
|Tipo di definizione|File|  
|---------------------|----------|  
|IDL|atliface.idl|  
|Libreria dei tipi|ATL|  
|C++|atliface.h (incluso anche in atlbase. H)|  
  
##  <a name="get_allowcontextmenu"></a>IAxWinAmbientDispatch::get_AllowContextMenu  
 Il **AllowContextMenu** proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.  
  
```
STDMETHOD(get_AllowContextMenu)(VARIANT_BOOL* pbAllowContextMenu);
```  
  
### <a name="parameters"></a>Parametri  
 *pbAllowContextMenu*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="get_allowshowui"></a>IAxWinAmbientDispatch::get_AllowShowUI  
 Il **AllowShowUI** proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.  
  
```
STDMETHOD(get_AllowShowUI)(VARIANT_BOOL* pbAllowShowUI);
```  
  
### <a name="parameters"></a>Parametri  
 *pbAllowShowUI*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="get_allowwindowlessactivation"></a>IAxWinAmbientDispatch::get_AllowWindowlessActivation  
 Il **AllowWindowlessActivation** proprietà specifica se il contenitore consentirà l'attivazione senza finestra.  
  
```
STDMETHOD(get_AllowWindowlessActivation)(VARIANT_BOOL* pbAllowWindowless);
```  
  
### <a name="parameters"></a>Parametri  
 *pbAllowWindowless*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="get_backcolor"></a>IAxWinAmbientDispatch::get_BackColor  
 Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.  
  
```
STDMETHOD(get_BackColor)(OLE_COLOR* pclrBackground);
```  
  
### <a name="parameters"></a>Parametri  
 *pclrBackground*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **COLOR_BTNFACE** o **COLOR_WINDOW** come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra host sia una finestra di dialogo o meno).  
  
##  <a name="get_displayasdefault"></a>IAxWinAmbientDispatch::get_DisplayAsDefault  
 **DisplayAsDefault** è una proprietà di ambiente che consente a un controllo sapere se è il controllo predefinito.  
  
```
STDMETHOD(get_DisplayAsDefault)(VARIANT_BOOL* pbDisplayAsDefault);
```  
  
### <a name="parameters"></a>Parametri  
 *pbDisplayAsDefault*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="get_dochostdoubleclickflags"></a>IAxWinAmbientDispatch::get_DocHostDoubleClickFlags  
 Il **DocHostDoubleClickFlags** proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.  
  
```
STDMETHOD(get_DocHostDoubleClickFlags)(DWORD* pdwDocHostDoubleClickFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *pdwDocHostDoubleClickFlags*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **DOCHOSTUIDBLCLK_DEFAULT** come valore predefinito di questa proprietà.  
  
##  <a name="get_dochostflags"></a>IAxWinAmbientDispatch::get_DocHostFlags  
 Il **DocHostFlags** proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.  
  
```
STDMETHOD(get_DocHostFlags)(DWORD* pdwDocHostFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *pdwDocHostFlags*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **DOCHOSTUIFLAG_NO3DBORDER** come valore predefinito di questa proprietà.  
  
##  <a name="get_font"></a>IAxWinAmbientDispatch::get_Font  
 Il **carattere** proprietà specifica il tipo di carattere ambiente del contenitore.  
  
```
STDMETHOD(get_Font)(IFontDisp** pFont);
```  
  
### <a name="parameters"></a>Parametri  
 `pFont`  
 [out] L'indirizzo di un **IFontDisp** puntatore a interfaccia usato per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza il tipo di carattere predefinito GUI o il carattere di sistema come valore predefinito di questa proprietà.  
  
##  <a name="get_forecolor"></a>IAxWinAmbientDispatch::get_ForeColor  
 Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.  
  
```
STDMETHOD(get_ForeColor)(OLE_COLOR* pclrForeground);
```  
  
### <a name="parameters"></a>Parametri  
 *pclrForeground*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa il colore del testo finestra sistema come valore predefinito di questa proprietà.  
  
##  <a name="get_localeid"></a>IAxWinAmbientDispatch::get_LocaleID  
 Il **LocaleID** proprietà specifica l'ID impostazioni locali di ambiente del contenitore.  
  
```
STDMETHOD(get_LocaleID)(LCID* plcidLocaleID);
```  
  
### <a name="parameters"></a>Parametri  
 *plcidLocaleID*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.  
  
 Con questo metodo è possibile individuare l'ambiente LocalID, vale a dire, il valore LocaleID del programma del controllo viene utilizzato in. Quando si conosce l'ID delle impostazioni locali, è possibile chiamare codice per caricare le didascalie specifiche delle impostazioni locali, testo del messaggio di errore, e così via da un file di risorse o di una DLL satellite.  
  
##  <a name="get_messagereflect"></a>IAxWinAmbientDispatch::get_MessageReflect  
 Il **MessageReflect** ambiente proprietà specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.  
  
```
STDMETHOD(get_MessageReflect)(VARIANT_BOOL* pbMessageReflect);
```  
  
### <a name="parameters"></a>Parametri  
 *pbMessageReflect*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="get_optionkeypath"></a>IAxWinAmbientDispatch::get_OptionKeyPath  
 Il **OptionKeyPath** proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni utente.  
  
```
STDMETHOD(get_OptionKeyPath)(BSTR* pbstrOptionKeyPath);
```  
  
### <a name="parameters"></a>Parametri  
 *pbstrOptionKeyPath*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="get_showgrabhandles"></a>IAxWinAmbientDispatch::get_ShowGrabHandles  
 Il **ShowGrabHandles** proprietà ambiente consente il controllo sapere se è necessario disegnare se stesso con quadratini di ridimensionamento.  
  
```
STDMETHOD(get_ShowGrabHandles)(VARIANT_BOOL* pbShowGrabHandles);
```  
  
### <a name="parameters"></a>Parametri  
 *pbShowGrabHandles*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Restituisce sempre l'implementazione ATL oggetto host **VARIANT_FALSE** come valore di questa proprietà.  
  
##  <a name="get_showhatching"></a>IAxWinAmbientDispatch::get_ShowHatching  
 Il **ShowHatching** proprietà ambiente consente il controllo sapere se deve essere disegnato stesso tratteggio.  
  
```
STDMETHOD(get_ShowHatching)(VARIANT_BOOL* pbShowHatching);
```  
  
### <a name="parameters"></a>Parametri  
 *pbShowHatching*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Restituisce sempre l'implementazione ATL oggetto host **VARIANT_FALSE** come valore di questa proprietà.  
  
##  <a name="get_usermode"></a>IAxWinAmbientDispatch::get_UserMode  
 Il **UserMode** proprietà specifica la modalità dell'ambiente utente del contenitore.  
  
```
STDMETHOD(get_UserMode)(VARIANT_BOOL* pbUserMode);
```  
  
### <a name="parameters"></a>Parametri  
 *pbUserMode*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="put_allowcontextmenu"></a>IAxWinAmbientDispatch::put_AllowContextMenu  
 Il **AllowContextMenu** proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.  
  
```
STDMETHOD(put_AllowContextMenu)(VARIANT_BOOL bAllowContextMenu);
```  
  
### <a name="parameters"></a>Parametri  
 *bAllowContextMenu*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="put_allowshowui"></a>IAxWinAmbientDispatch::put_AllowShowUI  
 Il **AllowShowUI** proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.  
  
```
STDMETHOD(put_AllowShowUI)(VARIANT_BOOL bAllowShowUI);
```  
  
### <a name="parameters"></a>Parametri  
 *bAllowShowUI*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="put_allowwindowlessactivation"></a>IAxWinAmbientDispatch::put_AllowWindowlessActivation  
 Il **AllowWindowlessActivation** proprietà specifica se il contenitore consentirà l'attivazione senza finestra.  
  
```
STDMETHOD(put_AllowWindowlessActivation)(VARIANT_BOOL bAllowWindowless);
```  
  
### <a name="parameters"></a>Parametri  
 *bAllowWindowless*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="put_backcolor"></a>IAxWinAmbientDispatch::put_BackColor  
 Il `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.  
  
```
STDMETHOD(put_BackColor)(OLE_COLOR clrBackground);
```  
  
### <a name="parameters"></a>Parametri  
 *clrBackground*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **COLOR_BTNFACE** o **COLOR_WINDOW** come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra host sia una finestra di dialogo o meno).  
  
##  <a name="put_displayasdefault"></a>IAxWinAmbientDispatch::put_DisplayAsDefault  
 **DisplayAsDefault** è una proprietà di ambiente che consente a un controllo sapere se è il controllo predefinito.  
  
```
STDMETHOD(put_DisplayAsDefault)(VARIANT_BOOL bDisplayAsDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `bDisplayAsDefault`  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="put_dochostdoubleclickflags"></a>IAxWinAmbientDispatch::put_DocHostDoubleClickFlags  
 Il **DocHostDoubleClickFlags** proprietà specifica l'operazione che dovrà essere eseguita in risposta a un doppio clic.  
  
```
STDMETHOD(put_DocHostDoubleClickFlags)(DWORD dwDocHostDoubleClickFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDocHostDoubleClickFlags*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **DOCHOSTUIDBLCLK_DEFAULT** come valore predefinito di questa proprietà.  
  
##  <a name="put_dochostflags"></a>IAxWinAmbientDispatch::put_DocHostFlags  
 Il **DocHostFlags** proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.  
  
```
STDMETHOD(put_DocHostFlags)(DWORD dwDocHostFlags);
```  
  
### <a name="parameters"></a>Parametri  
 *dwDocHostFlags*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa **DOCHOSTUIFLAG_NO3DBORDER** come valore predefinito di questa proprietà.  
  
##  <a name="put_font"></a>IAxWinAmbientDispatch::put_Font  
 Il **carattere** proprietà specifica il tipo di carattere ambiente del contenitore.  
  
```
STDMETHOD(put_Font)(IFontDisp* pFont);
```  
  
### <a name="parameters"></a>Parametri  
 `pFont`  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza il tipo di carattere predefinito GUI o il carattere di sistema come valore predefinito di questa proprietà.  
  
##  <a name="put_forecolor"></a>IAxWinAmbientDispatch::put_ForeColor  
 Il `ForeColor` proprietà specifica il colore di primo piano dell'ambiente del contenitore.  
  
```
STDMETHOD(put_ForeColor)(OLE_COLOR clrForeground);
```  
  
### <a name="parameters"></a>Parametri  
 *clrForeground*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa il colore del testo finestra sistema come valore predefinito di questa proprietà.  
  
##  <a name="put_localeid"></a>IAxWinAmbientDispatch::put_LocaleID  
 Il **LocaleID** proprietà specifica l'ID impostazioni locali di ambiente del contenitore.  
  
```
STDMETHOD(put_LocaleID)(LCID lcidLocaleID);
```  
  
### <a name="parameters"></a>Parametri  
 *lcidLocaleID*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.  
  
##  <a name="put_messagereflect"></a>IAxWinAmbientDispatch::put_MessageReflect  
 Il **MessageReflect** ambiente proprietà specifica se il contenitore rifletteranno i messaggi per il controllo ospitato.  
  
```
STDMETHOD(put_MessageReflect)(VARIANT_BOOL bMessageReflect);
```  
  
### <a name="parameters"></a>Parametri  
 `bMessageReflect`  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="put_optionkeypath"></a>IAxWinAmbientDispatch::put_OptionKeyPath  
 Il **OptionKeyPath** proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni utente.  
  
```
STDMETHOD(put_OptionKeyPath)(BSTR bstrOptionKeyPath);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrOptionKeyPath*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="put_usermode"></a>IAxWinAmbientDispatch::put_UserMode  
 Il **UserMode** proprietà specifica la modalità dell'ambiente utente del contenitore.  
  
```
STDMETHOD(put_UserMode)(VARIANT_BOOL bUserMode);
```  
  
### <a name="parameters"></a>Parametri  
 `bUserMode`  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Usa l'implementazione dell'oggetto host ATL `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
## <a name="see-also"></a>Vedere anche  
 [Interfaccia IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md)   
 [Interfaccia IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md)   
 [CAxWindow:: QueryHost](../../atl/reference/caxwindow-class.md#queryhost)   
 [AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)









