---
title: MAPI | Microsoft Docs
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
- messaging [MFC], client applications
- enabling applications for MAPI [MFC]
- MAPI support in MFC
- e-mail [MFC], enabling
- mail [MFC], enabling your application
- MAPI, MFC
- enabling applications for mail [MFC]
ms.assetid: 193449f7-b131-4ab0-9301-8d4f6cd1e7c4
caps.latest.revision: 11
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
ms.openlocfilehash: b0805f8d1d76795305152a3af98d71682297cb65
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="mapi"></a>MAPI
This article describes the Microsoft Messaging Application Programming Interface (MAPI) for client message application developers. MFC supplies support for a subset of MAPI in class **CDocument** but does not encapsulate the entire API. For more information, see [MAPI Support in MFC](../mfc/mapi-support-in-mfc.md).  
  
 MAPI is a set of functions that mail-enabled and mail-aware applications use to create, manipulate, transfer, and store mail messages. It gives application developers the tools to define the purpose and content of mail messages and gives them flexibility in their management of stored mail messages. MAPI also provides a common interface that application developers can use to create mail-enabled and mail-aware applications independent of the underlying messaging system.  
  
 Messaging clients provide a human interface for interaction with the Microsoft Windows Messaging System (WMS). This interaction typically includes requesting services from MAPI-compliant providers such as message stores and address books.  
  
 For more information about MAPI, see the articles under Guide in Win32 Messaging (MAPI) of the Windows SDK.  
  
## <a name="in-this-section"></a>In This Section  
 [MAPI Support in MFC](../mfc/mapi-support-in-mfc.md)  
  
## <a name="see-also"></a>See Also  
 [CDocument::OnFileSendMail](../mfc/reference/cdocument-class.md#onfilesendmail)   
 [CDocument::OnUpdateFileSendMail](../mfc/reference/cdocument-class.md#onupdatefilesendmail)   
 [COleDocument::OnFileSendMail](../mfc/reference/coledocument-class.md#onfilesendmail)


