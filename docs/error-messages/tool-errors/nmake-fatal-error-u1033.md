---
description: 'Altre informazioni su: errore irreversibile U1033 di NMAKE'
title: 'Errore irreversibile U1033 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1033
helpviewer_keywords:
- U1033
ms.assetid: c146f7b5-7d5c-4329-a522-28a648546016
ms.openlocfilehash: e616e98a21c92137fab4b167318a9305a2175bb2
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97272136"
---
# <a name="nmake-fatal-error-u1033"></a>Errore irreversibile U1033 di NMAKE 

errore di sintassi:' String ' imprevisto

La stringa non fa parte della sintassi valida per un makefile.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Se il set di chiusura di parentesi angolari ( **<<** ) per un file inline non si trova all'inizio di una riga, si verifica l'errore seguente:

    ```
    syntax error : 'EOF' unexpected
    ```

1. Se una definizione di macro nel makefile contiene un segno di uguale ( **=** ) senza un nome precedente o se il nome definito è una macro che si espande a nulla, si verifica l'errore seguente:

    ```
    syntax error : '=' unexpected
    ```

1. Se il punto e virgola (**;**) in una riga di commento in TOOLS.INI non si trova all'inizio della riga, si verifica l'errore seguente:

    ```
    syntax error : ';' unexpected
    ```

1. Se il makefile è stato formattato da un elaboratore di testo, è possibile che si verifichi l'errore seguente:

    ```
    syntax error : ':' unexpected
    ```
