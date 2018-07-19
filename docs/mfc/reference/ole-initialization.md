---
title: Inizializzazione OLE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- afxdisp/AfxOleInit
- afxdisp/AfxEnableControlContainer
dev_langs:
- C++
helpviewer_keywords:
- OLE initialization
ms.assetid: aa8a54a7-24c3-4344-b2c6-dbcf6084fa31
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 330701c4fcc75d40e782d25baa55044b88852f50
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37337795"
---
# <a name="ole-initialization"></a>Inizializzazione OLE
Prima di un'applicazione può utilizzare servizi di sistema OLE, deve inizializzare la DLL di sistema OLE e verificare che le DLL sono la versione corretta. Il `AfxOleInit` funzione inizializza il sistema OLE DLL.  
  
### <a name="ole-initialization"></a>Inizializzazione OLE  
  
|||  
|-|-|  
|[AfxOleInit](#afxoleinit)|Inizializza le librerie OLE.| 
|[AfxEnableControlContainer](#afxenablecontrolcontainer)|Chiamare questa funzione in un oggetto di applicazione `InitInstance` (funzione) per abilitare il supporto per il contenimento di controlli OLE.| 


## <a name="afxenablecontrolcontainer"></a> AfxEnableControlContainer
Chiamare questa funzione in un oggetto di applicazione `InitInstance` (funzione) per abilitare il supporto per il contenimento di controlli OLE.  
   
### <a name="syntax"></a>Sintassi    
```
void AfxEnableControlContainer( );  
```  
   
### <a name="remarks"></a>Note  
 Per altre informazioni sui controlli OLE (ora denominato controlli ActiveX), vedere [negli argomenti di controllo di ActiveX](../mfc-activex-controls.md).  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  

  
##  <a name="afxoleinit"></a>  AfxOleInit  
 Inizializza il supporto OLE per l'applicazione.  
  
``` 
BOOL AFXAPI AfxOleInit(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 se l'inizializzazione ha esito negativo, probabilmente perché sono installate le versioni non corrette delle DLL di sistema OLE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per inizializzare il supporto OLE per un'applicazione MFC. Quando questa funzione viene chiamata, si verificano le azioni seguenti:  
  
-   Inizializza la libreria COM nell'apartment corrente dell'applicazione chiamante. Per altre informazioni, vedere [OleInitialize](http://msdn.microsoft.com/library/windows/desktop/ms690134).  
  
-   Crea un oggetto di filtro del messaggio, che implementa il [IMessageFilter](http://msdn.microsoft.com/library/windows/desktop/ms693740) interfaccia. Questo filtro dei messaggi sono accessibili con una chiamata a [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).  
  
> [!NOTE]
>  Se **AfxOleInit** viene chiamato da una DLL MFC, la chiamata avrà esito negativo. L'errore si verifica perché la funzione si presuppone che, se viene chiamato da una DLL, il sistema OLE è stato inizializzato in precedenza dall'applicazione chiamante.  
  
> [!NOTE]
>  Le applicazioni MFC devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) nel `InitInstance` eseguire l'override, specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED). Per altre informazioni, vedere PRB: applicazioni MFC si blocca quando si inizializza l'applicazione come un multithreading Apartment (828643) nella [ http://support.microsoft.com/default.aspxscid=kb; en-us; 828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
