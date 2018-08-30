---
title: Classe IAtlMemMgr | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IAtlMemMgr
- ATLMEM/ATL::IAtlMemMgr
- ATLMEM/ATL::Allocate
- ATLMEM/ATL::Free
- ATLMEM/ATL::GetSize
- ATLMEM/ATL::Reallocate
dev_langs:
- C++
helpviewer_keywords:
- IAtlMemMgr class
- memory, managing
- memory, memory manager
ms.assetid: 18b2c569-25fe-4464-bdb6-3b1abef7154a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c8cdb3633b6f5b76e1918471132e7cdd142172fe
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208479"
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
|[allocare](#allocate)|Chiamare questo metodo per allocare un blocco di memoria.|  
|[gratuito](#free)|Chiamare questo metodo per liberare un blocco di memoria.|  
|[GetSize](#getsize)|Chiamare questo metodo per recuperare la dimensione di un blocco di memoria allocata.|  
|[Riallocare](#reallocate)|Chiamare questo metodo per riallocare un blocco di memoria.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia viene implementata da [CComHeap](../../atl/reference/ccomheap-class.md), [su CCRTHeap](../../atl/reference/ccrtheap-class.md), [CLocalHeap](../../atl/reference/clocalheap-class.md), [CGlobalHeap](../../atl/reference/cglobalheap-class.md), o [CWin32Heap](../../atl/reference/cwin32heap-class.md).  
  
> [!NOTE]
>  Le funzioni degli heap globali e locali sono più lente rispetto alle altre funzioni di gestione della memoria e non forniscono tutte le funzionalità. Di conseguenza, le nuove applicazioni devono usare la [funzioni heap](/windows/desktop/Memory/heap-functions). Questi sono disponibili nel [CWin32Heap](../../atl/reference/cwin32heap-class.md) classe.  
  
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
 *nBytes*  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [IAtlMemMgr::Free](#free) oppure [IAtlMemMgr::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere la [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="free"></a>  IAtlMemMgr::Free  
 Chiamare questo metodo per liberare un blocco di memoria.  
  
```
void Free(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
### <a name="remarks"></a>Note  
 Usare questo metodo per liberare la memoria ottenuta dal [IAtlMemMgr::Allocate](#allocate) oppure [IAtlMemMgr::Reallocate](#reallocate).  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere la [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="getsize"></a>  IAtlMemMgr::GetSize  
 Chiamare questo metodo per recuperare la dimensione di un blocco di memoria allocata.  
  
```
size_t GetSize(void* p) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la dimensione del blocco di memoria in byte.  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere la [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="reallocate"></a>  IAtlMemMgr::Reallocate  
 Chiamare questo metodo per riallocare la memoria allocata da questo gestore di memoria.  
  
```
void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Puntatore alla memoria precedentemente allocata dal gestore di memoria.  
  
 *nBytes*  
 Numero di byte necessari nel nuovo blocco di memoria.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce un puntatore all'inizio del blocco di memoria allocata.  
  
### <a name="remarks"></a>Note  
 Chiamare [IAtlMemMgr::Free](#free) oppure [IAtlMemMgr::Reallocate](#reallocate) per liberare la memoria allocata da questo metodo.  
  
 Concettualmente, questo metodo libera la memoria esistente e alloca un nuovo blocco di memoria. In realtà, la memoria esistente può essere estesa o riutilizzata in caso contrario.  
  
### <a name="example"></a>Esempio  
 Per un esempio, vedere la [IAtlMemMgr Panoramica](../../atl/reference/iatlmemmgr-class.md).  
  
##  <a name="get_allowcontextmenu"></a>  IAxWinAmbientDispatch::get_AllowContextMenu  
 Il `AllowContextMenu` proprietà specifica se il controllo ospitato è autorizzato a visualizzare il proprio menu di scelta rapida.  
  
```
STDMETHOD(get_AllowContextMenu)(VARIANT_BOOL* pbAllowContextMenu);
```  
  
### <a name="parameters"></a>Parametri  
 *pbAllowContextMenu*  
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
 *pbAllowShowUI*  
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
 *pbAllowWindowless*  
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
 *pclrBackground*  
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
 *pbDisplayAsDefault*  
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
 *pdwDocHostDoubleClickFlags*  
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
 *pdwDocHostFlags*  
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
 *pFont*  
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
 *pclrForeground*  
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
 *plcidLocaleID*  
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
 *pbMessageReflect*  
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
 *pbstrOptionKeyPath*  
 [out] L'indirizzo di una variabile per ricevere il valore corrente di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="get_showgrabhandles"></a>  IAxWinAmbientDispatch::get_ShowGrabHandles  
 Il `ShowGrabHandles` proprietà di ambiente consente al controllo di scoprire se è necessario disegnare se stesso con quadratini di ridimensionamento.  
  
```
STDMETHOD(get_ShowGrabHandles)(VARIANT_BOOL* pbShowGrabHandles);
```  
  
### <a name="parameters"></a>Parametri  
 *pbShowGrabHandles*  
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
 *pbShowHatching*  
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
 *pbUserMode*  
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
 *bAllowContextMenu*  
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
 *bAllowShowUI*  
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
 *bAllowWindowless*  
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
 *clrBackground*  
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
 *bDisplayAsDefault*  
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
 *dwDocHostDoubleClickFlags*  
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
 *dwDocHostFlags*  
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
 *pFont*  
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
 *clrForeground*  
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
 *lcidLocaleID*  
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
 *bMessageReflect*  
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
 *bstrOptionKeyPath*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="put_usermode"></a>  IAxWinAmbientDispatch::put_UserMode  
 Il `UserMode` proprietà specifica la modalità dell'ambiente utente del contenitore.  
  
```
STDMETHOD(put_UserMode)(VARIANT_BOOL bUserMode);
```  
  
### <a name="parameters"></a>Parametri  
 *bUserMode*  
 [in] Il nuovo valore di questa proprietà.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 L'implementazione dell'oggetto host ATL Usa VARIANT_TRUE come valore predefinito di questa proprietà.  
  
##  <a name="setambientdispatch"></a>  IAxWinAmbientDispatchEx::SetAmbientDispatch  
 Questo metodo viene chiamato per integrare l'interfaccia di proprietà di ambiente predefinita con un'interfaccia definita dall'utente.  
  
```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 *pDispatch*  
 Puntatore alla nuova interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se l'operazione riesce, o un valore HRESULT di errore in caso di errore.  
  
### <a name="remarks"></a>Note  
 Quando `SetAmbientDispatch` viene chiamato con un puntatore a una nuova interfaccia, verrà usata questa nuova interfaccia per richiamare qualsiasi proprietà o metodo richiesto dal controllo ospitato, se tali proprietà non sono già fornite dal [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).  
  
##  <a name="attachcontrol"></a>  IAxWinHostWindow:: AttachControl  
 Associa un controllo esistente (e inizializzato in precedenza) all'oggetto host utilizzando la finestra identificata da *hWnd*.  
  
```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```  
  
### <a name="parameters"></a>Parametri  
 *pUnkControl*  
 [in] Un puntatore al `IUnknown` interfaccia del controllo da associare all'oggetto host.  
  
 *hWnd*  
 [in] Handle alla finestra da utilizzare per l'hosting.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="createcontrol"></a>  IAxWinHostWindow::CreateControl  
 Crea un controllo, lo inizializza e lo ospita nella finestra identificata da *hWnd*.  
  
```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```  
  
### <a name="parameters"></a>Parametri  
 *lpTricsData*  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **MSHTML:**).  
  
 *hWnd*  
 [in] Handle alla finestra da utilizzare per l'hosting.  
  
 *pStream*  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa finestra verrà creare una sottoclasse per l'oggetto host che espone questa interfaccia in modo che i messaggi possono essere applicati al controllo e altre funzionalità di contenitore saranno disponibili.  
  
 Chiamare questo metodo è equivalente alla chiamata [IAxWinHostWindow::CreateControlEx](#createcontrolex).  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLic](#createcontrollicex).  
  
##  <a name="createcontrolex"></a>  IAxWinHostWindow::CreateControlEx  
 Crea un controllo ActiveX, lo inizializza e lo ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](#createcontrol).  
  
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
 *lpTricsData*  
 [in] Stringa che identifica il controllo da creare. Può essere un CLSID (deve includere le parentesi graffe), ProgID, URL o HTML non elaborato (con prefisso **MSHTML:**).  
  
 *hWnd*  
 [in] Handle alla finestra da utilizzare per l'hosting.  
  
 *pStream*  
 [in] Un puntatore a interfaccia per un flusso contenente i dati di inizializzazione per il controllo. Può essere NULL.  
  
 *ppUnk*  
 [out] L'indirizzo del puntatore che riceverà il `IUnknown` interfaccia del controllo creato. Può essere NULL.  
  
 *riidAdvise*  
 [in] Identificatore di interfaccia di un'interfaccia in uscita per l'oggetto indipendente. Può essere IID_NULL.  
  
 *punkAdvise*  
 [in] Un puntatore per il `IUnknown` interfaccia dell'oggetto sink di essere connessi al punto di connessione per l'oggetto contenuto specificato dal `iidSink`.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 A differenza di `CreateControl` metodo `CreateControlEx` consente inoltre di ricevere un puntatore a interfaccia al controllo appena creato e configurare un sink di evento per ricevere gli eventi generati dal controllo.  
  
 Per creare un controllo ActiveX con licenza, vedere [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex).  
  
##  <a name="querycontrol"></a>  IAxWinHostWindow::QueryControl  
 Restituisce un puntatore a interfaccia specificato fornito dal controllo ospitato.  
  
```
STDMETHOD(QueryControl)(REFIID riid, void** ppvObject);
```  
  
### <a name="parameters"></a>Parametri  
 *riid*  
 [in] L'ID di un'interfaccia per il controllo richiesto.  
  
 *ppvObject*  
 [out] L'indirizzo di un puntatore che riceve l'interfaccia specificata del controllo creato.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="setexternaldispatch"></a>  IAxWinHostWindow::SetExternalDispatch  
 Imposta l'interfaccia di dispatch esterno, che è disponibile per i controlli contenuti tramite il [IDocHostUIHandlerDispatch::GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) (metodo).  
  
```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 *pDisp*  
 [in] Un puntatore a un `IDispatch` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
##  <a name="setexternaluihandler"></a>  IAxWinHostWindow::SetExternalUIHandler  
 Chiamare questa funzione per impostare esterno [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interfaccia di amministrazione del `CAxWindow` oggetto.  
  
```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```  
  
### <a name="parameters"></a>Parametri  
 *pDisp*  
 [in] Un puntatore a un `IDocHostUIHandlerDispatch` interfaccia.  
  
### <a name="return-value"></a>Valore restituito  
 Un valore HRESULT standard.  
  
### <a name="remarks"></a>Note  
 Questa funzione viene utilizzata dai controlli (ad esempio, il controllo Web browser) che il sito dell'host per eseguire una query di `IDocHostUIHandlerDispatch` interfaccia.  
  
##  <a name="createcontrollic"></a>  IAxWinHostWindowLic::CreateControlLic  
 Crea un controllo con licenza, lo inizializza e lo ospita nella finestra identificata da `hWnd`.  
  
```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```  
  
### <a name="parameters"></a>Parametri  
 *bstrLic*  
 [in] La stringa BSTR che contiene la chiave di licenza per il controllo.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IAxWinHostWindow::CreateControl](#createcontrol) per una descrizione dei parametri restanti e il valore restituito.  
  
 Chiamare questo metodo è equivalente alla chiamata [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)  
  
### <a name="example"></a>Esempio  
 Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `IAxWinHostWindowLic::CreateControlLic`.  
  
##  <a name="createcontrollicex"></a>  IAxWinHostWindowLic::CreateControlLicEx  
 Crea un controllo ActiveX con licenza, lo inizializza e lo ospita nella finestra specificata, simile a [IAxWinHostWindow::CreateControl](#createcontrol).  
  
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
 *bstrLic*  
 [in] La stringa BSTR che contiene la chiave di licenza per il controllo.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IAxWinHostWindow::CreateControlEx](#createcontrolex) per una descrizione dei parametri restanti e il valore restituito.  
  
### <a name="example"></a>Esempio  
 Visualizzare [Hosting ActiveX controlli tramite AXHost di ATL](../../atl/hosting-activex-controls-using-atl-axhost.md) per un esempio che usa `IAxWinHostWindowLic::CreateControlLicEx`.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
