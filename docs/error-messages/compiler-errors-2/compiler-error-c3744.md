---
title: Errore del compilatore C3744 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3744
dev_langs:
- C++
helpviewer_keywords:
- C3744
ms.assetid: a447d050-80d1-406a-9a6e-f15c527d717c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f96b8445c343bdd4f606157e692c4d6ce262e369
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33265883"
---
# <a name="compiler-error-c3744"></a>Errore del compilatore C3744
unhook deve avere almeno 3 argomenti per gli eventi gestiti  
  
 Il [unhook](../../cpp/unhook.md) funzioni devono avere tre parametri quando viene utilizzato in un programma compilato per le estensioni gestite per C++.  
  
 `__hook` e `__unhook` non sono compatibili con la programmazione /clr. Utilizzare gli operatori + = e -=.  
  
 C3744 solo è raggiungibile anche tramite l'opzione del compilatore obsoleta **oldSyntax**.  
