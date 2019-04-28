---
title: 'Errore irreversibile U1035 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1035
helpviewer_keywords:
- U1035
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
ms.openlocfilehash: 9c4055bb99243f7d20c1da90aef7b916c46c2749
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324337"
---
# <a name="nmake-fatal-error-u1035"></a>Errore irreversibile U1035 di NMAKE 

Errore di sintassi: previsto ':' o '=' separatore

Entrambi i due punti (**:**) o un segno di uguale (**=**) era previsto.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. I due punti non seguivano una destinazione.

1. I due punti e senza spazi (ad esempio r:) seguita destinazione una sola lettera. NMAKE viene interpretato come una specifica di unità.

1. I due punti non seguivano una regola di inferenza.

1. Una definizione di macro non è seguita da un segno di uguale.

1. Un carattere seguito da una barra rovesciata (**\\**) che è stato usato per continuare un comando in una nuova riga.

1. È presente una stringa che non segue alcuna regola di sintassi NMAKE.

1. Il file di progetto è stata formattata da un elaboratore di testo.