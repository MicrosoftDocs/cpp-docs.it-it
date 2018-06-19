---
title: Manipolatori dei flussi di input | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- input streams, manipulators
- input stream objects
ms.assetid: 0addcacb-7b7b-4d70-9775-a59abc400fb3
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 30f642dc4942491bd73265e3d647d3281f97c1e7
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33842205"
---
# <a name="input-stream-manipulators"></a>Manipolatori dei flussi di input

Molti manipolatori, ad esempio [setprecision](../standard-library/iomanip-functions.md#setprecision), vengono definiti per il `ios` classe e si applicano ai flussi di input. Alcuni manipolatori tuttavia incidono sugli oggetti di flusso di input. Di questi, i più importanti sono i manipolatori base, `dec`, `oct` e `hex`, che determinano la base di conversione usata con i numeri provenienti dal flusso di input.

In fase di estrazione, il manipolatore `hex` consente l'elaborazione di diversi formati di input. Ad esempio, c, C, 0xc, 0xC, 0Xc e 0XC vengono tutti interpretati come l'intero decimale 12. Qualsiasi carattere diverso da quelli compresi tra 0 e 9, tra A e F, tra a e f, nonché da x e X termina la conversione numerica. La sequenza `"124n5"` viene pertanto convertita nel numero 124 con il bit [basic_ios::fail](../standard-library/basic-ios-class.md#fail) impostato.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)<br/>
