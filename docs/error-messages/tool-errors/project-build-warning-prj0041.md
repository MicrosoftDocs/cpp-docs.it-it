---
title: Avviso di compilazione PRJ0041 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0041
dev_langs:
- C++
helpviewer_keywords:
- PRJ0041
ms.assetid: dc9f4cf9-6bd5-4222-89e8-7802a59bb96b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7677c5718783065f64e52f98f7ddbed76e905d2a
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46038139"
---
# <a name="project-build-warning-prj0041"></a>Avviso di compilazione progetto PRJ0041

Non è possibile trovare mancante dipendenza 'dependency' file 'file'. Il progetto può ancora essere compilato, ma risulterà aggiornata fino a quando non viene trovato il file.

Un file (file di risorse o file.idl/.odl, ad esempio, contiene un'istruzione include che il sistema di progetto non è stato possibile risolvere.

Poiché il sistema di progetto non elabora le istruzioni del preprocessore (#if, ad esempio), l'istruzione che causa il problema non può fare parte della compilazione.

Per risolvere questo problema, eliminare tutto il codice non necessario nei file RC o aggiungere file segnaposto con il nome appropriato.