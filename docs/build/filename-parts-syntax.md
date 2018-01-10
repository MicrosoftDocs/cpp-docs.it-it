---
title: Sintassi di nomi file | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- syntax, filename-parts
- filename-parts syntax in NMAKE
- NMAKE program, syntax
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a481f8c461cb4fddd4acb090edb2f2b5fd18636d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="filename-parts-syntax"></a>Sintassi relativa ai nomi file
Sintassi di nomi file nei comandi rappresenta i componenti del primo nome file dipendenti (che può essere un dipendente implicito). FileName componenti sono unità del file, percorso, nome di base e l'estensione come specificato, non quelli presenti sul disco. Utilizzare **%s** per rappresentare il nome file completo. Utilizzare **% &#124;** [*parti*]**F** (una barra verticale carattere segue il simbolo di percentuale) rappresentano le parti del nome file, in cui *parti* può essere zero o più lettere seguenti, in qualsiasi ordine.  
  
|Lettera|Descrizione|  
|------------|-----------------|  
|Nessuna lettera|Nome completo (uguale a **%s**)|  
|**d**|Unità|  
|**p**|Path|  
|**f**|Nome del file base|  
|**e**|Estensione di file|  
  
 Ad esempio, se il nome del file è c:\prog.exe:  
  
-   %s sarà c:\prog.exe  
  
-   % &#124; F sarà c:\prog.exe  
  
-   % &#124; dF che sarà c  
  
-   % &#124; pF sarà c:\.  
  
-   % &#124; fF sarà prog  
  
-   % &#124; eF sarà exe  
  
## <a name="see-also"></a>Vedere anche  
 [Comandi di un makefile](../build/commands-in-a-makefile.md)