---
title: Errore irreversibile C1107 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1107
dev_langs:
- C++
helpviewer_keywords:
- C1107
ms.assetid: 541a4d9f-10bc-4dd8-b68e-15e548f3dc0a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 949ee09244a106984522fb35dd13c0b3426fc820
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="fatal-error-c1107"></a>Errore irreversibile C1107
Impossibile trovare l'assembly 'file': specificare il percorso di ricerca dell'assembly utilizzando /AI o impostando la variabile d'ambiente LIBPATH  
  
 È stato passato un file di metadati per un [#using](../../preprocessor/hash-using-directive-cpp.md) direttiva che il compilatore non è riuscito a individuare.  
  
 LIBPATH, descritta nell'argomento per `#using`e [/AI](../../build/reference/ai-specify-metadata-directories.md) l'opzione del compilatore consentono di specificare le directory in cui verranno cercati i file di metadati di riferimento.