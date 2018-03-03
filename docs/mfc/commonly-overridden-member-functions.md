---
title: Funzioni membro comunemente sottoposte a override | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CDialog class [MFC], members
- OnInitDialog function
- dialog classes [MFC], commonly overridden member functions
- OnCancel function
- overriding, dialog class members
- OnOK function
- MFC dialog boxes [MFC], overriding member functions
ms.assetid: 78eb566c-e361-4c86-8db5-c7e2791b249a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5aa3fb072ca882b03b9da96d54cdefbba5e59a68
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="commonly-overridden-member-functions"></a>Funzioni membro comunemente sottoposte a override
Nella tabella seguente sono elencati più probabile di funzioni membro per eseguire l'override nel `CDialog`-classe derivata.  
  
### <a name="commonly-overridden-member-functions-of-class-cdialog"></a>Funzioni membro di classe CDialog comunemente sottoposte a override  
  
|Funzione membro|Messaggio che risponda alle|Scopo dell'override|  
|---------------------|----------------------------|-----------------------------|  
|`OnInitDialog`|**WM_INITDIALOG**|Inizializzare i controlli della finestra di dialogo.|  
|`OnOK`|**BN_CLICKED** per pulsante **IDOK**|Risponde quando l'utente fa clic sul pulsante OK.|  
|`OnCancel`|**BN_CLICKED** per pulsante **IDCANCEL**|Risponde quando l'utente fa clic sul pulsante Annulla.|  
  
 `OnInitDialog`, `OnOK`, e `OnCancel` sono funzioni virtuali. Per eseguirne l'override, si dichiara una funzione di override in una classe finestra di dialogo derivata utilizzando il [finestra proprietà](/visualstudio/ide/reference/properties-window).  
  
 `OnInitDialog`viene chiamato appena prima viene visualizzata la finestra di dialogo. È necessario chiamare il valore predefinito `OnInitDialog` gestore override, in genere come la prima azione nel gestore. Per impostazione predefinita, `OnInitDialog` restituisce **TRUE** per indicare che lo stato attivo deve essere impostato sul primo controllo nella finestra di dialogo.  
  
 `OnOK`in genere l'override per le finestre di dialogo non modale, ma non modale. Se si esegue l'override di questo gestore per una finestra di dialogo modale, chiamare la versione della classe base dalla sostituzione, per garantire che `EndDialog` viene chiamato, o chiamare `EndDialog` manualmente.  
  
 `OnCancel`è in genere viene sottoposto a override per le finestre di dialogo non modale.  
  
 Per ulteriori informazioni su queste funzioni membro, vedere la classe [CDialog](../mfc/reference/cdialog-class.md) nel *riferimenti alla libreria MFC* e la discussione su [ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Finestre di dialogo](../mfc/dialog-boxes.md)   
 [Funzioni membro comunemente aggiunte](../mfc/commonly-added-member-functions.md)
