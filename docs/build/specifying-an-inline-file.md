---
title: Specificare un File Inline | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- NMAKE program, inline files
- inline files [C++], specifying NMAKE
- files [C++], inline
ms.assetid: 393eccfb-3fc9-4bac-a30c-8ac8d221cca3
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ef2183390b2aca2fb54e1468bd59e697374a355a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="specifying-an-inline-file"></a>Specifica di un file inline
Specificare due parentesi angolari (<<) nel comando dove *filename* viene visualizzato. Le parentesi uncinate non può essere un'espansione di macro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
<<[filename]  
```  
  
## <a name="remarks"></a>Note  
 Quando viene eseguito il comando, le parentesi angolari vengono sostituite da *filename*, se specificato, o da un nome univoco generato NMAKE. Se specificato, *filename* deve seguire angolari, senza spazi o tabulazioni. È consentito un percorso. Nessuna estensione è necessaria o presuppone. Se *filename* viene specificato, il file viene creato nella classe corrente o la directory specificata, sovrascrivendo eventuali file con lo stesso nome; in caso contrario, viene creato nella directory TMP (o la directory corrente, se la variabile di ambiente TMP non è definito). Se un precedente *filename* viene riutilizzato, NMAKE sostituisce il file precedente.  
  
## <a name="see-also"></a>Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)