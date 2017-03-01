---
title: Classe IAtlMemMgr | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IAtlMemMgr
dev_langs:
- C++
helpviewer_keywords:
- IAtlMemMgr class
- memory, managing
- memory, memory manager
ms.assetid: 18b2c569-25fe-4464-bdb6-3b1abef7154a
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 8e63d6dd9197aa3b81f893c58a1c8e41dfe2cc1b
ms.lasthandoff: 02/24/2017

---
# <a name="iatlmemmgr-class"></a>Classe IAtlMemMgr
Questa classe rappresenta l'interfaccia per un gestore della memoria.  
  
## <a name="syntax"></a>Sintassi  
  
```
__interface __declspec(uuid("654F7EF5-CFDF-4df9-A450-6C6A13C622C0")) IAtlMemMgr
```  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[Allocare](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[Gratuito](#free)|Chiamare questo metodo per liberare un blocco di memoria.|  
|[GetSize](#getsize)|Chiamare questo metodo per recuperare la dimensione di un blocco di memoria allocata.|  
|[Riallocare](#reallocate)|Chiamare questo metodo per riallocare un blocco di memoria.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene implementata da [CComHeap](../../atl/reference/ccomheap-class.md), [CCRTHeap](../../atl/reference/ccrtheap-class.md), [CLocalHeap](../../atl/reference/clocalheap-class.md), [CGlobalHeap](../../atl/reference/cglobalheap-class.md), o [CWin32Heap](../../atl/reference/cwin32heap-class.md).  
  
> [!NOTE]
>  Le funzioni degli heap locali e globali sono più lente rispetto alle altre funzioni di gestione memoria e non forniscono funzionalità di un numero. Pertanto, è necessario utilizzare le nuove applicazioni di [funzioni heap](http://msdn.microsoft.com/library/windows/desktop/aa366711). Sono disponibili nel [CWin32Heap](../../atl/reference/cwin32heap-class.md) (classe).  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities&#94;](../../atl/codesnippet/cpp/iatlmemmgr-class_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlmem. h  
  
##  <a name="a-nameallocatea--iatlmemmgrallocate"></a><a name="allocate"></a>IAtlMemMgr::Allocate  
 Chiamare questo metodo per allocare un blocco di memoria.  
  
```
void* Allocate(size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `nBytes`  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [IAtlMemMgr::Free](#free) o [IAtlMemMgr::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere il [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="a-namefreea--iatlmemmgrfree"></a><a name="free"></a>IAtlMemMgr::Free  
 Chiamare questo metodo per liberare un blocco di memoria.  
  
```
void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per liberare memoria ottenuta [IAtlMemMgr::Allocate](#allocate) o [IAtlMemMgr::Reallocate](#reallocate).  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere il [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="a-namegetsizea--iatlmemmgrgetsize"></a><a name="getsize"></a>IAtlMemMgr::GetSize  
 Chiamare questo metodo per recuperare la dimensione di un blocco di memoria allocata.  
  
```
size_t GetSize(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la dimensione del blocco di memoria in byte.  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere il [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="a-namereallocatea--iatlmemmgrreallocate"></a><a name="reallocate"></a>IAtlMemMgr::Reallocate  
 Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.  
  
```
void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
 `nBytes`  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [IAtlMemMgr::Free](#free) o [IAtlMemMgr::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Concettualmente, questo metodo consente di liberare la memoria esistente e assegna un nuovo blocco di memoria. In realtà, la memoria esistente può essere estesa o riutilizzata in caso contrario.  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere il [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="a-namegetallowcontextmenua--iaxwinambientdispatchgetallowcontextmenu"></a><a name="get_allowcontextmenu"></a>IAxWinAmbientDispatch::get_AllowContextMenu  
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
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-namegetallowshowuia--iaxwinambientdispatchgetallowshowui"></a><a name="get_allowshowui"></a>IAxWinAmbientDispatch::get_AllowShowUI  
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
 L'implementazione dell'oggetto host ATL utilizza **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="a-namegetallowwindowlessactivationa--iaxwinambientdispatchgetallowwindowlessactivation"></a><a name="get_allowwindowlessactivation"></a>IAxWinAmbientDispatch::get_AllowWindowlessActivation  
 Il **AllowWindowlessActivation** proprietà specifica se il contenitore consente l'attivazione senza finestra.  
  
```
STDMETHOD(get_AllowWindowlessActivation)(VARIANT_BOOL* pbAllowWindowless);
```  
  
### <a name="parameters"></a>Parametri  
 *pbAllowWindowless*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-namegetbackcolora--iaxwinambientdispatchgetbackcolor"></a><a name="get_backcolor"></a>IAxWinAmbientDispatch::get_BackColor  
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
 L'implementazione dell'oggetto host ATL utilizza **COLOR_BTNFACE** o **COLOR_WINDOW** come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra dell'host sia una finestra di dialogo o meno).  
  
##  <a name="a-namegetdisplayasdefaulta--iaxwinambientdispatchgetdisplayasdefault"></a><a name="get_displayasdefault"></a>IAxWinAmbientDispatch::get_DisplayAsDefault  
 **DisplayAsDefault** è una proprietà di ambiente che consente a un controllo verificare se si trova il controllo predefinito.  
  
```
STDMETHOD(get_DisplayAsDefault)(VARIANT_BOOL* pbDisplayAsDefault);
```  
  
### <a name="parameters"></a>Parametri  
 *pbDisplayAsDefault*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="a-namegetdochostdoubleclickflagsa--iaxwinambientdispatchgetdochostdoubleclickflags"></a><a name="get_dochostdoubleclickflags"></a>IAxWinAmbientDispatch::get_DocHostDoubleClickFlags  
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
 L'implementazione dell'oggetto host ATL utilizza **DOCHOSTUIDBLCLK_DEFAULT** come valore predefinito di questa proprietà.  
  
##  <a name="a-namegetdochostflagsa--iaxwinambientdispatchgetdochostflags"></a><a name="get_dochostflags"></a>IAxWinAmbientDispatch::get_DocHostFlags  
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
 L'implementazione dell'oggetto host ATL utilizza **DOCHOSTUIFLAG_NO3DBORDER** come valore predefinito di questa proprietà.  
  
##  <a name="a-namegetfonta--iaxwinambientdispatchgetfont"></a><a name="get_font"></a>IAxWinAmbientDispatch::get_Font  
 Il **carattere** proprietà specifica il tipo di carattere ambiente del contenitore.  
  
```
STDMETHOD(get_Font)(IFontDisp** pFont);
```  
  
### <a name="parameters"></a>Parametri  
 `pFont`  
 [out] L'indirizzo di un **IFontDisp** puntatore a interfaccia utilizzato per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza il tipo di carattere predefinito GUI o il carattere di sistema come il valore predefinito di questa proprietà.  
  
##  <a name="a-namegetforecolora--iaxwinambientdispatchgetforecolor"></a><a name="get_forecolor"></a>IAxWinAmbientDispatch::get_ForeColor  
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
 L'implementazione dell'oggetto host ATL utilizza il colore del testo finestra sistema come il valore predefinito di questa proprietà.  
  
##  <a name="a-namegetlocaleida--iaxwinambientdispatchgetlocaleid"></a><a name="get_localeid"></a>IAxWinAmbientDispatch::get_LocaleID  
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
 L'implementazione dell'oggetto host ATL utilizza impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.  
  
 Con questo metodo è possibile individuare l'ambiente LocalID, vale a dire LocaleID del programma di controllo viene utilizzato. Quando si conosce l'ID, è possibile chiamare codice per caricare le didascalie specifiche delle impostazioni locali, testo del messaggio di errore, e così via da un file di risorse o una DLL satellite.  
  
##  <a name="a-namegetmessagereflecta--iaxwinambientdispatchgetmessagereflect"></a><a name="get_messagereflect"></a>IAxWinAmbientDispatch::get_MessageReflect  
 Il **MessageReflect** proprietà di ambiente specifica se il contenitore rifletterà i messaggi per il controllo ospitato.  
  
```
STDMETHOD(get_MessageReflect)(VARIANT_BOOL* pbMessageReflect);
```  
  
### <a name="parameters"></a>Parametri  
 *pbMessageReflect*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-namegetoptionkeypatha--iaxwinambientdispatchgetoptionkeypath"></a><a name="get_optionkeypath"></a>IAxWinAmbientDispatch::get_OptionKeyPath  
 Il **OptionKeyPath** proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni dell'utente.  
  
```
STDMETHOD(get_OptionKeyPath)(BSTR* pbstrOptionKeyPath);
```  
  
### <a name="parameters"></a>Parametri  
 *pbstrOptionKeyPath*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-namegetshowgrabhandlesa--iaxwinambientdispatchgetshowgrabhandles"></a><a name="get_showgrabhandles"></a>IAxWinAmbientDispatch::get_ShowGrabHandles  
 Il **ShowGrabHandles** proprietà di ambiente consente il controllo scoprire se è necessario il disegno con quadratini di ridimensionamento.  
  
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
  
##  <a name="a-namegetshowhatchinga--iaxwinambientdispatchgetshowhatching"></a><a name="get_showhatching"></a>IAxWinAmbientDispatch::get_ShowHatching  
 Il **ShowHatching** proprietà di ambiente consente il controllo scoprire se è necessario il disegno tratteggio.  
  
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
  
##  <a name="a-namegetusermodea--iaxwinambientdispatchgetusermode"></a><a name="get_usermode"></a>IAxWinAmbientDispatch::get_UserMode  
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
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputallowcontextmenua--iaxwinambientdispatchputallowcontextmenu"></a><a name="put_allowcontextmenu"></a>IAxWinAmbientDispatch::put_AllowContextMenu  
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
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputallowshowuia--iaxwinambientdispatchputallowshowui"></a><a name="put_allowshowui"></a>IAxWinAmbientDispatch::put_AllowShowUI  
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
 L'implementazione dell'oggetto host ATL utilizza **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputallowwindowlessactivationa--iaxwinambientdispatchputallowwindowlessactivation"></a><a name="put_allowwindowlessactivation"></a>IAxWinAmbientDispatch::put_AllowWindowlessActivation  
 Il **AllowWindowlessActivation** proprietà specifica se il contenitore consente l'attivazione senza finestra.  
  
```
STDMETHOD(put_AllowWindowlessActivation)(VARIANT_BOOL bAllowWindowless);
```  
  
### <a name="parameters"></a>Parametri  
 *bAllowWindowless*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputbackcolora--iaxwinambientdispatchputbackcolor"></a><a name="put_backcolor"></a>IAxWinAmbientDispatch::put_BackColor  
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
 L'implementazione dell'oggetto host ATL utilizza **COLOR_BTNFACE** o **COLOR_WINDOW** come valore predefinito di questa proprietà (a seconda che l'elemento padre della finestra dell'host sia una finestra di dialogo o meno).  
  
##  <a name="a-nameputdisplayasdefaulta--iaxwinambientdispatchputdisplayasdefault"></a><a name="put_displayasdefault"></a>IAxWinAmbientDispatch::put_DisplayAsDefault  
 **DisplayAsDefault** è una proprietà di ambiente che consente a un controllo verificare se si trova il controllo predefinito.  
  
```
STDMETHOD(put_DisplayAsDefault)(VARIANT_BOOL bDisplayAsDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `bDisplayAsDefault`  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza **VARIANT_FALSE** come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputdochostdoubleclickflagsa--iaxwinambientdispatchputdochostdoubleclickflags"></a><a name="put_dochostdoubleclickflags"></a>IAxWinAmbientDispatch::put_DocHostDoubleClickFlags  
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
 L'implementazione dell'oggetto host ATL utilizza **DOCHOSTUIDBLCLK_DEFAULT** come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputdochostflagsa--iaxwinambientdispatchputdochostflags"></a><a name="put_dochostflags"></a>IAxWinAmbientDispatch::put_DocHostFlags  
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
 L'implementazione dell'oggetto host ATL utilizza **DOCHOSTUIFLAG_NO3DBORDER** come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputfonta--iaxwinambientdispatchputfont"></a><a name="put_font"></a>IAxWinAmbientDispatch::put_Font  
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
 L'implementazione dell'oggetto host ATL utilizza il tipo di carattere predefinito GUI o il carattere di sistema come il valore predefinito di questa proprietà.  
  
##  <a name="a-nameputforecolora--iaxwinambientdispatchputforecolor"></a><a name="put_forecolor"></a>IAxWinAmbientDispatch::put_ForeColor  
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
 L'implementazione dell'oggetto host ATL utilizza il colore del testo finestra sistema come il valore predefinito di questa proprietà.  
  
##  <a name="a-nameputlocaleida--iaxwinambientdispatchputlocaleid"></a><a name="put_localeid"></a>IAxWinAmbientDispatch::put_LocaleID  
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
 L'implementazione dell'oggetto host ATL utilizza impostazioni locali predefinite dell'utente come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputmessagereflecta--iaxwinambientdispatchputmessagereflect"></a><a name="put_messagereflect"></a>IAxWinAmbientDispatch::put_MessageReflect  
 Il **MessageReflect** proprietà di ambiente specifica se il contenitore rifletterà i messaggi per il controllo ospitato.  
  
```
STDMETHOD(put_MessageReflect)(VARIANT_BOOL bMessageReflect);
```  
  
### <a name="parameters"></a>Parametri  
 `bMessageReflect`  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-nameputoptionkeypatha--iaxwinambientdispatchputoptionkeypath"></a><a name="put_optionkeypath"></a>IAxWinAmbientDispatch::put_OptionKeyPath  
 Il **OptionKeyPath** proprietà specifica il percorso della chiave del Registro di sistema per le impostazioni dell'utente.  
  
```
STDMETHOD(put_OptionKeyPath)(BSTR bstrOptionKeyPath);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrOptionKeyPath*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-nameputusermodea--iaxwinambientdispatchputusermode"></a><a name="put_usermode"></a>IAxWinAmbientDispatch::put_UserMode  
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
 L'implementazione dell'oggetto host ATL utilizza `VARIANT_TRUE` come valore predefinito di questa proprietà.  
  
##  <a name="a-namesetambientdispatcha--iaxwinambientdispatchexsetambientdispatch"></a><a name="setambientdispatch"></a>IAxWinAmbientDispatchEx::SetAmbientDispatch  
 Questo metodo viene chiamato per completare l'interfaccia di proprietà di ambiente predefinita con un'interfaccia definita dall'utente.  
  
```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 *pDispatch*  
 Puntatore alla nuova interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK esito positivo o un errore HRESULT in caso di errore.  
  
### <a name="remarks"></a>Note  
 Quando `SetAmbientDispatch` viene chiamato con un puntatore a una nuova interfaccia, questa nuova interfaccia verrà utilizzata per richiamare qualsiasi proprietà o metodo richiesto dal controllo ospitato, se tali proprietà non sono già state fornite da [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).  
  
##  <a name="a-nameattachcontrola--iaxwinhostwindowattachcontrol"></a><a name="attachcontrol"></a>IAxWinHostWindow:: AttachControl  
 Associa un controllo esistente (e inizializzato in precedenza) per l'oggetto host utilizzando la finestra identificata da `hWnd`.  
  
```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkControl*  
 [in] Un puntatore per il **IUnknown** interfaccia del controllo da collegare all'oggetto host.  
  
 `hWnd`  
 [in] Handle di finestra da utilizzare per l'hosting.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-namecreatecontrola--iaxwinhostwindowcreatecontrol"></a><a name="createcontrol"></a>IAxWinHostWindow::CreateControl  
 Crea un controllo, inizializza e lo ospita nella finestra identificata da `hWnd`.  
  
```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 `lpTricsData`  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (preceduti dal prefisso **MSHTML:**).  
  
 `hWnd`  
 [in] Handle di finestra da utilizzare per l'hosting.  
  
 `pStream`  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Questa finestra verrà sottoclassata dall'oggetto host che espone questa interfaccia in modo che i messaggi possono essere applicati al controllo e altre funzionalità contenitore saranno disponibili.  
  
 Questo metodo è equivalente alla chiamata [IAxWinHostWindow::CreateControlEx](#createcontrolex).  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLic](#createcontrollicex).  
  
##  <a name="a-namecreatecontrolexa--iaxwinhostwindowcreatecontrolex"></a><a name="createcontrolex"></a>IAxWinHostWindow::CreateControlEx  
 Crea un controllo ActiveX, inizializza e lo ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](#createcontrol).  
  
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
 `lpTricsData`  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **MSHTML:**).  
  
 `hWnd`  
 [in] Handle di finestra da utilizzare per l'hosting.  
  
 `pStream`  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere **NULL**.  
  
 `ppUnk`  
 [out] L'indirizzo di un puntatore che riceverà il **IUnknown** interfaccia del controllo creato. Può essere **NULL**.  
  
 *riidAdvise*  
 [in] Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente. Può essere **IID_NULL**.  
  
 *punkAdvise*  
 [in] Un puntatore per il **IUnknown** interfaccia dell'oggetto sink da connettere al punto di connessione sull'oggetto contenuto specificato da `iidSink`.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 A differenza di `CreateControl` metodo `CreateControlEx` consente inoltre di ricevere un puntatore a interfaccia per il controllo appena creato e configurato un sink di evento per ricevere gli eventi generati dal controllo.  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex).  
  
##  <a name="a-namequerycontrola--iaxwinhostwindowquerycontrol"></a><a name="querycontrol"></a>IAxWinHostWindow::QueryControl  
 Restituisce un puntatore a interfaccia specificato fornito dal controllo ospitato.  
  
```
STDMETHOD(QueryControl)(REFIID riid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 `riid`  
 [in] L'ID di un'interfaccia del controllo richiesto.  
  
 `ppvObject`  
 [out] L'indirizzo di un puntatore che riceverà l'interfaccia specificata del controllo creato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-namesetexternaldispatcha--iaxwinhostwindowsetexternaldispatch"></a><a name="setexternaldispatch"></a>IAxWinHostWindow::SetExternalDispatch  
 Imposta l'interfaccia dispatch esterna, che è disponibile per i controlli contenuti tramite il [IDocHostUIHandlerDispatch::GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) metodo.  
  
```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 [in] Un puntatore a un `IDispatch` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
##  <a name="a-namesetexternaluihandlera--iaxwinhostwindowsetexternaluihandler"></a><a name="setexternaluihandler"></a>IAxWinHostWindow::SetExternalUIHandler  
 Chiamare questa funzione per impostare esterno [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interfaccia per il `CAxWindow` oggetto.  
  
```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 `pDisp`  
 [in] Un puntatore a un **IDocHostUIHandlerDispatch** interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore `HRESULT` standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata dai controlli (ad esempio, il controllo Web browser) per le query del sito dell'host per il `IDocHostUIHandlerDispatch` interfaccia.  
  
##  <a name="a-namecreatecontrollica--iaxwinhostwindowliccreatecontrollic"></a><a name="createcontrollic"></a>IAxWinHostWindowLic::CreateControlLic  
 Crea un controllo con licenza, inizializza e lo ospita nella finestra identificata da `hWnd`.  
  
```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```  
  
### <a name="parameters"></a>Parametri  
 `bstrLic`  
 [in] La stringa BSTR che contiene la chiave di licenza per il controllo.  
  
### <a name="remarks"></a>Note  
 Vedere [IAxWinHostWindow::CreateControl](#createcontrol) per una descrizione dei parametri restanti e il valore restituito.  
  
 Questo metodo è equivalente alla chiamata [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli mediante AXHost ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `IAxWinHostWindowLic::CreateControlLic`.  
  
##  <a name="a-namecreatecontrollicexa--iaxwinhostwindowliccreatecontrollicex"></a><a name="createcontrollicex"></a>IAxWinHostWindowLic::CreateControlLicEx  
 Crea un controllo ActiveX con licenza, inizializza e lo ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](#createcontrol).  
  
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
 `bstrLic`  
 [in] La stringa BSTR che contiene la chiave di licenza per il controllo.  
  
### <a name="remarks"></a>Note  
 Vedere [IAxWinHostWindow::CreateControlEx](#createcontrolex) per una descrizione dei parametri restanti e il valore restituito.  
  
### <a name="example"></a>Esempio  
 Vedere [Hosting ActiveX controlli mediante AXHost ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che utilizza `IAxWinHostWindowLic::CreateControlLicEx`.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

