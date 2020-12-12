---
description: 'Altre informazioni su: classe CSimpleDialog'
title: Classe CSimpleDialog
ms.date: 11/04/2016
f1_keywords:
- CSimpleDialog
- ATLWIN/ATL::CSimpleDialog
- ATLWIN/ATL::CSimpleDialog::DoModal
helpviewer_keywords:
- CSimpleDialog class
- CSimpleDialog class, modal dialog boxes in ATL
- dialog boxes, modal
- modal dialog boxes, ATL
ms.assetid: 2ae65cc9-4f32-4168-aecd-200b4a480fdf
ms.openlocfilehash: 50889c4387515c85cd3c6e53bf12e7c0494504ed
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97140647"
---
# <a name="csimpledialog-class"></a>Classe CSimpleDialog

Questa classe implementa una finestra di dialogo modale di base.

## <a name="syntax"></a>Sintassi

```
template <WORD t_wDlgTemplateID, BOOL t_bCenter = TRUE>
class CSimpleDialog : public CDialogImplBase
```

#### <a name="parameters"></a>Parametri

*t_wDlgTemplateID*

ID risorsa della risorsa del modello di finestra di dialogo.

*t_bCenter*<br/>
TRUE se l'oggetto finestra di dialogo deve essere centrato sulla finestra del proprietario; in caso contrario, FALSE.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CSimpleDialog::D oModal](#domodal)|Crea una finestra di dialogo modale.|

## <a name="remarks"></a>Commenti

Implementa una finestra di dialogo modale con funzionalità di base. `CSimpleDialog` fornisce il supporto solo per i controlli comuni di Windows. Per creare e visualizzare una finestra di dialogo modale, creare un'istanza di questa classe, specificando il nome di un modello di risorsa esistente per la finestra di dialogo. L'oggetto finestra di dialogo si chiude quando l'utente fa clic su un controllo con un valore predefinito, ad esempio IDOK o IDCANCEL.

`CSimpleDialog` consente di creare solo finestre di dialogo modali. `CSimpleDialog` fornisce la routine della finestra di dialogo che utilizza la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

Per ulteriori informazioni, vedere [implementazione di una](../../atl/implementing-a-dialog-box.md) finestra di dialogo.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDialogImplBase`

`CSimpleDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="csimpledialogdomodal"></a><a name="domodal"></a> CSimpleDialog::D oModal

Richiama una finestra di dialogo modale e restituisce il risultato della finestra di dialogo al termine dell'operazione.

```
INT_PTR DoModal(HWND hWndParent = ::GetActiveWindow());
```

### <a name="parameters"></a>Parametri

*hWndParent*<br/>
Handle per l'elemento padre della finestra di dialogo. Se non viene specificato alcun valore, l'elemento padre viene impostato sulla finestra attiva corrente.

### <a name="return-value"></a>Valore restituito

In caso di esito positivo, il valore restituito è l'ID risorsa del controllo che ha eliminato la finestra di dialogo.

Se la funzione ha esito negativo, il valore restituito è-1. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Commenti

Questo metodo gestisce tutte le interazioni con l'utente mentre la finestra di dialogo è attiva. Questa operazione rende la finestra di dialogo modale. ovvero, l'utente non può interagire con altre finestre finché la finestra di dialogo non viene chiusa.

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
