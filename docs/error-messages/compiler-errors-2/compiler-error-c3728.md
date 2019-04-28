---
title: Errore del compilatore C3728
ms.date: 11/04/2016
f1_keywords:
- C3728
helpviewer_keywords:
- C3728
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
ms.openlocfilehash: 68aa23843b0470f15f409b6f3b58624f979ccfae
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62328107"
---
# <a name="compiler-error-c3728"></a>Errore del compilatore C3728

'event': evento non ha un metodo di generazione

Metadati creati con un linguaggio, ad esempio c#, che non supporta un evento da generare dall'esterno della classe in cui è stato definito, è stato incluso il [#using](../../preprocessor/hash-using-directive-cpp.md) direttiva e un programma Visual C++ tramite la programmazione CLR ha tentata di generare l'evento.

Per generare un evento in un'applicazione sviluppata in un linguaggio come c#, la classe che contiene l'evento deve anche definire un metodo pubblico che genera l'evento.