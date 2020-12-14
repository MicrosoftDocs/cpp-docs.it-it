---
description: 'Altre informazioni su: errore del compilatore C3728'
title: Errore del compilatore C3728
ms.date: 11/04/2016
f1_keywords:
- C3728
helpviewer_keywords:
- C3728
ms.assetid: 6b510cb1-887f-4fcd-9a1f-3bb720417ed1
ms.openlocfilehash: 0cfcbd38928a153e3f5a58c1ec66b7e1c5bfd08d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245096"
---
# <a name="compiler-error-c3728"></a>Errore del compilatore C3728

' Event ': l'evento non ha un metodo Raise

I metadati creati con un linguaggio, ad esempio C#, che non consente la generazione di un evento dall'esterno della classe in cui è stata definita, è stato incluso con la direttiva [#using](../../preprocessor/hash-using-directive-cpp.md) e un programma di Visual C++ utilizzando la programmazione CLR ha tentato di generare l'evento.

Per generare un evento in un programma sviluppato in un linguaggio come C#, la classe che contiene l'evento deve anche definire un metodo pubblico che genera l'evento.
