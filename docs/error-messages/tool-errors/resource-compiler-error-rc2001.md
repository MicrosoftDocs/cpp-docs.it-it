---
title: Errore del compilatore di risorse RC2001 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- RC2001
dev_langs:
- C++
helpviewer_keywords:
- RC2001
ms.assetid: 92bfb4c0-1879-4606-bb9f-ef7368707b4a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d75d0f906ba0d7be75ca5177bc1f58bccd226251
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039972"
---
# <a name="resource-compiler-error-rc2001"></a>Errore del compilatore di risorse RC2001

nuova riga nella costante

Costante stringa continua sulla seconda riga senza la presenza di una barra rovesciata (**\\**) o la chiusura e apertura racchiusi tra virgolette doppie (**"**).

Per interrompere una costante stringa che viene eseguita su due righe nel file di origine, eseguire una delle operazioni seguenti:

- La prima riga con il carattere di continuazione di riga, una barra rovesciata finale.

- Chiudere la stringa nella prima riga con un segno di virgolette doppie e aprire la stringa nella riga successiva con un'altra virgoletta.

Non è sufficiente terminare la prima riga con \n, la sequenza di escape per l'incorporamento di un carattere di nuova riga nella costante di stringa.