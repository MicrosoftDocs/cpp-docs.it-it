---
title: Inizializzazione OLE | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros.ole
dev_langs:
- C++
helpviewer_keywords:
- OLE initialization
ms.assetid: aa8a54a7-24c3-4344-b2c6-dbcf6084fa31
caps.latest.revision: 13
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
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 5c2d8a1552b8cd546b7e22683fe9f73bbc54df5c
ms.lasthandoff: 02/24/2017

---
# <a name="ole-initialization"></a>Inizializzazione OLE
Prima di un'applicazione può utilizzare servizi di sistema OLE, è necessario inizializzare le DLL di sistema OLE e verificare che le DLL siano la versione corretta. Il **AfxOleInit** funzione consente di inizializzare le DLL di sistema OLE.  
  
### <a name="ole-initialization"></a>Inizializzazione OLE  
  
|||  
|-|-|  
|[AfxOleInit](#afxoleinit)|Inizializza le librerie OLE.|  
  
##  <a name="a-nameafxoleinita--afxoleinit"></a><a name="afxoleinit"></a>AfxOleInit  
 Inizializza il supporto OLE per l'applicazione.  
  
``` 
BOOL AFXAPI AfxOleInit(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo. 0 se l'inizializzazione ha esito negativo, probabilmente perché sono installate versioni non corrette delle DLL di sistema OLE.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per inizializzare il supporto OLE per un'applicazione MFC. Quando questa funzione viene chiamata, si verificano le seguenti azioni:  
  
-   Inizializza la libreria COM nell'apartment corrente dell'applicazione chiamante. Per ulteriori informazioni, vedere [OleInitialize](http://msdn.microsoft.com/library/windows/desktop/ms690134).  
  
-   Crea un oggetto filtro di messaggi, che implementa il [IMessageFilter](http://msdn.microsoft.com/library/windows/desktop/ms693740) interfaccia. Il filtro messaggi è accessibile con una chiamata a [AfxOleGetMessageFilter](http://msdn.microsoft.com/library/36cca011-4775-4086-b471-5557a87b266c).  
  
> [!NOTE]
>  Se **AfxOleInit** viene chiamato da una DLL MFC, la chiamata avrà esito negativo. L'errore si verifica perché la funzione presuppone che, se viene chiamato da una DLL, il sistema OLE è stato inizializzato in precedenza dall'applicazione chiamante.  
  
> [!NOTE]
>  MFC (applicazioni) devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) nel `InitInstance` eseguire l'override, specificare `COINIT_APARTMENTTHREADED` (anziché `COINIT_MULTITHREADED`). Per ulteriori informazioni, vedere PRB: applicazione MFC si blocca quando si inizializza l'applicazione come un multithreading Apartment (828643) in [http://support.microsoft.com/default.aspxscid=kb;en-us;828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h

## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

