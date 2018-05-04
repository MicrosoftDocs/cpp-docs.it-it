---
title: Sintassi di nomi file | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- syntax, filename-parts
- filename-parts syntax in NMAKE
- NMAKE program, syntax
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d807087be171a2ad63ed37a8b359c3200c812040
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="filename-parts-syntax"></a>Sintassi relativa ai nomi file
Sintassi di nomi file nei comandi rappresenta i componenti del primo nome file dipendenti (che può essere un dipendente implicito). FileName componenti sono unità del file, percorso, nome di base e l'estensione come specificato, non quelli presenti sul disco. Utilizzare **%s** per rappresentare il nome file completo. Uso **%&#124;**[*parti*]**F** (una barra verticale carattere segue il simbolo di percentuale) per rappresentare le parti del nome file, dove *parti*può essere zero o più lettere seguenti, in qualsiasi ordine.  
  
|Lettera|Descrizione|  
|------------|-----------------|  
|Nessuna lettera|Nome completo (uguale a **%s**)|  
|**d**|Unità|  
|**p**|Path|  
|**f**|Nome del file base|  
|**e**|Estensione di file|  
  
 Ad esempio, se il nome del file è c:\prog.exe:  
  
-   %s sarà c:\prog.exe  
  
-   %&#124;F sarà c:\prog.exe  
  
-   %&#124;dF sarà c  
  
-   %&#124;pF sarà c:\.  
  
-   %&#124;fF sarà prog  
  
-   %&#124;eF sarà exe  
  
## <a name="see-also"></a>Vedere anche  
 [Comandi di un makefile](../build/commands-in-a-makefile.md)