---
title: Errore degli strumenti del linker LNK1158
ms.date: 11/04/2016
f1_keywords:
- LNK1158
helpviewer_keywords:
- LNK1158
ms.assetid: 45febf16-d9e1-42db-af91-532e2717fd6a
ms.openlocfilehash: 0dbb40fb1fe0405f3685a5e7246ecba2b53ec526
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62254969"
---
# <a name="linker-tools-error-lnk1158"></a>Errore degli strumenti del linker LNK1158

non è possibile eseguire 'filename'

Il determinato file eseguibile chiamato dal [collegamento](../../build/reference/linking.md) è anziché nella directory che contiene collegamenti né in una directory specificata nella variabile di ambiente PATH.

Ad esempio, si otterrà questo errore se si prova a usare il parametro PGOPTIMIZE per il [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) l'opzione del linker in un computer con sistema operativo a 32 bit.