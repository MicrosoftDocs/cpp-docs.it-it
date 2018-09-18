---
title: Errore irreversibile C1211 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1211
dev_langs:
- C++
helpviewer_keywords:
- C1211
ms.assetid: df0ca70d-ec6e-4400-926a-b877e2599978
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 444d2bc25c2eddd5ea9a0170272bd3e71b61f94f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46018528"
---
# <a name="fatal-error-c1211"></a>Errore irreversibile C1211

L'attributo personalizzato TypeForwardedTo non è supportato dalla versione del runtime installata

L'errore C1211 si verifica quando è presente un compilatore per la versione corrente, ma un Common Language Runtime di una versione precedente.

Alcune funzionalità del compilatore potrebbero non funzionare in una versione precedente del runtime.

Per risolvere l'errore C1211, installare Common Language Runtime fornito con il compilatore in uso.

Per altre informazioni, vedere [l'inoltro di tipi (C + + CLI)](../../windows/type-forwarding-cpp-cli.md).