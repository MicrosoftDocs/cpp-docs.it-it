---
title: Errore del compilatore C2567
ms.date: 11/04/2016
f1_keywords:
- C2567
helpviewer_keywords:
- C2567
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
ms.openlocfilehash: 921992c678c1de0b74f99f544173478ebe809b2c
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80177456"
---
# <a name="compiler-error-c2567"></a>Errore del compilatore C2567

non è possibile aprire i metadati in ' file '. è possibile che il file sia stato eliminato o spostato

Un file di metadati a cui si fa riferimento nell'origine (con `#using`) non è stato trovato nella stessa directory dal processo del back-end del compilatore, così come era dal processo front-end del compilatore. Per ulteriori informazioni, vedere [#using direttiva](../../preprocessor/hash-using-directive-cpp.md) .

C2567 potrebbe essere causato dalla compilazione con **/c** in un computer e quindi dalla generazione di codice in fase di collegamento in un altro computer. Per altre informazioni, vedere [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)).

Potrebbe inoltre indicare che il computer non ha più memoria.

Per correggere l'errore, verificare che il file di metadati si trovi nello stesso percorso di directory per tutte le fasi del processo di compilazione.
