---
title: Errore del compilatore C3728 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3728
dev_langs:
- C++
helpviewer_keywords:
- C3728
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: e412824bd2afdadfc21d71b73f38eb8ba5ace82d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46108417"
---
# <a name="compiler-error-c3728"></a>Errore del compilatore C3728

'event': evento non ha un metodo di generazione

Metadati creati con un linguaggio, ad esempio c#, che non supporta un evento da generare dall'esterno della classe in cui è stato definito, è stato incluso il [#using](../../preprocessor/hash-using-directive-cpp.md) direttiva e un programma Visual C++ tramite la programmazione CLR ha tentata di generare l'evento.

Per generare un evento in un'applicazione sviluppata in un linguaggio come c#, la classe che contiene l'evento deve anche definire un metodo pubblico che genera l'evento.