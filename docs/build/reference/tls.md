---
description: Altre informazioni su:/TLS
title: /TLS
ms.date: 11/04/2016
f1_keywords:
- /TLS
helpviewer_keywords:
- /TLS dumpbin option
- -TLS dumpbin option
ms.assetid: 2b3f48f9-cac4-4351-b15c-2833b43bc709
ms.openlocfilehash: a21ef03210a65bb50899ba3907911272ac52b0db
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97229951"
---
# <a name="tls"></a>/TLS

Visualizza la struttura di IMAGE_TLS_DIRECTORY da un file eseguibile.

## <a name="remarks"></a>Commenti

/TLS Visualizza i campi della struttura TLS, nonché gli indirizzi delle funzioni di callback TLS.

Se un programma non utilizza l'archiviazione locale di thread, la relativa immagine non conterrà una struttura TLS.  Per ulteriori informazioni, vedere [thread](../../cpp/thread.md) .

IMAGE_TLS_DIRECTORY è definito in Winnt. h.

## <a name="see-also"></a>Vedi anche

[Opzioni di DUMPBIN](dumpbin-options.md)
