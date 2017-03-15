---
title: Interfaccia IView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- IView
dev_langs:
- C++
helpviewer_keywords:
- views [MFC]
- IView class
- views, classes
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
caps.latest.revision: 23
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 9a8b5f2d9d123aa3032cb30ecdbdd1cd380b32f8
ms.lasthandoff: 02/24/2017

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
|[IView::OnActivateView](#onactivateview)|Chiamato da MFC quando una vista è attivata o disattivata.|  
|[IView::OnInitialUpdate](#oninitialupdate)|Chiamato dal framework dopo la visualizzazione è prima allegata al documento, ma prima che la visualizzazione iniziale.|  
|[IView::OnUpdate](#onupdate)|Chiamato da MFC dopo che il documento della vista è stato modificato. Questa funzione consente di aggiornare la visualizzazione in modo da riflettere le modifiche.|  
  
## <a name="remarks"></a>Note  
 `IView`implementa diversi metodi che `CWinFormsView` utilizza per inoltrare le notifiche di visualizzazione comuni a un controllo gestito ospitato. Si tratta di [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) e [OnActivateView](#onactivateview).  
  
 `IView`è simile a [CView](../../mfc/reference/cview-class.md), ma viene utilizzata solo con controlli e visualizzazioni gestite.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  

## <a name="requirements"></a>Requisiti  
 Intestazione: afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  

## <a name="a-nameonactivateviewa-iviewonactivateview"></a><a name="onactivateview"></a>IView::OnActivateView  
Chiamato da MFC quando una vista è attivata o disattivata.
```
void OnActivateView(bool activate);
```
## <a name="parameters"></a>Parametri
`activate`  
Indica se la visualizzazione viene attivata o disattivata.  

## <a name="a-nameoninitialupdatea-iviewoninitialupdate"></a><a name="oninitialupdate"></a>IView::OnInitialUpdate
Chiamato dal framework dopo la visualizzazione è prima allegata al documento, ma prima che la visualizzazione iniziale.
```
void OnInitialUpdate();
```

## <a name="a-nameonupdatea-iviewonupdate"></a><a name="onupdate"></a>IView::OnUpdate 
Chiamato da MFC dopo che il documento della vista è stato modificato.  
```
void OnUpdate();
```
## <a name="remarks"></a>Note  
Questa funzione consente di aggiornare la visualizzazione in modo da riflettere le modifiche.

## <a name="see-also"></a>Vedere anche  
 [Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)

