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
ms.openlocfilehash: 025fd280dc6bf0947dae59cf77abe141bc312df8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385193"
---
# <a name="type-safe-access-to-controls-with-code-wizards"></a>Accesso indipendente dai tipi a controlli con creazioni guidate codice
Se si ha familiarità con le funzionalità DDX, è possibile utilizzare la proprietà del controllo nel [Aggiunta guidata variabile membro](../ide/add-member-variable-wizard.md) per creare l'accesso indipendente dai tipi. Questo approccio è più semplice rispetto alla creazione di controlli senza creazioni guidate codice.  
  
 Se si desidera semplicemente accedere al valore di un controllo, viene fornito da DDX. Se si desidera accedere più di un valore di controllo, utilizzare l'aggiunta guidata variabile membro per aggiungere una variabile membro della classe appropriata per la classe della finestra. Collegare tale variabile membro per la proprietà del controllo.  
  
 Variabili membro possono avere una proprietà del controllo anziché una proprietà di valore. La proprietà Value fa riferimento al tipo di dati restituiti dal controllo, ad esempio `CString` o `int`. La proprietà del controllo consente di accedere direttamente al controllo tramite un membro dati il cui tipo è una delle classi di controllo in MFC, ad esempio `CButton` o `CEdit`.  
  
> [!NOTE]
>  Per un determinato controllo, è possibile, se si desidera, disporre più variabili membro con la proprietà di valore e al massimo una variabile membro con la proprietà del controllo. È possibile avere un solo oggetto MFC mappato a un controllo in quanto più oggetti associati a un controllo o qualsiasi altra finestra, potrebbe causare un'ambiguità della mappa messaggi.  
  
 Per chiamare alcuna funzione membro per l'oggetto di controllo, è possibile utilizzare questo oggetto. Queste chiamate influisce sul controllo nella finestra di dialogo. Ad esempio, per un controllo casella di controllo rappresentato da una variabile `m_Checkbox`, di tipo `CButton`, è possibile chiamare:  
  
 [!code-cpp[NVC_MFCControlLadenDialog#52](../mfc/codesnippet/cpp/type-safe-access-to-controls-with-code-wizards_1.cpp)]  
  
 Qui la variabile membro `m_Checkbox` ha lo stesso scopo della funzione membro `GetMyCheckbox` nella [accesso indipendente dai tipi a controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md). Se la casella di controllo non è una casella di controllo automatico, è comunque necessario un gestore nella classe della finestra per il **BN_CLICKED** messaggio di notifica del controllo quando si fa clic sul pulsante.  
  
 Per ulteriori informazioni sui controlli, vedere [controlli](../mfc/controls-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)   
 [Accesso indipendente dai tipi ai controlli senza creazioni guidate codice](../mfc/type-safe-access-to-controls-without-code-wizards.md)

