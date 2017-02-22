---
title: "Multithreading: quando utilizzare le classi di sincronizzazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "risorse controllate (accesso) [C++]"
  - "multithreading [C++], classi di sincronizzazione"
  - "risorse [C++], multithreading"
  - "sincronizzazione [C++], multithreading"
  - "sincronizzazione (classi di accesso) [C++]"
  - "sincronizzazione (classi) [C++]"
  - "threading [C++], sincronizzazione"
  - "threading [MFC], classi di sincronizzazione"
ms.assetid: 4914f54e-68ac-438f-93c9-c013455a657e
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Multithreading: quando utilizzare le classi di sincronizzazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le classi multithread disponibili in MFC possono essere suddivise in due categorie: gli oggetti di sincronizzazione \([CSyncObject](../mfc/reference/csyncobject-class.md), [CSemaphore](../mfc/reference/csemaphore-class.md), [CMutex](../mfc/reference/cmutex-class.md), [CCriticalSection](../mfc/reference/ccriticalsection-class.md) e [CEvent](../mfc/reference/cevent-class.md)\) e gli oggetti di accesso alla sincronizzazione \([CMultiLock](../mfc/reference/cmultilock-class.md) e [CSingleLock](../mfc/reference/csinglelock-class.md)\).  
  
 Le classi di sincronizzazione sono utilizzate quando è necessario controllare l'accesso a una risorsa per assicurarne l'integrità.  Le classi di accesso alla sincronizzazione vengono utilizzate per accedere a tali risorse controllate.  In questo argomento vengono descritte le situazioni in cui utilizzare ogni classe.  
  
 Per determinare la classe di sincronizzazione da utilizzare, è necessario stabilire quanto segue.  
  
1.  Se prima di poter accedere alla risorsa è necessario attendere che si verifichi un evento, ad esempio se è necessario che i dati vengano ricevuti da una porta di comunicazione prima di poter essere scritti in un file.  
  
     In caso affermativo, utilizzare `CEvent`.  
  
2.  Se è possibile l'accesso contemporaneo alla risorsa da parte di più thread all'interno della stessa applicazione, ad esempio, se nell'applicazione sono consentite fino a cinque finestre con visualizzazioni dello stesso documento.  
  
     In caso affermativo, utilizzare `CSemaphore`.  
  
3.  Se è possibile che la risorsa sia utilizzata da più applicazioni, ad esempio se la risorsa è una DLL.  
  
     In caso affermativo, utilizzare `CMutex`.  
  
     In caso negativo, utilizzare `CCriticalSection`.  
  
 **CSyncObject** non viene mai utilizzata direttamente  e rappresenta la classe base per le altre quattro classi di sincronizzazione.  
  
## Esempio 1: utilizzo di tre classi di sincronizzazione  
 Si consideri ad esempio un'applicazione che consente di gestire un elenco collegato di account.  L'applicazione consente di esaminare fino a tre account all'interno di finestre distinte, ma è possibile aggiornare solo un account alla volta.  Quando un account viene aggiornato, i dati aggiornati vengono inviati in rete a un archivio di dati.  
  
 Nell'applicazione di esempio vengono utilizzati tutti e tre i tipi di classi di sincronizzazione.  Poiché è possibile esaminare contemporaneamente fino a tre account, viene utilizzata `CSemaphore` per limitare l'accesso ai tre oggetti.  Quando si tenta di visualizzare un quarto account, viene attesa la chiusura di una delle tre finestre oppure viene restituito un errore.  Quando un account viene aggiornato, viene utilizzata `CCriticalSection`per garantire che venga aggiornato un solo account per volta.  L'aggiornamento, una volta terminato, viene segnalato a `CEvent`, che rilascia un thread in attesa della segnalazione dell'evento.  Con questo thread, i nuovi dati vengono inviati all'archivio dati.  
  
## Esempio 2: utilizzo delle classi di accesso alla sincronizzazione  
 La scelta della classe di accesso alla sincronizzazione da utilizzare è ancora più semplice.  Se nell'applicazione viene eseguito l'accesso a un'unica risorsa controllata, utilizzare `CSingleLock`.  Se è richiesto l'accesso a una risorsa all'interno di un gruppo di risorse controllate, utilizzare `CMultiLock`.  Nell'esempio 1 precedente, sarebbe stata utilizzata `CSingleLock`, come in ogni caso in cui sia necessaria una sola risorsa alla volta.  
  
 Per informazioni sull'utilizzo delle classi di sincronizzazione, vedere [Multithreading: utilizzo delle classi di sincronizzazione](../parallel/multithreading-how-to-use-the-synchronization-classes.md).  Per informazioni sulla sincronizzazione, vedere [Synchronization](http://msdn.microsoft.com/library/windows/desktop/ms686353) in [!INCLUDE[winsdkshort](../atl/reference/includes/winsdkshort_md.md)].  Per informazioni sul supporto delle operazioni multithread in MFC, vedere [Multithreading con C\+\+ e MFC](../parallel/multithreading-with-cpp-and-mfc.md).  
  
## Vedere anche  
 [Multithreading con C\+\+ e MFC](../parallel/multithreading-with-cpp-and-mfc.md)