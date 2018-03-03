---
title: pgosweep | Documenti Microsoft
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
- pgosweep program
- profile-guided optimizations, pgosweep
ms.assetid: f39dd3b7-1cd9-4c3b-8e8b-fb794744b757
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 78ae6c36011e3c10359988cf2c501514d1bcf70a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pgosweep"></a>pgosweep
Utilizzato nell'ottimizzazione PGO per scrivere il file pgc tutti i dati di profilo da un programma in esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
pgosweep [options] image pgcfile  
```  
  
#### <a name="parameters"></a>Parametri  
 `options`  
 Parametro facoltativo che può essere vuoto. I valori validi per `options` sono i seguenti:  
  
-   **/?** o **/help,** viene visualizzato il messaggio della Guida.  
  
-   **che,** mantiene il conteggio nelle strutture di dati di runtime.  
  
 `image`  
 Il percorso completo di un file .exe o DLL che è stato creato utilizzando il /LTCG: PGINSTRUMENT opzione del compilatore.  
  
 `pgcfile`  
 Il file. pgc presenti in questo comando scriverà i dati di conteggi.  
  
## <a name="remarks"></a>Note  
 Questo comando funziona sui programmi che sono stati compilati con l'opzione del compilatore /LTCG: PGINSTRUMENT. Interrompe un programma in esecuzione e scrive i dati di profilo in un nuovo file pgc. Per impostazione predefinita, il comando Reimposta i conteggi dopo ogni operazione di scrittura. Se si specifica il **/noreset** opzione, il comando verrà registrare i valori, ma non reimpostarli nel programma in esecuzione. Se si recuperano i dati di profilo in un secondo momento, questa opzione consentirà dati duplicati.  
  
 Un utilizzo alternativo per `pgosweep` consiste nel recuperare le informazioni solo per il runtime dell'applicazione. Ad esempio, è possibile eseguire `pgosweep` subito dopo l'avvio dell'applicazione e ignorare il file. Verranno rimossi i dati di profilo associati costi di avvio. Quindi, è possibile eseguire `pgosweep` prima di terminare l'applicazione. I dati raccolti sono state raccolte informazioni di profilo solo dal runtime.  
  
 Quando si assegna un nome in un file pgc (`pgcfile`) è possibile utilizzare il formato standard, ovvero *appname! n*. pgc. Se si utilizza questo formato, il compilatore troverà questi dati in fase di /LTCG: PGO. Se non si utilizza il formato standard, è necessario utilizzare [pgomgr](../../build/reference/pgomgr.md) per unire i file pgc.  
  
## <a name="example"></a>Esempio  
  
```  
pgosweep myapp.exe myapp!1.pgc  
```  
  
 In questo esempio, `pgosweep` scrive le informazioni sul profilo corrente per myapp.exe myapp!1.pgc.  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti per l'ottimizzazione manuale PGO](../../build/reference/tools-for-manual-profile-guided-optimization.md)