---
title: Manipolatori dei flussi di input
ms.date: 11/04/2016
helpviewer_keywords:
- input streams, manipulators
- input stream objects
ms.assetid: 0addcacb-7b7b-4d70-9775-a59abc400fb3
ms.openlocfilehash: d9a6f00f1b5a52d4d388ace376676b45547bdd49
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68451034"
---
# <a name="input-stream-manipulators"></a>Manipolatori dei flussi di input

Molti manipolatori, ad esempio la [precisione](../standard-library/iomanip-functions.md#setprecision), sono definiti per la `ios` classe e quindi si applicano ai flussi di input. Alcuni manipolatori tuttavia incidono sugli oggetti di flusso di input. Di questi, i più importanti sono i manipolatori base, `dec`, `oct` e `hex`, che determinano la base di conversione usata con i numeri provenienti dal flusso di input.

In fase di estrazione, il manipolatore `hex` consente l'elaborazione di diversi formati di input. Ad esempio, c, C, 0xc, 0xC, 0Xc e 0XC vengono tutti interpretati come l'intero decimale 12. Qualsiasi carattere diverso da quelli compresi tra 0 e 9, tra A e F, tra a e f, nonché da x e X termina la conversione numerica. La sequenza `"124n5"` viene pertanto convertita nel numero 124 con il bit [basic_ios::fail](../standard-library/basic-ios-class.md#fail) impostato.

## <a name="see-also"></a>Vedere anche

[Flussi di input](../standard-library/input-streams.md)
