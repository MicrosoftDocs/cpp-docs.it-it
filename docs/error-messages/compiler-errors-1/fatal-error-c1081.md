---
title: Errore irreversibile C1081 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1081
dev_langs:
- C++
helpviewer_keywords:
- C1081
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4b5ea18ff3f2714d9621d4372cf541be2f9b225a
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1081"></a>Errore irreversibile C1081
'symbol': nome file troppo lungo  
  
 La lunghezza di un percorso di file supera `_MAX_PATH` (definito da STDLIB. h come 260 caratteri). Abbreviare il nome del file.  
  
 Se si chiama CL.exe con il nome breve, il compilatore potrebbe essere necessario generare un percorso completo. Ad esempio, `cl -c myfile.cpp` potrebbe generare al compilatore:  
  
```  
D:\<very-long-directory-path>\myfile.cpp  
```