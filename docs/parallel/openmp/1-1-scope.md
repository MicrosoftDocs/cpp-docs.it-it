---
title: 1.1 ambito | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
ms.assetid: a8570a3c-1dd6-4c3d-b368-a10fcb3534a6
caps.latest.revision: "4"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 07859a95b739cf649ab6516cb2e8b605efe442dc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="11-scope"></a>1.1 Ambito
Questa specifica viene illustrata la parallelizzazione solo gestito dall'utente, in cui l'utente specifica in modo esplicito le azioni da intraprendere per il compilatore e il sistema di runtime per eseguire il programma in parallelo. Le implementazioni OpenMP C e C++ non è necessario verificare la presenza di dipendenze, è in conflitto, deadlock, race condition o altri problemi che comportano l'esecuzione del programma. L'utente è responsabile di garantire che l'applicazione utilizzando i costrutti OpenMP C e C++ API viene eseguita correttamente. Generato dal compilatore parallelizzazione automatica e direttive per il compilatore per agevolare la parallelizzazione questi non vengono trattate in questo documento.