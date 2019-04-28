---
title: Avviso del compilatore C4962
ms.date: 11/04/2016
f1_keywords:
- C4962
helpviewer_keywords:
- C4962
ms.assetid: 62b156fe-04e5-4a6e-9339-6ab148185f87
ms.openlocfilehash: e3f7b715da3774d8289fdd526cf1fa0b5bdddba6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62280802"
---
# <a name="compiler-warning-c4962"></a>Avviso del compilatore C4962

'function': Ottimizzazioni PGO disabilitate perché le ottimizzazioni provocano l'incoerenza dei dati del profilo"

Una funzione non è stata compilata con /LTCG:PGO perché i dati del conteggio (profilo) per la funzione non erano affidabili. Ripetere la profilatura per rigenerare il file PGC che contiene i dati del profilo non affidabili per tale funzione.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).