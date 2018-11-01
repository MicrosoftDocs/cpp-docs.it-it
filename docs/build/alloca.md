---
title: alloca
ms.date: 11/04/2016
ms.topic: reference
ms.assetid: 2b209335-e3a0-4934-93f0-3b5925d22918
ms.openlocfilehash: 2c528a9cdecc52afa1e7d59f58160b247cecfee2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50491624"
---
# <a name="alloca"></a>alloca

[alloca](../c-runtime-library/reference/alloca.md) deve essere 16 byte allineato e inoltre necessari per utilizzare un puntatore ai frame.

Lo stack viene allocato deve includere lo spazio sotto di essa per i parametri delle funzioni chiamate successivamente, come descritto nella [allocazione nello Stack](../build/stack-allocation.md).

## <a name="see-also"></a>Vedere anche

[Uso dello stack](../build/stack-usage.md)