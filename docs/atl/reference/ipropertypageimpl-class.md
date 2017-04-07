---
title: Classe IPropertyPageImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
ms.openlocfilehash: 1179e13eb33f09a363c7a3f4425a9ebf13c73b91
ms.lasthandoff: 02/24/2017

---
# <a name="ipropertypageimpl-class"></a>IPropertyPageImpl (classe)
Questa classe implementa **IUnknown** e fornisce un'implementazione predefinita di [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) interfaccia.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T>  
class IPropertyPageImpl
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IPropertyPageImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl::IPropertyPageImpl](#ipropertypageimpl)|Costruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl](#activate)|Crea la finestra di dialogo per la pagina delle proprietà.|  
|[IPropertyPageImpl](#apply)|Applica i valori correnti della pagina proprietà agli oggetti sottostanti specificati tramite `SetObjects`. L'implementazione ATL restituisce `S_OK`.|  
|[IPropertyPageImpl::Deactivate](#deactivate)|Elimina la finestra creata con **attiva**.|  
|[IPropertyPageImpl::GetPageInfo](#getpageinfo)|Recupera le informazioni sulla pagina delle proprietà.|  
|[IPropertyPageImpl::Help](#help)|Richiama la Guida di Windows per la pagina delle proprietà.|  
|[IPropertyPageImpl::IsPageDirty](#ispagedirty)|Indica se la pagina delle proprietà è stato modificato dopo che è stata attivata.|  
|[IPropertyPageImpl::Move](#move)|Posiziona e ridimensiona la finestra di dialogo pagina proprietà.|  
|[IPropertyPageImpl:: SetDirty](#setdirty)|Contrassegna lo stato della pagina delle proprietà modificate o subisce modifiche.|  
|[: SetObjects](#setobjects)|Fornisce una matrice di **IUnknown** puntatori per gli oggetti associati alla pagina delle proprietà. Questi oggetti riceveranno valori correnti della pagina proprietà tramite una chiamata a **applica**.|  
|[IPropertyPageImpl::SetPageSite](#setpagesite)|Fornisce la pagina delle proprietà con un `IPropertyPageSite` puntatore, tramite il quale la pagina delle proprietà comunica con la finestra delle proprietà.|  
|[IPropertyPageImpl::Show](#show)|Rende la finestra di dialogo pagina proprietà visibile o invisibile.|  
|[IPropertyPageImpl::TranslateAccelerator](#translateaccelerator)|Elabora un tasto specificato.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IPropertyPageImpl::m_bDirty](#m_bdirty)|Specifica se è stato modificato lo stato della pagina delle proprietà.|  
|[IPropertyPageImpl::m_dwDocString](#m_dwdocstring)|Archivia l'identificatore di risorsa associata alla stringa di testo che descrive la pagina delle proprietà.|  
|[IPropertyPageImpl::m_dwHelpContext](#m_dwhelpcontext)|Archivia l'identificatore di contesto per l'argomento della Guida associato alla pagina delle proprietà.|  
|[IPropertyPageImpl::m_dwHelpFile](#m_dwhelpfile)|Archivia l'identificatore di risorsa associata al nome del file della Guida che descrive la pagina delle proprietà.|  
|[IPropertyPageImpl::m_dwTitle](#m_dwtitle)|Archivia l'identificatore di risorsa associata alla stringa di testo che viene visualizzato nella scheda della pagina delle proprietà.|  
|[IPropertyPageImpl::m_nObjects](#m_nobjects)|Archivia il numero di oggetti associati con la pagina delle proprietà.|  
|[IPropertyPageImpl::m_pPageSite](#m_ppagesite)|Indichi il `IPropertyPageSite` interfaccia tramite il quale la pagina delle proprietà comunica con la finestra delle proprietà.|  
|[IPropertyPageImpl::m_ppUnk](#m_ppunk)|Punta a una matrice di **IUnknown** puntatori agli oggetti associati alla pagina delle proprietà.|  
|[IPropertyPageImpl::m_size](#m_size)|Archivia l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.|  
  
## <a name="remarks"></a>Note  
 Il [IPropertyPage](http://msdn.microsoft.com/library/windows/desktop/ms691246) interfaccia consente a un oggetto gestire una determinata pagina delle proprietà all'interno di una finestra delle proprietà. Classe `IPropertyPageImpl` fornisce un'implementazione predefinita di questa interfaccia e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IPropertyPage`  
  
 `IPropertyPageImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="activate"></a>IPropertyPageImpl  
 Crea la finestra di dialogo per la pagina delle proprietà.  
  
```
HRESULT Activate(  
    HWND hWndParent,
    LPCRECT pRect,
    BOOL bModal);
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, la finestra di dialogo è sempre non modale, indipendentemente dal valore di *bModal* parametro.  
  
 Vedere [IPropertyPage::Activate](http://msdn.microsoft.com/library/windows/desktop/ms682250) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="apply"></a>IPropertyPageImpl  
 Applica i valori correnti della pagina proprietà agli oggetti sottostanti specificati tramite `SetObjects`.  
  
```
HRESULT Apply();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `S_OK`.  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::Apply](http://msdn.microsoft.com/library/windows/desktop/ms691284) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="deactivate"></a>IPropertyPageImpl::Deactivate  
 Elimina la finestra di dialogo creata con [attiva](#activate).  
  
```
HRESULT Deactivate();
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::Deactivate](http://msdn.microsoft.com/library/windows/desktop/ms682504) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="getpageinfo"></a>IPropertyPageImpl::GetPageInfo  
 Riempie il *pPageInfo* struttura con le informazioni contenute nei membri dati.  
  
```
HRESULT GetPageInfo(PROPPAGEINFO* pPageInfo);
```  
  
### <a name="remarks"></a>Note  
 `GetPageInfo`Carica le risorse stringa associate a [m_dwDocString](#m_dwdocstring), [m_dwHelpFile](#m_dwhelpfile), e [m_dwTitle](#m_dwtitle).  
  
 Vedere [IPropertyPage:: GetPageInfo](http://msdn.microsoft.com/library/windows/desktop/ms680714) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="help"></a>IPropertyPageImpl::Help  
 Richiama la Guida di Windows per la pagina delle proprietà.  
  
```
HRESULT Help(PROPPAGEINFO* pPageInfo);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::Help](http://msdn.microsoft.com/library/windows/desktop/ms691504) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="ipropertypageimpl"></a>IPropertyPageImpl::IPropertyPageImpl  
 Costruttore.  
  
```
IPropertyPageImpl();
```  
  
### <a name="remarks"></a>Note  
 Inizializza tutti i membri dati.  
  
##  <a name="ispagedirty"></a>IPropertyPageImpl::IsPageDirty  
 Indica se la pagina delle proprietà è stato modificato dopo che è stata attivata.  
  
```
HRESULT IsPageDirty(void);
```  
  
### <a name="remarks"></a>Note  
 `IsPageDirty`Restituisce `S_OK` se la pagina è stato modificato dopo che è stata attivata.  
  
##  <a name="m_bdirty"></a>IPropertyPageImpl::m_bDirty  
 Specifica se è stato modificato lo stato della pagina delle proprietà.  
  
```
BOOL m_bDirty;
```  
  
##  <a name="m_nobjects"></a>IPropertyPageImpl::m_nObjects  
 Archivia il numero di oggetti associati con la pagina delle proprietà.  
  
```
ULONG m_nObjects;
```  
  
##  <a name="m_dwhelpcontext"></a>IPropertyPageImpl::m_dwHelpContext  
 Archivia l'identificatore di contesto per l'argomento della Guida associato alla pagina delle proprietà.  
  
```
DWORD m_dwHelpContext;
```  
  
##  <a name="m_dwdocstring"></a>IPropertyPageImpl::m_dwDocString  
 Archivia l'identificatore di risorsa associata alla stringa di testo che descrive la pagina delle proprietà.  
  
```
UINT m_dwDocString;
```  
  
##  <a name="m_dwhelpfile"></a>IPropertyPageImpl::m_dwHelpFile  
 Archivia l'identificatore di risorsa associata al nome del file della Guida che descrive la pagina delle proprietà.  
  
```
UINT m_dwHelpFile;
```  
  
##  <a name="m_dwtitle"></a>IPropertyPageImpl::m_dwTitle  
 Archivia l'identificatore di risorsa associata alla stringa di testo che viene visualizzato nella scheda della pagina delle proprietà.  
  
```
UINT m_dwTitle;
```  
  
##  <a name="m_ppagesite"></a>IPropertyPageImpl::m_pPageSite  
 Indichi il [IPropertyPageSite](http://msdn.microsoft.com/library/windows/desktop/ms690583) interfaccia tramite il quale la pagina delle proprietà comunica con la finestra delle proprietà.  
  
```
IPropertyPageSite* m_pPageSite;
```  
  
##  <a name="m_ppunk"></a>IPropertyPageImpl::m_ppUnk  
 Punta a una matrice di **IUnknown** puntatori agli oggetti associati alla pagina delle proprietà.  
  
```
IUnknown** m_ppUnk;
```  
  
##  <a name="m_size"></a>IPropertyPageImpl::m_size  
 Archivia l'altezza e la larghezza della finestra di dialogo della pagina delle proprietà, in pixel.  
  
```
SIZE m_size;
```  
  
##  <a name="move"></a>IPropertyPageImpl::Move  
 Posiziona e ridimensiona la finestra di dialogo pagina proprietà.  
  
```
HRESULT Move(LPCRECT pRect);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::Move](http://msdn.microsoft.com/library/windows/desktop/ms680118) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setdirty"></a>IPropertyPageImpl:: SetDirty  
 Contrassegna lo stato della pagina delle proprietà modificate o non modificato, a seconda del valore di `bDirty`.  
  
```
void SetDirty(BOOL bDirty);
```  
  
### <a name="parameters"></a>Parametri  
 `bDirty`  
 [in] Se **TRUE**, lo stato della pagina delle proprietà è contrassegnato come modificata. In caso contrario, viene contrassegnato come non modificato.  
  
### <a name="remarks"></a>Note  
 Se necessario, `SetDirty` informa il frame che ha modificato la pagina delle proprietà.  
  
##  <a name="setobjects"></a>: SetObjects  
 Fornisce una matrice di **IUnknown** puntatori per gli oggetti associati alla pagina delle proprietà.  
  
```
HRESULT SetObjects(ULONG nObjects, IUnknown** ppUnk);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::SetObjects](http://msdn.microsoft.com/library/windows/desktop/ms678529) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setpagesite"></a>IPropertyPageImpl::SetPageSite  
 Fornisce la pagina delle proprietà con un [IPropertyPageSite](http://msdn.microsoft.com/library/windows/desktop/ms690583) puntatore, tramite il quale la pagina delle proprietà comunica con la finestra delle proprietà.  
  
```
HRESULT SetPageSite(IPropertyPageSite* pPageSite);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::SetPageSite](http://msdn.microsoft.com/library/windows/desktop/ms690413) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="show"></a>IPropertyPageImpl::Show  
 Rende la finestra di dialogo pagina proprietà visibile o invisibile.  
  
```
HRESULT Show(UINT nCmdShow);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::Show](http://msdn.microsoft.com/library/windows/desktop/ms694467) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="translateaccelerator"></a>IPropertyPageImpl::TranslateAccelerator  
 Elabora il tasto specificato nel `pMsg`.  
  
```
HRESULT TranslateAccelerator(MSG* pMsg);
```  
  
### <a name="remarks"></a>Note  
 Vedere [IPropertyPage::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms686603) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe IPropertyPage2Impl](../../atl/reference/ipropertypage2impl-class.md)   
 [Classe IPerPropertyBrowsingImpl](../../atl/reference/iperpropertybrowsingimpl-class.md)   
 [Classe ISpecifyPropertyPagesImpl](../../atl/reference/ispecifypropertypagesimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

