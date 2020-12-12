---
description: 'Altre informazioni su: errore del compilatore C2692'
title: Errore del compilatore C2692
ms.date: 11/04/2016
f1_keywords:
- C2692
helpviewer_keywords:
- C2692
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
ms.openlocfilehash: 5a9666bf437d65c54d0cb8c460054b2b3ebd0b55
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326684"
---
# <a name="compiler-error-c2692"></a>Errore del compilatore C2692

' function_name ': le funzioni con prototipo completo sono necessarie nel compilatore C con l'opzione '/CLR '

Quando si esegue la compilazione per il codice gestito .NET, il compilatore C richiede dichiarazioni di funzione ANSI. Inoltre, se una funzione non accetta parametri, deve dichiarare in modo esplicito **`void`** come tipo di parametro.
