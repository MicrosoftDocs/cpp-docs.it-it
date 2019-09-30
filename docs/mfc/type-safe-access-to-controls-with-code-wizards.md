---
title: Accesso indipendente dai tipi a controlli con creazioni guidate codice
ms.date: 11/04/2016
helpviewer_keywords:
- DDX (dialog data exchange), access to controls
- code wizards
- dialog boxes [MFC], access to controls
- dialog box controls [MFC], accessing
ms.assetid: b8874393-ee48-4124-8d78-e3648a7e29b9
ms.openlocfilehash: fefa722209d37e2612201c4471e5764f9d71f27a
ms.sourcegitcommit: 1e6386be9084f70def7b3b8b4bab319a117102b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/30/2019
ms.locfileid: "71685041"
---
# <a name="type-safe-access-to-controls-with-code-wizards"></a>Accesso indipendente dai tipi a controlli con creazioni guidate codice

Se si ha familiarità con le funzionalità DDX, è possibile usare la proprietà Control nella [procedura guidata Aggiungi variabile membro](../ide/add-member-variable-wizard.md) per creare l'accesso indipendente dai tipi. Questo approccio è più semplice rispetto alla creazione di controlli senza creazioni guidate codice.

Se si desidera semplicemente accedere al valore di un controllo, DDX lo fornisce. Se si desidera eseguire altre operazioni oltre ad accedere al valore di un controllo, utilizzare la procedura guidata Aggiungi variabile membro per aggiungere una variabile membro della classe appropriata alla classe della finestra di dialogo. Alleghi questa variabile membro alla proprietà del controllo.

Le variabili membro possono avere una proprietà del controllo anziché una proprietà del valore. La proprietà Value si riferisce al tipo di dati restituiti dal controllo, ad esempio `CString` o **int**. La proprietà Control consente l'accesso diretto al controllo tramite un membro dati il cui tipo è una delle classi di controlli in MFC, ad esempio `CButton` o `CEdit`.

> [!NOTE]
>  Per un determinato controllo, è possibile, se si desidera, avere più variabili membro con la proprietà Value e al massimo una variabile membro con la proprietà del controllo. È possibile eseguire il mapping di un solo oggetto MFC a un controllo perché più oggetti collegati a un controllo o a qualsiasi altra finestra potrebbero causare ambiguità nella mappa messaggi.

È possibile utilizzare questo oggetto per chiamare qualsiasi funzione membro per l'oggetto controllo. Tali chiamate influiscono sul controllo nella finestra di dialogo. Ad esempio, per un controllo casella di controllo rappresentato da una variabile *m_Checkbox*, di tipo `CButton`, è possibile chiamare:

[!code-cpp[NVC_MFCControlLadenDialog#52](../mfc/codesnippet/cpp/type-safe-access-to-controls-with-code-wizards_1.cpp)]

In questo caso la variabile membro *m_Checkbox* svolge lo stesso scopo della funzione membro `GetMyCheckbox` illustrato in [accesso indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md). Se la casella di controllo non è una casella di controllo automatica, è comunque necessario un gestore nella classe della finestra di dialogo per il messaggio di notifica del controllo BN_CLICKED quando si fa clic sul pulsante.

Per ulteriori informazioni sui controlli, vedere [controlli](../mfc/controls-mfc.md).

## <a name="see-also"></a>Vedere anche

[Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Accesso indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)
