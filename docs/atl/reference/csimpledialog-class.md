---
title: Classe CSimpleDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Machine Translation
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: a4c17a1da8d1be00ebff171af09bc6c8eb81ed44
ms.lasthandoff: 02/24/2017

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
  
 L'ID risorsa della risorsa di modello di finestra di dialogo.  
  
 *t_bCenter*  
 **TRUE** se l'oggetto finestra di dialogo è centrato nella finestra proprietaria in caso contrario **FALSE**.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleDialog::DoModal](#domodal)|Crea una finestra di dialogo modale.|  
  
## <a name="remarks"></a>Note  
 Implementa una finestra di dialogo modale con funzionalità di base. `CSimpleDialog`fornisce supporto per controlli comuni di Windows solo. Per creare e visualizzare una finestra di dialogo modale, creare un'istanza di questa classe, specificando il nome di un modello di risorse esistente per la finestra di dialogo. L'oggetto finestra di dialogo si chiude quando l'utente fa clic su qualsiasi controllo con un valore predefinito (ad esempio IDOK o IDCANCEL).  
  
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
 Handle per l'elemento padre della finestra di dialogo. Se viene fornito alcun valore, il padre è impostata per la finestra attiva corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, il valore restituito è l'ID di risorsa del controllo chiuso la finestra di dialogo.  
  
 In caso contrario, il valore restituito è -1. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 Questo metodo gestisce l'interazione con l'utente mentre è attiva la finestra di dialogo. Questo è ciò che rende la finestra di dialogo modale; ovvero, l'utente non può interagire con altre finestre fino a quando non viene chiusa la finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

