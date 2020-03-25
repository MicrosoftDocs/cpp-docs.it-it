---
title: Errore del compilatore C2692
ms.date: 11/04/2016
f1_keywords:
- C2692
helpviewer_keywords:
- C2692
ms.assetid: 02ade3b4-b757-448b-b065-d7d71bc3f441
ms.openlocfilehash: 7ce57cd50e9ec83cf80ec64e14f49eb9714f9208
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80177092"
---
# <a name="compiler-error-c2692"></a>Errore del compilatore C2692

' function_name ': le funzioni con prototipo completo sono necessarie nel compilatore C con l'opzione '/CLR '

Quando si esegue la compilazione per il codice gestito .NET, il compilatore C richiede dichiarazioni di funzione ANSI. Inoltre, se una funzione non accetta parametri, deve dichiarare in modo esplicito `void` come tipo di parametro.
