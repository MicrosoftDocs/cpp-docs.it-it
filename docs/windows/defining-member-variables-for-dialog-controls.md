---
title: Definizione di variabili membro per i controlli di finestra (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- member variables, defining for controls
- variables, dialog box control member variables
- controls [C++], member variables
- Dialog Editor [C++], defining member variables for controls
ms.assetid: 84347c63-c33c-4b04-91f5-6d008c45ba58
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: fa4d894fb3fc436abab84bfee11199f59bd66f78
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46402395"
---
# <a name="defining-member-variables-for-dialog-controls-c"></a>Definizione di variabili membro per i controlli di finestra (C++)

Per definire una variabile membro per qualsiasi controllo della finestra di dialogo ad eccezione dei pulsanti, è possibile usare il metodo seguente.

> [!NOTE]
> Questo articolo è valido solo per i controlli di finestra di dialogo in un progetto MFC. I progetti ATL devono usare la **nuovi messaggi di Windows e i gestori eventi** nella finestra di dialogo.

### <a name="to-define-a-member-variable-for-a-non-button-dialog-box-control"></a>Per definire una variabile membro per il controllo di una finestra di dialogo (non pulsante)

1. Nel [editor finestre](../windows/dialog-editor.md), selezionare un controllo.

2. Mentre si tiene premuto il **Ctrl** della chiave, fare doppio clic sul controllo finestra di dialogo.

   Il [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) viene visualizzata.

3. Digitare le informazioni appropriate nella **Aggiunta guidata variabile membro** procedura guidata. Per altre informazioni, vedere [Dialog Data Exchange](../mfc/dialog-data-exchange.md).

4. Fare clic su **OK** da restituire per il **dialogo** editor.

   > [!TIP]
   > Per passare da un controllo della finestra di dialogo al gestore esistente, fare doppio clic sul controllo.

È anche possibile usare la **variabili di membro** scheda **Creazione guidata classe MFC** per aggiungere nuove variabili membro per una classe specificata e visualizzare quelle che sono già stati definiti.

## <a name="requirements"></a>Requisiti

MFC

## <a name="see-also"></a>Vedere anche

[Mapping di messaggi a funzioni](../mfc/reference/mapping-messages-to-functions.md)<br/>
[Aggiunta di funzionalità con creazioni guidate codice](../ide/adding-functionality-with-code-wizards-cpp.md)<br/>
[Creazione guidata classe MFC](../mfc/reference/mfc-class-wizard.md)<br/>
[Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)<br/>
[Aggiunta di una funzione membro](../ide/adding-a-member-function-visual-cpp.md)<br/>
[Aggiunta di una variabile membro](../ide/adding-a-member-variable-visual-cpp.md)<br/>
[Una funzione Virtual in override](../ide/overriding-a-virtual-function-visual-cpp.md)<br/>
[Gestore messaggi MFC](../mfc/reference/adding-an-mfc-message-handler.md)