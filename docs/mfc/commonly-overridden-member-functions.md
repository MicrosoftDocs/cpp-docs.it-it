---
title: Funzioni membro comunemente sottoposte a override
ms.date: 09/06/2019
helpviewer_keywords:
- CDialog class [MFC], members
- OnInitDialog function
- dialog classes [MFC], commonly overridden member functions
- OnCancel function
- overriding, dialog class members
- OnOK function
- MFC dialog boxes [MFC], overriding member functions
ms.assetid: 78eb566c-e361-4c86-8db5-c7e2791b249a
ms.openlocfilehash: f63dd6079b96181305f3207d4a1ef823df8d8ba4
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907695"
---
# <a name="commonly-overridden-member-functions"></a>Funzioni membro comunemente sottoposte a override

La tabella seguente elenca le funzioni membro più probabili per eseguire l'override `CDialog`nella classe derivata da.

### <a name="commonly-overridden-member-functions-of-class-cdialog"></a>Funzioni membro comunemente sottoposte a override della classe CDialog

|Funzione membro|Messaggio a cui risponde|Scopo dell'override|
|---------------------|----------------------------|-----------------------------|
|`OnInitDialog`|**WM_INITDIALOG**|Inizializzare i controlli della finestra di dialogo.|
|`OnOK`|**BN_CLICKED** per il pulsante **IDOK**|Rispondere quando l'utente fa clic sul pulsante OK.|
|`OnCancel`|**BN_CLICKED** per il pulsante **IDCANCEL**|Rispondere quando l'utente fa clic sul pulsante Annulla.|

`OnInitDialog`, `OnOK` e`OnCancel` sono funzioni virtuali. Per eseguire l'override, dichiarare una funzione di override nella classe della finestra di dialogo derivata utilizzando la [creazione guidata classe MFC](reference/mfc-class-wizard.md).

`OnInitDialog`viene chiamato immediatamente prima della visualizzazione della finestra di dialogo. È necessario chiamare il gestore `OnInitDialog` predefinito dall'override, in genere come prima azione nel gestore. Per impostazione predefinita `OnInitDialog` , restituisce **true** per indicare che lo stato attivo deve essere impostato sul primo controllo nella finestra di dialogo.

`OnOK`viene in genere sottoposto a override per le finestre di dialogo non modali e non modali. Se si esegue l'override di questo gestore per una finestra di dialogo modale, chiamare la versione della classe base dall'override `EndDialog` , per assicurarsi che venga `EndDialog` chiamato, o chiamare manualmente.

`OnCancel`viene in genere sottoposto a override per le finestre di dialogo non modali.

Per ulteriori informazioni su queste funzioni membro, vedere la classe [CDialog](../mfc/reference/cdialog-class.md) nei *riferimenti a MFC* e la descrizione del [ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md).

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)
