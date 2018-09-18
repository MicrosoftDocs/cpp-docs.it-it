---
title: Errore irreversibile U1033 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1033
dev_langs:
- C++
helpviewer_keywords:
- U1033
ms.assetid: c146f7b5-7d5c-4329-a522-28a648546016
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7492e5fd77f8e88b2191174f84c298c6166d8d89
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46066381"
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