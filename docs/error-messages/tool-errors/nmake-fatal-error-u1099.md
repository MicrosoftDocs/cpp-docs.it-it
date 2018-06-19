---
title: Errore irreversibile U1099 di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1099
dev_langs:
- C++
helpviewer_keywords:
- U1099
ms.assetid: 6688a805-43e6-4247-a2d0-14be082f0b13
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7be09691de4212d07b1452ffe33725a3978fc053
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33322104"
---
# <a name="nmake-fatal-error-u1099"></a>Errore irreversibile U1099 di NMAKE 
overflow dello stack  
  
 Il file di progetto in fase di elaborazione è troppo complesso per l'allocazione dello stack corrente in NMAKE. NMAKE ha un'allocazione di 0x3000 (12 KB).  
  
 Per aumentare l'allocazione dello stack NMAKE, eseguire il [editbin /stack](../../build/reference/stack.md) utilità con un'opzione di stack maggiore:  
  
 **EDITBIN /STACK:reserve NMAKE. FILE EXE**  
  
 dove *riservare* è un numero maggiore di allocazione dello stack corrente in NMAKE.