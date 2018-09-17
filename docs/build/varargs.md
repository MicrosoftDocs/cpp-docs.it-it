---
title: Varargs | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: aac0c54b-0a2d-4a22-b1de-ee41381a3eb1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 8305eaddf87a2e67b797bedff1944dbcbbbdbd41
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713648"
---
# <a name="varargs"></a>Varargs

Se i parametri vengono passati tramite varargs (ad esempio, gli argomenti sui puntini di sospensione), essenzialmente il normale passaggio dei parametri applica tra cui la distribuzione dei argomenti quinto e successive. Anche in questo caso, è responsabilità del chiamato argomenti dump con gli indirizzi. Per i valori a virgola mobile, l'intera e il registro a virgola mobile e conterrà il valore float nel caso in cui il destinatario della chiamata prevede che il valore nei registri integer.

## <a name="see-also"></a>Vedere anche

[Convenzione di chiamata](../build/calling-convention.md)