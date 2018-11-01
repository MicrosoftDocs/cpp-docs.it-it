---
title: 'Errore irreversibile U1073 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1073
helpviewer_keywords:
- U1073
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
ms.openlocfilehash: 2aa02fd86906bd545373a313fa5e6e409ffb3cf9
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50582273"
---
# <a name="nmake-fatal-error-u1073"></a>Errore irreversibile U1073 di NMAKE 

informazioni su come rendere 'targetname'

La destinazione specificata non esiste e non esiste un comando da eseguire o nelle regole di inferenza da applicare.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Controllare l'ortografia del nome della destinazione.

1. Se *targetname* è pseudo, specificarla come destinazione in un altro blocco di descrizione.

1. Se *targetname* è una chiamata di macro, assicurarsi non si espande in una stringa null.