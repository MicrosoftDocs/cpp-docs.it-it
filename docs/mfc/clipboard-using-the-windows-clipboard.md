---
title: 'Appunti: Utilizzo degli Appunti di Windows | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e43b55382d5e6443119efb52bd1935d3150c1aac
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46410000"
---
# <a name="clipboard-using-the-windows-clipboard"></a>Appunti: utilizzo degli Appunti di Windows

Questo argomento descrive come usare le API degli Appunti di Windows standard all'interno dell'applicazione MFC.

La maggior parte delle applicazioni per Windows supportano Taglia o copia dei dati negli Appunti di Windows e incollare dati dagli Appunti. I formati di dati negli Appunti possono variare tra le applicazioni. Il framework supporta solo un numero limitato di formati degli Appunti per un numero limitato di classi. In genere si implementerà i comandi relativi agli Appunti, ovvero le operazioni Taglia, copia e Incolla, nel menu di modifica per la visualizzazione. La libreria di classi definisce gli ID di comando per i comandi seguenti: **ID_EDIT_CUT**, **ID_EDIT_COPY**, e **ID_EDIT_PASTE**. Vengono definite anche le richieste di messaggio.

[I messaggi e comandi nel Framework](../mfc/messages-and-commands-in-the-framework.md) viene illustrato come gestire i comandi di menu nell'applicazione eseguendo il mapping del comando di menu per una funzione del gestore. Fino a quando l'applicazione non definisce funzioni del gestore per i comandi negli Appunti dal menu Modifica, rimangono disabilitati. Per scrivere funzioni del gestore per i comandi Taglia e copia, implementare la selezione nell'applicazione. Per scrivere una funzione del gestore per il comando Incolla, eseguire una query negli Appunti se contiene dati in un formato che di applicazione può accettare. Ad esempio, per abilitare il comando di copia, è possibile scrivere un gestore simile al seguente:

[!code-cpp[NVC_MFCListView#2](../atl/reference/codesnippet/cpp/clipboard-using-the-windows-clipboard_1.cpp)]

I comandi Taglia, copia e Incolla solo sono significativi in determinati contesti. I comandi Taglia e copia devono essere abilitati solo quando viene selezionato un elemento e il comando Incolla solo quando un elemento è negli Appunti. È possibile fornire questo comportamento definendo le funzioni del gestore di aggiornamento che abilita o disabilita i comandi seguenti a seconda del contesto. Per altre informazioni, vedere [come oggetti dell'interfaccia utente di aggiornamento](../mfc/how-to-update-user-interface-objects.md).

La libreria Microsoft Foundation Class fornisce supporto per gli Appunti per la modifica di testo con il `CEdit` e `CEditView` classi. Le classi OLE inoltre semplificano implementa le operazioni degli Appunti che interessano elementi OLE. Per altre informazioni sulle classi OLE, vedere [negli Appunti: utilizzo del meccanismo di Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md).

Implementazione di altre modificare i comandi di menu, ad esempio di annullamento (**ID_EDIT_UNDO**) e fase di rollforward (**ID_EDIT_REDO**), viene lasciato anche all'utente. Se l'applicazione non supporta i comandi seguenti, è possibile eliminarli facilmente dal file di risorse usando l'editor di risorse di Visual C++.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Copiare e incollare dati](../mfc/clipboard-copying-and-pasting-data.md)

- [Uso del meccanismo degli Appunti OLE](../mfc/clipboard-using-the-ole-clipboard-mechanism.md)

## <a name="see-also"></a>Vedere anche

[Appunti](../mfc/clipboard.md)

