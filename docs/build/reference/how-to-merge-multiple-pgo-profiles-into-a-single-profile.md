---
title: "Procedura: unire più profili PGO in un unico profilo | Documenti Microsoft"
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- merging profiles
- profile-guided optimizations, merging profiles
ms.assetid: aab686b5-59dd-40d1-a04b-5064690f65a6
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 880e9fbba7852a9a7919e73f80b73e34394cd037
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-merge-multiple-pgo-profiles-into-a-single-profile"></a>Procedura: unire più profili PGO in un unico profilo
Ottimizzazione guidata da profilo (PGO) è un ottimo strumento per la creazione di file binari ottimizzati in base a uno scenario di analisi. Ma cosa accade se si dispone di un'applicazione che dispone di diversi scenari importanti, ma distinti. come si crea un unico profilo che è possibile utilizzare l'ottimizzazione PGO da scenari diversi? In Visual Studio, il gestore di ottimizzazione PGO, Pgomgr.exe, non il processo per l'utente.  
  
 La sintassi per l'unione dei profili è:  
  
```  
pgomgr /merge[:num] [.pgc_files] .pgd_files  
```  
  
 dove `num` rappresenta un peso facoltativo utilizzato per l'unione. I pesi vengono comunemente usati se sono presenti alcuni scenari che sono più importanti o se esistono scenari in cui devono essere eseguiti più volte.  
  
> [!NOTE]
>  La gestione di ottimizzazione PGO non funzionerà con i dati di profilo non aggiornati. Per unire un file pgc in un file pgd, il file pgc deve essere generato da un eseguibile a cui è stato creato con la stessa chiamata di collegamento che ha generato il file pgd.  
  
## <a name="example"></a>Esempio  
 In questo esempio, l'ottimizzazione PGO Manager aggiungerà riportato pgdFile sei volte.  
  
```  
pgomgr /merge:6 pgcFile.pgc pgdFile.pgd  
```  
  
## <a name="example"></a>Esempio  
 In questo esempio, il Manager PGO aggiungerà pgcFile1. pgc e pgcFile2. pgc pgdFile, due volte per ogni file. pgc.  
  
```  
pgomgr /merge:2 pgcFile1.pgc pgcFile2.pgc pgdFile.pgd  
```  
  
## <a name="example"></a>Esempio  
 Se è in esecuzione senza un file pgc PGO Manager cercherà la directory locale per tutti i file pgc che hanno lo stesso nome del file pgd aggiunto con un punto esclamativo (!) seguito da caratteri arbitrari. Se nella directory locale sono presenti, test!1.pgc, test2 e file pgd e viene eseguito il comando seguente dalla directory locale, quindi test!1.pgc e presenti verranno unite in pgd.  
  
```  
pgomgr /merge test.pgd  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Ottimizzazioni PGO](../../build/reference/profile-guided-optimizations.md)