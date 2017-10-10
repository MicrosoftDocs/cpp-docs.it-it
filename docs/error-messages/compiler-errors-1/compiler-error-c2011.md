---
title: Errore del compilatore C2011 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2011
dev_langs:
- C++
helpviewer_keywords:
- C2011
ms.assetid: 992c9d51-e850-4d53-b86b-02e73b38249c
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 0f32048e0de21e5af2d4d52a0c703813b1a1ff8b
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2011"></a>Errore del compilatore C2011
'identifier': ridefinizione tipo 'type'  
  
 L'identificatore è già stato definito come `type`. Cercare le ridefinizioni dell'identificatore.  
  
 L'errore C2011 può verificarsi anche se si importa un file di intestazione o una libreria dei tipi più di una volta nello stesso file. Per evitare più inclusioni dei tipi definiti in un file di intestazione, usare Guard include o `#pragma` [una volta](../../preprocessor/once.md) direttiva nel file di intestazione.  
  
 Se si desidera individuare la dichiarazione iniziale del tipo ridefinito, è possibile utilizzare il [/p](../../build/reference/p-preprocess-to-a-file.md) flag del compilatore per generare l'output pre-elaborato passato al compilatore. È possibile usare strumenti di ricerca testo per trovare le istanze dell'identificatore ridefinito nel file di output.  
  
 L'esempio seguente genera l'errore C2011 e mostra un modo per risolverlo:  
  
```  
// C2011.cpp  
// compile with: /c  
struct S;  
union S;   // C2011  
union S2;   // OK  
```
