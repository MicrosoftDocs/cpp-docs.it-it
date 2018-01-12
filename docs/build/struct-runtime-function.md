---
title: struct RUNTIME_FUNCTION | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: 84386527-d3aa-41c5-871d-78e3e1913704
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c05dcd516af5c078b4e4e664bae16f65370ca117
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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