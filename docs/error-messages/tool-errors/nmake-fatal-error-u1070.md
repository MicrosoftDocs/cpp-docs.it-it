---
title: Errore irreversibile U1070 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: U1070
dev_langs: C++
helpviewer_keywords: U1070
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
caps.latest.revision: "6"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5adf5321c96341cfce633a2329a52360be8a45da
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1070"></a>Errore irreversibile U1070 di NMAKE 
ciclo nella definizione di macro "nomemacro"  
  
 Definizione di macro specificata è contenuta una macro la cui definizione è contenuta la macro specificata. Le definizioni di macro circolari non sono validi.  
  
## <a name="example"></a>Esempio  
 Le seguenti definizioni di macro  
  
```  
ONE=$(TWO)  
TWO=$(ONE)  
```  
  
 generare l'errore seguente:  
  
```  
cycle in macro definition 'TWO'  
```