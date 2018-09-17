---
title: . File ilk come Input del Linker | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- ILK files
- .ilk files
ms.assetid: 7324c104-9e5d-423d-b268-b59f92607bf2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f3b8de3758daf59a543cdcc9f3b73e1d6c6f0ce8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45720590"
---
# <a name="ilk-files-as-linker-input"></a>File ILK come input del linker

Quando si collegano in modo incrementale, collegamento Aggiorna il file di stato ilk creato durante il primo collegamento incrementale. Questo file ha lo stesso nome base file .exe o il file con estensione dll e ha l'estensione ilk. Durante i collegamenti incrementali successivi collegamento Aggiorna il file ilk. Se il file ilk è mancante, LINK esegue un collegamento completo e crea un nuovo file ilk. Se il file ILK non è utilizzabile, LINK esegue un collegamento non incrementale. Per informazioni dettagliate su collegamento incrementale, vedere la [collegamento incrementale (/Incremental)](../../build/reference/incremental-link-incrementally.md) opzione.

## <a name="see-also"></a>Vedere anche

[File di input LINK](../../build/reference/link-input-files.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)