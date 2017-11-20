---
title: Classe bad_function_call | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: functional/std::bad_function_call
dev_langs: C++
helpviewer_keywords: bad_function_call class
ms.assetid: b70a0268-43ff-4f3b-a283-faf1cb172d4c
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 25e429161178bdb62aaddd887ca9ded90dad367c
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
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
