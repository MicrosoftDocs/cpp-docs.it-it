---
title: Errore di compilazione progetto PRJ0044
ms.date: 11/04/2016
f1_keywords:
- PRJ0044
helpviewer_keywords:
- PRJ0044
ms.assetid: 5d78c45a-f9e9-4d2b-a3b6-5a5d1421ab84
ms.openlocfilehash: 9321bb500f69c4d79da45ef9d74bc1644fb90280
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57812161"
---
# <a name="project-build-error-prj0044"></a>Errore di compilazione progetto PRJ0044

La proprietà 'Dipendenze aggiuntive' per regola di compilazione personalizzata 'rule' assegnata al file 'file' non è valida. La proprietà contiene 'string' che restituisce 'value'.

Il **dipendenze aggiuntive** proprietà valutate su una stringa vuota o su una stringa che contiene caratteri non validi (qualsiasi carattere che non possono essere un nome file o directory). L'output dell'azione di compilazione è necessaria per le regole di compilazione personalizzate.

Per altre informazioni, vedere [strumenti di compilazione personalizzato specificando](../../build/specifying-custom-build-tools.md).

## <a name="see-also"></a>Vedere anche

[Errori e avvisi relativi alla compilazione di progetti (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)