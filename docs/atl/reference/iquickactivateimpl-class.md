---
title: Classe IQuickActivateImpl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 20
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 4f6b75da64efa12e43fa160c57da4291acae03ca
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="iquickactivateimpl-class"></a>Classe IQuickActivateImpl
Questa classe combina l'inizializzazione di controllo dei contenitori in una singola chiamata.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare questa classe e i relativi membri in applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IQuickActivateImpl : public IQuickActivate
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe derivata da `IQuickActivateImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IQuickActivateImpl::GetContentExtent](#getcontentextent)|Recupera le dimensioni di visualizzazione corrente per un controllo in esecuzione.|  
|[IQuickActivateImpl::QuickActivate](#quickactivate)|Esegue l'inizializzazione rapida dei controlli da caricare.|  
|[IQuickActivateImpl::SetContentExtent](#setcontentextent)|Indica al controllo di spazio di visualizzazione è assegnato il contenitore.|  
  
## <a name="remarks"></a>Note  
 Il [IQuickActivate](http://msdn.microsoft.com/library/windows/desktop/ms690146) interfaccia consente ai contenitori di evitare ritardi durante il caricamento dei controlli mediante la combinazione di inizializzazione in un'unica chiamata. Il `QuickActivate` metodo consente al contenitore di passare un puntatore a un [QACONTAINER](http://msdn.microsoft.com/library/windows/desktop/ms688630) struttura che contiene i puntatori a tutte le interfacce di controllo. La restituzione, il controllo passa nuovamente un puntatore a un [QACONTROL](http://msdn.microsoft.com/library/windows/desktop/ms693721) struttura che contiene i puntatori per le proprie interfacce, che vengono utilizzate dal contenitore. Classe `IQuickActivateImpl` fornisce un'implementazione predefinita di **IQuickActivate** e implementa **IUnknown** per l'invio di informazioni per il dump Crea dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `IQuickActivate`  
  
 `IQuickActivateImpl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlctl. h  
  
##  <a name="getcontentextent"></a>IQuickActivateImpl::GetContentExtent  
 Recupera le dimensioni di visualizzazione corrente per un controllo in esecuzione.  
  
```
STDMETHOD(GetContentExtent)(LPSIZEL pSize);
```  
  
### <a name="remarks"></a>Note  
 La dimensione per il rendering del controllo completo e viene specificata in unità HIMETRIC.  
  
 Vedere [IQuickActivate::GetContentExtent](http://msdn.microsoft.com/library/windows/desktop/ms693792) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="quickactivate"></a>IQuickActivateImpl::QuickActivate  
 Esegue l'inizializzazione rapida dei controlli da caricare.  
  
```
STDMETHOD(QuickActivate)(
    QACONTAINER* pQACont,
    QACONTROL* pQACtrl);
```  
  
### <a name="remarks"></a>Note  
 La struttura contiene puntatori alle interfacce necessarie per il controllo e i valori di alcune proprietà di ambiente. Al momento della restituzione, il controllo passa un puntatore a un [QACONTROL](http://msdn.microsoft.com/library/windows/desktop/ms693721) struttura che contiene i puntatori per le proprie interfacce che richiede il contenitore e informazioni aggiuntive sullo stato.  
  
 Vedere [IQuickActivate::QuickActivate](http://msdn.microsoft.com/library/windows/desktop/ms682421) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="setcontentextent"></a>IQuickActivateImpl::SetContentExtent  
 Indica al controllo di spazio di visualizzazione è assegnato il contenitore.  
  
```
STDMETHOD(SetContentExtent)(LPSIZEL pSize);
```  
  
### <a name="remarks"></a>Note  
 La dimensione è specificata in unità HIMETRIC.  
  
 Vedere [IQuickActivate::SetContentExtent](http://msdn.microsoft.com/library/windows/desktop/ms678806) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

