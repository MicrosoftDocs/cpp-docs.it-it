---
title: Errore irreversibile C1853 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- devlang-cpp
ms.topic: error-reference
f1_keywords:
- C1853
dev_langs:
- C++
helpviewer_keywords:
- C1853
ms.assetid: ceb9b4a5-92bf-4573-8a9f-3109cc7743ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9aa6a67c13f76b0bf43159b9e9de95068102a2b1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33229209"
---
# <a name="fatal-error-c1853"></a>Errore irreversibile C1853
  
> '*filename*' file di intestazione precompilata da una versione precedente del compilatore, o l'intestazione precompilata è C++ e si sono utilizzando C (o viceversa)  
  
Possibili cause:  
  
-   L'intestazione precompilata è stato compilato con una versione precedente del compilatore. Provare a ricompilare l'intestazione con il compilatore corrente.  
  
-   L'intestazione precompilata è C++ e si utilizza da C. provare a ricompilare l'intestazione per l'utilizzo con C specificando uno del [/Tc](../../build/reference/tc-tp-tc-tp-specify-source-file-type.md) opzioni del compilatore, o la modifica del suffisso del file di origine per "c". Per ulteriori informazioni, vedere [sono disponibili due opzioni per la precompilazione di codice](../../build/reference/creating-precompiled-header-files.md#two-choices-for-precompiling-code).