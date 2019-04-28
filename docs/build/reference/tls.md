---
title: /TLS
ms.date: 11/04/2016
f1_keywords:
- /TLS
helpviewer_keywords:
- /TLS dumpbin option
- -TLS dumpbin option
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
ms.openlocfilehash: 751c212398f3d309b1d31d204291fe3a0503cf06
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62317263"
---
# <a name="tls"></a>/TLS

Consente di visualizzare la struttura IMAGE_TLS_DIRECTORY da un file eseguibile.

## <a name="remarks"></a>Note

/ TLS consente di visualizzare i campi della struttura di TLS, nonché gli indirizzi delle funzioni di callback TLS.

Se un programma non usa l'archiviazione thread-local, l'immagine non conterrà una struttura di TLS.  Visualizzare [thread](../../cpp/thread.md) per altre informazioni.

IMAGE_TLS_DIRECTORY è definito in Winnt. h.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](dumpbin-options.md)
