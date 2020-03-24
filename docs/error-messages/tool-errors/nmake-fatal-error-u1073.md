---
title: Errore irreversibile U1073 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1073
helpviewer_keywords:
- U1073
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
ms.openlocfilehash: 97d44594540d18bf008757506a9e36e6d16d2cd7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80182695"
---
# <a name="nmake-fatal-error-u1073"></a>Errore irreversibile U1073 di NMAKE

non si sa come creare ' TargetName '

La destinazione specificata non esiste e non è disponibile alcun comando da eseguire o per applicare la regola di inferenza.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Controllare l'ortografia del nome di destinazione.

1. Se *TargetName* è un pseudo-destinazione, specificarlo come destinazione in un altro blocco di descrizione.

1. Se *TargetName* è una chiamata di macro, assicurarsi che non si espande in una stringa null.
