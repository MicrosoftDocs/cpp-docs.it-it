---
title: Strumenti del linker LNK4102 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4102
dev_langs:
- C++
helpviewer_keywords:
- LNK4102
ms.assetid: bfd1b17e-05c7-4bc2-80d6-2888b1a425b2
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9daaffc4ddfa9a869c2e60e2c05dc2b7e296d94b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031858"
---
# <a name="linker-tools-warning-lnk4102"></a>Avviso degli strumenti del linker LNK4102

esportazione dell'eliminazione di un distruttore 'name'; immagine non venga eseguita correttamente

Il programma ha tentato di esportare un distruttore di eliminazione. L'eliminazione risultante può verificarsi tra limiti di una DLL in modo che un processo può liberare la memoria che non è proprietario. Verificare che il simbolo specificato non sia presente nel file def e che il simbolo non è elencato come un argomento del **/importazione** oppure **/ESPORTARE** opzione nella riga di comando del linker.

Se si rigenera la libreria di runtime C, è possibile ignorare questo messaggio.