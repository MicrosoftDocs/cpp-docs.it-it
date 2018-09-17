---
title: -TLS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /TLS
dev_langs:
- C++
helpviewer_keywords:
- /TLS dumpbin option
- -TLS dumpbin option
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 78f485a783dbe8b5fe9a49ed3100754115bf50b8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45714672"
---
# <a name="tls"></a>/TLS

Consente di visualizzare la struttura IMAGE_TLS_DIRECTORY da un file eseguibile.

## <a name="remarks"></a>Note

/ TLS consente di visualizzare i campi della struttura di TLS, nonché gli indirizzi delle funzioni di callback TLS.

Se un programma non usa l'archiviazione thread-local, l'immagine non conterrà una struttura di TLS.  Visualizzare [thread](../../cpp/thread.md) per altre informazioni.

IMAGE_TLS_DIRECTORY è definito in Winnt. h.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)