---
title: _crtDbgFlag
ms.date: 11/04/2016
f1_keywords:
- _crtDbgFlag
- crtDbgFlag
helpviewer_keywords:
- memory allocation, tracking flag
- crtDbgFlag constant
- _crtDbgFlag constant
- debug heap, tracking memory on
- debug heap, control flags
- enable memory allocation tracking flag
- memory, tracking on the debug heap
ms.assetid: 9e7adb47-8ab9-4e19-81d5-e2f237979973
ms.openlocfilehash: 5abb0418b5ffb1f95bf7b362f621f99f411094d6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50435295"
---
# <a name="crtdbgflag"></a>_crtDbgFlag

Il flag **_crtDbgFlag** è costituito da cinque campi di bit che controllano il monitoraggio, la verifica, la creazione di report e il dump delle allocazioni di memoria nella versione di debug dell'heap. I campi di bit del flag vengono impostati mediante la funzione [_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md). Questo flag e i relativi campi di bit vengono dichiarati in Crtdbg.h. Questo flag è disponibile solo se è stato definito il flag [_DEBUG](../c-runtime-library/debug.md) nell'applicazione.

Per altre informazioni sull'uso di questo flag con altre funzioni di debug, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap).

## <a name="see-also"></a>Vedere anche

[flag di controllo](../c-runtime-library/control-flags.md)