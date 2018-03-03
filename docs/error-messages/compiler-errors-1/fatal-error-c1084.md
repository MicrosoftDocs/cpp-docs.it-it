---
title: Errore irreversibile C1084 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C1084
dev_langs:
- C++
helpviewer_keywords:
- C1084
ms.assetid: b2f273ef-3a14-4d5f-8ce0-7a11a0388fe6
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 828486ee2d3057c4d9c658defc1477de49b6cd0e
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1084"></a>Errore irreversibile C1084
Impossibile leggere il file tipofile: 'file': messaggio  
  
 In genere questo errore è causato da un chiamata API del sistema interno non riuscita effettuata dal compilatore. Il messaggio visualizzato quando si verifica questo errore è spesso generato da uno [wcserror_s](../../c-runtime-library/reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) o [FormatMessage](http://msdn.microsoft.com/library/windows/desktop/ms679351.aspx).  
  
 Per tentare di risolvere l'errore C1084, eseguire i passaggi seguenti:  
  
-   Assicurarsi che il file specificato esista.  
  
-   Assicurarsi che siano impostate le autorizzazioni appropriate per accedere al file specificato.  
  
-   Assicurarsi che la sintassi della riga di comando sia conforme alle regole descritte in [sintassi della riga di comando del compilatore](../../build/reference/compiler-command-line-syntax.md).  
  
-   Assicurarsi che le variabili di ambiente **TMP** e **TEMP** siano correttamente set, nonché le autorizzazioni appropriate per accedere a queste variabili di ambiente fare riferimento alla directory. Verificare inoltre che le unità a cui fa riferimento il **TMP** e **TEMP** le variabili di ambiente contengono una quantità di spazio libero sufficiente.  
  
-   Se viene visualizzato il messaggio "Numero di file non valido", è possibile che il file specificato sia stato chiuso in primo piano durante la compilazione in background.  
  
 Dopo aver eseguito le operazioni di diagnostica riportate sopra, eseguire una compilazione pulita.