---
title: Errore di compilazione PRJ0034 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0034
dev_langs:
- C++
helpviewer_keywords:
- PRJ0034
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: b271875173bf0e55d94989d60a1c8f7aaf408b2a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46065582"
---
# <a name="project-build-error-prj0034"></a>Errore di compilazione progetto PRJ0034

La proprietà "Dipendenze aggiuntive" per l'oggetto personalizzato a livello di progetto di compilazione passaggio contenuto "macro" che restituisce "espansione".

Un'istruzione di compilazione personalizzata a un progetto è presente un errore nella dipendenza aggiuntiva probabilmente a causa di un problema di valutazione della macro. Questo errore può anche significare che il percorso non è corretto, che contiene caratteri o delle combinazioni di caratteri che non sono validi in un percorso di file.

Per risolvere questo errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.