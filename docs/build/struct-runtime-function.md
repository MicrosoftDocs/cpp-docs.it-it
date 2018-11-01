---
title: struct RUNTIME_FUNCTION
ms.date: 11/04/2016
ms.assetid: 84386527-d3aa-41c5-871d-78e3e1913704
ms.openlocfilehash: 6b113f6cf1e9951f9e4578e15c9ed0af3d036fa6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50520250"
---
# <a name="struct-runtimefunction"></a>struct RUNTIME_FUNCTION

La gestione delle eccezioni basato su tabella richiede una voce della tabella per tutte le funzioni che allocano lo spazio dello stack o chiamare un'altra funzione (ad esempio, le funzioni non foglia). Le voci della tabella (funzione) hanno il formato:

|||
|-|-|
|ULONG|Indirizzo iniziale (funzione)|
|ULONG|Indirizzo finale (funzione)|
|ULONG|Indirizzo di UNWIND_INFO|

La struttura RUNTIME_FUNCTION deve essere allineata DWORD in memoria. Tutti gli indirizzi sono relativa immagine, vale a dire, sono offset a 32 bit di indirizzo iniziale dell'immagine che contiene la voce della tabella (funzione). Queste voci sono ordinate e inserite nella sezione pdata di un'immagine di PE32 +. Per le funzioni generate in modo dinamico [compilatori JIT], il runtime per supportare queste funzioni è necessario usare RtlInstallFunctionTableCallback o RtlAddFunctionTable per fornire queste informazioni al sistema operativo. In caso contrario genererà eccezione non affidabili la gestione e il debug dei processi.

## <a name="see-also"></a>Vedere anche

[Dati di rimozione per la gestione delle eccezioni, supporto del debugger](../build/unwind-data-for-exception-handling-debugger-support.md)