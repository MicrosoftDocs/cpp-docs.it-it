---
title: 'Errore irreversibile U1064 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1064
helpviewer_keywords:
- U1064
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
ms.openlocfilehash: 71213391032989e5faf8889761b29194928125a0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62367408"
---
# <a name="nmake-fatal-error-u1064"></a>Errore irreversibile U1064 di NMAKE 

MAKEFILE non trovato e nessuna destinazione specificata

La riga di comando NMAKE non specificava un makefile o una destinazione e la directory corrente non contiene un file denominato MAKEFILE.

NMAKE richiede un makefile o una destinazione della riga di comando (o entrambi). Per rendere disponibile un makefile NMAKE, specificare l'opzione /F o inserire un file denominato MAKEFILE nella directory corrente. NMAKE può creare una destinazione della riga di comando usando una regola di inferenza se non viene fornito un makefile.