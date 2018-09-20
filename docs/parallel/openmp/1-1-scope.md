---
title: 1.1 definire l'ambito | Microsoft Docs
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
ms.openlocfilehash: 81babf799860030f6d398f64b55ed65039de8649
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46393531"
---
# <a name="11-scope"></a>1.1 Ambito

Questa specifica descrive la parallelizzazione solo gestito dall'utente, in cui l'utente specifica in modo esplicito le azioni da eseguire dal compilatore e del sistema in fase di esecuzione per eseguire il programma in parallelo. Le implementazioni di OpenMP C e C++ non sono necessarie per verificare la presenza di dipendenze, è in conflitto, deadlock, le race condition o altri problemi che comportano l'esecuzione del programma non corretto. L'utente è responsabile di garantire che l'applicazione usando i costrutti OpenMP C e C++ API viene eseguita correttamente. Generato dal compilatore la parallelizzazione automatica e nelle direttive del compilatore per semplificare questo tipo parallelizzazione non incluse in questo documento.