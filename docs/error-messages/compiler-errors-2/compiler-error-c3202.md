---
title: Errore del compilatore C3202 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3202
dev_langs:
- C++
helpviewer_keywords:
- C3202
ms.assetid: 23528a0c-5493-4804-9789-cd3c38e49fb9
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 60e0432a40b7aa66762c235223b0f8d48a50bab4
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3202"></a>Errore del compilatore C3202
'arg name': argomento predefinito non valido per il parametro di modello 'parameter'. Previsto un modello di classe  
  
 È stato passato un argomento predefinito non valido per un parametro di modello.  
  
 L'esempio seguente genera l'errore C3202:  
  
```  
// C3202.cpp  
template<typename T>  
class X  
{  
};  
  
class Z  
{  
};  
  
template<template<typename U> class T1 = Z, typename T2> // C3202  
class Y  
{  
};  
```
