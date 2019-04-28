---
title: 'Errore irreversibile U1033 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1033
helpviewer_keywords:
- U1033
ms.assetid: c146f7b5-7d5c-4329-a522-28a648546016
ms.openlocfilehash: 3b1df28e3cd7b27a9e7a130d9d71c1af68db9aec
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62324363"
---
# <a name="nmake-fatal-error-u1033"></a>Errore irreversibile U1033 di NMAKE 

Errore di sintassi: 'string' imprevisto

La stringa non fa parte della sintassi valida per un makefile.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Se la chiusura set di parentesi angolari (**<<**) per un file inline non all'inizio di una riga, si verificherà l'errore seguente:

    ```
    syntax error : 'EOF' unexpected
    ```

1. Se una definizione di macro nel makefile contiene un segno di uguale (**=**) senza precedente, assegnare un nome o se viene definito il nome è una macro che non è definito, si verifica l'errore seguente:

    ```
    syntax error : '=' unexpected
    ```

1. Se il punto e virgola (**;**) in una riga di commento in strumenti. INI non è all'inizio della riga, si verifica l'errore seguente:

    ```
    syntax error : ';' unexpected
    ```

1. Se il file di progetto sono stati formattati da un elaboratore di testo, può verificarsi l'errore seguente:

    ```
    syntax error : ':' unexpected
    ```