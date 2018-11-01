---
title: Accesso indipendente dai tipi a controlli con creazioni guidate codice
ms.date: 11/04/2016
helpviewer_keywords:
- DDX (dialog data exchange), access to controls
- code wizards
- dialog boxes [MFC], access to controls
- dialog box controls [MFC], accessing
ms.assetid: b8874393-ee48-4124-8d78-e3648a7e29b9
ms.openlocfilehash: 5f0bf03adff83ef25f3537291516368151a31a03
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50436288"
---
# <a name="type-safe-access-to-controls-with-code-wizards"></a>Accesso indipendente dai tipi a controlli con creazioni guidate codice

Se si ha familiarità con le funzionalità DDX, è possibile usare la proprietà del controllo nel [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per creare l'accesso indipendente dai tipi. Questo approccio è più semplice rispetto alla creazione di controlli senza creazioni guidate codice.

Se si vuole semplicemente accedere al valore di un controllo, DDX lo fornisce. Se si desidera accedere più di un valore del controllo, usare Aggiunta guidata variabile membro per aggiungere una variabile membro della classe appropriata per la classe della finestra. Collegare tale variabile membro alla proprietà del controllo.

Le variabili membro possono avere una proprietà del controllo anziché un valore di proprietà. La proprietà valore fa riferimento al tipo di dati restituiti dal controllo, ad esempio `CString` oppure **int**. La proprietà di controllo consente l'accesso diretto al controllo tramite un membro dati il cui tipo è una delle classi di controllo in MFC, ad esempio `CButton` o `CEdit`.

> [!NOTE]
>  Per un determinato controllo, è possibile, se si desidera, avere più variabili membro con la proprietà di valore e al massimo una variabile membro con la proprietà del controllo. È possibile avere un solo oggetto MFC mappato a un controllo in quanto più oggetti associati a un controllo o qualsiasi altra finestra, potrebbe causare ambiguità nella mappa messaggi.

È possibile utilizzare questa oggetto da chiamare alcuna funzione membro per l'oggetto di controllo. Queste chiamate influisce sul controllo nella finestra di dialogo. Ad esempio, per un controllo casella di controllo rappresentato da una variabile *m_Checkbox*, di tipo `CButton`, è possibile chiamare:

[!code-cpp[NVC_MFCControlLadenDialog#52](../mfc/codesnippet/cpp/type-safe-access-to-controls-with-code-wizards_1.cpp)]

Qui la variabile membro *m_Checkbox* svolge la stessa funzione della funzione membro `GetMyCheckbox` illustrato [indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md). Se la casella di controllo non è una casella di controllo automatico, è comunque necessario un gestore nella classe della finestra per il messaggio di notifica del controllo BN_CLICKED quando si fa clic sul pulsante.

Per altre informazioni sui controlli, vedere [controlli](../mfc/controls-mfc.md).

## <a name="see-also"></a>Vedere anche

[Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)<br/>
[Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)<br/>
[Accesso indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)

