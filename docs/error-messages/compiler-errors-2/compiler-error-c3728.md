---
title: Errore del compilatore C3728
ms.date: 11/04/2016
f1_keywords:
- C3728
helpviewer_keywords:
- C3728
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
ms.openlocfilehash: 8aec3ae1ff629ef7fa000182cde29e306a471315
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80165874"
---
# <a name="compiler-error-c3728"></a>Errore del compilatore C3728

' Event ': l'evento non ha un metodo Raise

I metadati creati con un linguaggio, ad C#esempio, che non consente la generazione di un evento dall'esterno della classe in cui è stata definita, è stato incluso con la direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) e un programma C++ visivo che utilizza la programmazione CLR ha tentato di generare l'evento.

Per generare un evento in un programma sviluppato in un linguaggio C#, ad esempio, la classe che contiene l'evento deve definire anche un metodo pubblico che genera l'evento.
