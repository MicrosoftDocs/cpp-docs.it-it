---
title: 1.1 ambito | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a8570a3c-1dd6-4c3d-b368-a10fcb3534a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 48d14ec722299a9ff72ad5bab0a68cde5e00d6ad
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33686802"
---
# <a name="11-scope"></a>1.1 Ambito
Questa specifica viene illustrata la parallelizzazione solo gestito dall'utente, in cui l'utente specifica in modo esplicito le azioni da intraprendere per il compilatore e il sistema di runtime per eseguire il programma in parallelo. Le implementazioni OpenMP C e C++ non è necessario verificare la presenza di dipendenze, è in conflitto, deadlock, race condition o altri problemi che comportano l'esecuzione del programma. L'utente è responsabile di garantire che l'applicazione utilizzando i costrutti OpenMP C e C++ API viene eseguita correttamente. Generato dal compilatore parallelizzazione automatica e direttive per il compilatore per agevolare la parallelizzazione questi non vengono trattate in questo documento.