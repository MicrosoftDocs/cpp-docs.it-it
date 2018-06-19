---
title: Inizializzazione OLE | Documenti Microsoft
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
ms.openlocfilehash: b8224cf27313b056b95990f514e02eb9d9c08cad
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33374724"
---
# <a name="ole-initialization"></a>Inizializzazione OLE
Prima di un'applicazione può utilizzare servizi di sistema OLE, è necessario inizializzare le DLL di sistema OLE e verificare che le DLL siano la versione corretta. Il **AfxOleInit** funzione inizializza il sistema OLE DLL.  
  
### <a name="ole-initialization"></a>Inizializzazione OLE  
  
|||  
|-|-|  
|[AfxOleInit](#afxoleinit)|Inizializza le librerie OLE.| 
|[AfxEnableControlContainer](#afxenablecontrolcontainer)|Chiamare questa funzione dell'oggetto di applicazione `InitInstance` funzione per abilitare il supporto per il contenimento di controlli OLE.| 


## <a name="afxenablecontrolcontainer"></a> AfxEnableControlContainer
Chiamare questa funzione dell'oggetto di applicazione `InitInstance` funzione per abilitare il supporto per il contenimento di controlli OLE.  
   
### <a name="syntax"></a>Sintassi    
```
void AfxEnableControlContainer( );  
```  
   
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sui controlli OLE (controlli ActiveX ora denominato), vedere [argomenti sul controllo ActiveX](../mfc-activex-controls.md).  
   
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
 Chiamare questa funzione per inizializzare il supporto OLE per un'applicazione MFC. Quando questa funzione viene chiamata, si verificano le seguenti azioni:  
  
-   Inizializza la libreria COM nell'apartment corrente dell'applicazione chiamante. Per ulteriori informazioni, vedere [OleInitialize](http://msdn.microsoft.com/library/windows/desktop/ms690134).  
  
-   Crea un oggetto di filtro del messaggio, che implementa il [IMessageFilter](http://msdn.microsoft.com/library/windows/desktop/ms693740) interfaccia. Il filtro messaggi è possibile accedere con una chiamata a [AfxOleGetMessageFilter](application-control.md#afxolegetmessagefilter).  
  
> [!NOTE]
>  Se **AfxOleInit** viene chiamato da una DLL di MFC, la chiamata avrà esito negativo. L'errore si verifica perché la funzione presuppone che, se viene chiamato da una DLL, il sistema OLE è stato inizializzato in precedenza dall'applicazione chiamante.  
  
> [!NOTE]
>  MFC (applicazioni) devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) nel `InitInstance` eseguire l'override, specificare `COINIT_APARTMENTTHREADED` (anziché `COINIT_MULTITHREADED`). Per altre informazioni, vedere PRB: applicazione MFC si blocca quando si inizializza l'applicazione come a multithreading Apartment (828643) nella [ http://support.microsoft.com/default.aspxscid=kb; en-us; 828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
