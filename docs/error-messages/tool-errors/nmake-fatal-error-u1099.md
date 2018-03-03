---
title: Errore irreversibile U1099 di NMAKE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- U1099
dev_langs:
- C++
helpviewer_keywords:
- U1099
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8bf8d662960e5857686f3f8301cc8481f350d4b3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="nmake-fatal-error-u1099"></a>Errore irreversibile U1099 di NMAKE 
overflow dello stack  
  
 Il file di progetto in fase di elaborazione è troppo complesso per l'allocazione dello stack corrente in NMAKE. NMAKE ha un'allocazione di 0x3000 (12 KB).  
  
 Per aumentare l'allocazione dello stack NMAKE, eseguire il [editbin /stack](../../build/reference/stack.md) utilità con un'opzione di stack maggiore:  
  
 **EDITBIN /STACK:reserve NMAKE. FILE EXE**  
  
 dove *riservare* è un numero maggiore di allocazione dello stack corrente in NMAKE.