---
title: Classe bad_function_call | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- functional/std::bad_function_call
dev_langs:
- C++
helpviewer_keywords:
- bad_function_call class
ms.assetid: b70a0268-43ff-4f3b-a283-faf1cb172d4c
caps.latest.revision: 20
author: corob-msft
ms.author: corob
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
ms.translationtype: MT
ms.sourcegitcommit: 65f4e356ad0d46333b0d443d0fd6ac0b9f2b6f58
ms.openlocfilehash: c6aa47c6eb3d9fc39eed6b68856641cd86d27ba5
ms.contentlocale: it-it
ms.lasthandoff: 10/03/2017

---
# <a name="badfunctioncall-class"></a>Classe bad_function_call
Segnala una chiamata di funzione non valida.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class bad_function_call  
 : public std::exception {  
 };  
```  
  
## <a name="remarks"></a>Note  
 La classe descrive un'eccezione generata per indicare che una chiamata a `operator()` in una [Classe function](../standard-library/function-class.md)

