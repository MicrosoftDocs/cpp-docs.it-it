---
title: Errore di compilazione progetto PRJ0044
ms.date: 11/04/2016
f1_keywords:
- PRJ0044
helpviewer_keywords:
- PRJ0044
ms.assetid: 5d78c45a-f9e9-4d2b-a3b6-5a5d1421ab84
ms.openlocfilehash: 48b6a6beb7391901e8c824a0f8ad2bc175de11bc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50614929"
---
# <a name="project-build-error-prj0044"></a>Errore di compilazione progetto PRJ0044

La proprietà 'Dipendenze aggiuntive' per regola di compilazione personalizzata 'rule' assegnata al file 'file' non è valida. La proprietà contiene 'string' che restituisce 'value'.

Il **dipendenze aggiuntive** proprietà valutate su una stringa vuota o su una stringa che contiene caratteri non validi (qualsiasi carattere che non possono essere un nome file o directory). L'output dell'azione di compilazione è necessaria per le regole di compilazione personalizzate.

Per altre informazioni, vedere [strumenti di compilazione personalizzato specificando](../../ide/specifying-custom-build-tools.md).

## <a name="see-also"></a>Vedere anche

[Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)