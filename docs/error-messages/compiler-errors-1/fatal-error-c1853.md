---
title: Errore irreversibile C1853 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1853
dev_langs:
- C++
helpviewer_keywords:
- C1853
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 05c29c266aad095517734fdcac776e12467d34ac
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1853"></a>Errore irreversibile C1853
  
> '*filename*' file di intestazione precompilata da una versione precedente del compilatore, o l'intestazione precompilata è C++ e si sono utilizzando C (o viceversa)  
  
Possibili cause:  
  
-   L'intestazione precompilata è stato compilato con una versione precedente del compilatore. Provare a ricompilare l'intestazione con il compilatore corrente.  
  
-   L'intestazione precompilata è C++ e si utilizza da C. provare a ricompilare l'intestazione per l'utilizzo con C specificando uno del [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) opzioni del compilatore, o la modifica del suffisso del file di origine per "c". Per ulteriori informazioni, vedere [sono disponibili due opzioni per la precompilazione di codice](../../build/reference/creating-precompiled-header-files.md#two-choices-for-precompiling-code).