---
title: Compilatore avviso (livelli 1 e 4) C4115 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C4115
dev_langs:
- C++
helpviewer_keywords:
- C4115
ms.assetid: f3f94e72-fc49-4d09-b3e7-23d68e61152f
caps.latest.revision: 6
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
ms.openlocfilehash: bcddaf9da3fd05d66e219ec2134799bc49e30f9d
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-warning-levels-1-and-4-c4115"></a>Avviso del compilatore (livelli 1 e 4) C4115
'type': definizione di tipo denominato tra parentesi  
  
 Il simbolo specificato viene usato per definire una struttura, un'unione o un tipo enumerato all'interno di un'espressione con parentesi. L'ambito della definizione potrebbe essere imprevisto.  
  
 In una chiamata di funzione C, la definizione ha ambito globale. In una chiamata C++, la definizione ha lo stesso ambito della funzione chiamata.  
  
 L'avviso può anche essere generato da dichiaratori tra parentesi, ad esempio i prototipi, che non sono espressioni con parentesi.  
  
 L'avviso è di livello 1 con i programmi C++ e C compilati in compatibilità ANSI (/Za). Negli altri casi, è di livello 3.
