---
title: _crtDbgFlag | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: conceptual
f1_keywords:
- _crtDbgFlag
- crtDbgFlag
dev_langs:
- C++
helpviewer_keywords:
- memory allocation, tracking flag
- crtDbgFlag constant
- _crtDbgFlag constant
- debug heap, tracking memory on
- debug heap, control flags
- enable memory allocation tracking flag
- memory, tracking on the debug heap
ms.assetid: 9e7adb47-8ab9-4e19-81d5-e2f237979973
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6d9900d42a5bae3c7a613028a7ae4ffe4bdc0333
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46044912"
---
# <a name="crtdbgflag"></a>_crtDbgFlag

Il flag **_crtDbgFlag** è costituito da cinque campi di bit che controllano il monitoraggio, la verifica, la creazione di report e il dump delle allocazioni di memoria nella versione di debug dell'heap. I campi di bit del flag vengono impostati mediante la funzione [_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md). Questo flag e i relativi campi di bit vengono dichiarati in Crtdbg.h. Questo flag è disponibile solo se è stato definito il flag [_DEBUG](../c-runtime-library/debug.md) nell'applicazione.

Per altre informazioni sull'uso di questo flag con altre funzioni di debug, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap).

## <a name="see-also"></a>Vedere anche

[flag di controllo](../c-runtime-library/control-flags.md)