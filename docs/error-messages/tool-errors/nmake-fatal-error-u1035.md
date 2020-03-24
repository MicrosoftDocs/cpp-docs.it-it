---
title: Errore irreversibile U1035 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1035
helpviewer_keywords:
- U1035
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
ms.openlocfilehash: 3eda424574dfa48901cf4dc6aea3b28beb739dc0
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80193719"
---
# <a name="nmake-fatal-error-u1035"></a>Errore irreversibile U1035 di NMAKE

errore di sintassi: è previsto il separatore ':' o ' ='

Era previsto un segno di due punti ( **:** ) o un segno di uguale ( **=** ).

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. I due punti non hanno seguito una destinazione.

1. I due punti e nessuno spazio (ad esempio:) seguito da una destinazione di una sola lettera. NMAKE è stato interpretato come specifica di unità.

1. I due punti non seguono una regola di inferenza.

1. Una definizione di macro non è seguita da un segno di uguale.

1. Un carattere seguito da una barra rovesciata ( **\\** ) utilizzata per continuare un comando in una nuova riga.

1. Si è verificata una stringa che non segue alcuna regola di sintassi NMAKE.

1. Il makefile è stato formattato da un elaboratore di testo.
