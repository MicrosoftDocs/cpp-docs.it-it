---
title: Macro nome file | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-tools
ms.tgt_pltfrm: ''
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- macros, NMAKE
- filename macros in NMAKE
- NMAKE program, filename macros
ms.assetid: 20afd6b3-5b6c-4e33-9d01-309ce98ef9db
caps.latest.revision: 7
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b2073e4fcb365b3beb10d4040c0f54d9f61a0431
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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