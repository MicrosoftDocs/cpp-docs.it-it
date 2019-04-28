---
title: Avviso degli strumenti del linker LNK4022
ms.date: 11/04/2016
f1_keywords:
- LNK4022
helpviewer_keywords:
- LNK4022
ms.assetid: 890f487e-db98-45dd-a226-c7ccead82b1e
ms.openlocfilehash: 1c9ccfe6ca201ae4deed69c7d01429c67cce4bda
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62298466"
---
# <a name="linker-tools-warning-lnk4022"></a>Avviso degli strumenti del linker LNK4022

non è possibile trovare una corrispondenza univoca per il simbolo 'symbol'

COLLEGAMENTO o LIB trovato più corrispondente per il simbolo non decorato specificato e non è stato possibile risolvere l'ambiguità. Non viene generato alcun file di output (.exe, DLL, EXP o con estensione LIB). Questo avviso è seguito da un avviso [LNK4002](../../error-messages/tool-errors/linker-tools-warning-lnk4002.md) per ogni duplicato simbolo e infine viene seguito dall'errore irreversibile [LNK1152](../../error-messages/tool-errors/linker-tools-error-lnk1152.md).

Per evitare questo avviso, specificare il simbolo nel formato decorato. Eseguire [DUMPBIN](../../build/reference/dumpbin-options.md) sull'oggetto per vedere i nomi decorati.