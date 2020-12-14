---
description: 'Altre informazioni su: _CRTDBG_MAP_ALLOC'
title: _CRTDBG_MAP_ALLOC
ms.date: 11/04/2016
f1_keywords:
- CRTDBG_MAP_ALLOC
- _CRTDBG_MAP_ALLOC
helpviewer_keywords:
- _CRTDBG_MAP_ALLOC macro
- memory allocation, in debug builds
- CRTDBG_MAP_ALLOC macro
ms.assetid: 435242b8-caea-4063-b765-4a608200312b
ms.openlocfilehash: e2747f6da04c019b551e68c78f6f1448c48093f1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224270"
---
# <a name="_crtdbg_map_alloc"></a>_CRTDBG_MAP_ALLOC

Quando il flag **_CRTDBG_MAP_ALLOC** viene definito nella versione di debug di un'applicazione, la versione di base delle funzioni di heap viene mappata direttamente alle corrispondenti versioni di debug. Il flag viene utilizzato in Crtdbg.h per eseguire il mapping. Questo flag è disponibile solo se è stato definito il flag [_DEBUG](../c-runtime-library/debug.md) nell'applicazione.

Per altre informazioni su come usare la versione di debug rispetto alla versione di base di una funzione di heap, vedere [Using the Debug Version Versus the Base Version](/visualstudio/debugger/debug-versions-of-heap-allocation-functions) (Uso della versione di debug rispetto alla versione di base).

## <a name="see-also"></a>Vedi anche

[Flag di controllo](../c-runtime-library/control-flags.md)
