---
title: Associazione di comandi di Menu con testo della barra di stato in applicazioni MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- status bars, associating menu items
- menus, status bar text
ms.assetid: 757c0e02-bc97-493f-bccd-6cc6887ebc64
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: ea0f68bbd0c426aee8141c27d6852bfaaa6ed523
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="associating-menu-commands-with-status-bar-text-in-mfc-applications"></a>Associazione dei comandi di menu a testo della barra di stato in applicazioni MFC
L'applicazione può visualizzare testo descrittivo per ogni comando di menu se potrebbe selezionare un utente. A tale scopo, assegnare una stringa di testo per ogni comando di menu usando la proprietà **Prompt** nella finestra Proprietà. Se si dispone di una stringa nella [tabella stringhe](../windows/string-editor.md) il cui ID è uguale al comando, un'applicazione MFC visualizzerà automaticamente questa risorsa stringa nella barra di stato dell'applicazione in esecuzione quando un utente si posiziona su una voce di menu.  
  
### <a name="to-associate-a-menu-command-with-a-status-bar-text-string"></a>Per associare un comando di menu con un stringa di testo della barra di stato  
  
1.  Nell' **Editor dei menu** selezionare il comando di menu.  
  
2.  Nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)digitare il testo della barra di stato associata nella casella **Prompt** .  
  

  
 **Requisiti**  
  
 MFC  
  
## <a name="see-also"></a>Vedere anche  
 [Stringhe (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)   
 [Aggiunta di comandi a un Menu](../windows/adding-commands-to-a-menu.md)   
 [Editor dei menu](../windows/menu-editor.md)