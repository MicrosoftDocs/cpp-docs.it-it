---
title: Strumenti del linker LNK4014 avviso | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- LNK4014
dev_langs:
- C++
helpviewer_keywords:
- LNK4014
ms.assetid: 394903e9-3ded-4ea4-b7c0-a3535d4b4da4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: df0a3b6f30733413a0f27c0b8daa07394bb04b07
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46023111"
---
# <a name="linker-tools-warning-lnk4014"></a>Avviso degli strumenti del linker LNK4014

Impossibile trovare l'oggetto membro "nomeoggetto"

Non è stato trovato `objectname` nella libreria.

Il **/Remove** e **/estrarre** opzioni richiedono che il nome completo dell'oggetto membro che deve essere eliminato o copiati in un file. Il nome completo include il percorso del file oggetto originale. Per visualizzare i nomi completi di oggetti membro in una raccolta, usare DUMPBIN [/ARCHIVEMEMBERS](../../build/reference/archivemembers.md) o LIB [/List](../../build/reference/managing-a-library.md).