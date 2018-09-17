---
title: Alloca | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 2b209335-e3a0-4934-93f0-3b5925d22918
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e0c73abcb52b991ee6bd4de839861aa4ef684181
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45702746"
---
# <a name="alloca"></a>alloca

[alloca](../c-runtime-library/reference/alloca.md) deve essere 16 byte allineato e inoltre necessari per utilizzare un puntatore ai frame.

Lo stack viene allocato deve includere lo spazio sotto di essa per i parametri delle funzioni chiamate successivamente, come descritto nella [allocazione nello Stack](../build/stack-allocation.md).

## <a name="see-also"></a>Vedere anche

[Uso dello stack](../build/stack-usage.md)