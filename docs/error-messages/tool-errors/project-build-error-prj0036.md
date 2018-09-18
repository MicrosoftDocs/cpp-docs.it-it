---
title: Errore di compilazione PRJ0036 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0036
dev_langs:
- C++
helpviewer_keywords:
- PRJ0036
ms.assetid: ee215cd1-2d66-474d-9a63-b9096f1c4923
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 32b73fb8d86ff537912218ea35089382a93aec4c
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46065192"
---
# <a name="project-build-error-prj0036"></a>Errore di compilazione progetto PRJ0036

La proprietà "File aggiuntivi" per lo strumento di distribuzione Web contiene una voce non valida.

La proprietà di file aggiuntivi nella pagina delle proprietà di distribuzione Web contiene un errore, probabilmente a causa di un problema di valutazione della macro. Questo errore può anche significare che il percorso non è corretto, che contiene caratteri o delle combinazioni di caratteri che non sono validi in un percorso di file.

Per risolvere questo errore, correggere la macro o correggere la specifica del percorso. Il percorso valutato è un percorso assoluto dalla directory del progetto.

Questo errore potrebbe indicare anche che uno dei file di cui viene fatto riferimenti non esiste.