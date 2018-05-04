---
title: Accesso agli argomenti | Microsoft Docs
ms.custom: ''
ms.date: 04/04/2018
ms.technology:
- cpp-standard-libraries
ms.topic: article
f1_keywords:
- c.arguments
dev_langs:
- C++
helpviewer_keywords:
- argument access macros [C++]
- variable-length argument lists
ms.assetid: 7046ae34-a0ec-44f0-815d-3209492a3e19
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: afef1300637f7a31755eb9408f9d33d9504475a1
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="argument-access"></a>Accesso agli argomenti

Le macro **va_arg**, **va_end** e **va_start** consentono l'accesso agli argomenti delle funzioni quando il numero di argomenti è variabile. Queste macro sono definite in \<stdarg.h> per la compatibilità ANSI/ISO C e in \<varargs.h> per la compatibilità con UNIX System V.

## <a name="argument-access-macros"></a>Macro di accesso agli argomenti

|Macro|Usa|
|-----------|-------------------------------|
|[va_arg](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Recuperare l'argomento dall'elenco|
|[va_end](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Reimpostare il puntatore|
|[va_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Impostare il puntatore all'inizio dell'elenco degli argomenti|

## <a name="see-also"></a>Vedere anche

[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
