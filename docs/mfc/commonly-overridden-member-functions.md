---
title: Funzioni membro comunemente sottoposte a override
ms.date: 11/04/2016
helpviewer_keywords:
- CDialog class [MFC], members
- OnInitDialog function
- dialog classes [MFC], commonly overridden member functions
- OnCancel function
- overriding, dialog class members
- OnOK function
- MFC dialog boxes [MFC], overriding member functions
ms.assetid: 78eb566c-e361-4c86-8db5-c7e2791b249a
ms.openlocfilehash: 26a1527dbdac4b2a9deb57fb13481f8d2f9cb5b7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62152030"
---
# <a name="commonly-overridden-member-functions"></a>Funzioni membro comunemente sottoposte a override

Nella tabella seguente sono elencati più probabile di funzioni membro per eseguire l'override nel `CDialog`-classe derivata.

### <a name="commonly-overridden-member-functions-of-class-cdialog"></a>Comunemente sottoposte a override dalle funzioni membro di classe CDialog

|Funzione membro|Messaggio che risponda alle|Scopo dell'override|
|---------------------|----------------------------|-----------------------------|
|`OnInitDialog`|**WM_INITDIALOG**|Inizializzare i controlli della finestra di dialogo.|
|`OnOK`|**BN_CLICKED** pulsante **IDOK**|Risponde quando l'utente fa clic sul pulsante OK.|
|`OnCancel`|**BN_CLICKED** pulsante **IDCANCEL**|Risponde quando l'utente fa clic sul pulsante Annulla.|

`OnInitDialog`, `OnOK`, e `OnCancel` sono funzioni virtuali. Per eseguirne l'override, si dichiara una funzione di override nella classe di finestre di dialogo derivata usando il [finestra proprietà](/visualstudio/ide/reference/properties-window).

`OnInitDialog` viene chiamato appena prima che venga visualizzata nella finestra di dialogo. È necessario chiamare il valore predefinito `OnInitDialog` gestore dall'override, in genere come la prima azione nel gestore. Per impostazione predefinita `OnInitDialog` restituisce **TRUE** per indicare che lo stato attivo deve essere impostato sul primo controllo nella finestra di dialogo.

`OnOK` in genere l'override per le finestre di dialogo non modale, ma non modale. Se si esegue l'override di questo gestore per una finestra di dialogo modale, chiamare la versione della classe base da override, ovvero per assicurarsi che `EndDialog` viene chiamato, o chiamare `EndDialog` manualmente.

`OnCancel` in genere viene ignorato per le finestre di dialogo non modale.

Per altre informazioni su queste funzioni membro, vedere la classe [CDialog](../mfc/reference/cdialog-class.md) nel *riferimento MFC* e nella discussione sulla [ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md).

## <a name="see-also"></a>Vedere anche

[Finestre di dialogo](../mfc/dialog-boxes.md)<br/>
[Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)
