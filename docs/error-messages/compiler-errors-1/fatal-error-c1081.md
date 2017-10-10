---
title: Errore irreversibile C1081 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1081
dev_langs:
- C++
helpviewer_keywords:
- C1081
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 148e3e6035304eb155a478e5971defd9a0a55120
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="fatal-error-c1081"></a>Errore irreversibile C1081
'symbol': nome file troppo lungo  
  
 La lunghezza di un percorso di file supera `_MAX_PATH` (definito da STDLIB. h come 260 caratteri). Abbreviare il nome del file.  
  
 Se si chiama CL.exe con il nome breve, il compilatore potrebbe essere necessario generare un percorso completo. Ad esempio, `cl -c myfile.cpp` potrebbe generare al compilatore:  
  
```  
D:\<very-long-directory-path>\myfile.cpp  
```
