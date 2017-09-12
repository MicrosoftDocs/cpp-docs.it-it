---
title: Do I Have to Derive New Classes from CObject? | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CObject
dev_langs:
- C++
helpviewer_keywords:
- derived classes [MFC], from CObject
- CObject class [MFC], when to use
ms.assetid: 26021031-feaf-424c-80d1-9547c4409d6a
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
ms.openlocfilehash: fdcd3a478f05c6cd88c76fbfd84da861f3291ce2
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="do-i-have-to-derive-new-classes-from-cobject"></a>Do I Have to Derive New Classes from CObject?
No, you don't.  
  
 Derive a class from [CObject](../mfc/reference/cobject-class.md) when you need the facilities it provides, such as serialization or dynamic creatability. Many data classes need to be serialized to files, so it's often a good idea to derive them from `CObject`. For an example of a class derived from `CObject`, see the [Scribble sample](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>See Also  
 [CObject Class: Frequently Asked Questions](../mfc/cobject-class-frequently-asked-questions.md)

