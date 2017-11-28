---
title: "Proprietà Istruzione di compilazione personalizzata (Linux C++) | Microsoft Docs"
ms.custom: 
ms.date: 10/17/2017
ms.reviewer: 
ms.suite: 
ms.technology: vs-ide-general
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 77a9c1fb-7c41-4a9b-9418-18ac17ce4e74
author: mikeblome
ms.author: mblome
manager: ghogen
f1_keywords:
- VC.Project.IVCEventTool.CommandLine
- VC.Project.IVCEventTool.Description
- VC.Project.IVCEventTool.ExcludedFromBuild
- VC.Project.VCConfiguration.BuildLogFile
ms.openlocfilehash: 77d483e9d4dc74cbe9ba2736a26561bb410fa6ca
ms.sourcegitcommit: ca2f94dfd015e0098a6eaf5c793ec532f1c97de1
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2017
---
# <a name="custom-build-step-properties-linux-c"></a>Proprietà Istruzione di compilazione personalizzata (Linux C++)


Proprietà | Descrizione
--- | ---
Riga di comando | Comando da eseguire tramite l'istruzione di compilazione personalizzata.
Descrizione | Messaggio che viene visualizzato quando viene eseguita l'istruzione di compilazione personalizzata.
Output | File di output che viene generato dall'istruzione di compilazione personalizzata. Questa impostazione è necessaria ai fini del corretto funzionamento delle compilazioni incrementali.
Dipendenze aggiuntive | Elenco delimitato da punti e virgola di eventuali file di input aggiuntivi da utilizzare per l'istruzione di compilazione personalizzata.
Esegui dopo ed Esegui prima | Queste opzioni definiscono i tempi di esecuzione dell'istruzione personalizzata durante il processo di compilazione, relativamente alle destinazioni specificate. Le destinazioni più comunemente elencate sono BuildGenerateSources, BuildCompile e BuildLink perché rappresentano le istruzioni principali nel processo di compilazione. Altre destinazioni elencate spesso sono Midl, CLCompile e Link.
Considera output come contenuto | Questa opzione è significativa solo per le applicazioni Windows Store o Windows Phone i cui file di contenuto sono tutti inclusi nel pacchetto appx.