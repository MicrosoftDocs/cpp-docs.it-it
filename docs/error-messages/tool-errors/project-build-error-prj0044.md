---
title: Errore di compilazione PRJ0044 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0044
dev_langs:
- C++
helpviewer_keywords:
- PRJ0044
ms.assetid: 5d78c45a-f9e9-4d2b-a3b6-5a5d1421ab84
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ac5ac11ae8622e2f153effd2cfb5ab0055414331
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46028493"
---
# <a name="project-build-error-prj0044"></a>Errore di compilazione progetto PRJ0044

La proprietà 'Dipendenze aggiuntive' per regola di compilazione personalizzata 'rule' assegnata al file 'file' non è valida. La proprietà contiene 'string' che restituisce 'value'.

Il **dipendenze aggiuntive** proprietà valutate su una stringa vuota o su una stringa che contiene caratteri non validi (qualsiasi carattere che non possono essere un nome file o directory). L'output dell'azione di compilazione è necessaria per le regole di compilazione personalizzate.

Per altre informazioni, vedere [strumenti di compilazione personalizzato specificando](../../ide/specifying-custom-build-tools.md).

## <a name="see-also"></a>Vedere anche

[Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)