---
title: Errore irreversibile U1064 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1064
dev_langs:
- C++
helpviewer_keywords:
- U1064
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4240bf2c553957e73d5ead0bdd03ea129450645b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092999"
---
# <a name="nmake-fatal-error-u1064"></a>Errore irreversibile U1064 di NMAKE 

MAKEFILE non trovato e nessuna destinazione specificata

La riga di comando NMAKE non specificava un makefile o una destinazione e la directory corrente non contiene un file denominato MAKEFILE.

NMAKE richiede un makefile o una destinazione della riga di comando (o entrambi). Per rendere disponibile un makefile NMAKE, specificare l'opzione /F o inserire un file denominato MAKEFILE nella directory corrente. NMAKE può creare una destinazione della riga di comando usando una regola di inferenza se non viene fornito un makefile.