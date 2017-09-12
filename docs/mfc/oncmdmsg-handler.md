---
title: OnCmdMsg Handler | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- OnCmdMsg
dev_langs:
- C++
helpviewer_keywords:
- messages, routing
- handlers [MFC]
- command routing [MFC], OnCmdMsg handler
- handlers, OnCmdMessage [MFC]
- OnCmdMessage method [MFC]
ms.assetid: 8df07024-506f-47e7-bba9-1c3bc5ad8ab6
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 697da53aec1f98e08605152889ac48009a4397c4
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="oncmdmsg-handler"></a>OnCmdMsg Handler
To accomplish the routing of commands, each command target calls the `OnCmdMsg` member function of the next command target in the sequence. Command targets use `OnCmdMsg` to determine whether they can handle a command and to route it to another command target if they cannot handle it.  
  
 Each command-target class may override the `OnCmdMsg` member function. The overrides let each class route commands to a particular next target. A frame window, for example, always routes commands to its current child window or view, as shown in the table [Standard Command Route](../mfc/command-routing.md).  
  
 The default `CCmdTarget` implementation of `OnCmdMsg` uses the message map of the command-target class to search for a handler function for each command message it receives — in the same way that standard messages are searched. If it finds a match, it calls the handler. Message-map searching is explained in [How the Framework Searches Message Maps](../mfc/how-the-framework-searches-message-maps.md).  
  
## <a name="see-also"></a>See Also  
 [How the Framework Calls a Handler](../mfc/how-the-framework-calls-a-handler.md)


