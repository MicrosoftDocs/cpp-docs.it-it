---
title: Interfaccia IDocHostUIHandlerDispatch | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IDocHostUIHandlerDispatch
- atlbase/ATL::IDocHostUIHandlerDispatch
dev_langs: C++
helpviewer_keywords: IDocHostUIHandlerDispatch interface
ms.assetid: 6963a301-601a-4ac3-8bef-f7b252ea2fc6
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6fbd91deb1d80c49dd403e8e08cc50f5fd8c8ec3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="idochostuihandlerdispatch-interface"></a>Interfaccia IDocHostUIHandlerDispatch
Interfaccia per l'analisi di HTML Microsoft e il motore di rendering.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
interface IDocHostUIHandlerDispatch : IDispatch
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
> [!NOTE]
>  I collegamenti nella tabella riportata di seguito sono per gli argomenti di riferimento per i membri di SDK INet il [IDocUIHostHandler](https://msdn.microsoft.com/library/aa753260.aspx) interfaccia. `IDocHostUIHandlerDispatch`ha la stessa funzionalità come **IDocUIHostHandler**, con la differenza è che `IDocHostUIHandlerDispatch` è un'interfaccia dispatch mentre **IDocUIHostHandler** è un'interfaccia personalizzata.  
  
|||  
|-|-|  
|[EnableModeless](https://msdn.microsoft.com/library/aa753253.aspx)|Chiamato dall'implementazione MSHTML di [IOleInPlaceActiveObject::EnableModeless](http://msdn.microsoft.com/library/windows/desktop/ms680115). Chiamato anche quando MSHTML Visualizza un'interfaccia utente modale.|  
|[FilterDataObject](https://msdn.microsoft.com/library/aa753254.aspx)|Chiamata eseguita sull'host da MSHTML per consentire all'host di sostituire l'oggetto dati MSHTML.|  
|[GetDropTarget](https://msdn.microsoft.com/library/aa753255.aspx)|Chiamata eseguita dal MSHTML quando utilizzato come destinazione di trascinamento per consentire all'host di fornire un'alternativa [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679).|  
|[GetExternal](https://msdn.microsoft.com/library/aa753256.aspx)|Chiamato da MSHTML per ottenere l'interfaccia IDispatch dell'host.|  
|[GetHostInfo](https://msdn.microsoft.com/library/aa753257.aspx)|Recupera le funzionalità dell'interfaccia utente dell'host MSHTML.|  
|[GetOptionKeyPath](https://msdn.microsoft.com/library/aa753258.aspx)|Restituisce la chiave del Registro di sistema in cui MSHTML archivia le preferenze dell'utente.|  
|[HideUI](https://msdn.microsoft.com/library/aa753259.aspx)|Chiamata eseguita quando MSHTML rimuove i menu e barre degli strumenti.|  
|[OnDocWindowActivate](https://msdn.microsoft.com/library/aa753261.aspx)|Chiamato dall'implementazione MSHTML di [OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281).|  
|[OnFrameWindowActivate](https://msdn.microsoft.com/library/aa753262.aspx)|Chiamato dall'implementazione MSHTML di [IOleInPlaceActiveObject:: OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969).|  
|[ResizeBorder](https://msdn.microsoft.com/library/aa753263.aspx)|Chiamato dall'implementazione MSHTML di [IOleInPlaceActiveObject:: ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053).|  
|[ShowContextMenu](https://msdn.microsoft.com/library/aa753264.aspx)|Chiamato da MSHTML per visualizzare un menu di scelta rapida.|  
|[ShowUI](https://msdn.microsoft.com/library/aa753265.aspx)|Consente all'host di sostituire le barre degli strumenti e menu MSHTML.|  
|[TranslateAccelerator](https://msdn.microsoft.com/library/aa753266.aspx)|Chiamato da MSHTML quando [IOleInPlaceActiveObject:: TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) o [IOleControlSite:: TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693756) viene chiamato.|  
|[TranslateUrl](https://msdn.microsoft.com/library/aa753267.aspx)|Chiamato da MSHTML per consentire all'host la possibilità di modificare l'URL da caricare.|  
|[UpdateUI](https://msdn.microsoft.com/library/aa753268.aspx)|Notifica all'host che lo stato del comando è stato modificato.|  
  
## <a name="remarks"></a>Note  
 Un host è possibile sostituire il menu, barre degli strumenti e menu di scelta rapida utilizzato dall'analisi Microsoft HTML e il motore di rendering (MSHTML) implementando questa interfaccia.  
  
## <a name="requirements"></a>Requisiti  
 La definizione di questa interfaccia è disponibile come file IDL o C++, come illustrato di seguito.  
  
|Tipo di definizione|File|  
|---------------------|----------|  
|IDL|ATLIFace.idl|  
|C++|ATLIFace.h (incluso anche in atlbase. H)|  
  
## <a name="see-also"></a>Vedere anche  
 [IDocUIHostHandler](https://msdn.microsoft.com/library/aa753260.aspx)









