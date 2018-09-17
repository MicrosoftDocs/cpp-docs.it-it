---
title: struct RUNTIME_FUNCTION | Microsoft Docs
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
ms.openlocfilehash: 7f3831dc36664c556cf0a020ed87c60200443fd3
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45718237"
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