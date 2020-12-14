---
description: 'Altre informazioni su: errore irreversibile U1035 di NMAKE'
title: 'Errore irreversibile U1035 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1035
helpviewer_keywords:
- U1035
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
ms.openlocfilehash: e41b65cbec43a0b19e06767c555df9cfede9b69c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197751"
---
# <a name="nmake-fatal-error-u1035"></a>Errore irreversibile U1035 di NMAKE 

errore di sintassi: è previsto il separatore ':' o ' ='

Era previsto un segno di due punti (**:**) o un segno di uguale ( **=** ).

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. I due punti non hanno seguito una destinazione.

1. I due punti e nessuno spazio (ad esempio:) seguito da una destinazione di una sola lettera. NMAKE è stato interpretato come specifica di unità.

1. I due punti non seguono una regola di inferenza.

1. Una definizione di macro non è seguita da un segno di uguale.

1. Un carattere seguito da una barra rovesciata ( **\\** ) utilizzata per continuare un comando in una nuova riga.

1. Si è verificata una stringa che non segue alcuna regola di sintassi NMAKE.

1. Il makefile è stato formattato da un elaboratore di testo.
