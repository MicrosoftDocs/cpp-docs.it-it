---
title: /TLS
ms.date: 11/04/2016
f1_keywords:
- /TLS
helpviewer_keywords:
- /TLS dumpbin option
- -TLS dumpbin option
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
ms.openlocfilehash: c125a6439e6cda2159a8bde2317528e667eaf310
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50532635"
---
# <a name="tls"></a>/TLS

Consente di visualizzare la struttura IMAGE_TLS_DIRECTORY da un file eseguibile.

## <a name="remarks"></a>Note

/ TLS consente di visualizzare i campi della struttura di TLS, nonché gli indirizzi delle funzioni di callback TLS.

Se un programma non usa l'archiviazione thread-local, l'immagine non conterrà una struttura di TLS.  Visualizzare [thread](../../cpp/thread.md) per altre informazioni.

IMAGE_TLS_DIRECTORY è definito in Winnt. h.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)