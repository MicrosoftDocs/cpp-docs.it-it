---
title: /TLS
ms.date: 11/04/2016
f1_keywords:
- /TLS
helpviewer_keywords:
- /TLS dumpbin option
- -TLS dumpbin option
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
ms.openlocfilehash: 1760e94046a950f67d3c3fd7ef13aa40ca7de47a
ms.sourcegitcommit: bff17488ac5538b8eaac57156a4d6f06b37d6b7f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/05/2019
ms.locfileid: "57417788"
---
# <a name="tls"></a>/TLS

Consente di visualizzare la struttura IMAGE_TLS_DIRECTORY da un file eseguibile.

## <a name="remarks"></a>Note

/ TLS consente di visualizzare i campi della struttura di TLS, nonché gli indirizzi delle funzioni di callback TLS.

Se un programma non usa l'archiviazione thread-local, l'immagine non conterrà una struttura di TLS.  Visualizzare [thread](../../cpp/thread.md) per altre informazioni.

IMAGE_TLS_DIRECTORY è definito in Winnt. h.

## <a name="see-also"></a>Vedere anche

[Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
