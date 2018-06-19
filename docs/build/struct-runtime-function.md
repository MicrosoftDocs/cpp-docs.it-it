---
title: struct RUNTIME_FUNCTION | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 84386527-d3aa-41c5-871d-78e3e1913704
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c2f28380d4a14cf7617653ede20468c45649a8b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379926"
---
# <a name="struct-runtimefunction"></a>struct RUNTIME_FUNCTION
Gestione delle eccezioni basato su tabella richiede una voce della tabella per tutte le funzioni che allocano spazio dello stack o chiamare un'altra funzione (ad esempio, le funzioni non foglia). Le voci della tabella (funzione) hanno il formato:  
  
|||  
|-|-|  
|ULONG|Indirizzo iniziale (funzione)|  
|ULONG|Indirizzo finale (funzione)|  
|ULONG|Indirizzo di UNWIND_INFO|  
  
 La struttura RUNTIME_FUNCTION deve essere allineata DWORD in memoria. Tutti gli indirizzi sono immagine relativo, vale a dire, offset a 32 bit dall'indirizzo iniziale dell'immagine che contiene la voce della tabella (funzione). Queste voci sono ordinate e inserite nella sezione pdata di un'immagine PE32 +. Per le funzioni generate dinamicamente [compilatori JIT], il runtime di supportare queste funzioni deve utilizzare RtlInstallFunctionTableCallback o RtlAddFunctionTable per fornire queste informazioni per il sistema operativo. In caso contrario verrà generata eccezione non affidabile la gestione e il debug dei processi.  
  
## <a name="see-also"></a>Vedere anche  
 [Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)