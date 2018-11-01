---
title: Associazione dei comandi di menu a testo della barra di stato in applicazioni MFC
ms.date: 11/04/2016
helpviewer_keywords:
- status bars [C++], associating menu items
- menus [C++], status bar text
ms.assetid: 757c0e02-bc97-493f-bccd-6cc6887ebc64
ms.openlocfilehash: fc39695358a9c1f2f62878487a5e4fedf5db2b82
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50468887"
---
# <a name="associating-menu-commands-with-status-bar-text-in-mfc-applications"></a>Associazione dei comandi di menu a testo della barra di stato in applicazioni MFC

L'applicazione MFC può visualizzare un testo descrittivo per ogni utente può selezionare i comandi di menu. Eseguire questa operazione assegnando una stringa di testo per ogni comando di menu usando la **dei messaggi di richiesta** proprietà nel **proprietà** finestra. Se si dispone di una stringa nella [tabella stringhe](../windows/string-editor.md) il cui ID è uguale al comando, un'applicazione MFC visualizzerà automaticamente questa risorsa stringa nella barra di stato dell'applicazione in esecuzione quando un utente si posiziona su una voce di menu.

### <a name="to-associate-a-menu-command-with-a-status-bar-text-string"></a>Per associare un comando di menu con un stringa di testo della barra di stato

1. Nell' **Editor dei menu** selezionare il comando di menu.

2. Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)digitare il testo della barra di stato associata nella casella **Prompt** .

## <a name="requirements"></a>Requisiti

MFC

## <a name="see-also"></a>Vedere anche

[Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[Aggiunta di comandi a un menu](../windows/adding-commands-to-a-menu.md)<br/>
[Editor dei menu](../windows/menu-editor.md)