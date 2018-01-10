---
title: pgomgr | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- pgomgr program
- profile-guided optimizations, pgomgr
ms.assetid: 74589126-df18-42c9-8739-26d60e148d6a
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8cbb9a4f8b92a1cd495e1312c1aa8a8f77cefcd3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pgomgr"></a>pgomgr
Aggiunge dati di profilo da uno o più file. pgc al file pgd.  
  
## <a name="syntax"></a>Sintassi  
  
```  
pgomgr [options] pgcfiles pgdfile  
```  
  
#### <a name="parameters"></a>Parametri  
 `options`  
 In pgomgr, è possono specificare le opzioni seguenti:  
  
 **/help:**Visualizza le opzioni disponibili pgomgr (abbreviazione di /?).  
  
 **/Clear:**fa sì che il file pgd la cancellazione di tutte le informazioni del profilo. Non è possibile specificare un pgc file quando **/Clear** specificato.  
  
 **/Detail**, vengono visualizzate statistiche dettagliate, incluse le informazioni di code coverage grafico del flusso.  
  
 **/Summary**: Visualizza le statistiche per ogni funzione.  
  
 **/Unique**, se utilizzata con **/summary**, determina decorati per visualizzare i nomi di funzione.  L'impostazione predefinita, quando è univoco non utilizzato, è per visualizzare i nomi di funzione non decorato.  
  
 **/merge**[**:***n*]**-**fa sì che i dati nel file devono essere aggiunti al file pgd o. pgc file.  Il parametro facoltativo,  *n* , consente di specificare che i dati devono essere aggiunti  *n*  volte.  Se, ad esempio, uno scenario comunemente farebbe 6 volte, è possibile eseguire una volta in un'esecuzione dei test e aggiungerlo al file pgd sei volte con **pgomgr /merge: 6**.  
  
 `pgcfiles`  
 Uno o più file pgc i cui dati di profilo che si desidera unire il file pgd. È possibile specificare un file pgc singolo o più file. pgc. Se non si specifica alcun file pgc, pgomgr consentirà di unire tutti i file pgc i cui nomi sono gli stessi file pgd.  
  
 `pgdfile`  
 Il file pgd in cui si uniscono i dati dal file. pgc o file.  
  
## <a name="remarks"></a>Note  
  
> [!NOTE]
>  È possibile avviare questo strumento solo dal prompt dei comandi di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)]. Non è possibile avviarlo da un prompt dei comandi di sistema o da Esplora File.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente, il file pgd è stato cancellato di dati di profilo.  
  
```  
pgomgr /clear myapp.pgd  
```  
  
 Nell'esempio seguente, i dati del profilo in MyApp1 è stato aggiunto al file pgd 3 volte.  
  
```  
pgomgr /merge:3 myapp1.pgc myapp.pgd  
```  
  
 Nell'esempio seguente, i dati di profilo da tutti i file #. pgc myapp vengono aggiunti al file pgd.  
  
```  
pgomgr -merge myapp1.pgd  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Strumenti per l'ottimizzazione manuale PGO](../../build/reference/tools-for-manual-profile-guided-optimization.md)