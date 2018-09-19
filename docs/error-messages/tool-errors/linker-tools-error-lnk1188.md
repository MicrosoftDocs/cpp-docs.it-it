---
title: Strumenti del linker LNK1188 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1188
dev_langs:
- C++
helpviewer_keywords:
- LNK1188
ms.assetid: 4af574b0-5b41-4580-9a37-52a634add995
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 36b31590d94d809c16ed64d16071db0919f60238
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46098940"
---
# <a name="linker-tools-error-lnk1188"></a>Errore degli strumenti del linker LNK1188

BADFIXUPSECTION:: destinazione di correzione non è valido 'symbol'; possibili sezione abbia lunghezza zero

Durante un collegamento VxD, la destinazione di una rilocazione non dispone di una sezione. Con LINK386 (una versione precedente), un record gruppo OMF (generato da una direttiva di MASM gruppo) potrebbe essere stato utilizzato per combinare la sezione abbia lunghezza zero con un'altra sezione di lunghezza maggiore di zero. Formato COFF non supporta la direttiva di gruppo e sezioni di lunghezza zero. Quando LINK converte automaticamente questo tipo di oggetti OMF a COFF, questo errore può verificarsi.