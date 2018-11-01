---
title: Errore degli strumenti del linker LNK1158
ms.date: 11/04/2016
f1_keywords:
- LNK1158
helpviewer_keywords:
- LNK1158
ms.assetid: 45febf16-d9e1-42db-af91-532e2717fd6a
ms.openlocfilehash: f2e3e1d9948960beed631861c5981f2d09daf632
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50455939"
---
# <a name="linker-tools-error-lnk1158"></a>Errore degli strumenti del linker LNK1158

non è possibile eseguire 'filename'

Il determinato file eseguibile chiamato dal [collegamento](../../build/reference/linker-command-line-syntax.md) è anziché nella directory che contiene collegamenti né in una directory specificata nella variabile di ambiente PATH.

Ad esempio, si otterrà questo errore se si prova a usare il parametro PGOPTIMIZE per il [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) l'opzione del linker in un computer con sistema operativo a 32 bit.