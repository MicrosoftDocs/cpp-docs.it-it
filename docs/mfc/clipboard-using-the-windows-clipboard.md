---
description: 'Altre informazioni su: Appunti: uso degli Appunti di Windows'
title: 'Appunti: utilizzo degli Appunti di Windows'
ms.date: 11/04/2016
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
ms.openlocfilehash: 1c89c8888f7e3ffb81705ee146c00917a7763323
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338424"
---
# <a name="clipboard-using-the-windows-clipboard"></a>Appunti: utilizzo degli Appunti di Windows

In questo argomento viene descritto come utilizzare l'API degli Appunti di Windows standard all'interno dell'applicazione MFC.

La maggior parte delle applicazioni per Windows supporta il sezionamento o la copia dei dati negli Appunti di Windows e incolla i dati dagli Appunti. I formati di dati degli Appunti variano tra le applicazioni. Il Framework supporta solo un numero limitato di formati degli Appunti per un numero limitato di classi. In genere, i comandi correlati agli Appunti, ovvero taglia, copia e incolla, vengono implementati dal menu modifica per la visualizzazione. La libreria di classi definisce gli ID comando per i comandi seguenti: **ID_EDIT_CUT**, **ID_EDIT_COPY** e **ID_EDIT_PASTE**. Vengono definite anche le richieste di riga di messaggio.

[Messaggi e comandi nel Framework](messages-and-commands-in-the-framework.md) spiegano come gestire i comandi di menu nell'applicazione eseguendo il mapping del comando di menu a una funzione del gestore. Finché l'applicazione non definisce le funzioni del gestore per i comandi degli Appunti nel menu modifica, restano disabilitate. Per scrivere le funzioni del gestore per i comandi taglia e copia, implementare la selezione nell'applicazione. Per scrivere una funzione di gestione per il comando Incolla, eseguire una query sugli Appunti per verificare se contiene dati in un formato che l'applicazione può accettare. Ad esempio, per abilitare il comando copy, è possibile scrivere un gestore simile al seguente:

[!code-cpp[NVC_MFCListView#2](../atl/reference/codesnippet/cpp/clipboard-using-the-windows-clipboard_1.cpp)]

I comandi taglia, copia e incolla sono significativi solo in determinati contesti. I comandi taglia e copia devono essere abilitati solo quando si seleziona un elemento e il comando Incolla solo quando qualcosa è presente negli Appunti. È possibile fornire questo comportamento definendo le funzioni del gestore di aggiornamento che abilitano o disabilitano questi comandi a seconda del contesto. Per ulteriori informazioni, vedere [How to Update User-Interface Objects](how-to-update-user-interface-objects.md).

Il libreria Microsoft Foundation Class fornisce supporto per gli Appunti per la modifica del testo con le `CEdit` `CEditView` classi e. Le classi OLE semplificano inoltre l'implementazione di operazioni degli appunti che coinvolgono gli elementi OLE. Per ulteriori informazioni sulle classi OLE, vedere [Appunti: utilizzo del meccanismo degli Appunti OLE](clipboard-using-the-ole-clipboard-mechanism.md).

Anche l'implementazione di altri comandi di menu di modifica, ad esempio Undo (**ID_EDIT_UNDO**) e Redo (**ID_EDIT_REDO**), viene lasciata all'utente. Se l'applicazione non supporta questi comandi, è possibile eliminarli facilmente dal file di risorse usando gli editor di risorse Visual C++.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [copiare e incollare dati](clipboard-copying-and-pasting-data.md)

- [Utilizzo del meccanismo degli Appunti OLE](clipboard-using-the-ole-clipboard-mechanism.md)

## <a name="see-also"></a>Vedi anche

[Appunti](clipboard.md)
