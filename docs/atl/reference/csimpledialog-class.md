---
title: Classe CSimpleDialog | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CSimpleDialog
- ATLWIN/ATL::CSimpleDialog
- ATLWIN/ATL::CSimpleDialog::DoModal
dev_langs:
- C++
helpviewer_keywords:
- CSimpleDialog class
- CSimpleDialog class, modal dialog boxes in ATL
- dialog boxes, modal
- modal dialog boxes, ATL
ms.assetid: 2ae65cc9-4f32-4168-aecd-200b4a480fdf
caps.latest.revision: 19
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
ms.sourcegitcommit: 3f91eafaf3b5d5c1b8f96b010206d699f666e224
ms.openlocfilehash: 2448f2fcd0547e2344dde51392873e3276f2bd09
ms.contentlocale: it-it
ms.lasthandoff: 04/01/2017

---
# <a name="csimpledialog-class"></a>CSimpleDialog (classe)
Questa classe implementa una finestra di dialogo modale base.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <WORD t_wDlgTemplateID, BOOL t_bCenter = TRUE>  
class CSimpleDialog : public CDialogImplBase
```  
  
#### <a name="parameters"></a>Parametri  
 *t_wDlgTemplateID*  
  
 L'ID risorsa della risorsa modello di finestra di dialogo.  
  
 *t_bCenter*  
 **TRUE** se l'oggetto finestra di dialogo è centrato nella finestra proprietaria in caso contrario **FALSE**.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleDialog::DoModal](#domodal)|Crea una finestra di dialogo modale.|  
  
## <a name="remarks"></a>Note  
 Implementa una finestra di dialogo modale con funzionalità di base. `CSimpleDialog`fornisce supporto per controlli comuni di Windows solo. Per creare e visualizzare una finestra di dialogo modale, creare un'istanza di questa classe, specificando il nome di un modello di risorsa esistente per la finestra di dialogo. L'oggetto finestra di dialogo si chiude quando l'utente fa clic su qualsiasi controllo con un valore predefinito (ad esempio IDOK o IDCANCEL).  
  
 `CSimpleDialog`Consente di creare solo le finestre di dialogo modale. `CSimpleDialog`fornisce la routine della finestra di dialogo, che utilizza la mappa messaggi predefinita per indirizzare i messaggi per i gestori appropriati.  
  
 Vedere [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per ulteriori informazioni.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDialogImplBase`  
  
 `CSimpleDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="domodal"></a>CSimpleDialog::DoModal  
 Richiama una finestra di dialogo modale e restituisce il risultato della finestra di dialogo al termine.  
  
```
INT_PTR DoModal(HWND hWndParent = ::GetActiveWindow());
```  
  
### <a name="parameters"></a>Parametri  
 `hWndParent`  
 Handle per l'elemento padre della finestra di dialogo. Se non viene fornito alcun valore, l'elemento padre è impostato per la finestra attiva corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il valore restituito è l'ID di risorsa del controllo che chiusa la finestra di dialogo.  
  
 Se la funzione ha esito negativo, il valore restituito è -1. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 Questo metodo gestisce tutte le interazioni con l'utente, mentre è attiva la finestra di dialogo. Questo è ciò che rende la finestra di dialogo modale; ovvero, l'utente non può interagire con altre finestre fino a quando non viene chiusa la finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

