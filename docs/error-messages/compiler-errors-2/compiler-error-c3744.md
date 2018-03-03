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
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: fd5c11e88960f2b4332a586d2fe982a8ea94fdbd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744
unhook deve avere almeno 3 argomenti per gli eventi gestiti  
  
 Il [unhook](../../cpp/unhook.md) funzioni devono avere tre parametri quando viene utilizzato in un programma compilato per le estensioni gestite per C++.  
  
 `__hook`e `__unhook` non sono compatibili con la programmazione /clr. Utilizzare gli operatori + = e -=.  
  
 C3744 solo è raggiungibile anche tramite l'opzione del compilatore obsoleta **oldSyntax**.  
