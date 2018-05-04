---
title: Macro nome file | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- macros, NMAKE
- filename macros in NMAKE
- NMAKE program, filename macros
ms.assetid: 20afd6b3-5b6c-4e33-9d01-309ce98ef9db
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4e49c65a642dcee3e0f04fb5000a390fccae98ad
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="filename-macros"></a>Macro di nomi file
Macro nome file sono già definite come nomi di file specificati nella dipendenza (specifiche non il nome del file su disco). Queste macro non è necessario essere racchiuso tra parentesi quando viene richiamato. specificare un solo simbolo $, come illustrato.  
  
|Macro|Significato|  
|-----------|-------------|  
|**$@**|Nome completo del destinazione corrente (percorso, nome di base, estensione), come specificato.|  
|**$$@**|Nome completo del destinazione corrente (percorso, nome di base, estensione), come specificato. Valido solo come dipendente una dipendenza.|  
|**$\***|Del destinazione corrente percorso e base nome meno l'estensione di file.|  
|**$\*\***|Tutti i dipendenti della destinazione corrente.|  
|**$?**|Tutti i dipendenti con un timestamp successivo a quello di destinazione corrente.|  
|**$<**|File dipendente con un timestamp successivo a quello di destinazione corrente. Valido solo nei comandi nelle regole di inferenza.|  
  
 Per specificare una parte di una macro nome file predefiniti, aggiungere un modificatore di macro e racchiudere la macro modificata tra parentesi.  
  
|Modificatore|Parte del nome file risultante|  
|--------------|-----------------------------|  
|**D**|Unità e directory|  
|**B**|Nome di base|  
|**F**|Nome di base più estensione|  
|**R**|Unità più directory più nome di base|  
  
## <a name="see-also"></a>Vedere anche  
 [Macro speciali di NMAKE](../build/special-nmake-macros.md)