---
title: Interfaccia IView | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IView
- No header/IView
- No header/IView::OnActivateView
- No header/IView::OnInitialUpdate
- No header/IView::OnUpdate
dev_langs: C++
helpviewer_keywords:
- views [MFC]
- IView class [MFC]
- views [MFC], classes
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
caps.latest.revision: "23"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 144cea65ddfa5153fb117c9570b101a1ce99eb32
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="iview-interface"></a>Interfaccia IView
Implementa diversi metodi che [CWinFormsView](../../mfc/reference/cwinformsview-class.md) utilizza per inviare notifiche di visualizzazione per un controllo gestito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
interface class IView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IView::OnActivateView](#onactivateview)|Chiamato da MFC quando una vista viene attivata o disattivata.|  
|[IView::OnInitialUpdate](#oninitialupdate)|Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima che la visualizzazione iniziale.|  
|[IView::OnUpdate](#onupdate)|Chiamato da MFC dopo che è stato modificato il documento della vista. Questa funzione consente di aggiornare la visualizzazione in modo da riflettere le modifiche.|  
  
## <a name="remarks"></a>Note  
 `IView`implementa diversi metodi che `CWinFormsView` Usa per inoltrare le notifiche di visualizzazione comuni a un controllo gestito ospitato. Si tratta di [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) e [OnActivateView](#onactivateview).  
  
 `IView`è simile a [CView](../../mfc/reference/cview-class.md), ma viene usato solo con le visualizzazioni gestite e controlli.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  

## <a name="requirements"></a>Requisiti  
 Intestazione: afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  

## <a name="onactivateview"></a>IView::OnActivateView  
Chiamato da MFC quando una vista viene attivata o disattivata.
```
void OnActivateView(bool activate);
```
## <a name="parameters"></a>Parametri
`activate`  
Indica se la visualizzazione viene attivata o disattivata.  

## <a name="oninitialupdate"></a>IView::OnInitialUpdate
Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima che la visualizzazione iniziale.
```
void OnInitialUpdate();
```

## <a name="onupdate"></a>IView::OnUpdate 
Chiamato da MFC dopo che il documento della vista è stato modificato.  
```
void OnUpdate();
```
## <a name="remarks"></a>Note  
Questa funzione consente di aggiornare la visualizzazione in modo da riflettere le modifiche.

## <a name="see-also"></a>Vedere anche  
 [Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)   
 [Classe CView](../../mfc/reference/cview-class.md)
