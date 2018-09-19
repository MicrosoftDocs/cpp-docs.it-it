---
title: Errore di compilazione PRJ0032 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0032
dev_langs:
- C++
helpviewer_keywords:
- PRJ0032
ms.assetid: bc6acbea-4041-4237-8b5a-f0434705d89f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 106b1c3f470bbdb134a5fd53ebaef65a4392fd4b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053576"
---
# <a name="project-build-error-prj0032"></a>Errore di compilazione progetto PRJ0032

La proprietà 'Output' per il passaggio di compilazione personalizzata a livello di progetto contiene "macro" che restituisce "espansione".

Un'istruzione di compilazione personalizzata a un progetto ha output non valido probabilmente a causa di un problema di valutazione della macro. Questo errore può anche significare che il percorso non è corretto, che contiene caratteri o delle combinazioni di caratteri che non sono validi in un percorso di file.

Per risolvere questo errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.