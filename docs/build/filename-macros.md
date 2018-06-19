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
ms.openlocfilehash: e28ba5923d8b62973860c0ba503d13682b3c5e79
ms.sourcegitcommit: 3bb7c1c0ceeb8012418e2fff9ae5a7db0fff3877
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/23/2018
ms.locfileid: "34458862"
---
# <a name="filename-macros"></a>Macro di nomi file
Macro nome file sono già definite come nomi di file specificati nella dipendenza (specifiche non il nome del file su disco). Queste macro non è necessario essere racchiuso tra parentesi quando viene richiamato. specificare un solo simbolo $, come illustrato.  
  
|Macro|Significato|  
|-----------|-------------|  
|**$@**|Nome completo del destinazione corrente (percorso, nome di base, estensione), come specificato.|  
|**$$@**|Nome completo del destinazione corrente (percorso, nome di base, estensione), come specificato. Valido solo come dipendente una dipendenza.|  
|**$&#42;**|Del destinazione corrente percorso e base nome meno l'estensione di file.|  
|**$&#42;&#42;**|Tutti i dipendenti della destinazione corrente.|  
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
