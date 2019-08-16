---
title: Classe IAtlMemMgr
ms.date: 11/04/2016
f1_keywords:
- IAtlMemMgr
- ATLMEM/ATL::IAtlMemMgr
- ATLMEM/ATL::Allocate
- ATLMEM/ATL::Free
- ATLMEM/ATL::GetSize
- ATLMEM/ATL::Reallocate
helpviewer_keywords:
- IAtlMemMgr class
- memory, managing
- memory, memory manager
ms.assetid: 18b2c569-25fe-4464-bdb6-3b1abef7154a
ms.openlocfilehash: a0d79ae95a0604ca75f03673873e99394a1bc295
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69496075"
---
# <a name="iatlmemmgr-class"></a>Classe IAtlMemMgr

Questa classe rappresenta l'interfaccia per un gestore della memoria.

## <a name="syntax"></a>Sintassi

```
__interface __declspec(uuid("654F7EF5-CFDF-4df9-A450-6C6A13C622C0")) IAtlMemMgr
```

## <a name="members"></a>Members

### <a name="methods"></a>Metodi

|||
|-|-|
|[Allocare](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|
|[Libero](#free)|Chiamare questo metodo per liberare un blocco di memoria.|
|[GetSize](#getsize)|Chiamare questo metodo per recuperare la dimensione di un blocco di memoria allocato.|
|[Riassegnare](#reallocate)|Chiamare questo metodo per riallocare un blocco di memoria.|

## <a name="remarks"></a>Note

Questa interfaccia viene implementata da [CComHeap](../../atl/reference/ccomheap-class.md), [CCRTHeap](../../atl/reference/ccrtheap-class.md), [CLocalHeap](../../atl/reference/clocalheap-class.md), [CGlobalHeap](../../atl/reference/cglobalheap-class.md)o [CWin32Heap](../../atl/reference/cwin32heap-class.md).

> [!NOTE]
>  Le funzioni heap locali e globali sono più lente di altre funzioni di gestione della memoria e non forniscono tutte le funzionalità. Pertanto, le nuove applicazioni devono utilizzare le [funzioni dell'heap](/windows/win32/Memory/heap-functions). Sono disponibili nella classe [CWin32Heap](../../atl/reference/cwin32heap-class.md) .

## <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#94](../../atl/codesnippet/cpp/iatlmemmgr-class_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** atlmem. h

##  <a name="allocate"></a>  IAtlMemMgr::Allocate

Chiamare questo metodo per allocare un blocco di memoria.

```
void* Allocate(size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*nBytes*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Note

Chiamare [IAtlMemMgr:: Free](#free) o [IAtlMemMgr::](#reallocate) Reallocate per liberare la memoria allocata da questo metodo.

### <a name="example"></a>Esempio

Per un esempio, vedere [Panoramica di IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

##  <a name="free"></a>  IAtlMemMgr::Free

Chiamare questo metodo per liberare un blocco di memoria.

```
void Free(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

### <a name="remarks"></a>Note

Utilizzare questo metodo per liberare la memoria ottenuta da [IAtlMemMgr:: allocate](#allocate) o [IAtlMemMgr::](#reallocate)Reallocate.

### <a name="example"></a>Esempio

Per un esempio, vedere [Panoramica di IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

##  <a name="getsize"></a>  IAtlMemMgr::GetSize

Chiamare questo metodo per recuperare la dimensione di un blocco di memoria allocato.

```
size_t GetSize(void* p) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce la dimensione del blocco di memoria in byte.

### <a name="example"></a>Esempio

Per un esempio, vedere [Panoramica di IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

##  <a name="reallocate"></a>  IAtlMemMgr::Reallocate

Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.

```
void* Reallocate(void* p, size_t nBytes) throw();
```

### <a name="parameters"></a>Parametri

*p*<br/>
Puntatore alla memoria precedentemente allocata dal gestore di memoria.

*nBytes*<br/>
Numero di byte necessari nel nuovo blocco di memoria.

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'inizio del blocco di memoria allocata.

### <a name="remarks"></a>Note

Chiamare [IAtlMemMgr:: Free](#free) o [IAtlMemMgr::](#reallocate) Reallocate per liberare la memoria allocata da questo metodo.

Concettualmente questo metodo libera la memoria esistente e alloca un nuovo blocco di memoria. In realtà, la memoria esistente può essere estesa o riutilizzata in altro modo.

### <a name="example"></a>Esempio

Per un esempio, vedere [Panoramica di IAtlMemMgr](../../atl/reference/iatlmemmgr-class.md).

##  <a name="get_allowcontextmenu"></a>  IAxWinAmbientDispatch::get_AllowContextMenu

La `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.

```
STDMETHOD(get_AllowContextMenu)(VARIANT_BOOL* pbAllowContextMenu);
```

### <a name="parameters"></a>Parametri

*pbAllowContextMenu*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="get_allowshowui"></a>  IAxWinAmbientDispatch::get_AllowShowUI

La `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.

```
STDMETHOD(get_AllowShowUI)(VARIANT_BOOL* pbAllowShowUI);
```

### <a name="parameters"></a>Parametri

*pbAllowShowUI*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="get_allowwindowlessactivation"></a>  IAxWinAmbientDispatch::get_AllowWindowlessActivation

La `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.

```
STDMETHOD(get_AllowWindowlessActivation)(VARIANT_BOOL* pbAllowWindowless);
```

### <a name="parameters"></a>Parametri

*pbAllowWindowless*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="get_backcolor"></a>  IAxWinAmbientDispatch::get_BackColor

La `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.

```
STDMETHOD(get_BackColor)(OLE_COLOR* pclrBackground);
```

### <a name="parameters"></a>Parametri

*pclrBackground*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza COLOR_BTNFACE o COLOR_WINDOW come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra host sia o meno una finestra di dialogo).

##  <a name="get_displayasdefault"></a>  IAxWinAmbientDispatch::get_DisplayAsDefault

`DisplayAsDefault`è una proprietà di ambiente che consente a un controllo di individuare se è il controllo predefinito.

```
STDMETHOD(get_DisplayAsDefault)(VARIANT_BOOL* pbDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*pbDisplayAsDefault*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="get_dochostdoubleclickflags"></a>  IAxWinAmbientDispatch::get_DocHostDoubleClickFlags

La `DocHostDoubleClickFlags` proprietà specifica l'operazione che deve essere eseguita in risposta a un doppio clic.

```
STDMETHOD(get_DocHostDoubleClickFlags)(DWORD* pdwDocHostDoubleClickFlags);
```

### <a name="parameters"></a>Parametri

*pdwDocHostDoubleClickFlags*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIDBLCLK_DEFAULT come valore predefinito di questa proprietà.

##  <a name="get_dochostflags"></a>  IAxWinAmbientDispatch::get_DocHostFlags

La `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.

```
STDMETHOD(get_DocHostFlags)(DWORD* pdwDocHostFlags);
```

### <a name="parameters"></a>Parametri

*pdwDocHostFlags*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIFLAG_NO3DBORDER come valore predefinito di questa proprietà.

##  <a name="get_font"></a>  IAxWinAmbientDispatch::get_Font

La `Font` proprietà specifica il tipo di carattere ambiente del contenitore.

```
STDMETHOD(get_Font)(IFontDisp** pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
out Indirizzo di un `IFontDisp` puntatore a interfaccia utilizzato per ricevere il valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL USA il tipo di carattere predefinito della GUI o il tipo di carattere del sistema come valore predefinito di questa proprietà.

##  <a name="get_forecolor"></a>  IAxWinAmbientDispatch::get_ForeColor

La `ForeColor` proprietà specifica il colore di primo piano di ambiente del contenitore.

```
STDMETHOD(get_ForeColor)(OLE_COLOR* pclrForeground);
```

### <a name="parameters"></a>Parametri

*pclrForeground*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza il colore del testo della finestra di sistema come valore predefinito di questa proprietà.

##  <a name="get_localeid"></a>  IAxWinAmbientDispatch::get_LocaleID

La `LocaleID` proprietà specifica l'ID delle impostazioni locali di ambiente del contenitore.

```
STDMETHOD(get_LocaleID)(LCID* plcidLocaleID);
```

### <a name="parameters"></a>Parametri

*plcidLocaleID*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza le impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.

Con questo metodo è possibile individuare l'ambiente localizzato, ovvero il LocaleID del programma in cui viene usato il controllo. Quando si conosce il LocaleID, è possibile chiamare il codice per caricare didascalie specifiche delle impostazioni locali, testo del messaggio di errore e così via da un file di risorse o da una DLL satellite.

##  <a name="get_messagereflect"></a>  IAxWinAmbientDispatch::get_MessageReflect

La `MessageReflect` proprietà di ambiente specifica se il contenitore rifletterà i messaggi nel controllo ospitato.

```
STDMETHOD(get_MessageReflect)(VARIANT_BOOL* pbMessageReflect);
```

### <a name="parameters"></a>Parametri

*pbMessageReflect*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="get_optionkeypath"></a>  IAxWinAmbientDispatch::get_OptionKeyPath

La `OptionKeyPath` proprietà specifica il percorso della chiave del registro di sistema per le impostazioni utente.

```
STDMETHOD(get_OptionKeyPath)(BSTR* pbstrOptionKeyPath);
```

### <a name="parameters"></a>Parametri

*pbstrOptionKeyPath*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="get_showgrabhandles"></a>  IAxWinAmbientDispatch::get_ShowGrabHandles

La `ShowGrabHandles` proprietà di ambiente consente al controllo di determinare se deve disegnarsi con handle di ridimensionamento.

```
STDMETHOD(get_ShowGrabHandles)(VARIANT_BOOL* pbShowGrabHandles);
```

### <a name="parameters"></a>Parametri

*pbShowGrabHandles*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL restituisce sempre VARIANT_FALSE come valore di questa proprietà.

##  <a name="get_showhatching"></a>  IAxWinAmbientDispatch::get_ShowHatching

La `ShowHatching` proprietà di ambiente consente al controllo di determinare se deve essere disegnato.

```
STDMETHOD(get_ShowHatching)(VARIANT_BOOL* pbShowHatching);
```

### <a name="parameters"></a>Parametri

*pbShowHatching*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL restituisce sempre VARIANT_FALSE come valore di questa proprietà.

##  <a name="get_usermode"></a>  IAxWinAmbientDispatch::get_UserMode

La `UserMode` proprietà specifica la modalità utente di ambiente del contenitore.

```
STDMETHOD(get_UserMode)(VARIANT_BOOL* pbUserMode);
```

### <a name="parameters"></a>Parametri

*pbUserMode*<br/>
out Indirizzo di una variabile per la ricezione del valore corrente di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_allowcontextmenu"></a>  IAxWinAmbientDispatch::put_AllowContextMenu

La `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.

```
STDMETHOD(put_AllowContextMenu)(VARIANT_BOOL bAllowContextMenu);
```

### <a name="parameters"></a>Parametri

*bAllowContextMenu*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_allowshowui"></a>  IAxWinAmbientDispatch::put_AllowShowUI

La `AllowShowUI` proprietà specifica se il controllo ospitato è autorizzato a visualizzare la propria interfaccia utente.

```
STDMETHOD(put_AllowShowUI)(VARIANT_BOOL bAllowShowUI);
```

### <a name="parameters"></a>Parametri

*bAllowShowUI*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="put_allowwindowlessactivation"></a>  IAxWinAmbientDispatch::put_AllowWindowlessActivation

La `AllowWindowlessActivation` proprietà specifica se il contenitore consentirà l'attivazione senza finestra.

```
STDMETHOD(put_AllowWindowlessActivation)(VARIANT_BOOL bAllowWindowless);
```

### <a name="parameters"></a>Parametri

*bAllowWindowless*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_backcolor"></a>  IAxWinAmbientDispatch::put_BackColor

La `BackColor` proprietà specifica il colore di sfondo dell'ambiente del contenitore.

```
STDMETHOD(put_BackColor)(OLE_COLOR clrBackground);
```

### <a name="parameters"></a>Parametri

*clrBackground*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza COLOR_BTNFACE o COLOR_WINDOW come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra host sia o meno una finestra di dialogo).

##  <a name="put_displayasdefault"></a>  IAxWinAmbientDispatch::put_DisplayAsDefault

`DisplayAsDefault`è una proprietà di ambiente che consente a un controllo di individuare se è il controllo predefinito.

```
STDMETHOD(put_DisplayAsDefault)(VARIANT_BOOL bDisplayAsDefault);
```

### <a name="parameters"></a>Parametri

*bDisplayAsDefault*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_FALSE come valore predefinito di questa proprietà.

##  <a name="put_dochostdoubleclickflags"></a>  IAxWinAmbientDispatch::put_DocHostDoubleClickFlags

La `DocHostDoubleClickFlags` proprietà specifica l'operazione che deve essere eseguita in risposta a un doppio clic.

```
STDMETHOD(put_DocHostDoubleClickFlags)(DWORD dwDocHostDoubleClickFlags);
```

### <a name="parameters"></a>Parametri

*dwDocHostDoubleClickFlags*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIDBLCLK_DEFAULT come valore predefinito di questa proprietà.

##  <a name="put_dochostflags"></a>  IAxWinAmbientDispatch::put_DocHostFlags

La `DocHostFlags` proprietà specifica le funzionalità dell'interfaccia utente dell'oggetto host.

```
STDMETHOD(put_DocHostFlags)(DWORD dwDocHostFlags);
```

### <a name="parameters"></a>Parametri

*dwDocHostFlags*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza DOCHOSTUIFLAG_NO3DBORDER come valore predefinito di questa proprietà.

##  <a name="put_font"></a>  IAxWinAmbientDispatch::put_Font

La `Font` proprietà specifica il tipo di carattere ambiente del contenitore.

```
STDMETHOD(put_Font)(IFontDisp* pFont);
```

### <a name="parameters"></a>Parametri

*pFont*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL USA il tipo di carattere predefinito della GUI o il tipo di carattere del sistema come valore predefinito di questa proprietà.

##  <a name="put_forecolor"></a>  IAxWinAmbientDispatch::put_ForeColor

La `ForeColor` proprietà specifica il colore di primo piano di ambiente del contenitore.

```
STDMETHOD(put_ForeColor)(OLE_COLOR clrForeground);
```

### <a name="parameters"></a>Parametri

*clrForeground*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza il colore del testo della finestra di sistema come valore predefinito di questa proprietà.

##  <a name="put_localeid"></a>  IAxWinAmbientDispatch::put_LocaleID

La `LocaleID` proprietà specifica l'ID delle impostazioni locali di ambiente del contenitore.

```
STDMETHOD(put_LocaleID)(LCID lcidLocaleID);
```

### <a name="parameters"></a>Parametri

*lcidLocaleID*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza le impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.

##  <a name="put_messagereflect"></a>  IAxWinAmbientDispatch::put_MessageReflect

La `MessageReflect` proprietà di ambiente specifica se il contenitore rifletterà i messaggi nel controllo ospitato.

```
STDMETHOD(put_MessageReflect)(VARIANT_BOOL bMessageReflect);
```

### <a name="parameters"></a>Parametri

*bMessageReflect*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="put_optionkeypath"></a>  IAxWinAmbientDispatch::put_OptionKeyPath

La `OptionKeyPath` proprietà specifica il percorso della chiave del registro di sistema per le impostazioni utente.

```
STDMETHOD(put_OptionKeyPath)(BSTR bstrOptionKeyPath);
```

### <a name="parameters"></a>Parametri

*bstrOptionKeyPath*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="put_usermode"></a>  IAxWinAmbientDispatch::put_UserMode

La `UserMode` proprietà specifica la modalità utente di ambiente del contenitore.

```
STDMETHOD(put_UserMode)(VARIANT_BOOL bUserMode);
```

### <a name="parameters"></a>Parametri

*bUserMode*<br/>
in Nuovo valore di questa proprietà.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

L'implementazione dell'oggetto host ATL utilizza VARIANT_TRUE come valore predefinito di questa proprietà.

##  <a name="setambientdispatch"></a>IAxWinAmbientDispatchEx:: SetAmbientDispatch

Questo metodo viene chiamato per integrare l'interfaccia della proprietà di ambiente predefinita con un'interfaccia definita dall'utente.

```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```

### <a name="parameters"></a>Parametri

*pDispatch*<br/>
Puntatore alla nuova interfaccia.

### <a name="return-value"></a>Valore restituito

Restituisce S_OK in caso di esito positivo o un errore HRESULT in caso di esito negativo.

### <a name="remarks"></a>Note

Quando `SetAmbientDispatch` viene chiamato con un puntatore a una nuova interfaccia, questa nuova interfaccia verrà utilizzata per richiamare eventuali proprietà o metodi richiesti dal controllo ospitato, se tali proprietà non sono già state fornite da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).

##  <a name="attachcontrol"></a>  IAxWinHostWindow::AttachControl

Connette un controllo esistente (e precedentemente inizializzato) all'oggetto host utilizzando la finestra identificata da *HWND*.

```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```

### <a name="parameters"></a>Parametri

*pUnkControl*<br/>
in Puntatore all' `IUnknown` interfaccia del controllo da collegare all'oggetto host.

*hWnd*<br/>
in Handle per la finestra da utilizzare per l'hosting.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="createcontrol"></a>  IAxWinHostWindow::CreateControl

Crea un controllo, lo inizializza e lo ospita nella finestra identificata da *HWND*.

```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```

### <a name="parameters"></a>Parametri

*lpTricsData*<br/>
in Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **mshtml:** ).

*hWnd*<br/>
in Handle per la finestra da utilizzare per l'hosting.

*pStream*<br/>
in Puntatore a un'interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Questa finestra sarà sottoclassata dall'oggetto host che espone questa interfaccia in modo che i messaggi possano essere riflessi nel controllo e le altre funzionalità del contenitore funzioneranno.

La chiamata a questo metodo equivale alla chiamata di [IAxWinHostWindow:: CreateControlEx](#createcontrolex).

Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic:: CreateControlLic](#createcontrollicex).

##  <a name="createcontrolex"></a>  IAxWinHostWindow::CreateControlEx

Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [IAxWinHostWindow:: CreateControl](#createcontrol).

```
STDMETHOD(CreateControlEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise);
```

### <a name="parameters"></a>Parametri

*lpTricsData*<br/>
in Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **mshtml:** ).

*hWnd*<br/>
in Handle per la finestra da utilizzare per l'hosting.

*pStream*<br/>
in Puntatore a un'interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.

*ppUnk*<br/>
out Indirizzo di un puntatore che riceverà l' `IUnknown` interfaccia del controllo creato. Può essere NULL.

*riidAdvise*<br/>
in Identificatore di interfaccia di un'interfaccia in uscita sull'oggetto contenuto. Può essere IID_NULL.

*punkAdvise*<br/>
in Puntatore all' `IUnknown` interfaccia dell'oggetto sink da connettere al punto di connessione nell'oggetto contenuto specificato da `iidSink`.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

A differenza del `CreateControl` metodo, `CreateControlEx` consente anche di ricevere un puntatore a interfaccia per il controllo appena creato e di configurare un sink di evento per ricevere gli eventi generati dal controllo.

Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic:: CreateControlLicEx](#createcontrollicex).

##  <a name="querycontrol"></a>  IAxWinHostWindow::QueryControl

Restituisce il puntatore a interfaccia specificato fornito dal controllo ospitato.

```
STDMETHOD(QueryControl)(REFIID riid, void** ppvObject);
```

### <a name="parameters"></a>Parametri

*riid*<br/>
in ID di un'interfaccia sul controllo da richiedere.

*ppvObject*<br/>
out Indirizzo di un puntatore che riceverà l'interfaccia specificata del controllo creato.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="setexternaldispatch"></a>IAxWinHostWindow:: SetExternalDispatch

Imposta l'interfaccia dispatch esterna, disponibile per i controlli contenuti tramite il metodo [IDocHostUIHandlerDispatch:: GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) .

```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
in Puntatore a un' `IDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

##  <a name="setexternaluihandler"></a>  IAxWinHostWindow::SetExternalUIHandler

Chiamare questa funzione per impostare l'interfaccia [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) esterna per l' `CAxWindow` oggetto.

```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```

### <a name="parameters"></a>Parametri

*pDisp*<br/>
in Puntatore a un' `IDocHostUIHandlerDispatch` interfaccia.

### <a name="return-value"></a>Valore restituito

Valore HRESULT standard.

### <a name="remarks"></a>Note

Questa funzione viene utilizzata dai controlli (ad esempio, il controllo Web browser) che eseguono una query sul sito dell' `IDocHostUIHandlerDispatch` host per l'interfaccia.

##  <a name="createcontrollic"></a>  IAxWinHostWindowLic::CreateControlLic

Crea un controllo concesso in licenza, lo inizializza e lo ospita nella finestra identificata da `hWnd`.

```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```

### <a name="parameters"></a>Parametri

*bstrLic*<br/>
in BSTR che contiene la chiave di licenza per il controllo.

### <a name="remarks"></a>Note

Per una descrizione dei parametri rimanenti e del valore restituito, vedere [IAxWinHostWindow:: CreateControl](#createcontrol) .

La chiamata a questo metodo equivale alla chiamata di [IAxWinHostWindowLic:: CreateControlLicEx](#createcontrollicex)

### <a name="example"></a>Esempio

Per un esempio che usa `IAxWinHostWindowLic::CreateControlLic`, vedere Hosting di [controlli ActiveX con ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

##  <a name="createcontrollicex"></a>  IAxWinHostWindowLic::CreateControlLicEx

Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, in modo analogo a [IAxWinHostWindow:: CreateControl](#createcontrol).

```
STDMETHOD(CreateControlLicEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise,
    BSTR bstrLic);
```

### <a name="parameters"></a>Parametri

*bstrLic*<br/>
in BSTR che contiene la chiave di licenza per il controllo.

### <a name="remarks"></a>Note

Per una descrizione dei parametri rimanenti e del valore restituito, vedere [IAxWinHostWindow:: CreateControlEx](#createcontrolex) .

### <a name="example"></a>Esempio

Per un esempio che usa `IAxWinHostWindowLic::CreateControlLicEx`, vedere Hosting di [controlli ActiveX con ATL AXHost](../../atl/hosting-activex-controls-using-atl-axhost.md) .

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)
