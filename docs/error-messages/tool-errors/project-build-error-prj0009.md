---
title: Errore di compilazione progetto PRJ0009
ms.date: 11/04/2016
f1_keywords:
- PRJ0009
helpviewer_keywords:
- PRJ0009
ms.assetid: 89291778-cda4-495d-983f-ddcc06dfc98b
ms.openlocfilehash: 963b7c861f9e8ee7105ebdc23afff08c4be46465
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62359501"
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