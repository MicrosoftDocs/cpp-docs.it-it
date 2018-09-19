---
title: Strumenti del linker LNK1158 errore | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK1158
dev_langs:
- C++
helpviewer_keywords:
- LNK1158
ms.assetid: 45febf16-d9e1-42db-af91-532e2717fd6a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 0ce319aa4529c74cad00342b09aa0ed98bb49ce7
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46094169"
---
# <a name="linker-tools-error-lnk1158"></a>Errore degli strumenti del linker LNK1158

non è possibile eseguire 'filename'

Il determinato file eseguibile chiamato dal [collegamento](../../build/reference/linker-command-line-syntax.md) è anziché nella directory che contiene collegamenti né in una directory specificata nella variabile di ambiente PATH.

Ad esempio, si otterrà questo errore se si prova a usare il parametro PGOPTIMIZE per il [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) l'opzione del linker in un computer con sistema operativo a 32 bit.