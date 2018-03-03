---
title: 'Multithreading: Quando utilizzare le classi di sincronizzazione | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- threading [MFC], synchronization classes
- resources [C++], multithreading
- synchronization classes [C++]
- synchronization [C++], multithreading
- controlled resource access [C++]
- synchronization access classes [C++]
- threading [C++], synchronization
- multithreading [C++], synchronization classes
ms.assetid: 4914f54e-68ac-438f-93c9-c013455a657e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 38437983552dfdf2cf6708ec5fd067e06387ea5c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="multithreading-when-to-use-the-synchronization-classes"></a>Multithreading: quando usare le classi di sincronizzazione
Le classi multithread disponibili in MFC rientrano in due categorie: gli oggetti di sincronizzazione ([CSyncObject](../mfc/reference/csyncobject-class.md), [CSemaphore](../mfc/reference/csemaphore-class.md), [CMutex](../mfc/reference/cmutex-class.md), [ CCriticalSection](../mfc/reference/ccriticalsection-class.md), e [CEvent](../mfc/reference/cevent-class.md)) e gli oggetti di accesso di sincronizzazione ([CMultiLock](../mfc/reference/cmultilock-class.md) e [CSingleLock](../mfc/reference/csinglelock-class.md)).  
  
 Classi di sincronizzazione vengono utilizzate quando l'accesso a una risorsa deve essere controllato per assicurare l'integrità della risorsa. Classi di accesso di sincronizzazione vengono utilizzate per accedere a tali risorse controllate. In questo argomento viene descritto quando utilizzare ogni classe.  
  
 Per determinare quale classe di sincronizzazione è necessario utilizzare, porre le domande seguenti:  
  
1.  L'applicazione dispone di attesa di un intervento prima di poter accedere alla risorsa (ad esempio, dati devono essere ricevuti da una porta di comunicazione prima che possono essere scritti in un file)?  
  
     In caso affermativo, utilizzare `CEvent`.  
  
2.  Possibile più di un thread all'interno dello stesso accesso dell'applicazione questa risorsa in una sola volta (ad esempio, l'applicazione consente fino a cinque windows con le viste nello stesso documento)?  
  
     In caso affermativo, utilizzare `CSemaphore`.  
  
3.  Se più applicazioni possono utilizzare questa risorsa (ad esempio, la risorsa è in una DLL)?  
  
     In caso affermativo, utilizzare `CMutex`.  
  
     Se no, utilizzare `CCriticalSection`.  
  
 **CSyncObject** non viene mai utilizzato direttamente. È la classe base per le altre quattro classi di sincronizzazione.  
  
## <a name="example-1-using-three-synchronization-classes"></a>Esempio 1: Utilizzo di tre classi di sincronizzazione  
 Ad esempio, eseguire un'applicazione che mantiene un elenco collegato di account. Questa applicazione consente di esaminare in finestre distinte fino a tre account, ma solo uno può essere aggiornato in un determinato momento. Quando viene aggiornato un account, i dati aggiornati sono inviati in rete in un archivio dati.  
  
 Questa applicazione di esempio utilizza i tre tipi di classi di sincronizzazione. Poiché è consentito un massimo di tre account da esaminare in una sola volta, utilizza `CSemaphore` per limitare l'accesso ai tre oggetti. Quando si tenta di visualizzare un quarto account si verifica, l'applicazione sia attende fino a quando una delle prime tre finestre chiude o si verifica un errore. Quando viene aggiornato un account, l'applicazione utilizza `CCriticalSection` per assicurare che solo un account di aggiornamento alla volta. Dopo l'aggiornamento ha esito positivo, viene segnalato `CEvent`, che rilascia un thread in attesa per l'evento venga segnalato. Questo thread invia i nuovi dati nell'archivio dati.  
  
## <a name="example-2-using-synchronization-access-classes"></a>Esempio 2: Utilizzo di classi di accesso di sincronizzazione  
 La scelta è ancora più semplice la classe di accesso di sincronizzazione da utilizzare. Se l'applicazione viene eseguito l'accesso a una singola risorsa controllata, utilizzare `CSingleLock`. Se è richiesto l'accesso a una qualsiasi di un numero di risorse controllate, utilizzare `CMultiLock`. Nell'esempio 1, `CSingleLock` sarebbe stata utilizzata, in ogni caso è necessaria solo una risorsa in un determinato momento.  
  
 Per informazioni sull'utilizzo delle classi di sincronizzazione, vedere [Multithreading: utilizzo delle classi di sincronizzazione](../parallel/multithreading-how-to-use-the-synchronization-classes.md). Per informazioni sulla sincronizzazione, vedere [sincronizzazione](http://msdn.microsoft.com/library/windows/desktop/ms686353) nel [!INCLUDE[winsdkshort](../atl-mfc-shared/reference/includes/winsdkshort_md.md)]. Per informazioni sul supporto multithreading in MFC, vedere [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Multithreading con C++ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)