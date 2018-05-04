---
title: Specificare un File Inline | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- NMAKE program, inline files
- inline files [C++], specifying NMAKE
- files [C++], inline
ms.assetid: 393eccfb-3fc9-4bac-a30c-8ac8d221cca3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 2c0d85436aef5ed48c0a8787f8bce330bf6d3e96
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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