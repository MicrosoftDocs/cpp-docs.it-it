---
title: Associazione di comandi di Menu a testo della barra di stato nelle applicazioni MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- status bars [C++], associating menu items
- menus [C++], status bar text
ms.assetid: 757c0e02-bc97-493f-bccd-6cc6887ebc64
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 718766a8fc475f20bcbcc328973b38e486769d9c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46389083"
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