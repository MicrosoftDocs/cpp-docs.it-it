---
title: Errore di compilazione PRJ0009 del progetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- PRJ0009
dev_langs:
- C++
helpviewer_keywords:
- PRJ0009
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: efeb110823e801dd86a503a7069c4898f400769e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46057184"
---
# <a name="project-build-error-prj0009"></a>Errore di compilazione progetto PRJ0009

Creare log non è stato possibile aprire per la scrittura.

**Assicurarsi che il file non sia aperto da un altro processo e non è protetto da scrittura.**

Dopo aver impostato la **log di compilazione** proprietà **Yes** e si esegue una compilazione o ricompilazione, Visual C++ non è riuscito ad aprire il log di compilazione in modalità esclusiva.

Esaminare il **log di compilazione** impostazione aprendo la **opzioni** la finestra di dialogo (nel **strumenti** dal menu fare clic su **opzioni** comando) e quindi selezionando **VC + + compilazione** nel **progetti** cartella. Il file di compilazione è denominato BuildLog. htm e viene scritto nella directory intermedia $(IntDir).

Cause di questo errore:

- Si è in esecuzione due processi di Visual C++ e si cerca di creare la stessa configurazione del progetto stesso in entrambi contemporaneamente.

- In un processo che blocca il file viene aperto il file di log di compilazione.

- L'utente non dispone dell'autorizzazione per creare un file.

- L'utente corrente non dispone dell'accesso in scrittura al file BuildLog. htm.