---
title: Errore del compilatore C3208 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3208
dev_langs:
- C++
helpviewer_keywords:
- C3208
ms.assetid: 6d060bfe-52cf-4599-8f70-bdeb5a670df3
caps.latest.revision: 5
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 3258ae0d8a52b00f7ac2f783d0abf5a0da82574d
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3208"></a>Errore del compilatore C3208
'function': l'elenco dei parametri di modello per il modello di classe 'class' non corrisponde all'elenco dei parametri di modello per il parametro di modello 'param'  
  
 Il numero di parametri di modello di un modello non è uguale a quello del modello di classe specificato.  
  
 L'esempio seguente genera l'errore C3208:  
  
```  
// C3208.cpp  
template <template <class T> class TT >  
int f();  
  
template <class T1, class T2>  
struct S;  
  
template <class T1>  
struct R;  
  
int i = f<S>();   // C3208  
// try the following line instead  
// int i = f<R>();  
```
