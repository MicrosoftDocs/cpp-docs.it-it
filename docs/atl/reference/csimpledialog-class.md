---
title: Classe CSimpleDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b0c713781ff6c780e63fdf19545f83bf693a081b
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37881659"
---
# <a name="csimpledialog-class"></a>Classe CSimpleDialog
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
 TRUE se l'oggetto finestra di dialogo al centro la finestra del proprietario. in caso contrario, FALSE.  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleDialog::DoModal](#domodal)|Crea una finestra di dialogo modale.|  
  
## <a name="remarks"></a>Note  
 Implementa una finestra di dialogo modale con funzionalità di base. `CSimpleDialog` fornisce supporto per controlli comuni di Windows solo. Per creare e visualizzare una finestra di dialogo modale, creare un'istanza di questa classe, fornendo il nome di un modello di risorse esistente per la finestra di dialogo. L'oggetto finestra di dialogo si chiude quando l'utente fa clic su qualsiasi controllo e il valore predefinito (ad esempio, IDOK o IDCANCEL).  
  
 `CSimpleDialog` Consente di creare solo le finestre di dialogo modale. `CSimpleDialog` fornisce la routine di finestra di dialogo, che usa la mappa dei messaggi predefinita per indirizzare i messaggi ai gestori appropriati.  
  
 Visualizzare [implementazione di una finestra di dialogo](../../atl/implementing-a-dialog-box.md) per altre informazioni.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CDialogImplBase`  
  
 `CSimpleDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="domodal"></a>  CSimpleDialog::DoModal  
 Richiama una finestra di dialogo modale e restituisce il risultato della finestra di dialogo al termine.  
  
```
INT_PTR DoModal(HWND hWndParent = ::GetActiveWindow());
```  
  
### <a name="parameters"></a>Parametri  
 *hWndParent*  
 Handle per l'elemento padre della finestra di dialogo. Se viene specificato alcun valore, l'elemento padre è impostato per la finestra attiva corrente.  
  
### <a name="return-value"></a>Valore restituito  
 Se l'operazione riesce, il valore restituito è l'ID risorsa del controllo che è stata chiusa la finestra di dialogo.  
  
 Se la funzione ha esito negativo, il valore restituito è -1. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.  
  
### <a name="remarks"></a>Note  
 Questo metodo gestisce l'interazione con l'utente mentre è attiva la finestra di dialogo. Questo è ciò che rende la finestra di dialogo modale; vale a dire, l'utente non è possibile interagire con altre finestre fino a quando non viene chiusa la finestra di dialogo.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)
