---
title: Classe IPropertyPageImpl | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IPropertyPageImpl
- ATLCTL/ATL::IPropertyPageImpl
- ATLCTL/ATL::IPropertyPageImpl::IPropertyPageImpl
- ATLCTL/ATL::IPropertyPageImpl::Activate
- ATLCTL/ATL::IPropertyPageImpl::Apply
- ATLCTL/ATL::IPropertyPageImpl::Deactivate
- ATLCTL/ATL::IPropertyPageImpl::GetPageInfo
- ATLCTL/ATL::IPropertyPageImpl::Help
- ATLCTL/ATL::IPropertyPageImpl::IsPageDirty
- ATLCTL/ATL::IPropertyPageImpl::Move
- ATLCTL/ATL::IPropertyPageImpl::SetDirty
- ATLCTL/ATL::IPropertyPageImpl::SetObjects
- ATLCTL/ATL::IPropertyPageImpl::SetPageSite
- ATLCTL/ATL::IPropertyPageImpl::Show
- ATLCTL/ATL::IPropertyPageImpl::TranslateAccelerator
- ATLCTL/ATL::IPropertyPageImpl::m_bDirty
- ATLCTL/ATL::IPropertyPageImpl::m_dwDocString
- ATLCTL/ATL::IPropertyPageImpl::m_dwHelpContext
- ATLCTL/ATL::IPropertyPageImpl::m_dwHelpFile
- ATLCTL/ATL::IPropertyPageImpl::m_dwTitle
- ATLCTL/ATL::IPropertyPageImpl::m_nObjects
- ATLCTL/ATL::IPropertyPageImpl::m_pPageSite
- ATLCTL/ATL::IPropertyPageImpl::m_ppUnk
- ATLCTL/ATL::IPropertyPageImpl::m_size
dev_langs:
- C++
helpviewer_keywords:
- property pages
- IPropertyPage ATL implementation
- IPropertyPageImpl class
ms.assetid: f9b7c8b1-7a04-4eab-aa63-63efddb740fa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7377a6b47df76190c4dc97b916590e53c7df8f9c
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43210111"
---
# <a name="ipropertypageimpl-class"></a>Classe IPropertyPageImpl
Questa classe implementa `IUnknown` e fornisce un'implementazione predefinita del [IPropertyPage](/windows/desktop/api/ocidl/nn-ocidl-ipropertypage) interfaccia.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class IPropertyPageImpl
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `IPropertyPageImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl::IPropertyPageImpl](#ipropertypageimpl)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl](#activate)|Crea la finestra di dialogo per la pagina delle proprietà.|  
|[IPropertyPageImpl](#apply)|Applica i valori correnti della pagina proprietà agli oggetti sottostanti specificati tramite `SetObjects`. L'implementazione di ATL restituisce S_OK.|  
|[IPropertyPageImpl::Deactivate](#deactivate)|Elimina la finestra creata con `Activate`.|  
|[IPropertyPageImpl::GetPageInfo](#getpageinfo)|Recupera le informazioni sulla pagina delle proprietà.|  
|[IPropertyPageImpl::Help](#help)|Richiama la Guida di Windows per la pagina delle proprietà.|  
|[IPropertyPageImpl::IsPageDirty](#ispagedirty)|Indica se la pagina delle proprietà è stato modificato perché è stata attivata.|  
|[IPropertyPageImpl::Move](#move)|Posiziona e ridimensiona la finestra di dialogo pagina proprietà.|  
|[IPropertyPageImpl:: SetDirty](#setdirty)|Flag di stato della pagina delle proprietà come unchanged o modificati.|  
|[: SetObjects](#setobjects)|Fornisce una matrice di `IUnknown` puntatori per gli oggetti associati alla pagina delle proprietà. Questi oggetti riceveranno valori correnti della pagina proprietà tramite una chiamata a `Apply`.|  
|[IPropertyPageImpl::SetPageSite](#setpagesite)|Fornisce la pagina delle proprietà con un `IPropertyPageSite` puntatore, attraverso il quale la pagina delle proprietà comunica con il frame di proprietà.|  
|[IPropertyPageImpl::Show](#show)|Rende la finestra di dialogo pagina proprietà visibile o invisibile.|  
|[IPropertyPageImpl::TranslateAccelerator](#translateaccelerator)|Elabora una sequenza di tasti specificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl::m_bDirty](#m_bdirty)|Specifica se è stato modificato lo stato della pagina delle proprietà.|  
|[IPropertyPageImpl::m_dwDocString](#m_dwdocstring)|Archivia l'identificatore di risorsa associata alla stringa di testo che descrive la pagina delle proprietà.|  
|[IPropertyPageImpl::m_dwHelpContext](#m_dwhelpcontext)|Archivia l'identificatore di contesto per l'argomento della Guida associato alla proprietà pagina.|  
|[IPropertyPageImpl::m_dwHelpFile](#m_dwhelpfile)|Archivia l'identificatore di risorsa associato al nome del file della Guida che descrive la pagina delle proprietà.|  
|[IPropertyPageImpl::m_dwTitle](#m_dwtitle)|Archivia l'identificatore di risorsa associata alla stringa di testo che viene visualizzato nella scheda della pagina delle proprietà.|  
|[IPropertyPageImpl::m_nObjects](#m_nobjects)|Archivia il numero di oggetti associati alla pagina delle proprietà.|  
|[IPropertyPageImpl::m_pPageSite](#m_ppagesite)|Punta al `IPropertyPageSite` interfaccia tramite il quale la pagina delle proprietà comunica con il frame di proprietà.|  
|[IPropertyPageImpl::m_ppUnk](#m_ppunk)|Punta a una matrice di `IUnknown` puntatori a oggetti associati alla proprietà pagina.|  
|[IPropertyPageImpl::m_size](#m_size)|Archivia l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.|  
  
## <a name="remarks"></a>Note  
 Il [IPropertyPage](/windows/desktop/api/ocidl/nn-ocidl-ipropertypage) interfaccia consente a un oggetto gestire una determinata pagina delle proprietà all'interno di una finestra delle proprietà. Classe `IPropertyPageImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPropertyPage`  
  
 `IPropertyPageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="activate"></a>  IPropertyPageImpl  
 Crea la finestra di dialogo per la pagina delle proprietà.  
  
```
HRESULT Activate(  
    HWND hWndParent,
    LPCRECT pRect,
    BOOL bModal);
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, la finestra di dialogo è sempre non modale, indipendentemente dal valore della *bModal* parametro.  
  
 Visualizzare [IPropertyPage::Activate](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-activate) in Windows SDK.  
  
##  <a name="apply"></a>  IPropertyPageImpl  
 Applica i valori correnti della pagina proprietà agli oggetti sottostanti specificati tramite `SetObjects`.  
  
```
HRESULT Apply();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK.  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::Apply](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-apply) in Windows SDK.  
  
##  <a name="deactivate"></a>  IPropertyPageImpl::Deactivate  
 Elimina definitivamente la finestra di dialogo creata con [Activate](#activate).  
  
```
HRESULT Deactivate();
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::Deactivate](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-deactivate) in Windows SDK.  
  
##  <a name="getpageinfo"></a>  IPropertyPageImpl::GetPageInfo  
 Riempie i *pPageInfo* struttura con le informazioni contenute nei membri di dati.  
  
```
HRESULT GetPageInfo(PROPPAGEINFO* pPageInfo);
```  
  
### <a name="remarks"></a>Note  
 `GetPageInfo` Carica le risorse stringa associate [m_dwDocString](#m_dwdocstring), [m_dwHelpFile](#m_dwhelpfile), e [m_dwTitle](#m_dwtitle).  
  
 Visualizzare [IPropertyPage:: GetPageInfo](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-getpageinfo) in Windows SDK.  
  
##  <a name="help"></a>  IPropertyPageImpl::Help  
 Richiama la Guida di Windows per la pagina delle proprietà.  
  
```
HRESULT Help(PROPPAGEINFO* pPageInfo);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::Help](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-help) in Windows SDK.  
  
##  <a name="ipropertypageimpl"></a>  IPropertyPageImpl::IPropertyPageImpl  
 Costruttore.  
  
```
IPropertyPageImpl();
```  
  
### <a name="remarks"></a>Note  
 Inizializza tutti i membri dati.  
  
##  <a name="ispagedirty"></a>  IPropertyPageImpl::IsPageDirty  
 Indica se la pagina delle proprietà è stato modificato perché è stata attivata.  
  
```
HRESULT IsPageDirty(void);
```  
  
### <a name="remarks"></a>Note  
 `IsPageDirty` Restituisce S_OK se la pagina è stato modificato perché è stata attivata.  
  
##  <a name="m_bdirty"></a>  IPropertyPageImpl::m_bDirty  
 Specifica se è stato modificato lo stato della pagina delle proprietà.  
  
```
BOOL m_bDirty;
```  
  
##  <a name="m_nobjects"></a>  IPropertyPageImpl::m_nObjects  
 Archivia il numero di oggetti associati alla pagina delle proprietà.  
  
```
ULONG m_nObjects;
```  
  
##  <a name="m_dwhelpcontext"></a>  IPropertyPageImpl::m_dwHelpContext  
 Archivia l'identificatore di contesto per l'argomento della Guida associato alla proprietà pagina.  
  
```
DWORD m_dwHelpContext;
```  
  
##  <a name="m_dwdocstring"></a>  IPropertyPageImpl::m_dwDocString  
 Archivia l'identificatore di risorsa associata alla stringa di testo che descrive la pagina delle proprietà.  
  
```
UINT m_dwDocString;
```  
  
##  <a name="m_dwhelpfile"></a>  IPropertyPageImpl::m_dwHelpFile  
 Archivia l'identificatore di risorsa associato al nome del file della Guida che descrive la pagina delle proprietà.  
  
```
UINT m_dwHelpFile;
```  
  
##  <a name="m_dwtitle"></a>  IPropertyPageImpl::m_dwTitle  
 Archivia l'identificatore di risorsa associata alla stringa di testo che viene visualizzato nella scheda della pagina delle proprietà.  
  
```
UINT m_dwTitle;
```  
  
##  <a name="m_ppagesite"></a>  IPropertyPageImpl::m_pPageSite  
 Punta al [IPropertyPageSite](/windows/desktop/api/ocidl/nn-ocidl-ipropertypagesite) interfaccia tramite il quale la pagina delle proprietà comunica con il frame di proprietà.  
  
```
IPropertyPageSite* m_pPageSite;
```  
  
##  <a name="m_ppunk"></a>  IPropertyPageImpl::m_ppUnk  
 Punta a una matrice di `IUnknown` puntatori a oggetti associati alla proprietà pagina.  
  
```
IUnknown** m_ppUnk;
```  
  
##  <a name="m_size"></a>  IPropertyPageImpl::m_size  
 Archivia l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.  
  
```
SIZE m_size;
```  
  
##  <a name="move"></a>  IPropertyPageImpl::Move  
 Posiziona e ridimensiona la finestra di dialogo pagina proprietà.  
  
```
HRESULT Move(LPCRECT pRect);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::Move](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-move) in Windows SDK.  
  
##  <a name="setdirty"></a>  IPropertyPageImpl:: SetDirty  
 Flag di stato della pagina delle proprietà come modificata o invariato, a seconda del valore di *bDirty*.  
  
```
void SetDirty(BOOL bDirty);
```  
  
### <a name="parameters"></a>Parametri  
 *bDirty*  
 [in] Se TRUE, lo stato della pagina delle proprietà è contrassegnato come modificata. In caso contrario, viene contrassegnato come non modificato.  
  
### <a name="remarks"></a>Note  
 Se necessario, `SetDirty` informa il frame a cui la pagina delle proprietà è stato modificato.  
  
##  <a name="setobjects"></a>  : SetObjects  
 Fornisce una matrice di `IUnknown` puntatori per gli oggetti associati alla pagina delle proprietà.  
  
```
HRESULT SetObjects(ULONG nObjects, IUnknown** ppUnk);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::SetObjects](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-setobjects) in Windows SDK.  
  
##  <a name="setpagesite"></a>  IPropertyPageImpl::SetPageSite  
 Fornisce la pagina delle proprietà con un [IPropertyPageSite](/windows/desktop/api/ocidl/nn-ocidl-ipropertypagesite) puntatore, attraverso il quale la pagina delle proprietà comunica con il frame di proprietà.  
  
```
HRESULT SetPageSite(IPropertyPageSite* pPageSite);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::SetPageSite](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-setpagesite) in Windows SDK.  
  
##  <a name="show"></a>  IPropertyPageImpl::Show  
 Rende la finestra di dialogo pagina proprietà visibile o invisibile.  
  
```
HRESULT Show(UINT nCmdShow);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::Show](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-show) in Windows SDK.  
  
##  <a name="translateaccelerator"></a>  IPropertyPageImpl::TranslateAccelerator  
 Elabora la sequenza di tasti specificata `pMsg`.  
  
```
HRESULT TranslateAccelerator(MSG* pMsg);
```  
  
### <a name="remarks"></a>Note  
 Visualizzare [IPropertyPage::TranslateAccelerator](/windows/desktop/api/ocidl/nf-ocidl-ipropertypage-translateaccelerator) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IPropertyPage2Impl](../../atl/reference/ipropertypage2impl-class.md)   
 [Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
