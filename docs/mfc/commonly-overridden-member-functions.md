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
ms.openlocfilehash: 7d4fc9005ff368ef6a83252e8cf0b2005ecf2cef
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619661"
---
# <a name="commonly-overridden-member-functions"></a>Funzioni membro comunemente sottoposte a override

La tabella seguente elenca le funzioni membro più probabili per eseguire l'override nella `CDialog` classe derivata da.

### <a name="commonly-overridden-member-functions-of-class-cdialog"></a>Funzioni membro comunemente sottoposte a override della classe CDialog

|Funzione membro|Messaggio a cui risponde|Scopo dell'override|
|---------------------|----------------------------|-----------------------------|
|`OnInitDialog`|**WM_INITDIALOG**|Inizializzare i controlli della finestra di dialogo.|
|`OnOK`|**BN_CLICKED** per il pulsante **IDOK**|Rispondere quando l'utente fa clic sul pulsante OK.|
|`OnCancel`|**BN_CLICKED** per il pulsante **IDCANCEL**|Rispondere quando l'utente fa clic sul pulsante Annulla.|

`OnInitDialog`, `OnOK` e `OnCancel` sono funzioni virtuali. Per eseguire l'override, dichiarare una funzione di override nella classe della finestra di dialogo derivata utilizzando la [creazione guidata classe MFC](reference/mfc-class-wizard.md).

`OnInitDialog`viene chiamato immediatamente prima della visualizzazione della finestra di dialogo. È necessario chiamare il `OnInitDialog` gestore predefinito dall'override, in genere come prima azione nel gestore. Per impostazione predefinita, `OnInitDialog` restituisce **true** per indicare che lo stato attivo deve essere impostato sul primo controllo nella finestra di dialogo.

`OnOK`viene in genere sottoposto a override per le finestre di dialogo non modali e non modali. Se si esegue l'override di questo gestore per una finestra di dialogo modale, chiamare la versione della classe base dall'override, per assicurarsi che `EndDialog` venga chiamato, o chiamare `EndDialog` manualmente.

`OnCancel`viene in genere sottoposto a override per le finestre di dialogo non modali.

Per ulteriori informazioni su queste funzioni membro, vedere la classe [CDialog](reference/cdialog-class.md) nei *riferimenti a MFC* e la discussione sull'utilizzo delle [finestre di dialogo in MFC](life-cycle-of-a-dialog-box.md).

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](dialog-boxes.md)<br/>
[Funzioni membro comunemente aggiunte](commonly-added-member-functions.md)
