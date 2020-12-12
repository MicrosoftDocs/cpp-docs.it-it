---
description: 'Altre informazioni su: errore del compilatore C2220'
title: Errore del compilatore C2220
ms.date: 11/04/2016
f1_keywords:
- C2220
helpviewer_keywords:
- C2220
ms.assetid: d610802c-64d7-40ad-a2a6-0ed0b6815a6c
ms.openlocfilehash: f45a34d0cdaa5e82c3f5e6c051126c6df4eb2005
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97245434"
---
# <a name="compiler-error-c2220"></a>Errore del compilatore C2220

Avviso considerato come errore-nessun file oggetto generato

[/WX](../../build/reference/compiler-option-warning-level.md) indica al compilatore di considerare tutti gli avvisi come errori. Poiché si è verificato un errore, non è stato generato alcun oggetto o file eseguibile.

Questo errore viene visualizzato solo quando viene impostato il flag **/WX** e viene generato un avviso durante la compilazione. Per correggere questo errore, è necessario eliminare ogni avviso nel progetto.

### <a name="to-fix-use-one-of-the-following-techniques"></a>Per risolvere il problema, utilizzare una delle seguenti tecniche

- Correggere i problemi che causano gli avvisi nel progetto.

- Compilare a un livello di avviso inferiore, ad esempio usare **/W3** anziché **/W4**.

- Usare un pragma [warning](../../preprocessor/warning.md) per disabilitare o eliminare un avviso specifico.

- Non usare **/WX** per la compilazione.
