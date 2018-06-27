---
title: Accesso indipendente dai tipi a controlli con creazioni guidate codice | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- DDX (dialog data exchange), access to controls
- code wizards
- dialog boxes [MFC], access to controls
- dialog box controls [MFC], accessing
ms.assetid: b8874393-ee48-4124-8d78-e3648a7e29b9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 88f86a8f22bae990261be5150755a26d50d4bef8
ms.sourcegitcommit: c6b095c5f3de7533fd535d679bfee0503e5a1d91
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/26/2018
ms.locfileid: "36950461"
---
# <a name="type-safe-access-to-controls-with-code-wizards"></a>Accesso indipendente dai tipi a controlli con creazioni guidate codice
Se si ha familiarità con le funzionalità DDX, è possibile utilizzare la proprietà del controllo nel [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per creare l'accesso indipendente dai tipi. Questo approccio è più semplice rispetto alla creazione di controlli senza creazioni guidate codice.  
  
 Se si desidera semplicemente accedere al valore di un controllo, DDX fornisce il supporto. Se si desidera accedere più di un valore di controllo, utilizzare l'aggiunta guidata variabile membro per aggiungere una variabile membro della classe appropriata per la classe della finestra. Collegare tale variabile membro per la proprietà del controllo.  
  
 Variabili membro possono avere una proprietà del controllo anziché una proprietà di valore. La proprietà Value fa riferimento al tipo di dati restituiti dal controllo, ad esempio `CString` oppure **int**. La proprietà del controllo consente di accedere direttamente al controllo tramite un membro dati il cui tipo è una delle classi di controllo in MFC, ad esempio `CButton` o `CEdit`.  
  
> [!NOTE]
>  Per un determinato controllo, è possibile, se si desidera, disporre più variabili di membro con la proprietà Value e al massimo una variabile membro con la proprietà del controllo. È possibile avere un solo oggetto MFC mappato a un controllo in quanto più oggetti associati a un controllo o qualsiasi altra finestra, può portare a un'ambiguità nella mappa messaggi.  
  
 È possibile utilizzare questo oggetto per chiamare alcuna funzione membro per l'oggetto controllo. Queste chiamate influisce sul controllo nella finestra di dialogo. Ad esempio, per un controllo casella di controllo rappresentato da una variabile *m_Checkbox*, di tipo `CButton`, è possibile chiamare:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#52](../mfc/codesnippet/cpp/type-safe-access-to-controls-with-code-wizards_1.cpp)]  
  
 Qui la variabile membro *m_Checkbox* svolge lo stesso ruolo come la funzione membro `GetMyCheckbox` racchiusa [indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md). Se la casella di controllo non è una casella di controllo automatico, è comunque necessario un gestore nella classe della finestra per il messaggio di notifica del controllo BN_CLICKED quando si fa clic sul pulsante.  
  
 Per altre informazioni sui controlli, vedere [controlli](../mfc/controls-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Accesso indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)

