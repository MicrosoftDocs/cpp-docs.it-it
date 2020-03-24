---
title: Errore dell‘analizzatore di espressioni CXX0033
ms.date: 11/04/2016
f1_keywords:
- CXX0033
helpviewer_keywords:
- CAN0033
- CXX0033
ms.assetid: 0bd62c5b-de89-481f-9b12-88fe84805afe
ms.openlocfilehash: 2916808d98f1fabc2157fbedc96d76e196661279
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80195513"
---
# <a name="expression-evaluator-error-cxx0033"></a>Errore dell‘analizzatore di espressioni CXX0033

errore nelle informazioni sul tipo OMF

Il file eseguibile non dispone di un formato di modulo oggetto (OMF) valido per il debug.

Questo errore è identico a CAN0033.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolvere il problema, verificare le seguenti cause possibili:

1. Il file eseguibile non è stato creato con il linker rilasciato con questa versione C++di Visual. Ricollegare il codice oggetto utilizzando la versione corrente di LINK. exe.

1. Il file con estensione exe potrebbe essere danneggiato. Ricompilare e ricollegare il programma.
