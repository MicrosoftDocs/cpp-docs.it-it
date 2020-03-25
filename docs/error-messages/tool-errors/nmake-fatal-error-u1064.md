---
title: Errore irreversibile U1064 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1064
helpviewer_keywords:
- U1064
ms.assetid: 7141e66e-cde6-4173-84df-a391f3ebcdd1
ms.openlocfilehash: bfc42c458c1932287f17f367d09c4b23c2c201a4
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182825"
---
# <a name="nmake-fatal-error-u1064"></a>Errore irreversibile U1064 di NMAKE

MAKEFILE non trovato e nessuna destinazione specificata

La riga di comando NMAKE non ha specificato un makefile o una destinazione e la directory corrente non contiene un file denominato MAKEFILE.

Per NMAKE è necessario un makefile o una destinazione da riga di comando (o entrambi). Per rendere disponibile un makefile per NMAKE, specificare l'opzione/F oppure inserire un file denominato MAKEFILE nella directory corrente. NMAKE può creare una destinazione da riga di comando usando una regola di inferenza se non viene fornito un makefile.
