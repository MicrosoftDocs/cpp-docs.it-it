---
title: 'Appunti: Utilizzo degli Appunti di Windows | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Clipboard commands
- Cut/Copy and Paste command handler functions [MFC]
- handler functions, Cut/Copy and Paste commands
- Clipboard [MFC], commands
- commands [MFC], implementing Edit
- Clipboard commands [MFC], implementing
- Windows Clipboard [MFC]
- Clipboard [MFC], Windows Clipboard API
ms.assetid: 24415b42-9301-4a70-b69a-44c97918319f
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 6063a27495d46e4b54f3133b92689e4b0faaa631
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="clipboard-using-the-windows-clipboard"></a>Appunti: utilizzo degli Appunti di Windows
In questo argomento viene descritto come utilizzare l'API Appunti di Windows standard all'interno dell'applicazione MFC.  
  
 La maggior parte delle applicazioni per Windows supportano Taglia o copia di dati negli Appunti di Windows e incollare dati dagli Appunti. I formati di dati negli Appunti possono variare tra applicazioni. Il framework supporta solo un numero limitato di formati degli Appunti per un numero limitato di classi. È in genere implementano i comandi relativi agli Appunti, le operazioni Taglia, copia e Incolla, il menu di modifica per la visualizzazione. La libreria di classi definisce gli ID di comando di questi comandi: **ID_EDIT_CUT**, **ID_EDIT_COPY**, e **ID_EDIT_PASTE**. Sono inoltre definiti i prompt della riga di messaggio.  
  
 [I messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md) viene illustrato come gestire i comandi di menu dell'applicazione eseguendo il mapping del comando di menu per una funzione del gestore. Fino a quando l'applicazione non definisce le funzioni di gestione per i comandi negli Appunti dal menu Modifica, rimangono disabilitati. Per scrivere funzioni di gestione per i comandi Taglia e copia, implementare la selezione nell'applicazione. Per scrivere una funzione del gestore per il comando Incolla, eseguire una query negli Appunti per vedere se contiene dati in un formato che può accettare l'applicazione. Ad esempio, per abilitare il comando di copia, è possibile scrivere un gestore simile al seguente:  
  
 [!code-cpp[NVC_MFCListView#2](../atl/reference/codesnippet/cpp/clipboard-using-the-windows-clipboard_1.cpp)]  
  
 I comandi Taglia, copia e Incolla solo sono significativi in determinati contesti. I comandi Taglia e copia devono essere abilitati solo quando viene selezionato un elemento e il comando Incolla solo quando è presente negli Appunti. È possibile fornire questo comportamento definendo le funzioni che abilitano o disabilitano questi comandi, a seconda del contesto. Per ulteriori informazioni, vedere [come oggetti dell'interfaccia utente aggiornamento](../mfc/how-to-update-user-interface-objects.md).  
  
 La libreria Microsoft Foundation Class fornisce un supporto negli Appunti per la modifica di testo con il `CEdit` e `CEditView` classi. Le classi OLE semplificano l'implementazione operazioni sugli Appunti che riguardano elementi OLE. Per ulteriori informazioni sulle classi OLE, vedere [negli Appunti: utilizzo del meccanismo di Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md).  
  
 Implementazione di altre modificare i comandi di menu, ad esempio annullamento (**ID_EDIT_UNDO**) e Ripeti (**ID_EDIT_REDO**), viene lasciato anche all'utente. Se l'applicazione non supporta questi comandi, è possibile eliminarle facilmente dal file di risorse utilizzando l'editor di risorse di Visual C++.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Copiare e incollare dati](../mfc/clipboard-copying-and-pasting-data.md)  
  
-   [Utilizzo del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Appunti](../mfc/clipboard.md)

