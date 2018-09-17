---
title: setjmp longjump | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b0e21902-095d-4198-8f9a-b6326525721a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: f53160a5deeb3ea0db111fc0aae7429b19b7cc86
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45703274"
---
# <a name="setjmplongjump"></a>setjmp/longjump

Quando si include setjmp. h o setjmpex, tutte le chiamate a [setjmp](../c-runtime-library/reference/setjmp.md) oppure [longjmp](../c-runtime-library/reference/longjmp.md) comporterà un'operazione di rimozione che richiama i distruttori e infine viene chiamato.  Questo comportamento è diverso da x86, in cui ad esempio i risultati di setjmp. h in clausole finally e i distruttori non richiamati.

Una chiamata a `setjmp` mantiene il puntatore dello stack corrente, registri non volatili e registri MxCsr.  Le chiamate a `longjmp` tornare al più recente `setjmp` chiamare sito e reimposta il puntatore dello stack, i registri non volatili e MxCsr registra, lo stato come mantenuto dal più recente `setjmp` chiamare.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)