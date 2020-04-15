---
title: Accesso indipendente dai tipi a controlli con creazioni guidate codice
ms.date: 11/04/2016
helpviewer_keywords:
- DDX (dialog data exchange), access to controls
- code wizards
- dialog boxes [MFC], access to controls
- dialog box controls [MFC], accessing
ms.assetid: b8874393-ee48-4124-8d78-e3648a7e29b9
ms.openlocfilehash: b49c1b6f21dfe5270e40649241812320303ad411
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370909"
---
# <a name="type-safe-access-to-controls-with-code-wizards"></a>Accesso indipendente dai tipi a controlli con creazioni guidate codice

Se si ha familiarità con le funzionalità DDX, è possibile utilizzare la proprietà Control [nell'Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per creare un accesso indipendente dai tipi. Questo approccio è più semplice rispetto alla creazione di controlli senza creazioni guidate codice.

Se si desidera semplicemente l'accesso al valore di un controllo, DDX fornisce. Se si desidera eseguire altre informazioni sull'accesso al valore di un controllo, utilizzare l'Aggiunta guidata variabile membro per aggiungere una variabile membro della classe appropriata alla classe della finestra di dialogo. Associare questa variabile membro per il Control proprietà.

Le variabili membro possono avere una proprietà Control anziché una proprietà Value. La proprietà Value fa riferimento al tipo di dati `CString` restituiti dal controllo, ad esempio o **int**. Il Control proprietà consente l'accesso diretto al controllo tramite un membro dati `CButton` `CEdit`il cui tipo è una delle classi di controllo in MFC, ad esempio o .

> [!NOTE]
> Per un determinato controllo, è possibile, se lo si desidera, avere più variabili membro con il Value proprietà e al massimo una variabile membro con il Control proprietà. È possibile avere un solo oggetto MFC mappato a un controllo perché più oggetti associati a un controllo o a qualsiasi altra finestra porterebbero a un'ambiguità nella mappa messaggi.

È possibile utilizzare questo oggetto per chiamare qualsiasi funzione membro per l'oggetto controllo. Tali chiamate influiscono sul controllo nella finestra di dialogo. Ad esempio, per un controllo casella *m_Checkbox*di controllo `CButton`rappresentato da una variabile m_Checkbox , di tipo , è possibile chiamare:

[!code-cpp[NVC_MFCControlLadenDialog#52](../mfc/codesnippet/cpp/type-safe-access-to-controls-with-code-wizards_1.cpp)]

In questo *m_Checkbox* caso la variabile membro m_Checkbox `GetMyCheckbox` ha lo stesso scopo della funzione membro illustrata in Accesso sicuro dei tipi [ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md). Se la casella di controllo non è una casella di controllo automatica, è comunque necessario un gestore nella classe della finestra di dialogo per il BN_CLICKED messaggio di notifica del controllo quando si fa clic sul pulsante.

Per ulteriori informazioni sui controlli, vedere [Controlli](../mfc/controls-mfc.md).

## <a name="see-also"></a>Vedere anche

[Accesso sicuro per i tipi ai controlli in una finestra di dialogoType-Safe Access to Controls in a Dialog Box](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)<br/>
[Utilizzo delle finestre di dialogo in MFC](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Accesso indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)
