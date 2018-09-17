---
title: Ordine delle opzioni CL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- cl
dev_langs:
- C++
helpviewer_keywords:
- cl.exe compiler, setting options
ms.assetid: 300908ce-ae00-4b45-964b-e4e69ff6777b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3ffe9a440396df14823775db335e52bca6cacdb3
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45725023"
---
# <a name="order-of-cl-options"></a>Ordine delle opzioni CL

Le opzioni possono apparire in un punto qualsiasi nella riga di comando CL, ad eccezione dell'opzione /link, che deve verificarsi ultima. Il compilatore inizia con le opzioni specificate nel [variabile di ambiente CL](../../build/reference/cl-environment-variables.md) , quindi la riga di comando viene letto da sinistra a destra, ovvero l'elaborazione dei file di comando nell'ordine in cui li incontra. Ogni opzione si applica a tutti i file nella riga di comando. Se vengono rilevate CL opzioni in conflitto, viene usata l'opzione all'estrema destra.

## <a name="see-also"></a>Vedere anche

[Sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md)