---
title: Classe IQuickActivateImpl | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- IQuickActivateImpl
- ATLCTL/ATL::IQuickActivateImpl
- ATLCTL/ATL::IQuickActivateImpl::GetContentExtent
- ATLCTL/ATL::IQuickActivateImpl::QuickActivate
- ATLCTL/ATL::IQuickActivateImpl::SetContentExtent
dev_langs:
- C++
helpviewer_keywords:
- activating ATL controls
- controls [ATL], activating
- IQuickActivateImpl class
- IQuickActivate ATL implementation
ms.assetid: aa80c056-1041-494e-b21d-2acca7dc27ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b87427408483a60cf33b46a1a670095d211b3d80
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="iquickactivateimpl-class"></a>Classe IQuickActivateImpl
Questa classe combina l'inizializzazione di controllo dei contenitori in una singola chiamata.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IQuickActivateImpl : public IQuickActivate
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `IQuickActivateImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IQuickActivateImpl::GetContentExtent](#getcontentextent)|Recupera le dimensioni di visualizzazione corrente per un controllo in esecuzione.|  
|[IQuickActivateImpl::QuickActivate](#quickactivate)|Esegue un'inizializzazione dei controlli in fase di caricamento rapida.|  
|[IQuickActivateImpl::SetContentExtent](#setcontentextent)|Indica al controllo di spazio di visualizzazione è assegnato il contenitore.|  
  
## <a name="remarks"></a>Note  
 Il [IQuickActivate](http://msdn.microsoft.com/library/windows/desktop/ms690146) interfaccia consente ai contenitori di evitare ritardi durante il caricamento di controlli tramite la combinazione di inizializzazione in una singola chiamata. Il `QuickActivate` metodo consente al contenitore di passare un puntatore a un [QACONTAINER](http://msdn.microsoft.com/library/windows/desktop/ms688630) struttura che contiene puntatori a tutte le interfacce di controllo. In fase di restituzione, il controllo passa nuovamente un puntatore a un [QACONTROL](http://msdn.microsoft.com/library/windows/desktop/ms693721) struttura che contiene i puntatori alle proprie interfacce, che vengono utilizzate dal contenitore. Classe `IQuickActivateImpl` fornisce un'implementazione predefinita di **IQuickActivate** e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IQuickActivate`  
  
 `IQuickActivateImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="getcontentextent"></a>  IQuickActivateImpl::GetContentExtent  
 Recupera le dimensioni di visualizzazione corrente per un controllo in esecuzione.  
  
```
STDMETHOD(GetContentExtent)(LPSIZEL pSize);
```  
  
### <a name="remarks"></a>Note  
 La dimensione è per il rendering del controllo completo e viene specificata in unità HIMETRIC.  
  
 Vedere [IQuickActivate::GetContentExtent](http://msdn.microsoft.com/library/windows/desktop/ms693792) in Windows SDK.  
  
##  <a name="quickactivate"></a>  IQuickActivateImpl::QuickActivate  
 Esegue un'inizializzazione dei controlli in fase di caricamento rapida.  
  
```
STDMETHOD(QuickActivate)(
    QACONTAINER* pQACont,
    QACONTROL* pQACtrl);
```  
  
### <a name="remarks"></a>Note  
 La struttura contiene i puntatori alle interfacce necessarie per il controllo e i valori di alcune proprietà di ambiente. Al momento della restituzione, il controllo passa un puntatore a un [QACONTROL](http://msdn.microsoft.com/library/windows/desktop/ms693721) struttura che contiene puntatori alle proprie interfacce che richiede il contenitore e informazioni aggiuntive sullo stato.  
  
 Vedere [IQuickActivate::QuickActivate](http://msdn.microsoft.com/library/windows/desktop/ms682421) in Windows SDK.  
  
##  <a name="setcontentextent"></a>  IQuickActivateImpl::SetContentExtent  
 Indica al controllo di spazio di visualizzazione è assegnato il contenitore.  
  
```
STDMETHOD(SetContentExtent)(LPSIZEL pSize);
```  
  
### <a name="remarks"></a>Note  
 La dimensione è specificata in unità HIMETRIC.  
  
 Vedere [IQuickActivate::SetContentExtent](http://msdn.microsoft.com/library/windows/desktop/ms678806) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
