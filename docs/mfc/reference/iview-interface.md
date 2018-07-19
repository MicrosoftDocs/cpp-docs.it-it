---
title: Interfaccia IView | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- IView
- AFXWINFORMS/IView
- AFXWINFORMS/IView::OnActivateView
- AFXWINFORMS/IView::OnInitialUpdate
- AFXWINFORMS/IView::OnUpdate
dev_langs:
- C++
helpviewer_keywords:
- views [MFC]
- IView class [MFC]
- views [MFC], classes
ms.assetid: 9321f299-486e-4551-bee9-d2c4a7b91548
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: acf1ba02e9bbf6afd14e41be7dda406d257cb681
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37339761"
---
# <a name="iview-interface"></a>Interfaccia IView
Implementa diversi metodi che [CWinFormsView](../../mfc/reference/cwinformsview-class.md) utilizza per inviare notifiche di visualizzazione a un controllo gestito.  
  
## <a name="syntax"></a>Sintassi  
  
```  
interface class IView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IView::OnActivateView](#onactivateview)|Chiamato da MFC quando una visualizzazione viene attivata o disattivata.|  
|[IView::OnInitialUpdate](#oninitialupdate)|Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima la visualizzazione iniziale.|  
|[IView::OnUpdate](#onupdate)|Chiamato da MFC dopo che il documento della vista è stato modificato. Questa funzione consente la visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.|  
  
## <a name="remarks"></a>Note  
 `IView` implementa diversi metodi che `CWinFormsView` Usa per inoltrare comune visualizzare le notifiche a un controllo ospitato gestito. Si tratta [OnInitialUpdate](#oninitialupdate), [OnUpdate](#onupdate) e [OnActivateView](#onactivateview).  
  
 `IView` è simile a [CView](../../mfc/reference/cview-class.md), ma viene usato solo con le visualizzazioni gestite e i controlli.  
  
 Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  

## <a name="requirements"></a>Requisiti  
 Intestazione: afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  

## <a name="onactivateview"></a> IView::OnActivateView  
Chiamato da MFC quando una visualizzazione viene attivata o disattivata.
```
void OnActivateView(bool activate);
```
## <a name="parameters"></a>Parametri
*attivare*  
Indica se la visualizzazione viene attivata o disattivata.  

## <a name="oninitialupdate"></a> IView::OnInitialUpdate
Chiamato dal framework dopo la visualizzazione prima di tutto è collegata al documento, ma prima la visualizzazione iniziale.
```
void OnInitialUpdate();
```

## <a name="onupdate"></a> IView::OnUpdate 
Chiamato da MFC dopo che il documento della visualizzazione è stato modificato.  
```
void OnUpdate();
```
## <a name="remarks"></a>Note  
Questa funzione consente la visualizzazione di aggiornare la relativa visualizzazione in modo da riflettere le modifiche.

## <a name="see-also"></a>Vedere anche  
 [Classe CWinFormsView](../../mfc/reference/cwinformsview-class.md)   
 [Classe CView](../../mfc/reference/cview-class.md)
