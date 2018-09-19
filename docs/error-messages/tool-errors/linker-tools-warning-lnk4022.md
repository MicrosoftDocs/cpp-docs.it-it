---
title: Strumenti del linker LNK4022 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4022
dev_langs:
- C++
helpviewer_keywords:
- LNK4022
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 644e7a9ba26dab15e2bfa2a269f62c04f0510180
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040999"
---
# <a name="linker-tools-warning-lnk4022"></a>Avviso degli strumenti del linker LNK4022

non è possibile trovare una corrispondenza univoca per il simbolo 'symbol'

COLLEGAMENTO o LIB trovato più corrispondente per il simbolo non decorato specificato e non è stato possibile risolvere l'ambiguità. Non viene generato alcun file di output (.exe, DLL, EXP o con estensione LIB). Questo avviso è seguito da un avviso [LNK4002](../../error-messages/tool-errors/linker-tools-warning-lnk4002.md) per ogni duplicato simbolo e infine viene seguito dall'errore irreversibile [LNK1152](../../error-messages/tool-errors/linker-tools-error-lnk1152.md).

Per evitare questo avviso, specificare il simbolo nel formato decorato. Eseguire [DUMPBIN](../../build/reference/dumpbin-options.md) sull'oggetto per vedere i nomi decorati.