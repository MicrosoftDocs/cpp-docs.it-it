---
title: Esecuzione di NMAKE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- targets, building
- response files, NMAKE
- targets
- command files
- NMAKE program, targets
- NMAKE program, running
- command files, NMAKE
ms.assetid: 0421104d-8b7b-4bf3-86c1-928d9b7c1a8c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 29516dcbcf650225ec3b86eee9e135a35bff82f4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379705"
---
# <a name="running-nmake"></a>Esecuzione di NMAKE
## <a name="syntax"></a>Sintassi  
  
```  
NMAKE [option...] [macros...] [targets...] [@commandfile...]  
```  
  
## <a name="remarks"></a>Note  
 Specificata solo le compilazioni NMAKE *destinazioni* o, se non viene specificato, il primo di destinazione nel makefile. Può essere la destinazione del makefile prima un [pseudo](../build/pseudotargets.md) per compilare altre destinazioni. NMAKE vengono utilizzati i makefile specificato con /F; Se non è specificata l'opzione /F, viene utilizzato il file Makefile nella directory corrente. Se non viene specificato alcun makefile, vengono utilizzate le regole di inferenza per compilare della riga di comando *destinazioni*.  
  
 Il `commandfile` file di testo (o file di risposta) contenga l'input della riga di comando. Altri tipi di input possono precedere o seguire`commandfile`. È consentito un percorso. In `commandfile`, interruzioni di riga sono considerate come spazi. Racchiudere le definizioni di macro tra virgolette se contengono spazi.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
 [Opzioni di NMAKE](../build/nmake-options.md)  
  
 [Tools.ini e NMAKE](../build/tools-ini-and-nmake.md)  
  
 [Codici di uscita di NMAKE](../build/exit-codes-from-nmake.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti a NMAKE](../build/nmake-reference.md)