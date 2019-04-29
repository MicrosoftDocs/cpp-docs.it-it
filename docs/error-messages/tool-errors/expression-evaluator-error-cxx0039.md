---
title: Errore dell‘analizzatore di espressioni CXX0039
ms.date: 11/04/2016
f1_keywords:
- CXX0039
helpviewer_keywords:
- CXX0039
- CAN0039
ms.assetid: 8bf698d2-e015-4595-944f-72b81aa43d22
ms.openlocfilehash: 053e57a21f0cb75cbd96732edb6812b3557bcd50
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396977"
---
# <a name="expression-evaluator-error-cxx0039"></a>Errore dell‘analizzatore di espressioni CXX0039

il simbolo è ambiguo

L'analizzatore di espressioni C non è possibile determinare quale istanza di un simbolo da utilizzare in un'espressione. Il simbolo è presente più volte nella struttura di ereditarietà.

È necessario usare l'operatore di risoluzione ambito (`::`) specificare in modo esplicito l'istanza da utilizzare nell'espressione.

Questo errore è identico all'errore CAN0039.