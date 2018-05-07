---
title: Ridistribuzione di un'applicazione ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- ATL, redistributing
- redistributing ATL
- redistributing OLE DB templates
- OLE DB templates, redistributing
ms.assetid: 9a696b22-2345-43ec-826b-be7cb8cfd676
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5c824dd4ae174a4418c6744e592dd62dc54b9595
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="redistributing-an-atl-application"></a>Ridistribuzione di un'applicazione ATL
Iniziando da Visual Studio 2012, Active Template Library (ATL) è una libreria di sola intestazione. I progetti ATL non presentano un'opzione di collegamento dinamico ad ATL. Non è necessaria alcuna libreria ATL ridistribuibile.  
  
 Se si ridistribuisce un'applicazione eseguibile ATL, è necessario registrare il file .exe (e tutti i controlli all'interno dello stesso) eseguendo il comando seguente:  
  
```  
filename /regserver  
```  
  
 dove `filename` è il nome del file eseguibile.  
  
 In Visual Studio 2010, può essere creato un progetto ATL per una configurazione MinDependency o MinSize. Una configurazione MinDependency è si ottiene quando si imposta la **uso di ATL** proprietà **collegamento statico ad ATL** sul **generale** pagina delle proprietà e impostare il  **Libreria di runtime** proprietà **a thread multipli (/ MT)** sul **la generazione di codice** pagina delle proprietà (cartella C/C++).  
  
 Una configurazione MinSize è si ottiene quando si imposta il **uso di ATL** proprietà **collegamento dinamico ad ATL** sul **generale** pagina delle proprietà o set di **Runtime Libreria** proprietà **DLL multithread (/ MD)** sul **la generazione di codice** pagina delle proprietà (cartella C/C++).  
  
 MinSize rende l'output di file più piccolo possibile, ma richiede che ATL100 e Msvcr100. dll (se è stata selezionata la **DLL multithread (/ MD)** opzione) si trovano in computer di destinazione. ATL100 deve essere registrato nel computer di destinazione per essere sicuri che tutte le funzionalità ATL siano presenti. ATL100.ddl contiene esportazioni ANSI e Unicode.  
  
 Se si compila un progetto ATL o di modelli OLE DB per una destinazione MinDependency, non è necessario installare e registrare ATL100.dll nel computer di destinazione, anche se è possibile ottenere un'immagine più grande del programma.  
  
 Se si ridistribuisce un'applicazione eseguibile ATL, è necessario registrare il file .exe (e tutti i controlli all'interno dello stesso) eseguendo il comando seguente:  
  
```  
filename /regserver  
```  
  
 dove `filename` è il nome del file eseguibile.  
  
 Per le applicazioni di modelli OLE DB, assicurarsi che nel computer di destinazione siano installate le versioni più recenti dei file Microsoft Data Access Components (MDAC). Per ulteriori informazioni, vedere [ridistribuzione dei file di supporto Database](../ide/redistributing-database-support-files.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Ridistribuzione di file Visual C++](../ide/redistributing-visual-cpp-files.md)