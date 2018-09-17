---
title: Esecuzione di un programma di pre-elaborazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- program execution [C++]
ms.assetid: 5ecf123a-20e5-40cd-b8d8-dd5a9fdd4b24
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e2b0571e67e7c5d24cf31dce6fce548735cad966
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45721461"
---
# <a name="executing-a-program-in-preprocessing"></a>Esecuzione di un programma durante la pre-elaborazione

Per usare il codice di uscita del comando durante la pre-elaborazione, specificare il comando, con tutti gli argomenti, racchiusi tra parentesi quadre ([]). Tutte le macro vengono espanse prima dell'esecuzione del comando. NMAKE sostituisce la specifica del comando con codice di uscita del comando, che può essere usate in un'espressione per controllare la pre-elaborazione.

## <a name="see-also"></a>Vedere anche

[Espressioni nella pre-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)