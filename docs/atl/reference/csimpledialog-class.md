---
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
ms.openlocfilehash: 345372d71ad96a74bb0ae6dd7e89bdf0724cd822
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330827"
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

ID risorsa della risorsa modello di finestra di dialogo.

*t_bCenter*<br/>
TRUESe l'oggetto finestra di dialogo deve essere centrato nella finestra proprietaria; in caso contrario, FALSE.

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CSimpleDialog::DoModal](#domodal)|Crea una finestra di dialogo modale.|

## <a name="remarks"></a>Osservazioni

Implementa una finestra di dialogo modale con funzionalità di base. `CSimpleDialog`fornisce supporto solo per i controlli comuni di Windows. Per creare e visualizzare una finestra di dialogo modale, creare un'istanza di questa classe, specificando il nome di un modello di risorsa esistente per la finestra di dialogo. L'oggetto finestra di dialogo viene chiuso quando l'utente fa clic su un controllo con un valore predefinito ( ad esempio IDOK o IDCANCEL).

`CSimpleDialog`consente di creare solo finestre di dialogo modali. `CSimpleDialog`fornisce la procedura della finestra di dialogo, che utilizza la mappa messaggi predefinita per indirizzare i messaggi ai gestori appropriati.

Per ulteriori informazioni, vedere Implementazione di [una finestra di dialogo.](../../atl/implementing-a-dialog-box.md)

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CDialogImplBase`

`CSimpleDialog`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="csimpledialogdomodal"></a><a name="domodal"></a>CSimpleDialog::DoModal

Richiama una finestra di dialogo modale e restituisce il risultato della finestra di dialogo al termine dell'operazione.

```
INT_PTR DoModal(HWND hWndParent = ::GetActiveWindow());
```

### <a name="parameters"></a>Parametri

*hWndPadre*<br/>
Handle per l'elemento padre della finestra di dialogo. Se non viene fornito alcun valore, l'elemento padre viene impostato sulla finestra attiva corrente.

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, il valore restituito è l'ID di risorsa del controllo che ha chiuso la finestra di dialogo.

Se la funzione ha esito negativo, il valore restituito è -1. Per ottenere informazioni estese sull'errore, chiamare `GetLastError`.

### <a name="remarks"></a>Osservazioni

Questo metodo gestisce tutte le interazioni con l'utente mentre la finestra di dialogo è attiva. Questo è ciò che rende la finestra di dialogo modale; ovvero, l'utente non può interagire con altre finestre fino a quando la finestra di dialogo non viene chiusa.

## <a name="see-also"></a>Vedere anche

[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
