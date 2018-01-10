---
title: Errore irreversibile C1081 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1081
dev_langs: C++
helpviewer_keywords: C1081
ms.assetid: e58adf17-cbe1-4955-a5c7-80622bbba249
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8bac4aaf0d4aebcbc34f74b6ccb91170fd4224e4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1081"></a>Errore irreversibile C1081
'symbol': nome file troppo lungo  
  
 La lunghezza di un percorso di file supera `_MAX_PATH` (definito da STDLIB. h come 260 caratteri). Abbreviare il nome del file.  
  
 Se si chiama CL.exe con il nome breve, il compilatore potrebbe essere necessario generare un percorso completo. Ad esempio, `cl -c myfile.cpp` potrebbe generare al compilatore:  
  
```  
D:\<very-long-directory-path>\myfile.cpp  
```