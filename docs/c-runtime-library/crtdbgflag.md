---
description: 'Altre informazioni su: _crtDbgFlag'
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
ms.openlocfilehash: ef3c72b89ea9e5e557a567af9a9c52c8e85370ce
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97246755"
---
# <a name="_crtdbgflag"></a>_crtDbgFlag

Il flag **_crtDbgFlag** è costituito da cinque campi di bit che controllano il monitoraggio, la verifica, la creazione di report e il dump delle allocazioni di memoria nella versione di debug dell'heap. I campi di bit del flag vengono impostati mediante la funzione [_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md). Questo flag e i relativi campi di bit vengono dichiarati in Crtdbg.h. Questo flag è disponibile solo se è stato definito il flag [_DEBUG](../c-runtime-library/debug.md) nell'applicazione.

Per altre informazioni sull'uso di questo flag con altre funzioni di debug, vedere [Heap State Reporting Functions](/visualstudio/debugger/crt-debug-heap-details) (Funzioni per la creazione di report sullo stato dell'heap).

## <a name="see-also"></a>Vedi anche

[Flag di controllo](../c-runtime-library/control-flags.md)
