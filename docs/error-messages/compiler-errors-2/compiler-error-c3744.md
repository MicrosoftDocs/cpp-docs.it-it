---
title: Errore del compilatore C3744 | Documenti Microsoft
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
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 87df3fd92ac3fcad9b3e87f02f16b8151e678b77
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744
unhook deve avere almeno 3 argomenti per gli eventi gestiti  
  
 Il [unhook](../../cpp/unhook.md) funzioni devono avere tre parametri quando viene utilizzato in un programma compilato per le estensioni gestite per C++.  
  
 `__hook`e `__unhook` non sono compatibili con la programmazione /clr. Utilizzare gli operatori + = e -=.  
  
 C3744 solo è raggiungibile anche tramite l'opzione del compilatore obsoleta **oldSyntax**.  

