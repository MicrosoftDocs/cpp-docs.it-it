---
title: Errore del compilatore C3744 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3744
dev_langs:
- C++
helpviewer_keywords:
- C3744
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
caps.latest.revision: 11
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: f6cd256454b51a103d9c4249b050c8c05781bc78
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744
__unhook deve avere almeno 3 argomenti per gli eventi gestiti  
  
 Il [unhook](../../cpp/unhook.md) funzione deve accettare tre parametri quando viene utilizzata in un programma che viene compilato per le estensioni gestite per C++.  
  
 `__hook`e `__unhook` non sono compatibili con la programmazione /clr. Utilizzare gli operatori + = e -=.  
  
 C3744 è raggiungibile tramite l'opzione del compilatore obsoleta **oldSyntax**.  

