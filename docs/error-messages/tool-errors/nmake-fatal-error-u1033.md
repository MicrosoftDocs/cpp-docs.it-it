---
title: Errore irreversibile U1033 di NMAKE
ms.date: 11/04/2016
f1_keywords:
- U1033
helpviewer_keywords:
- U1033
ms.assetid: c146f7b5-7d5c-4329-a522-28a648546016
ms.openlocfilehash: 4511b15c84479c3531a3bea85964e2768de0181f
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173387"
---
# <a name="nmake-fatal-error-u1033"></a>Errore irreversibile U1033 di NMAKE

errore di sintassi:' String ' imprevisto

La stringa non fa parte della sintassi valida per un makefile.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Se il set di parentesi acute ( **<<** ) di chiusura per un file inline non si trova all'inizio di una riga, si verifica l'errore seguente:

    ```
    syntax error : 'EOF' unexpected
    ```

1. Se una definizione di macro nel makefile contiene un segno di uguale ( **=** ) senza un nome precedente o se il nome definito è una macro che si espande a nulla, si verifica l'errore seguente:

    ```
    syntax error : '=' unexpected
    ```

1. Se il punto e virgola ( **;** ) in una riga di commento in Tools. INI non si trova all'inizio della riga, si verifica l'errore seguente:

    ```
    syntax error : ';' unexpected
    ```

1. Se il makefile è stato formattato da un elaboratore di testo, è possibile che si verifichi l'errore seguente:

    ```
    syntax error : ':' unexpected
    ```
