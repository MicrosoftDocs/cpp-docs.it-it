---
title: Errore irreversibile U1070 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1070
dev_langs:
- C++
helpviewer_keywords:
- U1070
ms.assetid: 8639fc39-b4b1-48f5-ac91-0e9fb61680fd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1fe39a5d6f6074596561cd8e32f7b9428bc60f6d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33327041"
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