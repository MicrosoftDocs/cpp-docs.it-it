---
description: 'Altre informazioni su: errore del compilatore C2567'
title: Errore del compilatore C2567
ms.date: 11/04/2016
f1_keywords:
- C2567
helpviewer_keywords:
- C2567
ms.assetid: 9c140ac9-7059-47e6-9ba1-e7939c8c0dc3
ms.openlocfilehash: 113dfebc1ac6bde6857ea55fd6249fff12c9faae
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97209113"
---
# <a name="compiler-error-c2567"></a>Errore del compilatore C2567

non è possibile aprire i metadati in ' file '. è possibile che il file sia stato eliminato o spostato

Un file di metadati a cui si fa riferimento nell'origine (con `#using` ) non è stato trovato nella stessa directory dal processo del back-end del compilatore, così come era dal processo front-end del compilatore. Per ulteriori informazioni, vedere [#using direttiva](../../preprocessor/hash-using-directive-cpp.md) .

C2567 potrebbe essere causato dalla compilazione con **/c** in un computer e quindi dalla generazione di codice in fase di collegamento in un altro computer. Per altre informazioni, vedere [/LTCG (generazione di codice in fase di collegamento)](../../build/reference/ltcg-link-time-code-generation.md)).

Potrebbe inoltre indicare che il computer non ha più memoria.

Per correggere l'errore, verificare che il file di metadati si trovi nello stesso percorso di directory per tutte le fasi del processo di compilazione.
