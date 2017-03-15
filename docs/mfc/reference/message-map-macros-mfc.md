---
title: Macro della mappa (MFC) del messaggio | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.messages
dev_langs:
- C++
helpviewer_keywords:
- message map macros
- Windows messages [C++], declaration
- demarcating Windows messages
- message maps [C++], macros
- message maps [C++], declaration and demarcation
- message mapping macros
- ranges, message map
- message map ranges
ms.assetid: 531b15ce-32b5-4ca0-a849-bb519616c731
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5187996fc377bca8633360082d07f7ec8a68ee57
ms.openlocfilehash: f890e0675be58c8e20e313bea54b4145e2ce0bf3
ms.lasthandoff: 02/24/2017

---
# <a name="message-map-macros-mfc"></a>Macro della mappa messaggi (MFC)
Per supportare le mappe dei messaggi, MFC fornisce le seguenti macro:  
  
### <a name="message-map-declaration-and-demarcation-macros"></a>Mappa messaggi dichiarazione e delimitazione della macro  
  
|||  
|-|-|  
|[DECLARE_MESSAGE_MAP](http://msdn.microsoft.com/library/c225e7e0-a81b-495c-97f9-3e0aa1f65036)|Dichiara che una mappa di messaggi da utilizzare in una classe per il mapping di messaggi a funzioni (deve essere utilizzata nella dichiarazione di classe).|  
|[BEGIN_MESSAGE_MAP](http://msdn.microsoft.com/library/d9201e18-04e0-4639-9810-f15768627fc2)|Inizia la definizione di una mappa messaggi (deve essere utilizzata nell'implementazione della classe).|  
|[END_MESSAGE_MAP](http://msdn.microsoft.com/library/40f611f1-a3b4-4097-b683-091bf7cfab8b)|Termina la definizione di una mappa messaggi (deve essere utilizzata nell'implementazione della classe).|  
  
### <a name="message-mapping-macros"></a>Macro di Mapping di messaggi  
  
|||  
|-|-|  
|[ON_COMMAND](http://msdn.microsoft.com/library/f24f8bda-2cf4-49d5-aa3d-6f2e6bb003f2)|Indica quale funzione che gestirà un messaggio di comando specificato.|  
|[ON_CONTROL](http://msdn.microsoft.com/library/2cb7ebdf-296b-4606-b191-3449835003db)|Indica quale funzione che gestirà un messaggio di notifica del controllo specificato.|  
|[ON_MESSAGE](http://msdn.microsoft.com/library/e2faeb13-9f6e-4c0d-9f6d-b2e141a0db1e)|Indica quale funzione che gestirà un messaggio definito dall'utente.|  
|[ON_OLECMD](http://msdn.microsoft.com/library/6c86327c-3d48-42ac-9dae-e0ccd3a81793)|Indica quale funzione che gestirà un comando di menu da DocObject o il relativo contenitore.|  
|[ON_REGISTERED_MESSAGE](http://msdn.microsoft.com/library/93c1c068-ae8c-4e04-8a60-a603800ab57d)|Indica quale funzione che gestirà un messaggio definito dall'utente registrato.|  
|[ON_REGISTERED_THREAD_MESSAGE](http://msdn.microsoft.com/library/3f598bc2-b2f0-410f-8ba0-7714502170f3)|Indica quale funzione che gestirà un messaggio definito dall'utente registrato quando si dispone di un `CWinThread` (classe).|  
|[ON_THREAD_MESSAGE](http://msdn.microsoft.com/library/f718f47a-d5b1-4514-914b-e3fe2d919003)|Indica quale funzione che gestirà un messaggio definito dall'utente quando si dispone di un `CWinThread` (classe).|  
|[ON_UPDATE_COMMAND_UI](http://msdn.microsoft.com/library/c4de3c21-2d2e-4b89-a4ce-d0c0e2d9edc4)|Indica quale funzione che gestirà un messaggio di comando di aggiornamento dell'interfaccia utente specificato.|  
  
### <a name="message-map-range-macros"></a>Macro della mappa messaggi intervallo  
  
|||  
|-|-|  
|[ON_COMMAND_RANGE](http://msdn.microsoft.com/library/c52719fc-dd6e-48c9-af79-383f48d608e0)|Indica quale funzione che gestirà l'intervallo di ID di comando specificati nei primi due parametri alla macro.|  
|[ON_UPDATE_COMMAND_UI_RANGE](http://msdn.microsoft.com/library/b7105bf1-44ad-4b00-b947-31478f964729)|Indica che il gestore di aggiornamento consente di gestire l'intervallo di ID di comando specificati nei primi due parametri alla macro.|  
|[ON_CONTROL_RANGE](http://msdn.microsoft.com/library/46f0e1bb-569b-4b8b-9b80-89701d1cd7fd)|Indica quale funzione che gestirà le notifiche da un intervallo di ID specificato nel secondo e terzo parametro per la macro di controllo. Il primo parametro è un messaggio di notifica del controllo, ad esempio **BN_CLICKED**.|  
  
 Per ulteriori informazioni su mappe messaggi, la dichiarazione della mappa messaggi e delimitazione della macro e le macro di mapping di messaggi, vedere [mappe messaggi](../../mfc/reference/message-maps-mfc.md) e [la gestione dei messaggi e gli argomenti di Mapping](../../mfc/message-handling-and-mapping.md). Per ulteriori informazioni sugli intervalli della mappa messaggi, vedere [gestori per intervalli della mappa messaggi](../../mfc/handlers-for-message-map-ranges.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)



