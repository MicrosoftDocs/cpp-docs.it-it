---
title: Classe IQuickActivateImpl | Microsoft Docs
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
ms.openlocfilehash: 9131a1cc1f8d0c66f2eb3616f4903db74ea4bdf0
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37881373"
---
# <a name="iquickactivateimpl-class"></a>Classe IQuickActivateImpl
Questa classe combina l'inizializzazione di controllo dei contenitori in un'unica chiamata.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
class ATL_NO_VTABLE IQuickActivateImpl : public IQuickActivate
```  
  
#### <a name="parameters"></a>Parametri  
 *T*  
 La classe, derivata da `IQuickActivateImpl`.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IQuickActivateImpl::GetContentExtent](#getcontentextent)|Recupera le dimensioni di visualizzazione corrente per un controllo in esecuzione.|  
|[IQuickActivateImpl::QuickActivate](#quickactivate)|Esegue un'inizializzazione dei controlli in fase di caricamento rapida.|  
|[IQuickActivateImpl::SetContentExtent](#setcontentextent)|Informa il controllo di quanto lo spazio di visualizzazione ha assegnato al contenitore.|  
  
## <a name="remarks"></a>Note  
 Il [IQuickActivate](http://msdn.microsoft.com/library/windows/desktop/ms690146) interfaccia aiuta i contenitori di evitare ritardi durante il caricamento dei controlli mediante la combinazione di inizializzazione in un'unica chiamata. Il `QuickActivate` metodo consente al contenitore di passare un puntatore a un [QACONTAINER](http://msdn.microsoft.com/library/windows/desktop/ms688630) deve struttura che contiene i puntatori a tutte le interfacce al controllo. In fase di restituzione, il controllo passa nuovamente un puntatore a un [QACONTROL](http://msdn.microsoft.com/library/windows/desktop/ms693721) struttura che contiene i puntatori per le proprie interfacce, che vengono usate dal contenitore. Classe `IQuickActivateImpl` fornisce un'implementazione predefinita di `IQuickActivate` e implementa `IUnknown` per l'invio di informazioni per il dump compila dispositivo in modalità debug.  
  
 **Articoli correlati** [esercitazione ATL](../../atl/active-template-library-atl-tutorial.md), [la creazione di un progetto ATL](../../atl/reference/creating-an-atl-project.md)  
  
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
  
 Visualizzare [IQuickActivate::GetContentExtent](http://msdn.microsoft.com/library/windows/desktop/ms693792) in Windows SDK.  
  
##  <a name="quickactivate"></a>  IQuickActivateImpl::QuickActivate  
 Esegue un'inizializzazione dei controlli in fase di caricamento rapida.  
  
```
STDMETHOD(QuickActivate)(
    QACONTAINER* pQACont,
    QACONTROL* pQACtrl);
```  
  
### <a name="remarks"></a>Note  
 La struttura contiene i puntatori alle interfacce necessarie per il controllo e i valori di alcune proprietà di ambiente. Al momento della restituzione, il controllo passa un puntatore a un [QACONTROL](http://msdn.microsoft.com/library/windows/desktop/ms693721) struttura che contiene i puntatori per le proprie interfacce che richiede il contenitore e informazioni aggiuntive sullo stato.  
  
 Visualizzare [IQuickActivate::QuickActivate](http://msdn.microsoft.com/library/windows/desktop/ms682421) in Windows SDK.  
  
##  <a name="setcontentextent"></a>  IQuickActivateImpl::SetContentExtent  
 Informa il controllo di quanto lo spazio di visualizzazione ha assegnato al contenitore.  
  
```
STDMETHOD(SetContentExtent)(LPSIZEL pSize);
```  
  
### <a name="remarks"></a>Note  
 La dimensione è specificata in unità HIMETRIC.  
  
 Visualizzare [IQuickActivate::SetContentExtent](http://msdn.microsoft.com/library/windows/desktop/ms678806) in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CComControl](../../atl/reference/ccomcontrol-class.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)
