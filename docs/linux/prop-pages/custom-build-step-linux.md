---
title: Proprietà Istruzione di compilazione personalizzata (Linux C++)
ms.date: 10/17/2017
ms.assetid: 77a9c1fb-7c41-4a9b-9418-18ac17ce4e74
ms.openlocfilehash: 5e6580263e63547e3564eaee260158a312e5fa6a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644704"
---
# <a name="custom-build-step-properties-linux-c"></a>Proprietà Istruzione di compilazione personalizzata (Linux C++)

Proprietà | Descrizione
--- | ---
Riga di comando | Comando da eseguire tramite l'istruzione di compilazione personalizzata.
Descrizione | Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata.
Output | File di output che viene generato dall'istruzione di compilazione personalizzata. Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali.
Dipendenze aggiuntive | Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata.
Esegui dopo ed Esegui prima | Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate. Le destinazioni più comunemente elencate sono BuildGenerateSources, BuildCompile e BuildLink perché rappresentano le istruzioni principali nel processo di compilazione. Altre destinazioni elencate spesso sono Midl, CLCompile e Link.
Considera output come contenuto | Questa opzione è significativa solo per le app Microsoft Store o Windows Phone i cui file di contenuto sono tutti inclusi nel pacchetto appx.