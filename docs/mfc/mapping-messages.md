---
title: Mapping Messages | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- message maps [MFC]], about message maps
- mappings [MFC]], commands
- commands [MFC], mapping
- command mapping [MFC]
- message handling [MFC], connecting to handler functions
- commands [MFC], connecting to handler functions
- mappings [MFC]], messages
- messages [MFC], mapping
ms.assetid: 996f0652-0698-4b8c-b893-cdaa836d9d0f
caps.latest.revision: 9
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
ms.openlocfilehash: 730e265f0d1bd9c5a3c052d1c1cde76f711eab88
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="mapping-messages"></a>Mapping Messages
Each framework class that can receive messages or commands has its own "message map." The framework uses message maps to connect messages and commands to their handler functions. Any class derived from class `CCmdTarget` can have a message map. Other articles explain message maps in detail and describe how to use them.  
  
 In spite of the name "message map," message maps handle both messages and commands — all three categories of messages listed in [Message Categories](../mfc/message-categories.md).  
  
## <a name="see-also"></a>See Also  
 [Messages and Commands in the Framework](../mfc/messages-and-commands-in-the-framework.md)


