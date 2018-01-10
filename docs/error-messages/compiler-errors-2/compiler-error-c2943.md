---
title: Errore del compilatore C2943 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: C2943
dev_langs: C++
helpviewer_keywords: C2943
ms.assetid: ede6565e-d892-44c0-8eee-c69545f3be2e
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a2ff281767f8b7f1b411dd66fd5d4073bf130d51
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c2943"></a>Errore del compilatore C2943
'class': id-classe-tipo ridefinito come argomento di tipo di un modello  
  
 Non è possibile usare una classe generica o una classe modello al posto di un simbolo come argomento di tipo generico o modello.  
  
 L'esempio seguente genera l'errore C2943:  
  
```  
// C2943.cpp  
// compile with: /c  
template<class T>  
class List {};  
  
template<class List<int> > class MyList;   // C2943  
template<class T >  class MyList;  
```