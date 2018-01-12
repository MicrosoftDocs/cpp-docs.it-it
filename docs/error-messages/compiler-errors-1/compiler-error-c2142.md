---
title: Errore del compilatore C2142 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C2142
dev_langs: C++
helpviewer_keywords: C2142
ms.assetid: d0dbe10e-0952-49a4-8b33-e82fb7558b19
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 91823d90eeefab73c271aab4eb716433e7dada05
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2142"></a>Errore del compilatore C2142
le dichiarazioni di funzione sono diversi, parametri variabili specificati solo in uno di essi  
  
 Una dichiarazione della funzione contiene un elenco di parametri variabile. Non è un'altra dichiarazione. ANSI C ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) solo.  
  
 L'esempio seguente genera l'errore C2142:  
  
```  
// C2142.c  
// compile with: /Za /c  
void func();  
void func( int, ... );   // C2142  
void func2( int, ... );   // OK  
```